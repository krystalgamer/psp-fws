/* cflags: -Os */
#include "common.h"
#include "htmlviewer_ui_decls.h"

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000000);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000098);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000290);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000380);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000424);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000004C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000054C);

s32 func_0000055C(void) {
    return 1;
}

void func_00000564(void) {
    sceIoRename();
}

s32 func_00000580(void) {
    return -1;
}

s32 func_00000588(void) {
    return -1;
}

s32 func_00000590(void) {
    return -1;
}
#endif

#if FW_VERSION >= 280
s32 func_00000598(void) {
    return -1;
}
#endif

#if FW_VERSION == 271
s32 func_00000598_v271(void) {
    return -1;
}
#endif

#if FW_VERSION == 260
s32 func_00000598_v260(void) {
    return -1;
}
#endif

#if FW_VERSION == 250
s32 func_00000598_v250(void) {
    return -1;
}
#endif

#if FW_VERSION >= 250
s32 func_000005A0(void) {
    return -1;
}

s32 func_000005A8(void) {
    return -1;
}

s32 func_000005B0(void) {
    return -1;
}

s32 func_000005B8(void) {
    return -1;
}

s32 func_000005C0(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000005C8);

void func_00000620(void) {
    sceKernelLibcTime();
}
#endif

#if FW_VERSION == 282
void func_0000063C_v282(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION == 280
void func_0000063C_v280(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION == 271
void func_0000063C_v271(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION == 260
void func_0000063C_v260(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION == 250
void func_0000063C_v250(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION == 303
void func_0000063C(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION >= 250
s32 func_00000658(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000660);

s32 func_00000670(void) {
    return -1;
}
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CE7C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CE8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CE9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CEAC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CEBC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CECC);

void func_00000678(void) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_27D353B1((s32) "/PSP/SYSTEM/BROWSER/");
    if (temp_v0 != 0) {
        func_00049A60((s32) "ms0:", temp_v0);
        sceHVSlim_Library_0D525122(temp_v0);
    }
}
#endif

M2C_UNK *func_000006C4(void) {
    return &D_0006190C;
}

#if FW_VERSION >= 250 && FW_VERSION < 303
s32 func_00000684(s32 arg0) {
    return D_0005A718 & arg0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000694);
#endif

#if FW_VERSION == 303
s32 func_000006D0(s32 arg0) {
    return D_00061994 & arg0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000006E0);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000006B8);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000738);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000006DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000708);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000072C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000750);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AEFC);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AF0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AF1C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AF2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AF3C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AF4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AF5C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005B464);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00051398);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000513A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000513AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000513B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000513C0);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000030);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000304);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000360);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000C6C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_00000458(void) {
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    if (M2C_FIELD(temp_v0, s32 *, 0x1C28) != 0) {
        sceHVUI_Module_51684F2F(0, 2);
        return;
    }
    func_00000360();
    func_0000487C();
    M2C_FIELD(temp_v0, s32 *, 0x1C2C) = 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
void func_00000458(void) {
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    if (M2C_FIELD(temp_v0, s32 *, 0x1C1C) != 0) {
        sceHVUI_Module_51684F2F(0, 2);
        return;
    }
    func_00000360();
    func_0000487C();
    temp_v0->unk1C20 = 0;
}
#endif

#if FW_VERSION < 260
void func_00000458(void) {
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    if (M2C_FIELD(temp_v0, s32 *, 0x1C14) != 0) {
        sceHVUI_Module_51684F2F(0, 2);
        return;
    }
    func_00000360();
    func_0000487C();
    M2C_FIELD(temp_v0, s32 *, 0x1C18) = 0;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000004B4);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000704);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000784);
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000848);
#else
void func_00000848(void) {
    M2C_FIELD(func_00003D10(), s32 *, 0x1B1C) = 0;
    M2C_FIELD(func_00003D10(), s32 *, 0x1B20) = 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000086C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", module_start);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
s32 module_stop(void) {
    sceKernelDeleteSema(D_00068CFC);
    D_00068CFC = -1;
    return 0;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000E94);
#endif

#if FW_VERSION < 260
s32 module_stop(void) {
    return 0;
}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000598);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000890);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_00000890(s32 arg0) {
    func_00011618(1, arg0 * 2);
}
#endif

#if FW_VERSION < 280
void func_00000890(s32 arg0) {
    func_00011618((s32) &D_000556A4, arg0 * 2);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001094);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000063C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000067C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_F7038231);

s32 func_00000D74(void) {
    return D_0005568C;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000D80);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005146C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00051484);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CEFC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000016B0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000008B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000BA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000C00);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000C6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000D30);
#endif

#if FW_VERSION < 260 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000E04);
#endif

#if FW_VERSION == 303
void func_00000EDC(void) {
    struct Unk_func_00000EDC_temp_v0 *temp_v0;

    temp_v0 = func_00003D10();
    temp_v0->unk1C38 = -1;
    temp_v0->unk1B28 = 0;
    temp_v0->unk1B24 = 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000F08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", module_start);

s32 module_stop(void) {
    sceKernelDeleteSema(D_0006DA5C);
    D_0006DA5C = -1;
    return 0;
}

void func_00000FBC(s32 arg0) {
    func_0001153C(1, arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000FDC);

void func_00001068(void) {
    func_00011618(1, func_00000FDC() * 2);
}

s32 func_00001094(void) {
    return func_00011618(1, (func_00000FDC() * 2) + 1) + 4;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000010C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001108);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_F7038231);

s32 func_000016F4(void) {
    return D_000619C0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001700);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000017E8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_146CB797);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001940);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001E34);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001F44);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_3ADFED08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_EBE0E82B);

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 sceHVUI_Module_55C70B0A(s32 arg0) {
    s32 var_a2;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_a2 = 0x80110001;
    if (temp_v0->unk1B24 == 2) {
        func_00004060(arg0 == 0, 9);
        M2C_FIELD(temp_v0, s32 *, 0x1BF4) = arg0;
        if (arg0 != 0) {
            func_000267A8(0);
            var_a2 = 0;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x1C34) = 0;
            var_a2 = 0;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 sceHVUI_Module_55C70B0A(s32 arg0) {
    s32 var_a2;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_a2 = 0x80110001;
    if (M2C_FIELD(temp_v0, s32 *, 0x1B20) == 2) {
        func_00004060(arg0 == 0, 9);
        M2C_FIELD(temp_v0, s32 *, 0x1BE8) = arg0;
        if (arg0 != 0) {
            func_000267A8(0);
            var_a2 = 0;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x1C28) = 0;
            var_a2 = 0;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION < 260
s32 sceHVUI_Module_55C70B0A(s32 arg0) {
    s32 var_a2;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_a2 = 0x80110001;
    if (M2C_FIELD(temp_v0, s32 *, 0x1B1C) == 2) {
        func_00004060(arg0 == 0, 9);
        M2C_FIELD(temp_v0, s32 *, 0x1BE4) = arg0;
        if (arg0 != 0) {
            func_000267A8(0);
            var_a2 = 0;
        } else {
            temp_v0->unk1C20 = 0;
            var_a2 = 0;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION == 303
s32 sceHVUI_Module_55C70B0A(s32 arg0) {
    s32 var_a2;
    struct Unk_sceHVUI_Module_55C70B0A_temp_v0 *temp_v0;

    temp_v0 = func_00003D10();
    var_a2 = 0x80110001;
    if (temp_v0->unk1B24 == 2) {
        func_00004060(arg0 == 0, 9);
        temp_v0->unk1BF4 = arg0;
        if (arg0 != 0) {
            func_000267A8(0);
            var_a2 = 0;
        } else {
            temp_v0->unk1C34 = 0;
            var_a2 = 0;
        }
    }
    return var_a2;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_00002298(void) {
    s32 temp_a0;
    s32 temp_v0_3;
    struct Unk_ret_func_00003D10 *temp_v0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0_2;

    temp_v0 = func_00003D10();
    temp_a0 = temp_v0->unk1B3C;
    if (temp_a0 != 0) {
        if ((M2C_FIELD(temp_v0, s32 *, 0x1B34) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x1B98) == 0)) {
            temp_v0_2 = sceHVSlim_Library_896E55F6(temp_a0);
            if (temp_v0_2 != NULL) {
                temp_v0_3 = temp_v0_2->unk154;
                if (temp_v0_3 != 0) {
                    func_0002649C(temp_v0_3, 0);
                }
                sceHVSlim_Library_B29BE9CE(temp_v0->unk1B3C);
            }
        }
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
void func_00002298(void) {
    s32 temp_a0;
    s32 temp_v0_3;
    struct Unk_ret_func_00003D10 *temp_v0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0_2;

    temp_v0 = func_00003D10();
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x1B38);
    if (temp_a0 != 0) {
        if ((M2C_FIELD(temp_v0, s32 *, 0x1B30) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x1B8C) == 0)) {
            temp_v0_2 = sceHVSlim_Library_896E55F6(temp_a0);
            if (temp_v0_2 != NULL) {
                temp_v0_3 = temp_v0_2->unk154;
                if (temp_v0_3 != 0) {
                    func_0002649C(temp_v0_3, 0);
                }
                sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0x1B38));
            }
        }
    }
}
#endif

#if FW_VERSION == 250
void func_00002298(void) {
    s32 temp_a0;
    s32 temp_v0_3;
    struct Unk_ret_func_00003D10 *temp_v0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0_2;

    temp_v0 = func_00003D10();
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x1B34);
    if (temp_a0 != 0) {
        if ((M2C_FIELD(temp_v0, s32 *, 0x1B2C) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x1B88) == 0)) {
            temp_v0_2 = sceHVSlim_Library_896E55F6(temp_a0);
            if (temp_v0_2 != NULL) {
                temp_v0_3 = temp_v0_2->unk154;
                if (temp_v0_3 != 0) {
                    func_0002649C(temp_v0_3, 0);
                }
                sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0x1B34));
            }
        }
    }
}
#endif

#if FW_VERSION == 201
void func_00002298(void) {
    s32 temp_a0;
    s32 temp_v0_3;
    struct Unk_ret_func_00003D10 *temp_v0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0_2;

    temp_v0 = func_00003D10();
    temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x1B34);
    if (temp_a0 != 0) {
        if ((M2C_FIELD(temp_v0, s32 *, 0x1B2C) == 0) && (M2C_FIELD(temp_v0, s32 *, 0x1B88) == 0)) {
            temp_v0_2 = sceHVSlim_Library_896E55F6(temp_a0);
            if (temp_v0_2 != NULL) {
                temp_v0_3 = M2C_FIELD(temp_v0_2, s32 *, 0x150);
                if (temp_v0_3 != 0) {
                    func_0002649C(temp_v0_3, 0);
                }
                sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0x1B34));
            }
        }
    }
}
#endif

#if FW_VERSION == 303
void func_00002298(void) {
    s32 temp_a0;
    s32 temp_v0_3;
    struct Unk_func_00002298_temp_v0 *temp_v0;
    struct Unk_func_00002298_temp_v0_2 *temp_v0_2;

    temp_v0 = func_00003D10();
    temp_a0 = temp_v0->unk1B3C;
    if (temp_a0 != 0) {
        if ((temp_v0->unk1B34 == 0) && (temp_v0->unk1B98 == 0)) {
            temp_v0_2 = sceHVSlim_Library_896E55F6(temp_a0);
            if (temp_v0_2 != NULL) {
                temp_v0_3 = temp_v0_2->unk154;
                if (temp_v0_3 != 0) {
                    func_0002649C(temp_v0_3, 0);
                }
                sceHVSlim_Library_B29BE9CE(temp_v0->unk1B3C);
            }
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_789FBBA8);

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 sceHVUI_Module_260E54A0(void) {
    s32 var_a0;

    var_a0 = 0x80110001;
    if (func_00003D10()->unk1B24 == 2) {
        func_000044E4();
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 sceHVUI_Module_260E54A0(void) {
    s32 var_a0;

    var_a0 = 0x80110001;
    if (M2C_FIELD(func_00003D10(), s32 *, 0x1B20) == 2) {
        func_000044E4();
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION < 260
s32 sceHVUI_Module_260E54A0(void) {
    s32 var_a0;

    var_a0 = 0x80110001;
    if (M2C_FIELD(func_00003D10(), s32 *, 0x1B1C) == 2) {
        func_000044E4();
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION == 303
s32 sceHVUI_Module_260E54A0(void) {
    s32 var_a0;

    var_a0 = 0x80110001;
    if (func_00003D10()->unk1B24 == 2) {
        func_00005B04();
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 280
s32 sceHVUI_Module_E19596A8(void) {
    return func_00003D10()->unk1B24;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 sceHVUI_Module_E19596A8(void) {
    return M2C_FIELD(func_00003D10(), s32 *, 0x1B20);
}
#endif

#if FW_VERSION < 260
s32 sceHVUI_Module_E19596A8(void) {
    return M2C_FIELD(func_00003D10(), s32 *, 0x1B1C);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_51684F2F);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_3A687520);

#if FW_VERSION >= 260 && FW_VERSION < 303
void func_0000267C(void) {
    sceHVSlim_Library_D611E938(&D_0005D00C, 0, 0x10);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000026A4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000026E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002724);
#endif

#if FW_VERSION == 303
void func_00002958(void) {
    sceHVSlim_Library_D611E938(&D_00061A08, 0, 0x10);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002980);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000029C0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002A00);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002A70);

s32 sceHVUI_Module_B198BF1D(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_A4C50591);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_4A7180C1);

#if FW_VERSION >= 250
s32 sceHVUI_Module_3D368B11(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_D3206B42();
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -1;
}
#endif

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_F77A9C17);
#endif

#if FW_VERSION == 250
void sceHVUI_Module_F77A9C17(s32 arg0, s32 arg1, s32 arg2) {
    func_00028010(arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_2797B2D1);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002DCC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002ECC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002FAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002FCC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002FE8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005B5B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000302C);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00001E14);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000027B0);
#endif

#if FW_VERSION == 303
void sceHVUI_Module_9F97083C(void) {
    func_0003BA18();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", sceHVUI_Module_2797B2D1);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003084);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003184);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003264);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003284);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000032A0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D038);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000032E4);
#endif

void *func_00003480(struct Unk_func_00003480_0 *arg0, s32 *arg1) {
    *arg1 = (arg0->unk3 << 0x18) | (arg0->unk2 << 0x10) | (arg0->unk1 << 8) | arg0->unk0;
    return (u8 *)arg0 + 4;
}

void *func_000034B8(u8 *arg0) {
    u8 *var_a0;

    var_a0 = arg0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
        } while (*var_a0 != 0);
    }
    return var_a0 + 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000034DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000359C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000365C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000371C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003890);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003994);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003A9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003AC4);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", module_reboot_before);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 module_reboot_before(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    struct Unk_ret_func_00003D10 *temp_s0;

    temp_s0 = func_00003D10();
    sceKernelWaitSema(D_00068CFC, 1, NULL);
    if (M2C_FIELD(temp_s0, s32 *, 0x1C38) >= 0) {
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x1C3C);
        if (temp_a0 >= 0) {
            sceKernelSetEventFlag(temp_a0, 0x10U);
            do {
                func_000409CC(0x3E8U);
            } while (M2C_FIELD(temp_s0, s32 *, 0x1C3C) >= 0);
        }
        sceKernelDeleteThread(M2C_FIELD(temp_s0, s32 *, 0x1C38));
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x1C40);
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_2);
    }
    sceHVNetfront_Module_F6316E3A();
    return 0;
}
#endif

#if FW_VERSION == 271
s32 module_reboot_before(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    struct Unk_ret_func_00003D10 *temp_s0;

    temp_s0 = func_00003D10();
    sceKernelWaitSema(D_00068CFC, 1, NULL);
    if (M2C_FIELD(temp_s0, s32 *, 0x1C2C) >= 0) {
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x1C30);
        if (temp_a0 >= 0) {
            sceKernelSetEventFlag(temp_a0, 0x10U);
            do {
                func_000409CC(0x3E8U);
            } while (M2C_FIELD(temp_s0, s32 *, 0x1C30) >= 0);
        }
        sceKernelDeleteThread(M2C_FIELD(temp_s0, s32 *, 0x1C2C));
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x1C34);
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_2);
    }
    sceHVNetfront_Module_F6316E3A();
    return 0;
}
#endif

#if FW_VERSION == 260
s32 module_reboot_before(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    struct Unk_ret_func_00003D10 *temp_s0;

    temp_s0 = func_00003D10();
    sceKernelWaitSema(D_00068CFC, 1, NULL);
    if (M2C_FIELD(temp_s0, s32 *, 0x1C2C) >= 0) {
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x1C30);
        if (temp_a0 >= 0) {
            sceKernelSetEventFlag(temp_a0, 0x10U);
            do {
                func_000409CC(0x3E8U);
            } while (M2C_FIELD(temp_s0, s32 *, 0x1C30) >= 0);
        }
        sceKernelDeleteThread(M2C_FIELD(temp_s0, s32 *, 0x1C2C));
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x1C34);
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_2);
    }
    sceHVNetfront_Module_16459EDF();
    return 0;
}
#endif

#if FW_VERSION == 250
s32 module_reboot_before(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    struct Unk_ret_func_00003D10 *temp_s0;

    temp_s0 = func_00003D10();
    sceKernelWaitSema(D_0005A664, 1, NULL);
    if (M2C_FIELD(temp_s0, s32 *, 0x1C24) >= 0) {
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x1C28);
        if (temp_a0 >= 0) {
            sceKernelSetEventFlag(temp_a0, 0x10U);
            do {
                func_000409CC(0x3E8U);
            } while (M2C_FIELD(temp_s0, s32 *, 0x1C28) >= 0);
        }
        sceKernelDeleteThread(M2C_FIELD(temp_s0, s32 *, 0x1C24));
    }
    temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x1C2C);
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_2);
    }
    return 0;
}
#endif

#if FW_VERSION == 303
s32 module_reboot_before(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    struct Unk_module_reboot_before_temp_s0 *temp_s0;

    temp_s0 = func_00003D10();
    sceKernelWaitSema(D_0006DA5C, 1, NULL);
    if (temp_s0->unk1C38 >= 0) {
        temp_a0 = temp_s0->unk1C3C;
        if (temp_a0 >= 0) {
            sceKernelSetEventFlag(temp_a0, 0x10U);
            do {
                func_00049CA8(0x3E8);
            } while (temp_s0->unk1C3C >= 0);
        }
        sceKernelDeleteThread(temp_s0->unk1C38);
    }
    temp_a0_2 = temp_s0->unk1C40;
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_2);
    }
    sceHVNetfront_Module_F6316E3A();
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002658);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003B80);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003CC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003D10);

s32 func_00003D1C(void) {
    return D_00063618;
}

s32 func_00003D28(void) {
    return D_0006361C;
}

s32 func_00003D34(void) {
    return D_00063624;
}

s32 func_00003D40(void) {
    return D_00063620;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003D4C);

void func_00003D80(s32 arg0) {
    D_0006362C = arg0;
}

s32 func_00003D8C(void) {
    return D_0006362C;
}

void func_00003D98(s32 arg0) {
    D_00063630 = arg0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003DA4);

s32 func_00003E24(s32 arg0, s32 *arg1, s32 *arg2) {
    struct Unk_func_00003E24_sp0 *sp0;
    s32 temp_v0;

    temp_v0 = func_00006188((s32) &D_00061A2C, arg0, 0, &sp0);
    if (temp_v0 == 0) {
        if (arg1 != NULL) {
            *arg1 = (s32) sp0->unk14;
        }
        if (arg2 != NULL) {
            *arg2 = (s32) sp0->unk16;
        }
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003E98);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003FEC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004060);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004160);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000041C0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000041E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004230);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000427C);

s32 func_000042A4(void) {
    return D_00063554 == 0;
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003FEC_v282);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003FEC_v280);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003C7C);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00003C54);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00002D78);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000042B4);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000043E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004408);

s32 func_00004430(void) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceNetApctlGetState();
    }
    return var_v1;
}

s32 func_00004464(void) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceNetApctlDisconnect();
    }
    return var_v1;
}

s32 func_00004498(void) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceNetApctlGetInfo();
    }
    return var_v1;
}

s32 func_000044CC(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpCreateTemplate(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00004500(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpDeleteTemplate(arg0);
    }
    return var_v1;
}

s32 func_00004534(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpCreateConnectionWithURL(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004568);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000459C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000045D0);

s32 func_00004604(s32 arg0, void *arg1, u32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpSendRequest(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00004638(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpAbortRequest(arg0);
    }
    return var_v1;
}

s32 func_0000466C(s32 arg0, void *arg1, u32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpReadData(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_000046A0(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpGetContentLength(arg0, arg1);
    }
    return var_v1;
}

s32 func_000046D4(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpGetStatusCode(arg0, arg1);
    }
    return var_v1;
}

s32 func_00004708(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpEnableRedirect(arg0);
    }
    return var_v1;
}

s32 func_0000473C(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpDisableAuth(arg0);
    }
    return var_v1;
}

s32 func_00004770(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpDisableCookie(arg0);
    }
    return var_v1;
}

s32 func_000047A4(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (D_00063610 != 0) {
        var_v1 = sceHttpGetNetworkErrno(arg0, arg1);
    }
    return var_v1;
}

#if FW_VERSION >= 260 && FW_VERSION < 303
void func_00004178(void) {
    sceHVSlim_Library_E459881C();
}

void func_00004194(void) {
    sceHVSlim_Library_08549708();
}

void func_000041B0(void) {
    sceHVSlim_Library_0D525122();
}
#endif

#if FW_VERSION == 303
void func_000047D8(void) {
    sceHVSlim_Library_E459881C();
}

void func_000047F4(void) {
    sceHVSlim_Library_08549708();
}

void func_00004810(void) {
    sceHVSlim_Library_0D525122();
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000482C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000487C);
#else
void func_0000487C(void) {
    func_0000FFDC((u8 *)func_00003D10() + 0x1A74);
}
#endif

void func_000048A4(s32 arg0) {
    D_000638D0 = arg0;
}

void func_000048B0(void) {
    D_000638C0 = 0;
    sceHVSlim_Library_D611E938(&D_000638C4, 0, 0x10);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000048E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000049B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004A14);

void func_00004A54(void) {
    D_0006DA64 = 0x64;
    D_0006DA68 = sceHVSlim_Library_00A9596D();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004A80);

s32 func_00004B3C(void) {
    return D_00061A28 != 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004B4C);

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_000048EC(void) {
    if (D_00061A28 != 0) {
        func_000461EC(D_00061A28);
    }
}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000360C);
#endif

#if FW_VERSION == 303
void func_00004BB4(void) {
    if (D_00061A28 != 0) {
        func_000475E4(D_00061A28);
    }
}
#endif

void func_00004BE0(void) {
    if (D_00061A28 != 0) {
        func_000479E8(D_00061A28);
        D_00061A28 = 0;
    }
}

void func_00004C18(void) {
    if (D_00061A28 != 0) {
        func_00046E24(D_00061A28);
        func_00047898(D_00061A28);
    }
}

void func_00004C54(s32 arg0) {
    if (D_00061A28 != 0) {
        func_00046E74(D_00061A28, arg0);
    }
}

s32 func_00004C84(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_00061A28 != 0) {
        var_v1 = func_00047168(D_00061A28);
    }
    return var_v1;
}

s32 func_00004CBC(s32 *arg0) {
    s32 var_a2;

    var_a2 = 0;
    if (D_00061A28 == 0) {
        *arg0 = 0;
    } else {
        var_a2 = func_00047068(D_00061A28, (s32) arg0);
    }
    return var_a2;
}

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_00004700(s32 arg0) {
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    if (M2C_FIELD(temp_v0, s32 *, 0x1C70) != arg0) {
        M2C_FIELD(temp_v0, s32 *, 0x1C70) = arg0;
    }
}
#endif

#if FW_VERSION == 271
void func_00004700(s32 arg0) {
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    if (M2C_FIELD(temp_v0, s32 *, 0x1C64) != arg0) {
        M2C_FIELD(temp_v0, s32 *, 0x1C64) = arg0;
    }
}
#endif

#if FW_VERSION == 303
void func_00004D04(s32 arg0) {
    struct Unk_func_00004D04_temp_v0 *temp_v0;

    temp_v0 = func_00003D10();
    if (temp_v0->unk1C70 != arg0) {
        temp_v0->unk1C70 = arg0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004D38);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004DA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004F44);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D134);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004FF8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005300);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000054FC);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000564C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0000564C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (M2C_FIELD(temp_v1, u16 *, 2) != 0) {
        if ((M2C_FIELD(temp_v1, u16 *, 6) != 0) && (M2C_FIELD(temp_v1, u16 *, 4) != 0) && (sceKernelGetThreadId() == D_0006B790)) {
            if ((u16) M2C_FIELD(arg0, u16 *, 4) >= 0x81U) {
                temp_v0 = func_00050488(0x140);
                if (temp_v0 != 0) {
                    func_00004FF8((s32) arg0, temp_v0);
                }
            } else {
                temp_v0_2 = func_00050488(0x28);
                if (temp_v0_2 != 0) {
                    func_00005300((s32) arg0, temp_v0_2);
                }
            }
        }
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0000564C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (M2C_FIELD(temp_v1, u16 *, 2) != 0) {
        if ((M2C_FIELD(temp_v1, u16 *, 6) != 0) && (M2C_FIELD(temp_v1, u16 *, 4) != 0) && (D_00066428 != 0)) {
            if ((u16) M2C_FIELD(arg0, u16 *, 4) >= 0x81U) {
                temp_v0 = func_00050488(0x140);
                if (temp_v0 != 0) {
                    func_00004FF8((s32) arg0, temp_v0);
                }
            } else {
                temp_v0_2 = func_00050488(0x28);
                if (temp_v0_2 != 0) {
                    func_00005300((s32) arg0, temp_v0_2);
                }
            }
        }
    }
}
#endif

#if FW_VERSION == 201
void func_0000564C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x14);
    if (M2C_FIELD(temp_v1, u16 *, 2) != 0) {
        if ((M2C_FIELD(temp_v1, u16 *, 6) != 0) && (M2C_FIELD(temp_v1, u16 *, 4) != 0)) {
            if ((u16) M2C_FIELD(arg0, u16 *, 4) >= 0x81U) {
                temp_v0 = func_00046228(0x140);
                if (temp_v0 != 0) {
                    func_00004FF8((s32) arg0, temp_v0);
                }
            } else {
                temp_v0_2 = func_00046228(0x28);
                if (temp_v0_2 != 0) {
                    func_00005300((s32) arg0, temp_v0_2);
                }
            }
        }
    }
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000056F8);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_000056F8(s32 arg0) {
    s32 temp_v0;

    if (sceKernelGetThreadId() == D_0006B790) {
        temp_v0 = func_00050488(0x18);
        if (temp_v0 != 0) {
            func_000054FC(arg0, temp_v0);
        }
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_000056F8(s32 arg0) {
    s32 temp_v0;

    if (D_00066428 != 0) {
        temp_v0 = func_00050488(0x18);
        if (temp_v0 != 0) {
            func_000054FC(arg0, temp_v0);
        }
    }
}
#endif

#if FW_VERSION == 201
void func_000056F8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00046228(0x18);
    if (temp_v0 != 0) {
        func_000054FC(arg0, temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005748);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005A80);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00005A80(void) {
    if (sceKernelGetThreadId() == D_0006B790) {
        func_000505F0(2, D_00061710, D_0006170C);
        func_00005748();
    }
}
#endif

#if FW_VERSION == 303
void func_00005A80(void) {
    if (sceKernelGetThreadId() == D_0006DA6C) {
        func_0004C720(2, D_000638DC, D_000638D8);
        func_00005748();
    }
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00005AC8(void) {
    if (sceKernelGetThreadId() == D_0006B790) {
        func_00045A50();
        func_00050920();
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00005AC8(void) {
    if (D_00066428 != 0) {
        func_00045A50();
        func_00050920();
        D_0005C3D0 = D_0005C3D0 == 0;
    }
}
#endif

#if FW_VERSION == 201
void func_00005AC8(void) {
    func_00045A50();
    func_0004CA50();
    D_00057300 = D_00057300 == 0;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000044E4);
#else
void func_00005AC8(void) {
    if (sceKernelGetThreadId() == D_0006DA6C) {
        func_00053AE8();
        func_0004CA50();
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005B04);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005C0C);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005C78);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00005C78(void) {
    if (D_00061708 != 0) {
        sceHVSlim_Library_A2F4AC9E(D_00061708);
    }
    D_00061714 = 0;
    D_00061710 = 0;
    D_00061708 = 0;
    D_00061718 = 0;
    if (D_0006B790 != 0) {
        D_0006B790 = 0;
        func_000505CC();
    }
}
#endif

#if FW_VERSION == 303
void func_00005C78(void) {
    if (D_000638D4 != 0) {
        sceHVSlim_Library_A2F4AC9E(D_000638D4);
    }
    D_000638E0 = 0;
    D_000638DC = 0;
    D_000638D4 = 0;
    D_000638E4 = 0;
    if (D_0006DA6C != 0) {
        D_0006DA6C = 0;
        func_0004C6FC();
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005CDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005DC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005E2C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005EB0);

#if FW_VERSION == 282
void func_00005C0C_v282(s32 arg0, s32 arg1) {
    func_000084BC(arg0, arg1);
}
#endif

#if FW_VERSION == 280
void func_00005C0C_v280(s32 arg0, s32 arg1) {
    func_000084BC(arg0, arg1);
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005C28);
#endif

#if FW_VERSION == 303
void func_00005EE4(void) {
    func_00008794();
}

void func_00005F00(void) {
    func_000087D0();
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005F1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000060B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006120);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006188);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000621C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006250);

s32 func_000062A4(void) {
    struct Unk_func_000062A4_temp_v0 *temp_v0;

    temp_v0 = func_00005EB0();
    if (temp_v0 != NULL) {
        temp_v0->unk1A = 1;
        temp_v0->unk1C = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000062D8);

void func_000062F4(void) {
    sceHVSlim_Library_5CA39435();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006310);

void func_0000632C(void) {
    sceHVSlim_Library_A2F4AC9E();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006348);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00005D18);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00004CF4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000063B8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000064E4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000066C0);
#else
void func_000066C0(struct Unk_func_000066C0_0 *arg0) {
    struct Unk_func_000066C0_temp_s0 *temp_s0;

    temp_s0 = &arg0->unk4;
    sceFontDoneLib(arg0->unk4);
    func_00011DC0(temp_s0->unk14D0);
    func_0001275C(temp_s0->unk14D4);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000066FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000067E0);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000050C0);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000683C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000069A4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006AC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006C80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006D60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006DF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006FA8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000071FC);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006F2C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007434);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00006890);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007654);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000770C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007890);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007940);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007ADC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007C48);

void func_00007F3C(s32 arg0, s32 *arg1) {
    struct Unk_func_00007F3C_sp0 *sp0;
    if (func_00006188(arg0, *arg1, 0, &sp0) == 0) {
        sceHVSlim_Library_D611E938(sp0->unk8, 0, ((u16) sp0->unk6 >> 1) * sp0->unk4);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007F88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000825C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D168);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D194);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D1A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000082AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008324);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000083B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000083D8);

s32 func_00008528(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_457A4136(arg0, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008560);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00007CAC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000085E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008688);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000871C);

void func_0000873C(void) {
    func_00008560((s32) &D_00063D00);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000875C);

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000084BC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008794);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000087D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000087F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000088F4);

void func_00008B04(s32 arg0, M2C_UNK arg1) {
    sceHVSlim_Library_700625E1(arg0, arg1, sceHVSlim_Library_15875ED4(arg1));
}

s32 func_00008B48(struct Unk_func_00008B48_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008B50);

void func_00008B78(s32 arg0) {
    func_00008B50(0, arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008B98);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008BB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008BD4);

s32 func_00008BF0(struct Unk_func_00008BF0_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008BF8);

void func_00008C20(s32 arg0) {
    func_00008BF8(0, arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008C40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008C60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008C7C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008C98);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008D88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008DC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008DE4);

void func_00008E58(void) {
    func_00008DE4();
}

void func_00008E74(struct Unk_func_00008E74_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_00008E80(struct Unk_func_00008E80_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unkC = arg1;
    arg0->unk10 = arg2;
}

s32 func_00008E8C(struct Unk_func_00008E8C_0 *arg0) {
    return arg0->unk14->unk80;
}

s32 func_00008E98(struct Unk_func_00008E98_0 *arg0) {
    return arg0->unk4;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008EA0);

void func_00008EC8(s32 arg0) {
    func_00008EA0(0, arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008EE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008F4C);

void func_00008F54(void) {
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00008F5C);

void func_00009064(struct Unk_func_00009064_0 *arg0) {
    sceHVSlim_Library_14411643((u8 *)arg0 + 0x98);
    if (arg0->unk4C2 != 0) {
        func_000087F4((s32) ((u8 *)arg0 + 0x8E8), (s32) &func_00008DC0, (s32) arg0);
    }
    sceHVSlim_Library_B8C28371((u8 *)arg0 + 0x8E8);
    sceHVSlim_Library_14411643((u8 *)arg0 + 0x4C0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000090BC);

void func_00009120(struct Unk_func_00009120_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        sceHVSlim_Library_0D525122(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009148);

s32 func_0000916C(void) {
    s32 temp_v0;
    s32 var_v0;
    struct Unk_func_0000916C_temp_v0_2 *temp_v0_2;

    temp_v0 = sceHVSlim_Library_D39BDE45(0x30);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0);
        temp_v0_2->unk24 = 2;
        func_00009148(temp_v0_2);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}

void func_000091C4(s32 arg0) {
    func_00009120(sceHVSlim_Library_896E55F6(arg0));
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009200);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D1D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D1F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D2F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009238);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000093B8);

s32 func_000093F8(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        var_v1 = (arg0 / func_000093B8(arg0, arg1)) * arg1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000945C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000094E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009530);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000096A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000096C4);

void func_000096F4(struct Unk_func_000096F4_0 *arg0, s32 arg1) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK, s32);
    M2C_UNK (*temp_v0_2)(s32, M2C_UNK, s32);

    func_00008DE4();
    temp_v0 = arg0->unkC;
    if (temp_v0 != NULL) {
        temp_v0(arg0->unk14, 1, arg0->unk10);
    }
    func_00008C98(arg0);
    temp_v0_2 = arg0->unkC;
    arg0->unk14 = arg1;
    if (temp_v0_2 != NULL) {
        temp_v0_2(arg1, 0, arg0->unk10);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009760);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D400);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009790);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000099D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000099EC);

void func_00009A10(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    struct Unk_func_00009A10_temp_v0 *temp_v0;

    sceHVSlim_Library_32E4FDC6(arg0 + 0x34);
    temp_v0 = sceHVSlim_Library_896E55F6(arg1);
    temp_v0->unk0 = 0;
    if (temp_v0->unkC->unk8 == 1) {
        func_000087F4((s32) ((u8 *)temp_v0 + 0x38), (s32) &func_000099EC, arg0);
    }
    temp_v0_2 = temp_v0->unk4;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_0D525122(temp_v0_2);
    }
    temp_v0_3 = temp_v0->unk8;
    temp_v0->unk4 = 0;
    if (temp_v0_3 != 0) {
        sceHVSlim_Library_6DC3FDE4(arg0 + 0x18, temp_v0_3);
        temp_v0->unk8 = 0;
    }
    temp_v0_4 = temp_v0->unk10;
    if (temp_v0_4 != 0) {
        func_0000BDB4(arg0, temp_v0_4);
        temp_v0->unk10 = 0;
    }
    sceHVSlim_Library_B29BE9CE(arg1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009ADC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009BD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009C14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009CFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009D1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009D60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009DF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009E14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009E44);

void func_00009E5C(struct Unk_func_00009E5C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        sceHVSlim_Library_0D525122(temp_v0);
    }
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009E94);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00009F80);

void func_00009FA4(s32 arg0) {
    void *temp_s1;
    void *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_00009E5C(temp_v0);
    temp_s1 = temp_v0 + 0x38;
    func_000087F4((s32) temp_s1, (s32) &func_00009F80, arg0);
    sceHVSlim_Library_B8C28371(temp_s1);
    sceHVSlim_Library_B8C28371(temp_v0 + 0x74);
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

void func_0000A020(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_func_0000A020_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_00009E5C(temp_v0);
    temp_v0_2 = temp_v0->unk54;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_0D525122(temp_v0_2);
    }
    func_0000EC10(temp_v0->unk58);
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A084);

void func_0000A0D4(s32 arg0) {
    func_00009E5C(sceHVSlim_Library_896E55F6(arg0));
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A110);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A17C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A228);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A44C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A4F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A57C);

void func_0000A5F8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    func_0000A57C(arg0, (u8 *)sceHVSlim_Library_896E55F6(arg1) + 0x18, arg2);
    sceHVSlim_Library_B29BE9CE(arg1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A654);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A724);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A834);

s32 func_0000A8C4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_s0;

    temp_s0 = func_0000A724(arg0, (u8 *)sceHVSlim_Library_896E55F6(arg1) + 0x18, arg2, -1);
    sceHVSlim_Library_B29BE9CE(arg1);
    return temp_s0;
}

s32 func_0000A92C(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_s0;

    temp_s0 = func_0000A834(arg0, (u8 *)sceHVSlim_Library_896E55F6(arg1) + 0x18, arg2);
    sceHVSlim_Library_B29BE9CE(arg1);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000A990);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000AB08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000AD94);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000AE28);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000AE44);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000AE70);

s32 func_0000AF10(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    struct Unk_func_0000AF10_temp_s1 *temp_s1;
    void *temp_v0_2;

    temp_v0 = sceHVSlim_Library_D39BDE45(0x4C);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s1 = sceHVSlim_Library_896E55F6(arg1);
        temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0);
        temp_s0 = temp_v0_2 + 0x18;
        func_00009E44(temp_v0_2, temp_s1->unkC);
        sceHVSlim_Library_1A02495A(temp_s0, (u8 *)temp_s1 + 0x18, 0x34);
        func_0000A57C(arg0, temp_s0, temp_s1->unkC->unk34);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg1);
        var_v0 = temp_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000AFC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B0E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B1D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B330);

s32 func_0000B384(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_v0;
    struct Unk_func_0000B384_temp_s0 *temp_s0;
    struct Unk_func_0000B384_temp_v0_2 *temp_v0_2;

    temp_v0 = func_0000916C();
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVSlim_Library_896E55F6(temp_v0);
        temp_v0_2 = sceHVSlim_Library_896E55F6(arg0);
        sceHVSlim_Library_1A02495A((s32) temp_s0, temp_v0_2, 0x30);
        temp_v0_3 = sceHVSlim_Library_8C9ECF26(temp_v0_2->unk4);
        temp_s0->unk4 = temp_v0_3;
        temp_s0->unk0 = 0;
        if (temp_v0_3 == 0) {
            sceHVSlim_Library_B29BE9CE(temp_v0);
            sceHVSlim_Library_B29BE9CE(arg0);
            func_000091C4(temp_v0);
            return 0;
        }
        sceHVSlim_Library_B29BE9CE(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = temp_v0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B444);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B4DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B518);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B684);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B7B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000B928);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BA58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BAAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BAD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BB08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BB40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BBAC);

void func_0000BBCC(s32 arg0) {
    func_000087F4(arg0 + 0x18, (s32) &func_0000BBAC, arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BBF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BCC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BD78);

s32 func_0000BDB4(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        sceHVSlim_Library_6DC3FDE4(arg0 + 0x45C, sceHVSlim_Library_896E55F6(arg1)->unk8);
        sceHVSlim_Library_B29BE9CE(arg1);
        func_000091C4(arg1);
        var_v0 = 1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000BE14);

void func_0000C0F4(s32 arg0, s32 arg1, s32 arg2) {
    func_0000BE14(arg0, arg1, 0, arg2);
}

void func_0000C114(s32 arg0, s32 arg1, s32 arg2) {
    func_0000BE14(arg0, 0, arg1, arg2);
}

s16 func_0000C138(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    return (s16) ((s32) ((arg1 * arg2) + (arg0 * (arg3 - arg2))) / arg3);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C178);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C1D0);

void func_0000C22C(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    s16 temp_t0;
    s32 temp_t0_2;
    u32 temp_t1;
    u32 temp_v1;

    temp_t1 = arg3 & 0xFF;
    temp_v1 = (arg2 * 2) & 0xFE;
    temp_t0 = arg0 + arg1;
    temp_t0_2 = (s32) (temp_t0 + ((u32) temp_t0 >> 0x1F)) >> 1;
    if (temp_v1 < temp_t1) {
        func_0000C178(arg0, temp_t0_2, temp_v1, temp_t1);
        return;
    }
    func_0000C1D0(temp_t0_2, arg1, (temp_v1 - temp_t1) & 0xFF, temp_t1);
}

void func_0000C2A0(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    s16 temp_t0;
    s32 temp_t0_2;
    u32 temp_t1;
    u32 temp_v1;

    temp_t1 = arg3 & 0xFF;
    temp_v1 = (arg2 * 2) & 0xFE;
    temp_t0 = arg0 + arg1;
    temp_t0_2 = (s32) (temp_t0 + ((u32) temp_t0 >> 0x1F)) >> 1;
    if (temp_v1 < temp_t1) {
        func_0000C1D0((s32) arg0, (s16) temp_t0_2, (s32) temp_v1, temp_t1);
        return;
    }
    func_0000C178((s16) temp_t0_2, (s32) arg1, (temp_v1 - temp_t1) & 0xFF, temp_t1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C314);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C4D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C4E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C53C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C598);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C5F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C650);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C6AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C6DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C770);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000C804);

void func_0000CC64(void) {
    func_0000C804();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000CC80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000CE20);

s32 func_0000CE4C(void **arg0, s32 arg1) {
    s32 var_a2;
    struct Unk_func_0000CE4C_temp_a0 *temp_a0;

    var_a2 = 0;
    temp_a0 = *arg0;
    if (temp_a0->unkC->unk8 == 3) {
        func_0000CE20((s32) ((u8 *)temp_a0 + 0x18), arg1);
        var_a2 = 1;
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000CE8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D01C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D130);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D16C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D1C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D208);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D26C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D3A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D478);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D4AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D540);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D718);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D8B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D8F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D944);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000D970);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000DBD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000DD8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000DF48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E104);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E194);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E1B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E1F8);

s32 func_0000E2BC(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E2C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E32C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E394);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E3FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E46C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E490);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E4C0);

void func_0000E518(void) {
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E520);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E710);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000EA0C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000EC10);

s32 func_0000ECB4(void) {
    return 0;
}

void func_0000ECBC(void) {
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000ECC4);

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0000ED68(void) {
    if (sceKernelGetThreadId() == D_0006B790) {
        func_00053C10(0, 0, 0x1E0, 0x110);
        func_00050FFC(2);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0000ED68(void) {
    if (D_00066428 != 0) {
        func_00053C10(0, 0, 0x1E0, 0x110);
        func_00050FFC(2);
    }
}
#endif

#if FW_VERSION == 201
void func_0000ED68(void) {
    func_0004FD40(0, 0, 0x1E0, 0x110);
    func_0004D12C(2);
}
#endif

#if FW_VERSION == 303
void func_0000ED68(void) {
    if (sceKernelGetThreadId() == D_0006DA6C) {
        func_0004FD40(0, 0, 0x1E0, 0x110);
        func_0004D12C(2);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000EDB0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000EDF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000EF34);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F258);

s32 func_0000F6C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_24B1FCE6(sceHVSlim_Library_15875ED4(arg0) + 1);
    if (temp_v0 != 0) {
        sceHVSlim_Library_BB5E8F0E(temp_v0, arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F714);

s32 func_0000F7F8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_v0 = sceHVSlim_Library_24B1FCE6(0x904);
    var_v0 = 0;
    if (temp_v0 != 0) {
        func_00008F5C(temp_v0);
        temp_v0_2 = func_0000F6C0(arg0);
        M2C_FIELD(temp_v0, s32 *, 0x80) = temp_v0_2;
        if (temp_v0_2 == 0) {
            func_0000F714(temp_v0);
            return 0;
        }
        M2C_FIELD(temp_v0, s32 *, 0x8C) = 0;
        var_v0 = temp_v0;
        M2C_FIELD(temp_v0, s32 *, 0x84) = 0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F870);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F8DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F948);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F9B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FA4C);

void func_0000FA7C(struct Unk_func_0000FA7C_0 *arg0) {
    s32 var_s3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s2;
    void *temp_v0;
    void *var_s0;

    if (arg0->unk8 == 1) {
        var_s3 = 0;
        if (arg0->unk2E > 0) {
            var_s0 = arg0;
            do {
                temp_v0 = M2C_FIELD(var_s0, void **, 0x30);
                temp_s2 = var_s0 + 0x30;
                var_s3 += 1;
                temp_a0 = temp_v0;
                var_s0 += 0xC;
                if (temp_v0 != NULL) {
                    sceHVSlim_Library_A2F4AC9E(temp_a0);
                    sceHVSlim_Library_D611E938(temp_s2, 0, 0xC);
                }
            } while (var_s3 < arg0->unk2E);
        }
    }
    temp_a0_2 = arg0->unk4;
    if (temp_a0_2 != NULL) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_2);
    }
    sceHVSlim_Library_A2F4AC9E(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FB2C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FC3C);

void func_0000FCB4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00009200();
    if (temp_v0 != 0) {
        func_0000FC3C(arg0, temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FCEC);

void func_0000FDE0(struct Unk_func_0000FDE0_0 *arg0, s32 arg1) {
    s32 *temp_v1_2;
    s32 temp_t0;
    s32 temp_v1;
    s32 var_a3;

    temp_t0 = arg0->unk8C;
    var_a3 = 0;
    if (temp_t0 > 0) {
        do {
            temp_v1 = var_a3 * 4;
            var_a3 += 1;
            temp_v1_2 = temp_v1 + arg0->unk90;
            if (*temp_v1_2 == arg1) {
                *temp_v1_2 = 0;
            }
        } while (var_a3 < temp_t0);
    }
}

s32 func_0000FE1C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((u32) (arg0 - 1) < 0x20U) {
        var_v1 = sceHVSlim_Library_24B1FCE6((arg0 * 0x14) + 0xC);
    }
    return var_v1;
}

void func_0000FE64(struct Unk_func_0000FE64_0 *arg0) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != NULL) {
        sceHVSlim_Library_A2F4AC9E(temp_v0);
    }
    temp_v0_2 = arg0->unk4;
    if (temp_v0_2 != NULL) {
        sceHVSlim_Library_A2F4AC9E(temp_v0_2);
    }
    sceHVSlim_Library_A2F4AC9E(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FEB4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FEE4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FFDC);

void func_0001004C(void) {
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F834);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E5AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E6C0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010054);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D408);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000100F0);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FA64);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000E968);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010284);
#endif

void func_0001035C(struct Unk_func_0001035C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk54 = arg1;
    arg0->unk58 = arg2;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010368);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000103FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010474);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010564);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010670);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000106D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010730);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010790);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000107EC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001084C);

void func_000108AC(void) {
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000108B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010958);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010A68);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010A88);

s32 func_00010AA8(s32 arg0, s32 arg1) {
    return func_000111BC(arg0, arg1, -1) == 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010ACC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010BD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010CE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010D34);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010E4C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010FDC);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00010A04);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000F768);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011048);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000111BC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000112E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011418);

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011264);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000112E0);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FC68);

void func_0000FD20(void) {
    if (D_00057358 != 0) {
        sceHVSlim_Library_A2F4AC9E(D_00057358);
        D_00057358 = 0;
    }
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001153C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000115B8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011618);

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_00011390(void *arg0, s32 arg1) {
    sceHVSlim_Library_D611E938(arg0, 0, 0x54);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = 8;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_0001178C(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000113F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001144C);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FDA8);

void func_0000FE30(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 6;
    var_s0 = arg0;
    func_00011818(arg0);
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 0x18);
        var_s1 -= 1;
        if (temp_v0 != 0) {
            sceHVSlim_Library_A2F4AC9E(temp_v0);
            M2C_FIELD(var_s0, s32 *, 0x18) = 0;
        }
        var_s0 += 8;
    } while (var_s1 >= 0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000FE84);
#endif

#if FW_VERSION == 303
s32 func_00011668(struct Unk_func_00011668_0 *arg0, s32 arg1) {
    sceHVSlim_Library_D611E938(arg0, 0, 0x54);
    arg0->unk4 = arg1;
    arg0->unk10 = 8;
    arg0->unk0 = 0;
    arg0->unk2 = 0;
    arg0->unkC = 0;
    arg0->unk8 = 0;
    arg0->unk14 = 0;
    arg0->unk18 = 0;
    func_0001178C(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000116D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011724);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001178C);

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_00011518(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_0001178C(arg0);
    }
}
#endif

#if FW_VERSION == 303
void func_000117F0(struct Unk_func_000117F0_0 *arg0) {
    if (arg0->unk18 != 0) {
        func_0001178C(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011818);

void func_00011870(s16 *arg0, s16 arg1) {
    *arg0 = arg1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011878);

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_000111A0(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_00052D08(arg0, arg1);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 271
s32 func_000111A0(s32 arg0, s32 arg1) {
    s32 var_v1;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_v1 = -1;
    if (M2C_FIELD(temp_v0, u16 *, 0x1B42) != 0) {
        var_v1 = -2;
        if (M2C_FIELD(temp_v0, u16 *, 0x1B40) != 0) {
            var_v1 = func_0004E7D8(arg0, arg1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011204);
#endif

#if FW_VERSION == 271
s32 func_00011204(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_v1 = -1;
    if (M2C_FIELD(temp_v0, u16 *, 0x1B42) != 0) {
        var_v1 = -2;
        if (M2C_FIELD(temp_v0, u16 *, 0x1B40) != 0) {
            var_v1 = func_0005479C(arg0, arg1, arg2);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011278);
#endif

#if FW_VERSION == 271
s32 func_00011278(s32 arg0, s32 arg1) {
    s32 var_v1;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_v1 = -1;
    if (M2C_FIELD(temp_v0, u16 *, 0x1B42) != 0) {
        var_v1 = -2;
        if (M2C_FIELD(temp_v0, u16 *, 0x1B40) != 0) {
            var_v1 = func_00054B78(arg0, arg1);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_000112DC(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_00053190(arg0);
    }
    return var_v1;
}
#endif

#if FW_VERSION == 271
s32 func_000112DC(s32 arg0) {
    s32 var_v1;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_v1 = -1;
    if (M2C_FIELD(temp_v0, u16 *, 0x1B42) != 0) {
        var_v1 = -2;
        if (M2C_FIELD(temp_v0, u16 *, 0x1B40) != 0) {
            var_v1 = func_00054BB4(arg0);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011330);
#endif

#if FW_VERSION == 271
s32 func_00011330(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_v1 = -1;
    if (M2C_FIELD(temp_v0, u16 *, 0x1B42) != 0) {
        var_v1 = -2;
        if (M2C_FIELD(temp_v0, u16 *, 0x1B40) != 0) {
            var_v1 = func_00054804(arg0, arg1, arg2, arg3);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000113B4);
#endif

#if FW_VERSION == 271
s32 func_000113B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;
    struct Unk_ret_func_00003D10 *temp_v0;

    temp_v0 = func_00003D10();
    var_v1 = -1;
    if (M2C_FIELD(temp_v0, u16 *, 0x1B42) != 0) {
        var_v1 = -2;
        if (M2C_FIELD(temp_v0, u16 *, 0x1B40) != 0) {
            var_v1 = func_0005486C(arg0, arg1, arg2, arg3);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011438);
#endif

#if FW_VERSION == 303
s32 func_00011964(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_0005472C(arg0, arg1);
    }
    return var_v1;
}

s32 func_000119B8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_0005479C(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00011A1C(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_00054B78(arg0, arg1);
    }
    return var_v1;
}

s32 func_00011A70(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_00054BB4(arg0);
    }
    return var_v1;
}

s32 func_00011AB4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_00054804(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

s32 func_00011B28(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;

    var_v1 = -1;
    if (func_00003D10()->unk1B46 != 0) {
        var_v1 = func_0005486C(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011B9C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011BE8);

s32 func_00011D5C(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011D64);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011DC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011E04);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011E68);

void func_00011EC4(struct Unk_func_00011EC4_0 *arg0) {
    s32 var_s1;
    s32 var_s2;

    if (arg0 != NULL) {
        if (arg0->unk4C != 0) {
            var_s2 = 0;
            if (arg0->unk44 > 0) {
                var_s1 = 0;
                do {
                    var_s2 += 1;
                    func_00011F74(arg0, arg0->unk4C + var_s1);
                    var_s1 += 0x34;
                } while (var_s2 < arg0->unk44);
            }
        }
    }
}

void func_00011F38(struct Unk_func_00011F38_0 *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4C;
        if (temp_v0 != 0) {
            func_00011F74(arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00011F74);

s32 func_00012020(struct Unk_func_00012020_0 *arg0, struct Unk_func_00012020_1 *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if ((arg0->unk0 == arg1->unk0) && (arg0->unk4 == arg1->unk4) && (arg0->unk8 == arg1->unk8)) {
        var_a2 = arg0->unkC != arg1->unkC;
    }
    return var_a2;
}

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012068);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_00012068(struct Unk_func_00012068_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk48 != 0) {
        func_00055524((s32) "FONTCACHE> already locked.\n", M2C_FIELD(func_00055950(), s32 *, 0xC));
        var_v1 = -1;
    } else {
        arg0->unk48 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 func_00012068(struct Unk_func_00012068_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk48 != 0) {
        func_00056F48((s32) "FONTCACHE> already locked.\n", M2C_FIELD(func_0004CB64(), s32 *, 0xC));
        var_v1 = -1;
    } else {
        arg0->unk48 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 303
s32 func_00012068(struct Unk_func_00012068_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk48 != 0) {
        func_00056F48((s32) "FONTCACHE> already locked.\n", M2C_FIELD(func_00057374(), s32 *, 0xC));
        var_v1 = -1;
    } else {
        arg0->unk48 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000120B4);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_000120B4(struct Unk_func_000120B4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk48 == 0) {
        func_00055524((s32) "FONTCACHE> already unlocked.\n", M2C_FIELD(func_00055950(), s32 *, 0xC));
        var_v1 = -1;
    } else {
        arg0->unk48 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 func_000120B4(struct Unk_func_000120B4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk48 == 0) {
        func_00056F48((s32) "FONTCACHE> already unlocked.\n", M2C_FIELD(func_0004CB64(), s32 *, 0xC));
        var_v1 = -1;
    } else {
        arg0->unk48 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 303
s32 func_000120B4(struct Unk_func_000120B4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk48 == 0) {
        func_00056F48((s32) "FONTCACHE> already unlocked.\n", M2C_FIELD(func_00057374(), s32 *, 0xC));
        var_v1 = -1;
    } else {
        arg0->unk48 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000120FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000121F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012244);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001230C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000123D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001249C);

s32 func_00012564(struct Unk_func_00012564_0 *arg0, struct Unk_func_00012564_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk18;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk14);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_000125D4(struct Unk_func_000125D4_0 *arg0, struct Unk_func_000125D4_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk20;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk1C);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_00012644(struct Unk_func_00012644_0 *arg0, struct Unk_func_00012644_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk28;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk24);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

s32 func_000126B4(struct Unk_func_000126B4_0 *arg0, struct Unk_func_000126B4_1 *arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = arg1->unk30;
            if (temp_v0 != 0) {
                arg0->unk3C(arg2, temp_v0, arg1->unk2C);
                var_v1 = 0;
                temp_v0_2 = arg0->unk40 + 1;
                arg0->unk40 = temp_v0_2;
                arg1->unk0 = temp_v0_2;
            }
        }
    }
    return var_v1;
}

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001244C);

void func_00012484(void) {
    sceHVSlim_Library_A2F4AC9E();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000124A0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012724);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001275C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012778);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000128C0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012B34);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012B68);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012BA0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D4CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D4D8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D4E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D4F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D500);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D510);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D51C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D52C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012BD8);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012EC0);
#else
void func_00012EC0(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    struct Unk_func_00012EC0_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk98;
        if (temp_v0_2 != 0) {
            sceHVSlim_Library_0D525122(temp_v0_2);
            temp_v0->unk98 = 0;
        }
        temp_v0_3 = temp_v0->unkE4;
        if (temp_v0_3 != 0) {
            func_0000AE28(temp_s2, temp_v0_3);
            temp_v0->unkE4 = 0;
        }
        temp_v0_4 = temp_v0->unkE0;
        if (temp_v0_4 != 0) {
            func_0000AE44(temp_s2, temp_v0_4);
            temp_v0->unkE0 = 0;
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

void func_00012F74(s32 arg0, struct Unk_func_00012F74_1 *arg1) {
    struct Unk_func_00012F74_temp_v0 *temp_v0;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = (u8 *)sceHVSlim_Library_896E55F6(arg0) + 0x18;
        temp_v0->unk24 = (u8) arg1->unkAE;
        temp_v0->unk28 = (u16) arg1->unkAC;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012FD4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013044);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013114);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001316C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000131EC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013290);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013394);
#else
void func_00013394(s32 arg0, M2C_UNK arg1) {
    s32 temp_a0;

    temp_a0 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        func_0000E3FC(temp_a0, arg0, arg1);
    }
}
#endif

#if FW_VERSION >= 271
void func_000133E0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0)->unkE0;
        if (temp_v0 != 0) {
            func_00013394(temp_v0, arg1);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#else
void func_000133E0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != 0) {
        temp_v0 = M2C_FIELD(sceHVSlim_Library_896E55F6(arg0), s32 *, 0xDC);
        if (temp_v0 != 0) {
            func_00013394(temp_v0, arg1);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013438);

void func_000134B8(s32 arg0, s32 arg1) {
    func_000133E0(arg0, arg1);
    func_00013438(arg0, arg1);
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012BF4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000134F4);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000135A8);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012DB0);
#endif

#if FW_VERSION == 303
s32 func_000135A8(s32 arg0, M2C_UNK arg1) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_000135A8_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = temp_v0->unkE0;
    if ((temp_v0_2 == 0) || (func_000099D0(temp_s2, temp_v0_2) != -1)) {
        temp_v0->unkD4 = (s32) temp_v0->unk9C;
        temp_v0_3 = func_0000AD94(temp_s2, &temp_v0->unkD4);
        temp_v0->unkE4 = temp_v0_3;
        if (temp_v0_3 != 0) {
            func_00013044(temp_v0, 2);
            if (temp_v0->unkC8 != 0) {
                func_00013394(temp_v0->unkE4, (s32) (&temp_v0->unkB8));
            }
            if (temp_v0->unkD0 == 1) {
                func_000134F4(arg0, temp_v0->unkB8);
            }
            func_0000BE14(temp_s2, temp_v0->unkE0, temp_v0->unkE4, 0);
            sceHVSlim_Library_B29BE9CE(arg0);
            return 0;
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_0001372C(arg0, arg1);
    return -6;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000118F0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000136B0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001372C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013874);
#else
s32 func_00013874(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_00013874_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkE4;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkE4 = 0;
        }
        temp_v0_3 = temp_v0->unkE0;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkE0 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

void func_00013904(s32 arg0, s32 arg1, s32 arg2) {
    func_0001393C(arg0, arg1, arg2, 0);
}

void func_00013920(s32 arg0, s32 arg1, s32 arg2) {
    func_0001393C(arg0, arg1, arg2, 1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001393C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013AF8);
#else
void func_00013AF8(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    struct Unk_func_00013AF8_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkA0;
        if (temp_v0_2 != 0) {
            sceHVSlim_Library_0D525122(temp_v0_2);
        }
        temp_v0_3 = temp_v0->unkD8;
        if (temp_v0_3 != 0) {
            func_0000AE28(temp_s2, temp_v0_3);
            temp_v0->unkD8 = 0;
        }
        temp_v0_4 = temp_v0->unkD4;
        if (temp_v0_4 != 0) {
            func_0000AE44(temp_s2, temp_v0_4);
            temp_v0->unkD4 = 0;
        }
        func_0001EC68(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013BA8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013C34);

void func_00013D90(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00013D90_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unkB0 = arg1;
    temp_v0->unkB4 = arg2;
    func_00013C34(temp_v0);
    sceHVSlim_Library_B29BE9CE(arg0);
}

void func_00013DE4(s32 arg0, M2C_UNK arg1) {
    func_0001EC88(sceHVSlim_Library_896E55F6(arg0), arg1);
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013E28);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015370);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013E8C);

void func_00013F3C(s32 arg0, s32 arg1) {
    struct Unk_func_00013F3C_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unkC4 != arg1) {
            temp_v0->unkC4 = arg1;
            func_00013C34(temp_v0);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION < 303
s32 func_00013F94(s32 arg0, struct Unk_func_00013F94_1 *arg1) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((M2C_FIELD(temp_v0, s32 *, 0x98) != 0) && (arg1->unk10 & 0x400)) {
        func_000108B4(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 0x80), 0, 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#else
s32 func_00013F94(s32 arg0, struct Unk_func_00013F94_1 *arg1) {
    struct Unk_func_00013F94_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((temp_v0->unk98 != 0) && (temp_v0->unkC4 == 0) && (arg1->unk10 & 0x400)) {
        func_000108B4(temp_v0->unk0, temp_v0->unk80, 0, 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D5D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D5E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014008);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00012E1C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000121F0_v201);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000140F4);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014170);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014280);
#else
s32 func_00014280(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_00014280_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkD8;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkD8 = 0;
        }
        temp_v0_3 = temp_v0->unkD4;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkD4 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014310);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014474);
#else
void func_00014474(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_00014474_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkBC;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkBC = 0;
        }
        temp_v0_3 = temp_v0->unkB8;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkB8 = 0;
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014510);

void func_0001463C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    struct Unk_func_0001463C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unk98 = arg1;
    temp_v0->unk9C = arg2;
    temp_v0->unkA0 = arg3;
    temp_v0->unkA4 = arg4;
    func_00014510((s32) temp_v0);
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_000146B0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000146B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000147A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014818);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014924);
#else
s32 func_00014924(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_00014924_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkBC;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkBC = 0;
        }
        temp_v0_3 = temp_v0->unkB8;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkB8 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000149B4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014B98);
#else
void func_00014B98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00014BD8(arg0, arg1, arg2, arg3, arg4, 0, arg5);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014BB8);
#else
void func_00014BB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_00014BD8(arg0, arg1, arg2, arg3, arg4, 1, arg5);
}
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D61C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D62C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D63C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D64C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014BD8);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014DA8);
#else
void func_00014DA8(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    struct Unk_func_00014DA8_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkA4;
        if (temp_v0_2 != 0) {
            sceHVSlim_Library_0D525122(temp_v0_2);
        }
        temp_v0_3 = temp_v0->unk10C;
        if (temp_v0_3 != 0) {
            func_0000AE28(temp_s2, temp_v0_3);
            temp_v0->unk10C = 0;
        }
        temp_v0_4 = temp_v0->unk108;
        if (temp_v0_4 != 0) {
            func_0000AE44(temp_s2, temp_v0_4);
            temp_v0->unk108 = 0;
        }
        func_0001EC68(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00014E58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015164);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015270);

void func_000152C8(s32 arg0, s32 arg1) {
    func_0001EC88(sceHVSlim_Library_896E55F6(arg0), arg1);
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001530C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001341C);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015370);
#endif

void func_000153E4(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0)->unkD8 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015428);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001549C);

void func_0001550C(s32 arg0, s32 arg1) {
    struct Unk_func_0001550C_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unkBC != arg1) {
            temp_v0->unkBC = arg1;
            func_00014E58(temp_v0, 3);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

#if FW_VERSION < 303
s32 func_00015568(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = temp_v0->unkE0;
        M2C_FIELD(temp_v0, s32 *, 0xE4) = arg2;
        temp_v0->unkE0 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}
#else
s32 func_00015568(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_func_00015568_temp_v0 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = temp_v0->unkE4;
        temp_v0->unkE8 = arg2;
        temp_v0->unkE4 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}
#endif

s32 func_000155D0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_func_000155D0_temp_v0 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = temp_v0->unkC8;
        temp_v0->unkCC = arg2;
        temp_v0->unkC8 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}

#if FW_VERSION < 303
s32 func_00015638(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = temp_v0->unkE8;
        M2C_FIELD(temp_v0, s32 *, 0xEC) = arg2;
        temp_v0->unkE8 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}
#else
s32 func_00015638(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_func_00015638_temp_v0 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = temp_v0->unkEC;
        temp_v0->unkF0 = arg2;
        temp_v0->unkEC = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}
#endif

#if FW_VERSION < 303
s32 func_000156A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = M2C_FIELD(temp_v0, s32 *, 0xF0);
        temp_v0->unkF4 = arg2;
        M2C_FIELD(temp_v0, s32 *, 0xF0) = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}
#else
s32 func_000156A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s2;
    struct Unk_func_000156A0_temp_v0 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s2 = temp_v0->unkF4;
        temp_v0->unkF8 = arg2;
        temp_v0->unkF4 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s2;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015708);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000138FC);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015850);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015AAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015BB4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015C2C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015D6C);
#else
s32 func_00015D6C(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_00015D6C_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk10C;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unk10C = 0;
        }
        temp_v0_3 = temp_v0->unk108;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unk108 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015DFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015E88);

s32 func_00015EF4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015EFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015F20);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013F64);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015F78);
#endif

void func_0001628C(s32 arg0, s32 arg1, s32 arg2) {
    func_000162C4(arg0, arg1, arg2, 0);
}

void func_000162A8(s32 arg0, s32 arg1, s32 arg2) {
    func_000162C4(arg0, arg1, arg2, 1);
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D698);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000162C4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000164A8);
#else
void func_000164A8(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_000164A8_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = temp_v0->unkDC;
    if (temp_v0_2 != 0) {
        func_0000AE28(temp_s2, temp_v0_2);
        temp_v0->unkDC = 0;
    }
    temp_v0_3 = temp_v0->unkD8;
    if (temp_v0_3 != 0) {
        func_0000AE44(temp_s2, temp_v0_3);
        temp_v0->unkD8 = 0;
    }
    func_0001EC68(temp_v0);
    func_000170D0(arg0);
    sceHVSlim_Library_B8C28371((u8 *)temp_v0 + 0xA0);
    sceHVSlim_Library_B29BE9CE(arg0);
    if (arg0 != 0) {
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016554);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016684);
#else
s32 func_00016684(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s0;

    temp_s0 = (u8 *)func_00003D10() + 0x14DC;
    temp_v0 = sceHVSlim_Library_896E55F6(arg0)->unkD8;
    var_s0 = -1;
    if (temp_v0 != 0) {
        var_s0 = func_000099D0(temp_s0, temp_v0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return var_s0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000166E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001674C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00013E8C);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016838);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016900);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D6B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000169DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016AB4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016B2C);

s32 func_00016C24(void) {
    return 0;
}

s32 func_00016C2C(void) {
    return 0;
}

s32 func_00016C34(void) {
    return 0;
}

s32 func_00016C3C(struct Unk_vt_func_00016C3C_arg0 **arg0) {
    return (*arg0)->unkC0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016C48);

void func_00016CF0(s32 *arg0, s32 arg1) {
    M2C_UNK var_a2;
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = *arg0;
    if (arg1 != 0) {
        var_v0 = func_00016C48(temp_a0, 0);
        var_a2 = 0;
    } else {
        var_v0 = func_00016C48(temp_a0, 1);
        var_a2 = 1;
    }
    func_000171F0(arg0, var_v0, var_a2);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016D48);

s32 func_00016F20(struct Unk_vt_func_00016F20_arg0 **arg0) {
    return (*arg0)->unkBC;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016F2C);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001651C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016598);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016FD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00017054);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00015084);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000170D0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000171F0);

void func_00017330(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00017330_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0->unkE4 = arg1;
        temp_v0->unkE0 = arg2;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00017384);

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_000169F0(s32 arg0) {
    s32 var_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s1 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s1 = M2C_FIELD(temp_v0, s32 *, 0xF0) != M2C_FIELD(temp_v0, s32 *, 0xC0);
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s1;
}

void func_00016A44(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0)->unkF4 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION == 303
s32 func_000174AC(s32 arg0) {
    s32 var_s1;
    struct Unk_func_000174AC_temp_v0 *temp_v0;

    var_s1 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s1 = temp_v0->unkF0 != temp_v0->unkC0;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s1;
}

void func_00017500(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0)->unkF4 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00017544);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000176B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000177CC);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00016E48);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000164D4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001587C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00017904);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D6F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00017A70);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000180BC);

s32 func_000181B0(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    struct Unk_func_000181B0_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = func_000180BC(arg0, 1, temp_v0->unkCC);
    var_s0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        temp_v0_3 = func_000180BC(arg0, 0, temp_v0->unkCC);
        var_s0 = temp_v0_3;
        if (temp_v0_3 == 0) {
            sceHVSlim_Library_B29BE9CE(arg0);
            return 0;
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return var_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018238);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018440);
#else
void func_00018440(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_s1;
    struct Unk_func_00018440_temp_v0 *temp_v0;

    temp_s1 = (u8 *)func_00003D10() + 0x14DC;
    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_a1 = temp_v0->unkE4;
    if (temp_a1 != 0) {
        func_0000AE28(temp_s1, temp_a1);
        temp_v0->unkE4 = 0;
    }
    temp_a1_2 = temp_v0->unkE0;
    if (temp_a1_2 != 0) {
        func_0000AE44(temp_s1, temp_a1_2);
        temp_v0->unkE0 = 0;
    }
    temp_a1_3 = temp_v0->unkF8;
    if (temp_a1_3 != 0) {
        func_0000AE28(temp_s1, temp_a1_3);
        temp_v0->unkF8 = 0;
    }
    temp_a1_4 = temp_v0->unkF4;
    if (temp_a1_4 != 0) {
        func_0000AE44(temp_s1, temp_a1_4);
        temp_v0->unkF4 = 0;
    }
    func_0001EC68(temp_v0);
    func_00019ED4(arg0);
    sceHVSlim_Library_B8C28371((u8 *)temp_v0 + 0xA0);
    sceHVSlim_Library_B29BE9CE(arg0);
    if (arg0 != 0) {
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018510);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000185A4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000185C0);

void func_0001865C(s32 arg0, s32 *arg1, s32 *arg2) {
    struct Unk_func_0001865C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    *arg1 = temp_v0->unk90;
    *arg2 = temp_v0->unk94;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000186B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018714);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000188E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018B18);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D70C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D71C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D72C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018C1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018D5C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018E08);

s32 func_00018F6C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018F74);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018FF4);

void func_0001903C(s32 arg0, s32 arg1) {
    sceHVSlim_Library_896E55F6(arg0)->unkC4 = arg1;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019078);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019234);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001941C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019718);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001988C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000198F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019A08);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018730);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000191CC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00017A4C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019B34);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019CC4);
#endif

s32 func_00019E48(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_v0;
    struct Unk_func_00019E48_temp_v0 *temp_v0;

    func_00019ED4(arg0);
    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = (u8 *)temp_v0 + 0xA0;
    temp_v0_2 = sceHVSlim_Library_0F61EC8E(temp_s0, 4);
    var_v0 = -1;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_05F33A6C(temp_s0, temp_v0_2);
        temp_v0->unkC8 = 0;
        temp_v0->unkCC = 0;
        temp_v0->unkC4 = temp_v0_2;
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019ED4);

s32 func_00019FF8(s32 arg0) {
    s32 temp_s1;

    temp_s1 = sceHVSlim_Library_896E55F6(arg0)->unkCC;
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A034);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A0C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A168);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A208);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A29C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A370);

void func_0001A4C0(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0)->unk100 = arg1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

void func_0001A504(s32 arg0, s32 arg1) {
    s32 var_s2;
    struct Unk_func_0001A504_temp_v0 *temp_v0;

    var_s2 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unk104 != arg1) {
            temp_v0->unk104 = arg1;
            var_s2 = 1;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
        if (var_s2 != 0) {
            func_000181B0(arg0);
        }
    }
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019A68);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00018288);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A578);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A618);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019A98);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019CF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019DC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019EA4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00019FDC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A6AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A804);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A8D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A9B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001AAEC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001ACC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001AE58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001AF14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001AF88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B000);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B198);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B2DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B378);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B410);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D754);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D758);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B4BC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B780);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B8AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001BA5C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001BBF8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001BDDC);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001BF98);
#else
void func_0001BF98(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001BF98_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkDC;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkDC = 0;
        }
        temp_v0_3 = temp_v0->unkD8;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkD8 = 0;
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C034);

void func_0001C0D4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0001C034(sceHVSlim_Library_896E55F6(arg0), arg1, arg2);
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C128);

void func_0001C1EC(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0001C1EC_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0->unkC4 = arg1;
        temp_v0->unkC8 = arg2;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C240);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C2A4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C310);
#else
void func_0001C310(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        func_0000A5F8(temp_a0, arg0, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C35C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C3EC);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001B940);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C450);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C52C);

s32 func_0001C590(void) {
    return 0;
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C598);
#else
void func_0001C598(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0001C598_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unkE0 = arg1;
    temp_v0->unkE4 = arg2;
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00004D04(1);
}
#endif

void func_0001C5EC(s32 arg0) {
    sceHVSlim_Library_896E55F6(arg0)->unkE8 = 1;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C620);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D89C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D8A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D8B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D8C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D8DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D8E8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D8F8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D908);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D91C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D92C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D940);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D954);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D96C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D978);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D988);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D998);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D9AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D9BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D9D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D9E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D9FC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA08);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA18);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA28);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA3C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA60);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA74);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DA98);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DAA8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DAB8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DACC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DAD8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DAE8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DAF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB18);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB28);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB38);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB4C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB58);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB68);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB78);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DB9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DBB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DBC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DBDC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DBEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC00);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC14);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC38);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC48);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC58);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC6C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC78);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC88);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DC98);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DCAC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DCBC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DCC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C6CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C868);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C8E4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001CA64);
#else
s32 func_0001CA64(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001CA64_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkDC;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkDC = 0;
        }
        temp_v0_3 = temp_v0->unkD8;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkD8 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

void func_0001CAF4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0001CB2C(arg0, arg1, arg2, arg3, arg4, 0);
}

void func_0001CB10(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0001CB2C(arg0, arg1, arg2, arg3, arg4, 1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001CB2C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001CCE0);
#else
void func_0001CCE0(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001CCE0_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkC8;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkC8 = 0;
        }
        temp_v0_3 = temp_v0->unkC4;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkC4 = 0;
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

void func_0001CD7C(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_0001CD7C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unk9C = arg1;
    temp_v0->unkA0 = arg2;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001CDC8);

void func_0001CE38(s32 arg0, s32 arg1) {
    struct Unk_func_0001CE38_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0->unkAC = arg1;
        temp_v0->unkB0 = 1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

s32 func_0001CE84(void) {
    return 0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C37C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001A464);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001CE8C);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DCF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD0C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001CF84);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D098);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D130);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D274);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0001C7F4(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0->unkCC = func_0004A5A0();
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_0001C834(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xCC);
}
#endif

#if FW_VERSION == 303
s32 func_0001D274(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001D274_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkC8;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkC8 = 0;
        }
        temp_v0_3 = temp_v0->unkC4;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkC4 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}

void func_0001D304(s32 arg0) {
    struct Unk_func_0001D304_temp_s0 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0->unkCC = func_0004C0DC();
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_0001D344(struct Unk_vt_func_0001D344_arg0 **arg0) {
    return (*arg0)->unkCC;
}
#endif

void func_0001D350(s32 arg0, s32 arg1, s32 arg2) {
    func_0001D388(arg0, arg1, arg2, 0);
}

void func_0001D36C(s32 arg0, s32 arg1, s32 arg2) {
    func_0001D388(arg0, arg1, arg2, 1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D388);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D52C);
#else
void func_0001D52C(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001D52C_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkC4;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkC4 = 0;
        }
        temp_v0_3 = temp_v0->unkC0;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkC0 = 0;
        }
        func_0001EC68(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001AAF8);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D5C8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D6F8);

void func_0001D750(s32 arg0, s32 arg1) {
    sceHVSlim_Library_896E55F6(arg0)->unkA0 = arg1;
    sceHVSlim_Library_B29BE9CE(arg0);
    func_0001D898(arg0);
}

void func_0001D794(s32 arg0, s32 arg1) {
    func_0001EC88(sceHVSlim_Library_896E55F6(arg0), arg1);
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D7D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D83C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D898);

#if FW_VERSION == 303
void func_0001D9AC(s32 arg0, s32 arg1) {
    struct Unk_func_0001D9AC_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unkB0 != arg1) {
            temp_v0->unkB0 = arg1;
            func_0001D5C8(temp_v0, 3);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DA08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DB00);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DB78);

#if FW_VERSION < 303
s32 func_0001DCA4(s32 arg0, struct Unk_func_0001DCA4_1 *arg1) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((M2C_FIELD(temp_v0, s32 *, 0x98) != 0) && (arg1->unk10 & 0x400)) {
        temp_v0->unkA0 = temp_v0->unkA0 == 0;
        func_0001D898(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#else
s32 func_0001DCA4(s32 arg0, struct Unk_func_0001DCA4_1 *arg1) {
    struct Unk_func_0001DCA4_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((temp_v0->unk98 != 0) && (temp_v0->unkB0 == 0) && (arg1->unk10 & 0x400)) {
        temp_v0->unkA0 = (s32) (temp_v0->unkA0 == 0);
        func_0001D898(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DD1C);
#else
s32 func_0001DD1C(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001DD1C_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkC4;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkC4 = 0;
        }
        temp_v0_3 = temp_v0->unkC0;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkC0 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DDAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DE8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001DF30);

void func_0001E02C(s32 arg0) {
    func_00003D10();
    if (arg0 != 0) {
        func_0001EBE0(sceHVSlim_Library_896E55F6(arg0));
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD30);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD48);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD5C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD70);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD80);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DD94);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DDA4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DDB4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DDC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E078);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E1C0);

s32 func_0001E264(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E26C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E3E0);
#else
void func_0001E3E0(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001E3E0_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkBC;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkBC = 0;
        }
        temp_v0_3 = temp_v0->unkB8;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkB8 = 0;
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E47C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E520);
#else
void func_0001E520(s32 arg0, s32 arg1) {
    s32 temp_s2;
    struct Unk_func_0001E520_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unkA8 != arg1) {
            temp_v0->unkA8 = arg1;
            if (temp_v0->unkBC != 0) {
                func_0000BA58(temp_s2, temp_v0->unkB8, 0);
                func_0001E6B4(temp_v0, temp_v0->unkBC);
            }
            func_0001E6B4(temp_v0, temp_v0->unkB8);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

s32 func_0001E5BC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E5C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E6B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DDE8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DDEC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E82C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E90C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E984);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EA8C);
#else
s32 func_0001EA8C(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_0001EA8C_temp_v0 *temp_v0;

    temp_s2 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unkBC;
        if (temp_v0_2 != 0) {
            func_0000AE28(temp_s2, temp_v0_2);
            temp_v0->unkBC = 0;
        }
        temp_v0_3 = temp_v0->unkB8;
        if (temp_v0_3 != 0) {
            func_0000AE44(temp_s2, temp_v0_3);
            temp_v0->unkB8 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EB1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EBE0);

void func_0001EC34(struct Unk_func_0001EC34_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk88 = arg1;
    arg0->unk8C = arg2;
}

void func_0001EC40(struct Unk_func_0001EC40_0 *arg0) {
    arg0->unk9C = 1;
    arg0->unk98 = 0;
    func_0001EB1C();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EC68);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EC88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EC90);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EDC8);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EE44);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EE50);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EE68);

s32 func_0001EF04(s32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != 0) {
        var_s1 = sceHVSlim_Library_896E55F6(arg0)->unk14;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s1;
}

void func_0001EF4C(s32 arg0) {
    func_0001EF04(arg0);
}

void func_0001EF68(s32 arg0) {
    sceHVSlim_Library_896E55F6(arg0);
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EF94);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001F02C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001F130);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D558);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D80C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C5E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001C7FC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001F1F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001F478);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001F9D4);

s32 func_0001FACC(s32 arg0, M2C_UNK arg1) {
    struct Unk_func_0001FACC_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_0001F9D4(arg0, 1, arg1, temp_v0->unkC0);
    func_0001F9D4(arg0, 0, arg1, temp_v0->unkC0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001FB3C);

void func_0001FD74(s32 arg0, M2C_UNK arg1) {
    func_00004408(3);
    func_0001FB3C(arg0, arg1, 0);
}

void func_0001FDB8(s32 arg0, s32 arg1) {
    func_00004408(3);
    func_0001FB3C(arg0, arg1, 1);
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001FDFC);
#else
void func_0001FDFC(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_s1;
    struct Unk_func_0001FDFC_temp_v0 *temp_v0;

    temp_s1 = (u8 *)func_00003D10() + 0x14DC;
    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_a1 = temp_v0->unkF4;
    if (temp_a1 != 0) {
        func_0000AE28(temp_s1, temp_a1);
        temp_v0->unkF4 = 0;
    }
    temp_a1_2 = temp_v0->unkF0;
    if (temp_a1_2 != 0) {
        func_0000AE44(temp_s1, temp_a1_2);
        temp_v0->unkF0 = 0;
    }
    temp_a1_3 = temp_v0->unk108;
    if (temp_a1_3 != 0) {
        func_0000AE28(temp_s1, temp_a1_3);
        temp_v0->unk108 = 0;
    }
    temp_a1_4 = temp_v0->unk104;
    if (temp_a1_4 != 0) {
        func_0000AE44(temp_s1, temp_a1_4);
        temp_v0->unk104 = 0;
    }
    temp_a1_5 = temp_v0->unk11C;
    if (temp_a1_5 != 0) {
        func_0000AE28(temp_s1, temp_a1_5);
        temp_v0->unk11C = 0;
    }
    temp_a1_6 = temp_v0->unk118;
    if (temp_a1_6 != 0) {
        func_0000AE44(temp_s1, temp_a1_6);
        temp_v0->unk118 = 0;
    }
    func_0001EC68(temp_v0);
    func_00021098(arg0);
    sceHVSlim_Library_B8C28371((u8 *)temp_v0 + 0xA0);
    sceHVSlim_Library_B29BE9CE(arg0);
    if (arg0 != 0) {
        sceHVSlim_Library_880239D0(arg0);
    }
    func_00003D4C(1);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001FF04);
#else
s32 func_0001FF04(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s2;
    struct Unk_func_0001FF04_temp_v0 *temp_v0;

    var_s2 = -1;
    temp_s1 = (u8 *)func_00003D10() + 0x14DC;
    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk118;
    if (temp_v0_2 != 0) {
        var_s2 = func_000099D0(temp_s1, temp_v0_2);
    }
    temp_v0_3 = temp_v0->unkF0;
    if (temp_v0_3 != 0) {
        var_s2 = func_000099D0(temp_s1, temp_v0_3);
    }
    temp_v0_4 = temp_v0->unk104;
    if (temp_v0_4 != 0) {
        var_s2 = func_000099D0(temp_s1, temp_v0_4);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return var_s2;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001FFB4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020090);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EDCC);

void func_0001EE18(s32 arg0) {
    sceHVSlim_Library_896E55F6(arg0)->unkE0 = 1;
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 303
void func_000200F4(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_000200F4_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unkD8 = arg1;
    temp_v0->unkDC = arg2;
    sceHVSlim_Library_B29BE9CE(arg0);
}

void func_00020140(s32 arg0) {
    sceHVSlim_Library_896E55F6(arg0)->unkE0 = 1;
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020174);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001EEE4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D468);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E808);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001D6F4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002020C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020504);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DEC0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DED0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DEE4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DEF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF0C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002069C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002082C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000208CC);

s32 func_00020AE8(void) {
    return 0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001FEAC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001ED9C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020AF0);
#endif

s32 func_00020D04(struct Unk_vt_func_00020D04_arg0 **arg0) {
    return (*arg0)->unkC0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020D10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020E0C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020E70);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002035C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000203D8);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020FA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002101C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021098);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021188);

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00020648(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    M2C_FIELD(temp_s0, s32 *, 0x120) = func_0004A5A0();
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_00020688(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0x120);
}
#endif

#if FW_VERSION == 303
void func_0002128C(s32 arg0) {
    struct Unk_func_0002128C_temp_s0 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0->unk120 = func_0004C0DC();
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_000212CC(struct Unk_vt_func_000212CC_arg0 **arg0) {
    return (*arg0)->unk120;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000212D8);

void func_0002134C(void *arg0) {
    func_000212D8();
    func_0001EBE0(arg0);
}

void func_00021378(s32 arg0) {
    if (arg0 != 0) {
        func_0002134C(sceHVSlim_Library_896E55F6(arg0));
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000213BC);

void func_000214BC(s32 arg0) {
    sceHVSlim_Library_CA65803E(arg0 + 2);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000214D8);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020978);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E51C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000215BC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000217D0);

void func_000218F0(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_000218F0_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unkB4 = arg1;
    temp_v0->unkB8 = arg2;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002193C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021990);
#else
s32 func_00021990(s32 arg0) {
    s32 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    func_00010A88((u8 *)func_00003D10() + 0x14DC, *temp_s0);
    func_00047E70(arg0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

s32 func_000219E8(void) {
    return 0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020D34);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001E8C4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000219F0);
#endif

void func_00021AE4(void *arg0) {
    func_0001EBE0(arg0);
}

void func_00021B00(s32 arg0) {
    if (arg0 != 0) {
        func_00021AE4(sceHVSlim_Library_896E55F6(arg0));
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021B44);

s32 func_00021C44(void) {
    func_00000C6C();
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021C64);

void func_00021CC8(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00021CC8_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0->unkB4 = arg1;
    temp_v0->unkB8 = arg2;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021D14);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021D68);
#else
s32 func_00021D68(s32 arg0) {
    s32 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    func_00010A88((u8 *)func_00003D10() + 0x14DC, *temp_s0);
    func_00047E70(arg0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

s32 func_00021DC0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021DC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021E50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021EFC);

void func_00021FF0(struct Unk_func_00021FF0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unkC;
    arg0->unk0 = 0;
    if (temp_v0 != 0) {
        func_0001BF98(temp_v0);
    }
    temp_v0_2 = arg0->unk10;
    arg0->unkC = 0;
    if (temp_v0_2 != 0) {
        func_0001BF98(temp_v0_2);
    }
    temp_v0_3 = arg0->unk14;
    arg0->unk10 = 0;
    if (temp_v0_3 != 0) {
        func_0001BF98(temp_v0_3);
    }
    arg0->unk14 = 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002205C);

void func_00022140(s32 arg0) {
    s32 var_s1;
    void *var_s0;

    var_s1 = 0xE;
    var_s0 = arg0 + 0x14;
    do {
        var_s1 -= 1;
        func_00021FF0(var_s0);
        var_s0 += 0x18;
    } while (var_s1 >= 0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022180);

void func_0002225C(struct Unk_func_0002225C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        func_0001BF98(temp_v0);
    }
    temp_v0_2 = arg0->unkC;
    arg0->unk8 = 0;
    if (temp_v0_2 != 0) {
        func_00012EC0(temp_v0_2);
    }
    arg0->unkC = 0;
    func_00022140((s32) arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000222B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF68);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF74);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF7C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF84);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF90);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DF9C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFA8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFB0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFC0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFCC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFD0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFDC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFE8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005DFF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E004);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E00C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E018);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E028);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E038);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E044);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E054);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E064);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E070);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E080);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E08C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E09C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E0AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E0B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E0C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E0D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E0E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E0F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E100);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E110);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E120);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E12C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E13C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E14C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E154);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E164);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E170);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E17C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E18C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E198);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E1A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E1B8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E1C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E1D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E1E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E1F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E200);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E208);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E218);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E224);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E230);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E240);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E250);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022370);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002250C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022638);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022750);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000228E0);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000229D8);
#else
s32 func_000229D8(struct Unk_func_000229D8_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unk0;
    if (temp_v0 != 0) {
        func_00047DB0(temp_v0);
    }
    temp_v0_2 = arg0->unkC;
    if (temp_v0_2 != 0) {
        func_00047DB0(temp_v0_2);
    }
    temp_v0_3 = arg0->unk10;
    if (temp_v0_3 != 0) {
        func_00047DB0(temp_v0_3);
    }
    return 0;
}
#endif

s32 func_00022A38(struct Unk_func_00022A38_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    void *var_s0;

    temp_a0 = arg0->unk0;
    if (temp_a0 != 0) {
        func_00047E10(temp_a0);
    }
    temp_a0_2 = arg0->unkC;
    if (temp_a0_2 != 0) {
        func_00047E10(temp_a0_2);
    }
    temp_a0_3 = arg0->unk10;
    var_s0 = (u8 *)arg0 + 0x18;
    if (temp_a0_3 != 0) {
        func_00047E10(temp_a0_3);
    }
    var_s1 = 0xE;
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 0xC);
        var_s1 -= 1;
        if (temp_v0 != 0) {
            func_00047E10(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(var_s0, s32 *, 0x10);
        if (temp_v0_2 != 0) {
            func_00047E10(temp_v0_2);
        }
        temp_v0_3 = M2C_FIELD(var_s0, s32 *, 0x14);
        if (temp_v0_3 != 0) {
            func_00047E10(temp_v0_3);
        }
        M2C_FIELD(var_s0, s32 *, 8) = 0;
        var_s0 += 0x18;
    } while (var_s1 >= 0);
    return 0;
}

#if FW_VERSION == 201
s32 func_0001F9B8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;
    void *var_s0;

    var_s0 = arg0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        func_00047E70(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(var_s0, s32 *, 0xC);
    if (temp_a0_2 != 0) {
        func_00047E70(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(var_s0, s32 *, 0x10);
    var_s1 = 0xE;
    if (temp_a0_3 != 0) {
        func_00047E70(temp_a0_3);
    }
    do {
        temp_v0 = M2C_FIELD(var_s0, s32 *, 0x24);
        var_s1 -= 1;
        if (temp_v0 != 0) {
            func_00047E70(temp_v0);
        }
        temp_v0_2 = M2C_FIELD(var_s0, s32 *, 0x28);
        if (temp_v0_2 != 0) {
            func_00047E70(temp_v0_2);
        }
        temp_v0_3 = M2C_FIELD(var_s0, s32 *, 0x2C);
        var_s0 += 0x18;
        if (temp_v0_3 != 0) {
            func_00047E70(temp_v0_3);
        }
    } while (var_s1 >= 0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022AF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022B64);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022BA4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022C24);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022CB4);

s32 func_00022CD0(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_00022CB4(sceHVSlim_Library_896E55F6(arg0));
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022D14);

s32 func_00022D30(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_00022D14(sceHVSlim_Library_896E55F6(arg0));
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s1;
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E5E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E658);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0001FCF0);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022D74);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000230B4);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002004C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00022038);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000202C8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023154);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023468);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023518);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000237B8);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000205D4);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023838);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000238DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023AE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023B54);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023C74);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023CC0);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00020CC8);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023F6C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024158);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024344);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024544);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024618);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000246E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002476C);

M2C_UNK *func_00024810(void) {
    return &D_0005E250;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002481C);

void func_00024888(struct Unk_func_00024888_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;

    temp_a0 = arg0->unkA8;
    if (temp_a0 != 0) {
        func_0001BF98(temp_a0);
    }
    temp_a0_2 = arg0->unkAC;
    arg0->unkA8 = 0;
    if (temp_a0_2 != 0) {
        func_00012EC0(temp_a0_2);
    }
    temp_a0_3 = arg0->unkB4;
    arg0->unkAC = 0;
    if (temp_a0_3 != 0) {
        func_00014DA8(temp_a0_3);
    }
    temp_a0_4 = arg0->unkB8;
    arg0->unkB4 = 0;
    if (temp_a0_4 != 0) {
        func_00014474(temp_a0_4);
    }
    temp_a0_5 = arg0->unk90;
    arg0->unkB8 = 0;
    if (temp_a0_5 != 0) {
        func_0001BF98(temp_a0_5);
    }
    temp_a0_6 = arg0->unk94;
    arg0->unk90 = 0;
    if (temp_a0_6 != 0) {
        func_0001BF98(temp_a0_6);
    }
    temp_a0_7 = arg0->unk98;
    arg0->unk94 = 0;
    if (temp_a0_7 != 0) {
        func_00012EC0(temp_a0_7);
    }
    temp_a0_8 = arg0->unk9C;
    arg0->unk98 = 0;
    if (temp_a0_8 != 0) {
        func_0001BF98(temp_a0_8);
    }
    temp_a0_9 = arg0->unkA0;
    arg0->unk9C = 0;
    if (temp_a0_9 != 0) {
        func_0001BF98(temp_a0_9);
    }
    arg0->unkA0 = 0;
    func_00022B64((u8 *)arg0 + 0xBC);
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E704);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024968);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000236C4);
#endif

#if FW_VERSION < 260
s32 func_00021790(s32 arg0) {
    if ((arg0 != 0) && (sceHVSlim_Library_3EDA77E7(arg0) > 0)) {
        sceHVNetfront_Module_D97D8CB2(sceHVSlim_Library_E459881C(arg0));
        sceHVSlim_Library_08549708(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024B40);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024BE8);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024C18);
#else
void func_00024C18(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0xC0) < 0) {
            func_0002476C((s32) temp_v0, 1);
        }
        func_00024618((s32) temp_v0, 0, 1);
        M2C_FIELD(temp_v0, s32 *, 0x284) = 1;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024CAC);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024ECC);
#else
void func_00024ECC(s32 arg0) {
    M2C_UNK (*temp_v0_2)(s32);
    struct Unk_func_00024ECC_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_0002481C(temp_v0);
    func_00010564((u8 *)func_00003D10() + 0x14DC, temp_v0->unk0);
    temp_v0_2 = temp_v0->unk27C;
    if (temp_v0_2 != NULL) {
        temp_v0_2(temp_v0->unk280);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
    func_000041C0();
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024F48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024F84);

s32 func_00024FB8(s32 arg0) {
    func_00024F84();
    func_00024F48(arg0);
    func_00022AF0(arg0 + 0xBC);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024FF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025134);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000252B4);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023EE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00023FC4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00021F68);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025398);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025470);
#endif

s32 func_000255F4(s32 arg0) {
    func_00025134(sceHVSlim_Library_896E55F6(arg0), 1);
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00026870(1);
    func_000267A8(0);
    return 0;
}

s32 func_00025640(void) {
    return 0;
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025648);
#else
s32 func_00025648(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    struct Unk_func_00025648_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_a0 = temp_v0->unkA8;
    if (temp_a0 != 0) {
        func_00047E10(temp_a0);
    }
    temp_a0_2 = temp_v0->unkAC;
    if (temp_a0_2 != 0) {
        func_00047E10(temp_a0_2);
    }
    temp_a0_3 = temp_v0->unkB4;
    if (temp_a0_3 != 0) {
        func_00047E10(temp_a0_3);
    }
    temp_a0_4 = temp_v0->unkB8;
    if (temp_a0_4 != 0) {
        func_00047E10(temp_a0_4);
    }
    temp_a0_5 = temp_v0->unk90;
    if (temp_a0_5 != 0) {
        func_00047E10(temp_a0_5);
    }
    temp_a0_6 = temp_v0->unk94;
    if (temp_a0_6 != 0) {
        func_00047E10(temp_a0_6);
    }
    temp_a0_7 = temp_v0->unk98;
    if (temp_a0_7 != 0) {
        func_00047E10(temp_a0_7);
    }
    temp_a0_8 = temp_v0->unk9C;
    if (temp_a0_8 != 0) {
        func_00047E10(temp_a0_8);
    }
    temp_a0_9 = temp_v0->unkA0;
    if (temp_a0_9 != 0) {
        func_00047E10(temp_a0_9);
    }
    func_00022A38((u8 *)temp_v0 + 0xBC);
    func_00010730((u8 *)func_00003D10() + 0x14DC, temp_v0->unk0);
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00026870(0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002575C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025828);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025960);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025AC4);

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_00025BD8(s32 arg0, struct Unk_func_00025BD8_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14DC], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttpFlushAuthList();
            sceHttp_DD6E7857();
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 func_00025BD8(s32 arg0, struct Unk_func_00025BD8_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14D8], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttpFlushAuthList();
            sceHttp_DD6E7857();
        }
    }
    return 0;
}
#endif

#if FW_VERSION < 260
s32 func_00025BD8(s32 arg0, struct Unk_func_00025BD8_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14D4], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttpFlushAuthList();
            sceHttp_DD6E7857();
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_00025BD8(s32 arg0, struct Unk_func_00025BD8_1 *arg1) {
    void *temp_s1;
    struct Unk_func_00025BD8_temp_v0 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            temp_v0->unk25C = func_0003E4A0(temp_v0->unk0, 3, 0);
            func_00010A68(temp_s1 + 0x14DC, temp_v0->unk0);
            temp_v0->unk274 = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttpFlushAuthList();
            sceHttp_DD6E7857();
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_00025C84(s32 arg0, struct Unk_func_00025C84_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14DC], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHttp_B0257723();
            sceHVSlim_Library_B29BE9CE(arg0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 func_00025C84(s32 arg0, struct Unk_func_00025C84_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14D8], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHttp_B0257723();
            sceHVSlim_Library_B29BE9CE(arg0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION < 260
s32 func_00025C84(s32 arg0, struct Unk_func_00025C84_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14D4], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHttp_B0257723();
            sceHVSlim_Library_B29BE9CE(arg0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_00025C84(s32 arg0, struct Unk_func_00025C84_1 *arg1) {
    void *temp_s1;
    struct Unk_func_00025C84_temp_v0 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            temp_v0->unk25C = func_0003E4A0(temp_v0->unk0, 3, 0);
            func_00010A68(temp_s1 + 0x14DC, temp_v0->unk0);
            temp_v0->unk274 = 0x32;
            sceHttp_B0257723();
            sceHVSlim_Library_B29BE9CE(arg0);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_00025D24(s32 arg0, struct Unk_func_00025D24_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14DC], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttp_457D221D();
            sceHttpSaveSystemCookie();
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 func_00025D24(s32 arg0, struct Unk_func_00025D24_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14D8], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttp_457D221D();
            sceHttpSaveSystemCookie();
        }
    }
    return 0;
}
#endif

#if FW_VERSION < 260
s32 func_00025D24(s32 arg0, struct Unk_func_00025D24_1 *arg1) {
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            M2C_FIELD(temp_v0, s32 *, 0x25C) = func_0003E4A0(M2C_FIELD(temp_v0, s32 *, 0), 3, 0);
            func_00010A68(&temp_s1->pad0[0x14D4], M2C_FIELD(temp_v0, s32 *, 0));
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttp_457D221D();
            sceHttpSaveSystemCookie();
        }
    }
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_00025D24(s32 arg0, struct Unk_func_00025D24_1 *arg1) {
    void *temp_s1;
    struct Unk_func_00025D24_temp_v0 *temp_v0;

    if (arg1->unk10 == 4) {
        if (arg1->unk14 == 1) {
            temp_s1 = func_00003D10();
            temp_v0 = sceHVSlim_Library_896E55F6(arg0);
            temp_v0->unk25C = func_0003E4A0(temp_v0->unk0, 3, 0);
            func_00010A68(temp_s1 + 0x14DC, temp_v0->unk0);
            temp_v0->unk274 = 0x32;
            sceHVSlim_Library_B29BE9CE(arg0);
            sceHttp_457D221D();
            sceHttpSaveSystemCookie();
        }
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025DD0);

s32 func_00026108(void) {
    return 0;
}

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_00026110(s32 arg0) {
    s32 temp_v0;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    if (M2C_FIELD(temp_s0, s32 *, 0x25C) != 0) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x274);
        if (temp_v0 > 0) {
            M2C_FIELD(temp_s0, s32 *, 0x274) = (s32) (temp_v0 - 1);
        } else {
            func_00047C48((s32) &func_000205D4);
            func_0003E480(M2C_FIELD(temp_s0, s32 *, 0x25C));
            func_00010A88((s32) &temp_s1->pad0[0x14DC], M2C_FIELD(temp_s0, s32 *, 0));
            M2C_FIELD(temp_s0, s32 *, 0x25C) = 0;
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
s32 func_00026110(s32 arg0) {
    s32 temp_v0;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    if (M2C_FIELD(temp_s0, s32 *, 0x25C) != 0) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x274);
        if (temp_v0 > 0) {
            M2C_FIELD(temp_s0, s32 *, 0x274) = (s32) (temp_v0 - 1);
        } else {
            func_00047C48((s32) &func_000205D4);
            func_0003E480(M2C_FIELD(temp_s0, s32 *, 0x25C));
            func_00010A88((s32) &temp_s1->pad0[0x14D8], M2C_FIELD(temp_s0, s32 *, 0));
            M2C_FIELD(temp_s0, s32 *, 0x25C) = 0;
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION < 260
s32 func_00026110(s32 arg0) {
    s32 temp_v0;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    if (M2C_FIELD(temp_s0, s32 *, 0x25C) != 0) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x274);
        if (temp_v0 > 0) {
            M2C_FIELD(temp_s0, s32 *, 0x274) = (s32) (temp_v0 - 1);
        } else {
            func_00047C48((s32) &func_000205D4);
            func_0003E480(M2C_FIELD(temp_s0, s32 *, 0x25C));
            func_00010A88((s32) &temp_s1->pad0[0x14D4], M2C_FIELD(temp_s0, s32 *, 0));
            M2C_FIELD(temp_s0, s32 *, 0x25C) = 0;
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_00026110(s32 arg0) {
    s32 temp_v0;
    struct Unk_func_00026110_temp_s0 *temp_s0;
    void *temp_s1;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    if (temp_s0->unk25C != 0) {
        temp_v0 = temp_s0->unk274;
        if (temp_v0 > 0) {
            temp_s0->unk274 = (s32) (temp_v0 - 1);
        } else {
            func_00047C48((s32) &func_00023838);
            func_0003E480(temp_s0->unk25C);
            func_00010A88((s32) (temp_s1 + 0x14DC), temp_s0->unk0);
            temp_s0->unk25C = 0;
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000261A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026278);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000262D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000262FC);

s32 func_00026320(void) {
    return D_00061018 != 2;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026334);

s32 func_00026354(void) {
    void *sp0;
    return (sceHVNetfront_Module_E3D7CBBF(0, &sp0, 0, sceHVSlim_Library_D9FE99F5) == 0) ? 0 : sp0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002638C);

s32 func_000263C4(void) {
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = func_0002638C();
    if (temp_v0 != 0) {
        var_s1 = sceHVSlim_Library_3EDA77E7(temp_v0) != 0;
        sceHVSlim_Library_0D525122(temp_v0);
    }
    return var_s1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026414);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002649C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026540);

s32 func_000265F8(s32 arg0) {
    s32 var_s1;
    s32 var_v0;
    struct Unk_func_000265F8_temp_v0 *temp_v0;

    var_v0 = 0;
    var_s1 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unk284 != 0) {
            var_s1 = func_00026414(temp_v0, 0);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = var_s1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002665C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000266C8);
#else
s32 func_000266C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v0;
    struct Unk_func_000266C8_temp_v0_2 *temp_v0_2;

    temp_v0 = func_00024CAC(0, arg0, arg1, arg2, arg3);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0);
        temp_v0_2->unk278 = 0;
        func_00010670((u8 *)func_00003D10() + 0x14DC, temp_v0_2->unk0);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026748);
#else
void func_00026748(s32 arg0) {
    struct Unk_func_00026748_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        func_00015EFC(temp_v0->unkB4);
        func_000106D0((u8 *)func_00003D10() + 0x14DC, temp_v0->unk0);
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000267A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026870);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000268BC);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000248FC);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000234D8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026AC4);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E794);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E79C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7B4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7BC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026B64);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026E84);
#else
void func_00026E84(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_10;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_a1_9;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;
    struct Unk_func_00026E84_temp_v0 *temp_v0;
    void *var_s1;

    temp_s1 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_a1 = temp_v0->unkBC;
        if (temp_a1 != 0) {
            func_0000AE28(temp_s1, temp_a1);
            temp_v0->unkBC = 0;
        }
        temp_a1_2 = temp_v0->unkC0;
        if (temp_a1_2 != 0) {
            func_0000AE28(temp_s1, temp_a1_2);
            temp_v0->unkC0 = 0;
        }
        temp_a1_3 = temp_v0->unkC4;
        if (temp_a1_3 != 0) {
            func_0000AE28(temp_s1, temp_a1_3);
            temp_v0->unkC4 = 0;
        }
        temp_a1_4 = temp_v0->unkB8;
        if (temp_a1_4 != 0) {
            func_0000AE44(temp_s1, temp_a1_4);
            temp_v0->unkB8 = 0;
        }
        temp_a1_5 = temp_v0->unkCC;
        if (temp_a1_5 != 0) {
            func_0000AE28(temp_s1, temp_a1_5);
            temp_v0->unkCC = 0;
        }
        temp_a1_6 = temp_v0->unkC8;
        if (temp_a1_6 != 0) {
            func_0000AE44(temp_s1, temp_a1_6);
            temp_v0->unkC8 = 0;
        }
        temp_a1_7 = temp_v0->unk104;
        if (temp_a1_7 != 0) {
            func_0000AE28(temp_s1, temp_a1_7);
            temp_v0->unk104 = 0;
        }
        temp_a1_8 = temp_v0->unk100;
        if (temp_a1_8 != 0) {
            func_0000AE44(temp_s1, temp_a1_8);
            temp_v0->unk100 = 0;
        }
        temp_a1_9 = temp_v0->unkB4;
        if (temp_a1_9 != 0) {
            func_0000AE28(temp_s1, temp_a1_9);
            temp_v0->unkB4 = 0;
        }
        temp_a1_10 = temp_v0->unkB0;
        if (temp_a1_10 != 0) {
            func_0000AE44(temp_s1, temp_a1_10);
            temp_v0->unkB0 = 0;
        }
        temp_a0 = temp_v0->unk154;
        var_s1 = temp_v0;
        if (temp_a0 != 0) {
            func_00026748(temp_a0);
        }
        var_s2 = 2;
        do {
            temp_v0_2 = M2C_FIELD(var_s1, s32 *, 0x15C);
            var_s2 -= 1;
            if (temp_v0_2 != 0) {
                sceHVSlim_Library_0D525122(temp_v0_2);
            }
            temp_v0_3 = M2C_FIELD(var_s1, s32 *, 0x160);
            var_s1 += 0x18;
            if (temp_v0_3 != 0) {
                sceHVSlim_Library_0D525122(temp_v0_3);
            }
        } while (var_s2 >= 0);
        temp_a0_2 = temp_v0->unk1CC;
        if (temp_a0_2 != 0) {
            sceHVSlim_Library_0D525122(temp_a0_2);
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
    func_0000427C();
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027044);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002723C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000272F8);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000274E0);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_000253F4(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    sceHVNetfront_Module_831B4A41();
    M2C_FIELD(temp_s0, s32 *, 0x1BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1BC) + 1);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_000253F4(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    sceHVNetfront_Module_831B4A41();
    M2C_FIELD(temp_s0, s32 *, 0x1B8) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x1B8) + 1);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00025428(void **arg0) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x1BC) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x1BC) - 1);
    sceHVNetfront_Module_6F1E32E6();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00025428(void **arg0) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0x1B8) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x1B8) - 1);
    sceHVNetfront_Module_6F1E32E6();
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00025450(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    if (M2C_FIELD(temp_s0, s32 *, 0x1BC) > 0) {
        do {
            func_00025428(arg0);
        } while (M2C_FIELD(temp_s0, s32 *, 0x1BC) > 0);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_00025450(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    if (M2C_FIELD(temp_s0, s32 *, 0x1B8) > 0) {
        do {
            func_00025428(arg0);
        } while (M2C_FIELD(temp_s0, s32 *, 0x1B8) > 0);
    }
}
#endif

#if FW_VERSION == 303
s32 func_000274E0(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a1_8;
    s32 temp_s1;
    struct Unk_func_000274E0_temp_v0 *temp_v0;

    temp_s1 = (u8 *)func_00003D10() + 0x14DC;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_a1 = temp_v0->unkBC;
        if (temp_a1 != 0) {
            func_0000AE28(temp_s1, temp_a1);
            temp_v0->unkBC = 0;
        }
        temp_a1_2 = temp_v0->unkC0;
        if (temp_a1_2 != 0) {
            func_0000AE28(temp_s1, temp_a1_2);
            temp_v0->unkC0 = 0;
        }
        temp_a1_3 = temp_v0->unkC4;
        if (temp_a1_3 != 0) {
            func_0000AE28(temp_s1, temp_a1_3);
            temp_v0->unkC4 = 0;
        }
        temp_a1_4 = temp_v0->unkB8;
        if (temp_a1_4 != 0) {
            func_0000AE44(temp_s1, temp_a1_4);
            temp_v0->unkB8 = 0;
        }
        temp_a1_5 = temp_v0->unkCC;
        if (temp_a1_5 != 0) {
            func_0000AE28(temp_s1, temp_a1_5);
            temp_v0->unkCC = 0;
        }
        temp_a1_6 = temp_v0->unkC8;
        if (temp_a1_6 != 0) {
            func_0000AE44(temp_s1, temp_a1_6);
            temp_v0->unkC8 = 0;
        }
        temp_a1_7 = temp_v0->unk104;
        if (temp_a1_7 != 0) {
            func_0000AE28(temp_s1, temp_a1_7);
            temp_v0->unk104 = 0;
        }
        temp_a1_8 = temp_v0->unk100;
        if (temp_a1_8 != 0) {
            func_0000AE44(temp_s1, temp_a1_8);
            temp_v0->unk100 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}

void func_000275F0(void **arg0) {
    struct Unk_func_000275F0_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    sceHVNetfront_Module_831B4A41();
    temp_s0->unk1BC = (s32) (temp_s0->unk1BC + 1);
}

void func_00027624(void **arg0) {
    struct Unk_func_00027624_temp_v1 *temp_v1;

    temp_v1 = *arg0;
    temp_v1->unk1BC = (s32) (temp_v1->unk1BC - 1);
    sceHVNetfront_Module_6F1E32E6();
}

void func_0002764C(void **arg0) {
    struct Unk_func_0002764C_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0->unk1BC > 0) {
        do {
            func_00027624(arg0);
        } while (temp_s0->unk1BC > 0);
    }
}
#endif

s32 func_00027694(void **arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_func_00027694_temp_v0_2 *temp_v0_2;

    temp_v0_2 = *arg0;
    temp_v0 = temp_v0_2->unkD0;
    temp_v1 = temp_v0_2->unkD4;
    if (arg1 != 0) {
        return (s32) (temp_v0 + 1) % temp_v1;
    }
    return (s32) ((temp_v0 + temp_v1) - 1) % temp_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000276E0);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026BB0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000278C0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027930);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E7F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E804);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E818);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027B8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027CB8);

s32 func_00027D84(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027D8C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000246A4);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000274F8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002493C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027EA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002820C);
#endif

s32 func_000283B4(s32 arg0) {
    sceHVNetfront_Module_A777EA56(sceHVSlim_Library_E459881C());
    sceHVSlim_Library_08549708(arg0);
    sceHVSlim_Library_0D525122(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000283F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028414);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028488);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000284CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028554);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00024D3C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025BA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025C18);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00025D9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028608);
#endif

#if FW_VERSION >= 280
void func_00028608(void) {
    s32 temp_s0;

    temp_s0 = func_00003D10()->unk1B3C;
    if (temp_s0 != 0) {
        func_0002665C(sceHVSlim_Library_896E55F6(temp_s0)->unk154, 2);
        sceHVSlim_Library_B29BE9CE(temp_s0);
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
void func_00028608(void) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(func_00003D10(), s32 *, 0x1B38);
    if (temp_s0 != 0) {
        func_0002665C(sceHVSlim_Library_896E55F6(temp_s0)->unk154, 2);
        sceHVSlim_Library_B29BE9CE(temp_s0);
    }
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005C900);
#endif

#if FW_VERSION == 250
void func_00028608(void) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(func_00003D10(), s32 *, 0x1B34);
    if (temp_s0 != 0) {
        func_0002665C(sceHVSlim_Library_896E55F6(temp_s0)->unk154, 2);
        sceHVSlim_Library_B29BE9CE(temp_s0);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000578CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000578D8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000260A0);

void func_00026514(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unk154 >= 0) {
            temp_v0->unk154 = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION < 271 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E850);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E854);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E860);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E864);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000262EC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00026FC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027118);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000272A8);

void func_0002756C(s32 arg0) {
    sceHVSlim_Library_896E55F6(arg0)->unk154 = 0;
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000290F4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002759C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_00028928(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    func_00003D10()->unk1C20 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x158) >= 0) {
            M2C_FIELD(temp_v0, s32 *, 0x158) = 0;
        } else if (arg1 != 0) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x1CC);
            if (temp_v0_2 != 0) {
                sceHVSlim_Library_0D525122(temp_v0_2);
            }
            M2C_FIELD(temp_v0, s32 *, 0x1CC) = sceHVSlim_Library_27D353B1(arg1);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION == 271
void func_00028928(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    M2C_FIELD(func_00003D10(), s32 *, 0x1C14) = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x158) >= 0) {
            M2C_FIELD(temp_v0, s32 *, 0x158) = 0;
        } else if (arg1 != 0) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x1CC);
            if (temp_v0_2 != 0) {
                sceHVSlim_Library_0D525122(temp_v0_2);
            }
            M2C_FIELD(temp_v0, s32 *, 0x1CC) = sceHVSlim_Library_27D353B1(arg1);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION == 260
void func_00028928(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    M2C_FIELD(func_00003D10(), s32 *, 0x1C14) = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x158) >= 0) {
            M2C_FIELD(temp_v0, s32 *, 0x158) = 0;
        } else if (arg1 != 0) {
            temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x1C0);
            if (temp_v0_2 != 0) {
                sceHVSlim_Library_0D525122(temp_v0_2);
            }
            M2C_FIELD(temp_v0, s32 *, 0x1C0) = sceHVSlim_Library_27D353B1(arg1);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
void func_000289BC(s32 arg0) {
    void *sp0;
    s32 sp4;

    if (func_00000684(0x800) == 0) {
        sceHVNetfront_Module_DCF92220(&sp0, &sp4);
        if (arg0 != 0) {
            sceHVNetfront_Module_07C7E121();
            return;
        }
        sceHVNetfront_Module_5575313B();
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
void func_000289BC(s32 arg0) {
    void *sp0;
    s32 sp4;

    sceHVNetfront_Module_DCF92220(&sp0, &sp4);
    if (arg0 != 0) {
        sceHVNetfront_Module_07C7E121();
        return;
    }
    sceHVNetfront_Module_5575313B();
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028A08);
#endif

#if FW_VERSION == 250
void func_00027A80(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    M2C_FIELD(func_00003D10(), s32 *, 0x1C0C) = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x158) >= 0) {
            M2C_FIELD(temp_v0, s32 *, 0x158) = 0;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027AD4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028B84);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027BA4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00027DEC);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002909C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000293AC);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0002940C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1CC);
    if (temp_v0 != 0) {
        if (sceHVSlim_Library_3EDA77E7(temp_v0) > 0) {
            temp_v0_2 = sceHVSlim_Library_E459881C(M2C_FIELD(arg0, s32 *, 0x1CC));
            if (temp_v0_2 != 0) {
                sceHVNetfront_Module_D97D8CB2(temp_v0_2);
            }
            sceHVSlim_Library_08549708(M2C_FIELD(arg0, s32 *, 0x1CC));
        }
    }
}
#endif

#if FW_VERSION == 260
void func_0002940C(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C0);
    if (temp_v0 != 0) {
        if (sceHVSlim_Library_3EDA77E7(temp_v0) > 0) {
            temp_v0_2 = sceHVSlim_Library_E459881C(M2C_FIELD(arg0, s32 *, 0x1C0));
            if (temp_v0_2 != 0) {
                sceHVNetfront_Module_D97D8CB2(temp_v0_2);
            }
            sceHVSlim_Library_08549708(M2C_FIELD(arg0, s32 *, 0x1C0));
        }
    }
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002A19C);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_0002A1EC(s32 arg0) {
    s32 temp_s0;
    s32 var_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s2 = 0;
    temp_s0 = func_00003D10()->unk1B3C;
    if ((temp_s0 != 0) & (arg0 != 0)) {
        temp_v0 = sceHVSlim_Library_896E55F6(temp_s0);
        if (M2C_FIELD(temp_v0, s32 *, 0x1A8) == 0) {
            M2C_FIELD(temp_v0, s32 *, 0x1A8) = arg0;
            var_s2 = 1;
        }
        sceHVSlim_Library_B29BE9CE(temp_s0);
    }
    return var_s2;
}
#endif

#if FW_VERSION == 271
s32 func_0002A1EC(s32 arg0) {
    s32 temp_s0;
    s32 var_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s2 = 0;
    temp_s0 = M2C_FIELD(func_00003D10(), s32 *, 0x1B38);
    if ((temp_s0 != 0) & (arg0 != 0)) {
        temp_v0 = sceHVSlim_Library_896E55F6(temp_s0);
        if (M2C_FIELD(temp_v0, s32 *, 0x1A8) == 0) {
            M2C_FIELD(temp_v0, s32 *, 0x1A8) = arg0;
            var_s2 = 1;
        }
        sceHVSlim_Library_B29BE9CE(temp_s0);
    }
    return var_s2;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028010);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00052D54);
#endif

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00052DC8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028654);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000296E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00029884);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00029A10);

void func_00029E28(s32 arg0) {
    sceHVSlim_Library_896E55F6(arg0)->unk154 = 0;
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00029E58);

void func_0002A3D4(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    struct Unk_func_0002A3D4_temp_v0 *temp_v0;

    func_00003D10()->unk1C20 = 0;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unk158 >= 0) {
            temp_v0->unk158 = 0;
        } else if (arg1 != 0) {
            temp_v0_2 = temp_v0->unk1CC;
            if (temp_v0_2 != 0) {
                sceHVSlim_Library_0D525122(temp_v0_2);
            }
            temp_v0->unk1CC = sceHVSlim_Library_27D353B1(arg1);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

void func_0002A468(s32 arg0) {
    void *sp0;
    M2C_UNK sp4;

    if (func_000006D0(0x800) == 0) {
        sceHVNetfront_Module_DCF92220(&sp0, &sp4);
        if (arg0 != 0) {
            sceHVNetfront_Module_07C7E121();
            return;
        }
        sceHVNetfront_Module_5575313B();
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002A4C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002A560);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002A65C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002A938);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002AB78);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002AE80);

void func_0002AEE0(struct Unk_func_0002AEE0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk1CC;
    if (temp_v0 != 0) {
        if (sceHVSlim_Library_3EDA77E7(temp_v0) > 0) {
            temp_v0_2 = sceHVSlim_Library_E459881C(arg0->unk1CC);
            if (temp_v0_2 != 0) {
                sceHVNetfront_Module_D97D8CB2(temp_v0_2);
            }
            sceHVSlim_Library_08549708(arg0->unk1CC);
        }
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002AF3C);

s32 func_0002AF8C(s32 arg0) {
    s32 temp_s0;
    s32 var_s2;
    struct Unk_func_0002AF8C_temp_v0 *temp_v0;

    var_s2 = 0;
    temp_s0 = func_00003D10()->unk1B3C;
    if ((temp_s0 != 0) & (arg0 != 0)) {
        temp_v0 = sceHVSlim_Library_896E55F6(temp_s0);
        if (temp_v0->unk1A8 == 0) {
            temp_v0->unk1A8 = arg0;
            var_s2 = 1;
        }
        sceHVSlim_Library_B29BE9CE(temp_s0);
    }
    return var_s2;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002B008);

s32 func_0002B9EC(s32 arg0) {
    struct Unk_func_0002B9EC_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkB4 == 3) {
        temp_v0->unkB4 = 4;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00003D4C(1);
    return 0;
}

void func_0002BA40(s32 arg0) {
    s32 temp_v1;
    struct Unk_func_0002BA40_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v1 = temp_v0->unkB4;
    if ((temp_v1 != 4) & (temp_v1 != 0)) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return;
    }
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

void func_0002BAAC(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_s2_2;
    struct Unk_func_0002BAAC_temp_v0 *temp_v0;
    void *var_s0;
    void *var_s0_2;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_a0 = temp_v0->unk4;
        if (temp_a0 != 0) {
            sceHVSlim_Library_0D525122(temp_a0);
        }
        temp_a0_2 = temp_v0->unk8;
        if (temp_a0_2 != 0) {
            sceHVSlim_Library_0D525122(temp_a0_2);
        }
        temp_v1 = temp_v0->unk14;
        if ((u32) (temp_v1 - 1) < 5U) {
            var_s2 = 0;
            if (temp_v1 > 0) {
                var_s0 = temp_v0;
                do {
                    temp_v0_2 = M2C_FIELD(var_s0, s32 *, 0x1C);
                    var_s2 += 1;
                    if (temp_v0_2 != 0) {
                        temp_v0_3 = sceHVSlim_Library_896E55F6(temp_v0_2)->unkC;
                        if (temp_v0_3 != 0) {
                            sceHVSlim_Library_0D525122(temp_v0_3);
                        }
                        sceHVSlim_Library_B29BE9CE(M2C_FIELD(var_s0, s32 *, 0x1C));
                        sceHVSlim_Library_880239D0(M2C_FIELD(var_s0, s32 *, 0x1C));
                    }
                    var_s0 += 4;
                } while (var_s2 < temp_v0->unk14);
            }
        }
        temp_v1_2 = temp_v0->unk30;
        if ((u32) (temp_v1_2 - 1) < 3U) {
            var_s2_2 = 0;
            if (temp_v1_2 > 0) {
                var_s0_2 = temp_v0;
                do {
                    temp_v0_4 = M2C_FIELD(var_s0_2, s32 *, 0x34);
                    var_s2_2 += 1;
                    if (temp_v0_4 != 0) {
                        temp_v0_5 = sceHVSlim_Library_896E55F6(temp_v0_4)->unk4;
                        if (temp_v0_5 != 0) {
                            sceHVSlim_Library_0D525122(temp_v0_5);
                        }
                        sceHVSlim_Library_B29BE9CE(M2C_FIELD(var_s0_2, s32 *, 0x34));
                        sceHVSlim_Library_880239D0(M2C_FIELD(var_s0_2, s32 *, 0x34));
                    }
                    var_s0_2 += 4;
                } while (var_s2_2 < temp_v0->unk30);
            }
        }
        if (temp_v0 != NULL) {
            sceHVSlim_Library_B29BE9CE(arg0);
        }
        sceHVSlim_Library_880239D0(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002BC08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002BC60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002BEDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002C068);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002C198);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002A6D4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002775C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002C25C);
#endif

#if FW_VERSION >= 260
void func_0002C39C(struct Unk_func_0002C39C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk12C;
    if (temp_v0 == 0) {
        arg0->unk12C = func_0003C8DC(arg0->unk0, 2, 0, 0, 0, arg0->unk124, arg0->unk128);
        return;
    }
    func_0003C8BC(temp_v0);
    arg0->unk12C = 0;
}
#else
void func_0002C39C(struct Unk_func_0002C39C_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk128;
    if (temp_v0 == 0) {
        arg0->unk128 = func_0003C8DC(arg0->unk0, 2, 0, 0, 0, M2C_FIELD(arg0, s32 *, 0x120), arg0->unk124);
        return;
    }
    func_0003C8BC(temp_v0);
    arg0->unk128 = 0;
}
#endif

void func_0002C3FC(s32 arg0) {
    if (sceHVSlim_Library_896E55F6(arg0)->unkB4 == 2) {
        func_00047E10(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E91C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E920);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002C440);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CC14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CCC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CD3C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00028164);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CDA4);
#endif

#if FW_VERSION >= 271
s32 func_0002CF38(void) {
    s32 temp_v0;

    temp_v0 = func_0002CFB8();
    if (temp_v0 >= 0) {
        sceHVNetfront_Module_BB2076F2(temp_v0, 1);
    }
    return 0;
}
#else
s32 func_0002CF38(void) {
    sceHVNetfront_Module_BB2076F2(func_0002CFB8(), 1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CF6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CFB8);

void func_0002CFDC(s32 arg0) {
    func_0002CF6C(0, 1, arg0);
}

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0002C260(s32 arg0) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0)->unkB4 = 2;
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVNetfront_Module_BB2076F2(0xE, 0);
        func_0002C3FC(arg0);
    }
}
#endif

#if FW_VERSION == 303
void func_0002D000(s32 arg0) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0)->unkB4 = 2;
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVNetfront_Module_BB2076F2(0xE, 0);
        func_0002C3FC(arg0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D050);

void func_0002D254(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v1;
    struct Unk_func_0002D254_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v1 = temp_v0->unkA8;
    if ((temp_v1 != 5) & (temp_v1 != 0)) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return;
    }
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_880239D0(temp_v0->unkB0);
    temp_v0_2 = temp_v0->unk98;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_0D525122(temp_v0_2);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D2E8);
#else
s32 func_0002D2E8(s32 arg0) {
    struct Unk_func_0002D2E8_temp_s0 *temp_s0;
    void *temp_s1;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = (u8 *)func_00003D10() + 0x14DC;
    if (temp_s0->unkA8 == 0) {
        func_0002F35C(temp_s0->unkB0, 0);
        temp_s0->unkA8 = 1;
        func_00010A68(temp_s1, temp_s0->unk0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

void func_0002D35C(s32 arg0) {
    struct Unk_func_0002D35C_temp_a0 *temp_a0;
    struct Unk_func_0002D35C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_a0 = sceHVSlim_Library_896E55F6(temp_v0->unkB0);
    if (temp_v0->unkA4 == 7) {
        func_00015EFC(temp_a0->unk170);
    }
    sceHVSlim_Library_B29BE9CE(temp_v0->unkB0);
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_0002D3C0(s32 arg0) {
    struct Unk_func_0002D3C0_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((u32) (temp_v0->unkA8 - 2) >= 2U) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_0002F99C(temp_v0->unkB0);
        func_0002F488(temp_v0->unkB0, 0);
        temp_v0->unkA8 = 4;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_0002D35C(arg0);
        func_00047E70(arg0);
    }
    return 0;
}

s32 func_0002D44C(s32 arg0) {
    struct Unk_func_0002D44C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA8 == 4) {
        func_0002F99C(temp_v0->unkB0);
        temp_v0->unkA8 = 5;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D4A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005ECC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D53C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D764);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EDCC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D8E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D98C);

void func_0002DAA4(s32 arg0) {
    if (arg0 != 0) {
        func_0002F99C(sceHVSlim_Library_896E55F6(arg0)->unkB0);
        sceHVSlim_Library_B29BE9CE(arg0);
        func_0002D35C(arg0);
        func_00047E10(arg0);
    }
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002DAF0);
#else
s32 func_0002DAF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0002D050(arg0, (s32) &D_0005EDCC, arg1, arg2);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVSlim_Library_896E55F6(temp_v0);
        func_00010670((u8 *)func_00003D10() + 0x14DC, *temp_s0);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002DB64);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E1CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE70);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE74);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE7C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE84);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D284);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D2B4);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D404);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D434);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CF38);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CF68);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005A74C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005A77C);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00057ED4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00057F04);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000532B0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000532E0);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EEBC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F2A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F35C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F410);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F488);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F534);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F5AC);

void func_0002F630(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0)->unkC;
        if (temp_v0 != 0) {
            sceHVSlim_Library_0D525122(temp_v0);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F680);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F7E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F848);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F8F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F99C);

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0002EC74(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0)->unk164;
        if (temp_v0 != 0) {
            func_0001463C(temp_v0, 0, -0x20, 0x20, 0x10);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CFC8);
#endif

#if FW_VERSION == 303
void func_0002FA30(s32 arg0) {
    s32 temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0)->unk164;
        if (temp_v0 != 0) {
            func_0001463C(temp_v0, 0, -0x20, 0x20, 0x10);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}
#endif

#if FW_VERSION < 271 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF1C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00057F68);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CFEC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CFF4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005CFFC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D014);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D02C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D044);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002ECCC);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002AD3C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FA88);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FC08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FC28);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FC9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FF88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FFDC);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002B4E8);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F514);
#endif

#if FW_VERSION < 271
s32 func_0002B680(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = func_0001941C(sceHVSlim_Library_896E55F6(temp_v0->unkD8)->unk170, arg1, arg2, arg3, arg4, arg0, 0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkD8);
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0002E884(void *arg0, s32 arg1, s32 arg2) {
    func_0001A618(sceHVSlim_Library_896E55F6(M2C_FIELD(arg0, s32 *, 0xE0))->unk170, arg1, arg2);
    sceHVSlim_Library_B29BE9CE(M2C_FIELD(arg0, s32 *, 0xE0));
}
#endif

#if FW_VERSION == 260
void func_0002E884(void *arg0, s32 arg1, s32 arg2) {
    func_0001A618(sceHVSlim_Library_896E55F6(M2C_FIELD(arg0, s32 *, 0xD8))->unk170, arg1, arg2);
    sceHVSlim_Library_B29BE9CE(M2C_FIELD(arg0, s32 *, 0xD8));
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030088);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030258);

void func_00030350(struct Unk_func_00030350_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0001A618(sceHVSlim_Library_896E55F6(arg0->unkE0)->unk170, arg1, arg2);
    sceHVSlim_Library_B29BE9CE(arg0->unkE0);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_000303A8(s32 arg0) {
    s32 temp_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = sceHVSlim_Library_896E55F6(temp_v0->unkE0)->unk170;
    func_00019E48(temp_s0);
    func_000181B0(temp_s0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkE0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_000303A8(s32 arg0) {
    s32 temp_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = sceHVSlim_Library_896E55F6(temp_v0->unkD8)->unk170;
    func_00019E48(temp_s0);
    func_000181B0(temp_s0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkD8);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_000303A8(s32 arg0) {
    s32 temp_s0;
    struct Unk_func_000303A8_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = sceHVSlim_Library_896E55F6(temp_v0->unkE0)->unk170;
    func_00019E48(temp_s0);
    func_000181B0(temp_s0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkE0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_00030410(s32 arg0) {
    s32 temp_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = sceHVSlim_Library_896E55F6(temp_v0->unkE0)->unk170;
    func_000181B0(temp_s0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkE0);
    func_000185A4(temp_s0, 0x14, 0x5A);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_00030410(s32 arg0) {
    s32 temp_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = sceHVSlim_Library_896E55F6(temp_v0->unkD8)->unk170;
    func_000181B0(temp_s0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkD8);
    func_000185A4(temp_s0, 0x14, 0x5A);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_00030410(s32 arg0) {
    s32 temp_s0;
    struct Unk_func_00030410_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = sceHVSlim_Library_896E55F6(temp_v0->unkE0)->unk170;
    func_000181B0(temp_s0);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkE0);
    func_000185A4(temp_s0, 0x14, 0x5A);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_00030480(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_v0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_v0 = -1;
    if (arg1 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_s1 = sceHVSlim_Library_896E55F6(temp_v0->unkE0)->unk170;
        func_000177CC(temp_s1, arg1);
        func_00019718(temp_s1, arg1);
        sceHVSlim_Library_B29BE9CE(temp_v0->unkE0);
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
s32 func_00030480(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_v0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_v0 = -1;
    if (arg1 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_s1 = sceHVSlim_Library_896E55F6(temp_v0->unkD8)->unk170;
        func_000177CC(temp_s1, arg1);
        func_00019718(temp_s1, arg1);
        sceHVSlim_Library_B29BE9CE(temp_v0->unkD8);
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION == 303
s32 func_00030480(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_v0;
    struct Unk_func_00030480_temp_v0 *temp_v0;

    var_v0 = -1;
    if (arg1 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_s1 = sceHVSlim_Library_896E55F6(temp_v0->unkE0)->unk170;
        func_000177CC(temp_s1, arg1);
        func_00019718(temp_s1, arg1);
        sceHVSlim_Library_B29BE9CE(temp_v0->unkE0);
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = 0;
    }
    return var_v0;
}
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030508);
#endif

#if FW_VERSION == 303
s32 func_00030508(struct Unk_func_00030508_0 *arg0, M2C_UNK arg1) {
    func_00013290(sceHVSlim_Library_896E55F6(arg0->unkE0)->unk16C, arg1);
    sceHVSlim_Library_B29BE9CE(arg0->unkE0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030554);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF5C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003072C);

s32 func_00030A40(s32 arg0) {
    s32 temp_v0_2;
    s32 var_s0;
    struct Unk_func_00030A40_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = func_0002FC9C(temp_v0);
    var_s0 = temp_v0_2;
    if (temp_v0_2 == 0) {
        if (temp_v0->unkB4 == 0) {
            var_s0 = func_00030554(arg0);
        } else {
            var_s0 = func_0003072C(arg0);
        }
    } else {
        func_00030E78(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return var_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030ACC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030BFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030C1C);

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_00030CE8(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    func_00047C48((s32) &func_00030BFC);
    func_0002F488(temp_s0->unkE0, 0);
    func_00047E70(arg0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_00030CE8(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    func_00047C48((s32) &func_00030BFC);
    func_0002F488(temp_s0->unkD8, 0);
    func_00047E70(arg0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_00030CE8(s32 arg0) {
    struct Unk_func_00030CE8_temp_s0 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    func_00047C48((s32) &func_00030BFC);
    func_0002F488(temp_s0->unkE0, 0);
    func_00047E70(arg0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

s32 func_00030D44(void) {
    return 0;
}

s32 func_00030D4C(s32 arg0, struct Unk_func_00030D4C_1 *arg1) {
    if (arg1->unk10 == 0x800) {
        func_00004408(2);
        func_00030EEC(arg0, 1);
    }
    if (arg1->unk10 == 0x400) {
        func_00004408(1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030DB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030E78);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030EEC);

s32 func_00030F40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    struct Unk_func_00030F40_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = func_000108B4(temp_v0->unk0, temp_v0->unkA0, arg1, arg2);
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030FA0);

void func_000311B0(void) {
    func_0002F5AC();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000311CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031290);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003133C);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030828);
#endif

#if FW_VERSION < 271
void func_0002C7D0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_880239D0(temp_v0->unkD8);
    temp_a0 = temp_v0->unkB0;
    if (temp_a0 != 0) {
        sceHVSlim_Library_0D525122(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0xA4);
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_2);
    }
    temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0xB8);
    if (temp_a0_3 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_3);
    }
    temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0xC0);
    if (temp_a0_4 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_4);
    }
    temp_a0_5 = M2C_FIELD(temp_v0, s32 *, 0xBC);
    if (temp_a0_5 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_5);
    }
    temp_a0_6 = temp_v0->unkC4;
    if (temp_a0_6 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_6);
    }
    temp_a0_7 = M2C_FIELD(temp_v0, s32 *, 0xD0);
    if (temp_a0_7 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_7);
    }
    temp_a0_8 = M2C_FIELD(temp_v0, s32 *, 0xD4);
    if (temp_a0_8 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_8);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003156C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031644);

void func_000316CC(s32 arg0) {
    if (arg0 != 0) {
        func_00047E10(arg0);
    }
}

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E78C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FC10);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000316EC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031708);
#endif

s32 func_00031740(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = sceHVNetfront_Module_D3206B42();
    *arg0 = temp_v0;
    return (temp_v0 >= 0) ? 0 : -1;
}

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031778);
#else
s32 func_00031778(s32 arg0, s32 arg1) {
    if (arg0 > 0) {
        func_000045D0();
    }
    if (arg1 > 0) {
        func_00004568(arg1);
    }
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E824);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E8C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E9A0);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030178);

s32 func_000302AC(void *arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x34);
    if (temp_s0 != NULL) {
        func_000026E4((s32) &func_0002FC10);
        if (M2C_FIELD(arg0, s32 *, 0x40) == 2) {
            temp_v0 = func_00031778(M2C_FIELD(temp_s0, s32 *, 8), M2C_FIELD(temp_s0, s32 *, 4));
            if (temp_v0 < 0) {
                func_0002E78C(temp_v0);
            }
        }
        M2C_FIELD(arg0, void **, 0x34) = NULL;
    }
    return 0;
}

s32 func_00030320(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030330);

s32 func_0003038C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) != 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002EC10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002ECA0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002C9E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CA68);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CB1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CCD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CD3C_v201);
#endif

#if FW_VERSION == 250
s32 func_0002CD7C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        sceHVSlim_Library_E459881C(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
s32 func_0002CD7C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sceHVSlim_Library_E459881C(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002CDB0);
#endif

#if FW_VERSION == 250
s32 func_0002CE40(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        sceHVSlim_Library_08549708(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
s32 func_0002CE40(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 != 0) {
        sceHVSlim_Library_08549708(temp_v0);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002EDE8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000317B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003185C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031934);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031C78);

s32 func_00031DAC(struct Unk_func_00031DAC_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_00031DAC_temp_s0 *temp_s0;

    temp_s0 = arg0->unk34;
    if (temp_s0 != NULL) {
        func_000029C0((s32) &func_00031708);
        if (arg0->unk40 == 2) {
            temp_v0 = func_00031778(temp_s0->unk8, temp_s0->unk4);
            if (temp_v0 < 0) {
                func_000316EC(temp_v0);
            }
        }
        arg0->unk34 = NULL;
    }
    return 0;
}

s32 func_00031E20(struct Unk_func_00031E20_0 *arg0) {
    return (arg0->unkC != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031E30);

s32 func_00031E8C(struct Unk_func_00031E8C_0 *arg0) {
    return (arg0->unkC != 0) ? 0 : -1;
}
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031E9C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031F2C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032088);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000320C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032124);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003219C);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031B24);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000314EC);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031A58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031AE0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F150);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D1B0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D49C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D518);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032248);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032650);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000326D8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032720);

s32 func_00032778(s32 arg0) {
    s32 temp_s0;
    s32 var_v1;

    temp_s0 = func_0004AF50(sceHVSlim_Library_E459881C(), 1, 0);
    sceHVSlim_Library_08549708(arg0);
    var_v1 = 0;
    if (temp_s0 != -1) {
        func_0004B25C(temp_s0, 0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF98);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D698);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002D920);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000327E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032AFC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032D74);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032EB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032FEC);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002DE08);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032484);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033060);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000330F8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000331F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003327C);

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_0003009C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (func_0003327C(temp_v0, 0) < 0) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return -1;
    }
    if (M2C_FIELD(temp_v0, s32 *, 0x108) & 0x04000000) {
        func_0002D920(arg0, temp_v0, 1);
    } else {
        func_0002F35C(M2C_FIELD(temp_v0, s32 *, 0xEC), 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVNetfront_Module_DB246B1D(1);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_0003009C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (func_0003327C(temp_v0, 0) < 0) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return -1;
    }
    if (M2C_FIELD(temp_v0, s32 *, 0x108) & 0x04000000) {
        func_0002D920(arg0, temp_v0, 1);
    } else {
        func_0002F35C(M2C_FIELD(temp_v0, s32 *, 0xEC), 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_000446E4((s32) &func_00032FEC, arg0);
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_0003009C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (func_0003327C(temp_v0, 0) < 0) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return -1;
    }
    if (!(M2C_FIELD(temp_v0, s32 *, 0xF8) & 0x500000)) {
        func_0002F35C(M2C_FIELD(temp_v0, s32 *, 0xDC), 0);
    }
    if (M2C_FIELD(temp_v0, s32 *, 0xF8) & 0x500000) {
        func_0002D920(arg0, temp_v0, 1);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_0003EF08((s32) &func_00032FEC, arg0);
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_0002DFEC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (func_0003327C(temp_v0, 0) < 0) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return -1;
    }
    func_0002F35C(M2C_FIELD(temp_v0, s32 *, 0xDC), 0);
    sceHVSlim_Library_B29BE9CE(arg0);
    func_0003EF08((s32) &func_00032FEC, arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033348);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
void func_00033408(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (!(M2C_FIELD(temp_v0, s32 *, 0x108) & 0x04000000)) {
        func_00015EFC(sceHVSlim_Library_896E55F6(M2C_FIELD(temp_v0, s32 *, 0xEC))->unk16C);
        sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0xEC));
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 250
void func_00033408(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (!(M2C_FIELD(temp_v0, s32 *, 0xF8) & 0x500000)) {
        func_00015EFC(sceHVSlim_Library_896E55F6(M2C_FIELD(temp_v0, s32 *, 0xDC))->unk16C);
        sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0xDC));
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 201
void func_00033408(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_00015EFC(sceHVSlim_Library_896E55F6(M2C_FIELD(temp_v0, s32 *, 0xDC))->unk16C);
    sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0xDC));
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 303
void func_00033408(s32 arg0) {
    struct Unk_func_00033408_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (!(temp_v0->unk108 & 0x04000000)) {
        func_00015EFC(sceHVSlim_Library_896E55F6(temp_v0->unkEC)->unk16C);
        sceHVSlim_Library_B29BE9CE(temp_v0->unkEC);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
s32 func_0003346C(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s1;

    temp_s1 = sceHVSlim_Library_896E55F6(arg0);
    func_00033CA8(arg0, 4, 0x3C2);
    func_00047C48((s32) &func_00032FEC);
    func_00033408(arg0);
    if (!(M2C_FIELD(temp_s1, s32 *, 0x108) & 0x04000000)) {
        func_0002F488(M2C_FIELD(temp_s1, s32 *, 0xEC), 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00047E70(arg0);
    return 0;
}
#endif

#if FW_VERSION == 250
s32 func_0003346C(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s1;

    temp_s1 = sceHVSlim_Library_896E55F6(arg0);
    func_00033CA8(arg0, 4, 0x3C2);
    func_00047C48((s32) &func_00032FEC);
    func_00033408(arg0);
    if (!(M2C_FIELD(temp_s1, s32 *, 0xF8) & 0x500000)) {
        func_0002F488(M2C_FIELD(temp_s1, s32 *, 0xDC), 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00047E70(arg0);
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_0003346C(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s1;

    temp_s1 = sceHVSlim_Library_896E55F6(arg0);
    func_00033CA8(arg0, 4, 0x3C2);
    func_00047C48((s32) &func_00032FEC);
    func_00033408(arg0);
    func_0002F488(M2C_FIELD(temp_s1, s32 *, 0xDC), 0);
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00047E70(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_0003346C(s32 arg0) {
    struct Unk_func_0003346C_temp_s1 *temp_s1;

    temp_s1 = sceHVSlim_Library_896E55F6(arg0);
    func_00033CA8(arg0, 4, 0x3C2);
    func_00047C48((s32) &func_00032FEC);
    func_00033408(arg0);
    if (!(temp_s1->unk108 & 0x04000000)) {
        func_0002F488(temp_s1->unkEC, 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00047E70(arg0);
    return 0;
}
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000334F0);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
s32 func_000334F0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    temp_v0 = temp_s0->unkD8;
    if (temp_v0 > 0) {
        sceKernelWaitThreadEnd(temp_v0, 0);
        sceKernelDeleteThread(temp_s0->unkD8);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C40);
        temp_s0->unkD8 = -1;
        if (temp_v1 != 0) {
            func_0004BAE8(temp_v1);
            sceHVSlim_Library_A2F4AC9E(M2C_FIELD(temp_s1, s32 *, 0x1C40));
        }
        M2C_FIELD(temp_s1, s32 *, 0x1C40) = 0;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVNetfront_Module_DB246B1D(0);
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_000334F0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    temp_v0 = temp_s0->unkD8;
    if (temp_v0 > 0) {
        sceKernelWaitThreadEnd(temp_v0, 0);
        sceKernelDeleteThread(temp_s0->unkD8);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C34);
        temp_s0->unkD8 = -1;
        if (temp_v1 != 0) {
            func_0004BAE8(temp_v1);
            sceHVSlim_Library_A2F4AC9E(M2C_FIELD(temp_s1, s32 *, 0x1C34));
        }
        M2C_FIELD(temp_s1, s32 *, 0x1C34) = 0;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVNetfront_Module_DB246B1D(0);
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_000334F0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    temp_v0 = temp_s0->unkD8;
    if (temp_v0 > 0) {
        sceKernelWaitThreadEnd(temp_v0, 0);
        sceKernelDeleteThread(temp_s0->unkD8);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C34);
        temp_s0->unkD8 = -1;
        if (temp_v1 != 0) {
            func_0004BAE8(temp_v1);
            sceHVSlim_Library_A2F4AC9E(M2C_FIELD(temp_s1, s32 *, 0x1C34));
        }
        M2C_FIELD(temp_s1, s32 *, 0x1C34) = 0;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 201
s32 func_000334F0(s32 arg0) {
    s32 temp_v1;
    struct Unk_ret_func_00003D10 *temp_s1;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkCC > 0) {
        temp_s1 = func_00003D10();
        sceKernelDeleteThread(temp_v0->unkCC);
        temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C2C);
        temp_v0->unkCC = -1;
        if (temp_v1 != 0) {
            func_0004BAE8(temp_v1);
            sceHVSlim_Library_A2F4AC9E(M2C_FIELD(temp_s1, s32 *, 0x1C2C));
        }
        M2C_FIELD(temp_s1, s32 *, 0x1C2C) = 0;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000302D4);
#endif

#if FW_VERSION == 303
s32 func_000334F0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_func_000334F0_temp_s0 *temp_s0;
    struct Unk_func_000334F0_temp_s1 *temp_s1;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = func_00003D10();
    temp_v0 = temp_s0->unkD8;
    if (temp_v0 > 0) {
        sceKernelWaitThreadEnd(temp_v0, 0);
        sceKernelDeleteThread(temp_s0->unkD8);
        temp_v1 = temp_s1->unk1C40;
        temp_s0->unkD8 = -1;
        if (temp_v1 != 0) {
            func_0004BAE8(temp_v1);
            sceHVSlim_Library_A2F4AC9E(temp_s1->unk1C40);
        }
        temp_s1->unk1C40 = 0;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVNetfront_Module_DB246B1D(0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E1B8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003358C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033738);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033798);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000337F8);

#if FW_VERSION >= 260
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F020);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E4DC);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000338F4);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033C0C);

#if FW_VERSION >= 260
void func_00033C54(struct Unk_func_00033C54_0 *arg0) {
    func_00033C0C(arg0->unkF0);
}
#else
void func_00033C54(struct Unk_func_00033C54_0 *arg0) {
    func_00033C0C(M2C_FIELD(arg0, s32 *, 0xE0));
}
#endif

#if FW_VERSION >= 260
void func_00033C70(struct Unk_func_00033C70_0 *arg0) {
    func_00033C0C(arg0->unkF4);
}
#else
void func_00033C70(struct Unk_func_00033C70_0 *arg0) {
    func_00033C0C(M2C_FIELD(arg0, s32 *, 0xE4));
}
#endif

#if FW_VERSION >= 260
void func_00033C8C(struct Unk_func_00033C8C_0 *arg0) {
    func_00033C0C(arg0->unkFC);
}
#else
void func_00033C8C(struct Unk_func_00033C8C_0 *arg0) {
    func_00033C0C(M2C_FIELD(arg0, s32 *, 0xEC));
}
#endif

s32 func_00033CA8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    struct Unk_func_00033CA8_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = func_000108B4(temp_v0->unk0, temp_v0->unkA0, arg1, arg2);
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033D08);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030B54);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002E9C4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033E8C);
#endif

void func_0003435C(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;

    temp_a0 = *arg0;
    func_000108B4(temp_a0, temp_a0, arg2, arg1);
}

void func_00034380(void) {
    func_0002F5AC();
}

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F020);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000580E8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003439C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034694);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000346B8);

#if FW_VERSION >= 260 && FW_VERSION < 303
s32 func_00031574(s32 arg0, void *arg1, s32 arg2) {
    func_00034694(arg1);
    M2C_FIELD(arg1, s32 *, 0xA0) = arg2;
    if ((M2C_FIELD(arg1, s32 *, 0x108) & 0x04000000) || (func_000346B8(arg0, arg1, arg2) >= 0)) {
        return 0;
    }
    func_00034694(arg1);
    return -1;
}
#endif

#if FW_VERSION == 250
s32 func_00031574(s32 arg0, void *arg1, s32 arg2) {
    func_00034694(arg1);
    M2C_FIELD(arg1, s32 *, 0xA0) = arg2;
    if ((M2C_FIELD(arg1, s32 *, 0xF8) & 0x500000) || (func_000346B8(arg0, arg1, arg2) >= 0)) {
        return 0;
    }
    func_00034694(arg1);
    return -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000315F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003198C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000330E8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031A24);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00058110);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000333F8);
#endif

#if FW_VERSION == 201
s32 func_0002F208(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    func_00034694(arg1);
    M2C_FIELD(arg1, s32 *, 0xA0) = arg2;
    var_v1 = 0;
    if (func_000346B8(arg0, arg1, arg2) < 0) {
        func_00034694(arg1);
        var_v1 = -1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F278);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F4D4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002F5F8);
#endif

#if FW_VERSION == 303
s32 func_000348B0(s32 arg0, struct Unk_func_000348B0_1 *arg1, s32 arg2) {
    func_00034694(arg1);
    arg1->unkA0 = arg2;
    if ((arg1->unk108 & 0x04000000) || (func_000346B8(arg0, arg1, arg2) >= 0)) {
        return 0;
    }
    func_00034694(arg1);
    return -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034934);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034D7C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034E14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035108);
#endif

void func_000352DC(s32 arg0) {
    if (arg0 != 0) {
        func_00033408(arg0);
        func_00047E10(arg0);
    }
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034668);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034674);
#endif

#if FW_VERSION == 303
s32 func_00035310(void) {
    return D_0006424C;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003531C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035378);

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_000353D4(void) {
    D_00063F9C = 0x2B4;
    func_00003AC4((s32) &D_00063F9C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_000353D4(void) {
    D_00063F9C = 0x2A8;
    func_00003AC4((s32) &D_00063F9C);
}
#endif

#if FW_VERSION == 201
void func_000353D4(void) {
    D_00063F9C = 0x2A0;
    func_00003AC4((s32) &D_00063F9C);
}
#endif

#if FW_VERSION == 303
void func_000353D4(void) {
    D_00063F9C = 0x3BC;
    func_00003AC4((s32) &D_00063F9C);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000353FC);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00031F7C);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003544C);
#endif

s32 func_00035778(void) {
    return func_00035798() > 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035798);

#if FW_VERSION >= 250 && FW_VERSION < 303
s32 func_000357A4(void) {
    return D_0005CC80;
}
#endif

#if FW_VERSION == 201
s32 func_000357A4(void) {
    return D_000577A0 != 0;
}
#endif

#if FW_VERSION == 303
s32 func_000357A4(void) {
    return D_000641A4;
}
#endif

#if FW_VERSION == 201
s32 func_0002FACC(void) {
    return D_000577A0 == 1;
}
#endif

M2C_UNK *func_000357B0(void) {
    return &D_000641A8;
}

u16 func_000357BC(void) {
    return D_00064228;
}

#if FW_VERSION < 260
void func_0002FAF8(void) {
    sceHVSlim_Library_27D353B1((s32) &D_00063FA0);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000357C8);

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035834);
#else
void func_00035834(s32 arg0) {
    func_000357C8(arg0, (s32) &func_00035908);
}
#endif

void func_00035860(s32 arg0) {
    func_00003D4C(0);
    func_000357C8(arg0, (s32) &func_00035D18);
}

void func_00035898(s32 arg0) {
    func_00003D4C(0);
    func_000357C8(arg0, (s32) &func_00035DF4);
}

void func_000358D0(s32 arg0) {
    func_00003D4C(0);
    func_000357C8(arg0, (s32) &func_00035ED4);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035908);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034D10);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FCF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0002FD64);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000359CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035A3C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035AAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035B1C);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032650);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035B8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035BFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035C6C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035CDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035D18);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035DB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035DF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035ED4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035F50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000360C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003613C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000361B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000361F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036270);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000362AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036328);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000363D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036444);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000364B0);

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000534EC);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003656C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F074);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F0BC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F0C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000365B4);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000359F8);
#endif

#if (FW_VERSION >= 250 && FW_VERSION < 271) || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000367A8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000309E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00030BF8);
#endif

s32 func_000369BC(void **arg0) {
    return func_00016F2C(arg0, func_00016C3C(arg0)) == 2;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_000369F4(s32 arg0, void **arg1) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x98);
        if (temp_v0_2 != 0) {
            temp_s0 = sceHVSlim_Library_896E55F6(temp_v0_2)->unk178;
            if (func_000369BC(arg1) == 0) {
                func_00016A44(temp_s0, 1);
                temp_v0_3 = func_00017384(temp_s0, 1);
                if (temp_v0_3 != 0) {
                    func_000171F0((s32 *) temp_s0, temp_v0_3, 2);
                }
            } else {
                func_00016A44(temp_s0, 0);
                func_00013F64(temp_s0);
            }
            sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0x98));
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION < 271
s32 func_000369F4(s32 arg0, void **arg1) {
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x98);
        if (temp_v0_2 != 0) {
            temp_s0 = sceHVSlim_Library_896E55F6(temp_v0_2);
            if (func_000369BC(arg1) == 0) {
                temp_s0_2 = temp_s0->unk178;
                temp_v0_3 = func_00017384(temp_s0_2, 1);
                if (temp_v0_3 != 0) {
                    func_000171F0((s32 *) temp_s0_2, temp_v0_3, 2);
                }
            }
            sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0x98));
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 201 || (FW_VERSION >= 271 && FW_VERSION < 303)
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000367A8);
#endif

#if FW_VERSION == 303
s32 func_000369F4(s32 arg0, void **arg1) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_000369F4_temp_v0 *temp_v0;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk98;
        if (temp_v0_2 != 0) {
            temp_s0 = sceHVSlim_Library_896E55F6(temp_v0_2)->unk178;
            if (func_000369BC(arg1) == 0) {
                func_00017500(temp_s0, 1);
                temp_v0_3 = func_00017384(temp_s0, 1);
                if (temp_v0_3 != 0) {
                    func_000171F0((s32 *) temp_s0, temp_v0_3, 2);
                }
            } else {
                func_00017500(temp_s0, 0);
                func_00015F78(temp_s0);
            }
            sceHVSlim_Library_B29BE9CE(temp_v0->unk98);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036AD0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036DA0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037038);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003714C);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036DA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037218);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033E18);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036AD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00036DA0);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037218);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000375C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037890);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037B3C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037DC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037FD4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003820C);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038390);
#else
s32 func_00038390(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_func_00038390_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk98;
        if (temp_v0_2 != 0) {
            func_0002F35C(temp_v0_2, 0);
        }
        temp_v0->unkA0 = (s32) (temp_v0->unkA0 | 1);
        temp_v0->unkA4 = 1;
        func_00010A68((u8 *)func_00003D10() + 0x14DC, temp_v0->unk0);
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038414);

void func_000385A8(struct Unk_func_000385A8_0 *arg0) {
    struct Unk_func_000385A8_temp_s0 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0->unk98);
    if (arg0->unkA8 != 0) {
        func_00015EFC(temp_s0->unk170);
    }
    if (arg0->unkB0 != 0) {
        func_00015EFC(temp_s0->unk178);
        func_00015EFC(temp_s0->unk180);
    }
    sceHVSlim_Library_B29BE9CE(arg0->unk98);
}

void func_00038614(s32 arg0) {
    func_000385A8(sceHVSlim_Library_896E55F6(arg0));
    sceHVSlim_Library_B29BE9CE(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038648);

s32 func_00038720(void) {
    return 0;
}

#if FW_VERSION == 303
s32 func_00038728(void) {
    func_00003D10()->unk1C8C = 0;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003874C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000389B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038BF8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038C54);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037B10);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038CA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038F14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039224);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039428);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00035894);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032934);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00032B88);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038CA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038F14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039224);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039428);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039788);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039A38);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039C3C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039E2C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039FF8);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038C2C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00038CB4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A0A0);

s32 func_0003A128(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    s32 var_s3;
    struct Unk_func_0003A128_temp_v0 *temp_v0;

    var_s3 = 0;
    if ((arg0 != 0) & (arg1 != 0)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk98;
        if (temp_v0_2 != 0) {
            var_s3 = func_0003A0A0(sceHVSlim_Library_896E55F6(temp_v0_2), arg1, temp_v0->unkC4);
            sceHVSlim_Library_B29BE9CE(temp_v0->unk98);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s3;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A1C0);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A260);
#endif

#if FW_VERSION < 271
s32 func_0003A260(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    s32 var_s3;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s3 = 0;
    if ((arg0 != 0) & (arg1 != 0)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x98);
        if (temp_v0_2 != 0) {
            var_s3 = func_0003A1C0(sceHVSlim_Library_896E55F6(temp_v0_2), arg1, M2C_FIELD(temp_v0, s32 *, 0xC0));
            sceHVSlim_Library_B29BE9CE(M2C_FIELD(temp_v0, s32 *, 0x98));
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s3;
}
#endif

#if FW_VERSION == 303
s32 func_0003A260(s32 arg0, s32 arg1) {
    s32 temp_v0_2;
    s32 var_s3;
    struct Unk_func_0003A260_temp_v0 *temp_v0;

    var_s3 = 0;
    if ((arg0 != 0) & (arg1 != 0)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk98;
        if (temp_v0_2 != 0) {
            var_s3 = func_0003A1C0(sceHVSlim_Library_896E55F6(temp_v0_2), arg1, temp_v0->unkC4);
            sceHVSlim_Library_B29BE9CE(temp_v0->unk98);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return var_s3;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A2F8);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A394);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A3E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A42C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A478);

s32 func_0003A4C4(void) {
    return 0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003900C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A4CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A6F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A81C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A94C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003651C);

s32 func_0003AE10(s32 arg0, struct Unk_func_0003AE10_1 *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    var_s2 = -1;
    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0xA4) <= 0) {
            temp_v1 = arg1->unk0;
            if ((temp_v1 == 6) && (arg1->unk4 == temp_v1)) {
                temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
                switch (temp_v1_2) {                /* irregular */
                case 1:
                    var_s2 = -4;
                    D_0005CD18 = 0;
                    break;
                case 2:
                    var_s2 = -5;
                    D_0005CD18 = 1;
                    break;
                case 3:
                    D_0005CD18 = 2;
                    var_s2 = -6;
                    break;
                }
                if (var_s2 != -1) {
                    sceHVNetfront_Module_98A11887(var_s2);
                }
                func_00004408(1);
                func_00038BF8((s32) temp_v0);
            }
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00033AA4);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A4CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A6F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A81C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A94C);
#endif

#if FW_VERSION == 201
s32 func_0003AE10(s32 arg0, struct Unk_func_0003AE10_1 *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0xA4) <= 0) {
            temp_v1 = arg1->unk0;
            if ((temp_v1 == 6) && (arg1->unk4 == temp_v1)) {
                temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
                var_s0 = D_00054DDC;
                switch (temp_v1_2) {                /* irregular */
                case 1:
                    var_s0 = -4;
                    break;
                case 3:
                    var_s0 = -6;
                    break;
                case 2:
                    var_s0 = -5;
                    break;
                }
                sceHVNetfront_Module_98A11887(var_s0);
                D_00054DDC = var_s0;
                func_00004408(1);
                func_00038BF8((s32) temp_v0);
            }
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003AAA4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003ABC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003ACEC);

s32 func_0003AE10(s32 arg0, struct Unk_func_0003AE10_1 *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    struct Unk_func_0003AE10_temp_v0 *temp_v0;

    var_s2 = -1;
    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unkA4 <= 0) {
            temp_v1 = arg1->unk0;
            if ((temp_v1 == 6) && (arg1->unk4 == temp_v1)) {
                temp_v1_2 = temp_v0->unk9C;
                switch (temp_v1_2) {                /* irregular */
                case 1:
                    var_s2 = -4;
                    D_0006423C = 0;
                    break;
                case 2:
                    var_s2 = -5;
                    D_0006423C = 1;
                    break;
                case 3:
                    D_0006423C = 2;
                    var_s2 = -6;
                    break;
                }
                if (var_s2 != -1) {
                    sceHVNetfront_Module_98A11887(var_s2);
                }
                func_00004408(1);
                func_00038BF8((s32) temp_v0);
            }
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003AF28);
#else
s32 func_0003AF28(s32 arg0, void *arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0xA4) <= 0) {
            temp_v1 = M2C_FIELD(arg1, s32 *, 0);
            if ((temp_v1 == 6) && (M2C_FIELD(arg1, s32 *, 4) == temp_v1)) {
                temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
                var_s0 = M2C_VFIELD(&D_00054DDC, s32, 8);
                switch (temp_v1_2) {                /* irregular */
                case 1:
                    var_s0 = 0;
                    break;
                case 3:
                    var_s0 = 2;
                    break;
                case 2:
                    var_s0 = 1;
                    break;
                }
                sceHVNetfront_Module_5CB97BC6(var_s0);
                M2C_VFIELD(&D_00054DDC, s32, 8) = var_s0;
                func_00004408(1);
                func_00038BF8((s32) temp_v0);
            }
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B034);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B124);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B230);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039D08);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003462C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B320);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B41C);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B5B0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B6E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B770);

void func_0003B7F0(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_func_0003B7F0_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        temp_v0_2 = temp_v0->unk98;
        if (temp_v0_2 != 0) {
            sceHVSlim_Library_880239D0(temp_v0_2);
        }
        func_0001EBE0(temp_v0);
        sceHVSlim_Library_B29BE9CE(arg0);
        sceHVSlim_Library_880239D0(arg0);
    }
}

void func_0003B854(s32 arg0) {
    if (arg0 != 0) {
        sceHVSlim_Library_B29BE9CE(arg0);
        func_0002F5AC(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B888);

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0003B8C4(void *arg0) {
    D_00063F9C = 0x2B4;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 8)(&D_00063F9C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0003B8C4(void *arg0) {
    D_00063F9C = 0x2A8;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 8)(&D_00063F9C);
}
#endif

#if FW_VERSION == 201
void func_0003B8C4(void *arg0) {
    D_00063F9C = 0x2A0;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 8)(&D_00063F9C);
}
#endif

#if FW_VERSION == 303
void func_0003B8C4(void *arg0) {
    D_00063F9C = 0x3BC;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 8)(&D_00063F9C);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_0003B8F4(void *arg0) {
    D_00063F9C = 0x2B4;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 0xC)(&D_00063F9C);
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
void func_0003B8F4(void *arg0) {
    D_00063F9C = 0x2A8;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 0xC)(&D_00063F9C);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00038860(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = D_00061DC4 + 1;
    temp_v1_2 = temp_v1 - __builtin_allegrex_ins(temp_v1 + ((u32) (temp_v1 >> 0x1F) >> 0x1E), 0, 0, 2);
    D_00061DC4 = temp_v1_2;
    if (temp_v1_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & ~0x28);
    }
}
#endif

#if FW_VERSION == 260
void func_00038860(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = D_0005F354 + 1;
    temp_v1_2 = temp_v1 - (((s32) (temp_v1 + ((u32) (temp_v1 >> 0x1F) >> 0x1E)) >> 2) * 4);
    D_0005F354 = temp_v1_2;
    if (temp_v1_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & ~0x28);
    }
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000388A4);
#endif

#if FW_VERSION == 201
void func_0003B8F4(void *arg0) {
    D_00063F9C = 0x2A0;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 0xC)(&D_00063F9C);
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00034ABC);
#else
void func_0003B8F4(void *arg0) {
    D_00063F9C = 0x3BC;
    M2C_FIELD(arg0, M2C_UNK (**)(s32 *), 0xC)(&D_00063F9C);
}

void func_0003B924(struct Unk_func_0003B924_0 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = D_00063F98 + 1;
    temp_v1_2 = temp_v1 - __builtin_allegrex_ins(temp_v1 + ((u32) (temp_v1 >> 0x1F) >> 0x1E), 0, 0, 2);
    D_00063F98 = temp_v1_2;
    if (temp_v1_2 != 0) {
        arg0->unk1C = (s32) (arg0->unk1C & ~0x28);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B964);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003BA18);

s32 *func_0003BB40(void) {
    return &D_00063F9C;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003BB4C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003BB5C);
#endif

void func_0003C140(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v1;
    struct Unk_func_0003C140_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v1 = temp_v0->unkB0;
    if ((temp_v1 != 4) & (temp_v1 != 0)) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return;
    }
    func_0001EBE0(temp_v0);
    temp_v0_2 = temp_v0->unkB4;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_880239D0(temp_v0_2);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

#if FW_VERSION >= 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C1CC);
#else
s32 func_0003C1CC(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkB0 == 0) {
        func_0002F35C(temp_v0->unkB4, 0);
        temp_v0->unkB0 = 1;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C264);
#endif

#if FW_VERSION < 260
s32 func_0003C264(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((u32) (temp_v0->unkB0 - 1) >= 2U) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_0002F488(temp_v0->unkB4, 0);
        temp_v0->unkB0 = 3;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_0003C264(s32 arg0) {
    struct Unk_func_0003C264_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((u32) (temp_v0->unkB0 - 1) >= 2U) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_0002F488(temp_v0->unkB4, 0);
        temp_v0->unkB0 = 3;
        if (temp_v0->unkA8 == 6) {
            func_00010A88((u8 *)func_00003D10() + 0x14DC, temp_v0->unk0);
            func_000029C0((s32) &func_0003BB4C);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}
#endif

s32 func_0003C314(s32 arg0) {
    struct Unk_func_0003C314_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkB0 == 3) {
        temp_v0->unkB0 = 4;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000390B8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C360);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C7F4);

void func_0003C8BC(s32 arg0) {
    if (arg0 != 0) {
        func_00047E10(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C8DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C978);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037A30);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037D08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037ECC);

s32 func_00037F20(s32 arg0) {
    s32 var_v0;
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    var_v0 = (temp_a0 + 0x37) & 0xFF;
    if (temp_a0 < 0xAU) {
        var_v0 = (temp_a0 + 0x30) & 0xFF;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039CF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A03C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A184);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A1CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AA8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AA9C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00058214);
#endif

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000535D0);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005821C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A2D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A40C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A470);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A5B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A6C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A714);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003A7AC);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00037F44);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000386D0);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003CACC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003CDA4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003CF68);

s32 func_0003CFBC(s32 arg0) {
    s32 var_v0;
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    var_v0 = (temp_a0 + 0x37) & 0xFF;
    if (temp_a0 < 0xAU) {
        var_v0 = (temp_a0 + 0x30) & 0xFF;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003CFE0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D3AC);
#endif

#if FW_VERSION < 260 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D520);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D568);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F2D4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F2E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F2EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F2F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F2F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D674);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D7A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D80C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D950);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003DA68);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003DAB4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003DB4C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003DDA0);

void func_0003DF44(s32 arg0) {
    s32 temp_v1;
    struct Unk_func_0003DF44_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v1 = temp_v0->unkB0;
    if ((temp_v1 != 4) & (temp_v1 != 0)) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return;
    }
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_880239D0(temp_v0->unkB4);
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

s32 func_0003DFC4(s32 arg0) {
    struct Unk_func_0003DFC4_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkB0 == 0) {
        func_0002F35C(temp_v0->unkB4, 0);
        temp_v0->unkB0 = 1;
        if (temp_v0->unkA8 != 4) {
            func_000048E0(temp_v0->unk0, 1, 1);
        }
        func_00003D4C(0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

s32 func_0003E040(s32 arg0) {
    struct Unk_func_0003E040_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((u32) (temp_v0->unkB0 - 1) >= 2U) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_0002F488(temp_v0->unkB4, 0);
        temp_v0->unkB0 = 3;
        if (temp_v0->unkA8 != 4) {
            func_000049B8(temp_v0->unk0, 1, 1);
        }
        func_00003D4C(1);
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}

s32 func_0003E0E0(s32 arg0) {
    struct Unk_func_0003E0E0_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkB0 == 3) {
        temp_v0->unkB0 = 4;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003E12C);

s32 func_0003E1D0(s32 arg0) {
    s32 var_s0;
    s32 var_v0;
    struct Unk_func_0003E1D0_temp_v0 *temp_v0;

    var_v0 = -1;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        var_s0 = -1;
        if (temp_v0->unkB0 > 0) {
            var_s0 = temp_v0->unkAC;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = var_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003E224);

s32 func_0003E3A8(s32 arg0) {
    s32 temp_v0_2;
    s32 var_v0;
    struct Unk_func_0003E3A8_temp_v0 *temp_v0;

    var_v0 = -1;
    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if ((temp_v0->unkB0 > 0) && (temp_v0->unkA8 == 4)) {
            temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0->unkB4)->unk170;
            if (temp_v0_2 != 0) {
                func_0001E520(temp_v0_2, 0x64);
            }
            sceHVSlim_Library_B29BE9CE(temp_v0->unkB4);
        }
        sceHVSlim_Library_B29BE9CE(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

void func_0003E430(s32 arg0) {
    struct Unk_func_0003E430_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unkB0 == 2) {
            temp_v0->unkB0 = 1;
        }
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

void func_0003E480(s32 arg0) {
    if (arg0 != 0) {
        func_00047E10(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003E4A0);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005AADC);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005D3B0);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F324);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003E514);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003E7F8);

void func_0003EA20(s32 arg0) {
    s32 temp_v1;
    struct Unk_func_0003EA20_temp_v0 *temp_v0;
    struct Unk_func_0003EA20_temp_v0_2 *temp_v0_2;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v1 = temp_v0->unkA8;
    if ((temp_v1 != 4) & (temp_v1 != 0)) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return;
    }
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_880239D0(temp_v0->unkB0);
    temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0->unkAC);
    sceHVSlim_Library_A2F4AC9E(temp_v0_2->unk8);
    sceHVSlim_Library_A2F4AC9E(temp_v0_2->unkC);
    sceHVSlim_Library_A2F4AC9E(temp_v0_2->unk10);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkAC);
    sceHVSlim_Library_880239D0(temp_v0->unkAC);
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

s32 func_0003EADC(s32 arg0) {
    struct Unk_func_0003EADC_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA8 == 0) {
        func_0002F35C(temp_v0->unkB0, 0);
        temp_v0->unkA8 = 1;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

void func_0003EB34(s32 arg0) {
    struct Unk_func_0003EB34_temp_s1 *temp_s1;
    struct Unk_func_0003EB34_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s1 = sceHVSlim_Library_896E55F6(temp_v0->unkB0);
    if (temp_v0->unkA4 == 1) {
        func_00015EFC(temp_s1->unk178);
        func_00015EFC(temp_s1->unk180);
    }
    sceHVSlim_Library_B29BE9CE(temp_v0->unkB0);
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_0003EBA8(s32 arg0) {
    struct Unk_func_0003EBA8_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((u32) (temp_v0->unkA8 - 1) >= 2U) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_0002F488(temp_v0->unkB0, 0);
        temp_v0->unkA8 = 3;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_0003EB34(arg0);
        func_00047E70(arg0);
    }
    return 0;
}

s32 func_0003EC2C(s32 arg0) {
    struct Unk_func_0003EC2C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA8 == 3) {
        temp_v0->unkA8 = 4;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EC78);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003ED84);

void func_0003EF0C(s32 arg0) {
    if (arg0 != 0) {
        func_0002F99C(sceHVSlim_Library_896E55F6(arg0)->unkB0);
        sceHVSlim_Library_B29BE9CE(arg0);
        func_0003EB34(arg0);
        func_00047E10(arg0);
    }
}

#if FW_VERSION < 260
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000535E4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000535E8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EF58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EFE4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F3E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F5BC);

#if FW_VERSION >= 260 && FW_VERSION < 303
s32 func_0003F6FC(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) == 0) {
        func_0002F35C(M2C_FIELD(temp_v0, s32 *, 0xC8), 0);
        M2C_FIELD(temp_v0, s32 *, 0x9C) = 1;
        func_000446E4((s32) &func_00040B08, arg0);
        func_0003D928((s32) temp_v0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION < 260
s32 func_0003F6FC(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (M2C_FIELD(temp_v0, s32 *, 0x9C) == 0) {
        func_0002F35C(temp_v0->unkC4, 0);
        M2C_FIELD(temp_v0, s32 *, 0x9C) = 1;
        func_0003EF08((s32) &func_00040B08, arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_0003F6FC(s32 arg0) {
    struct Unk_func_0003F6FC_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unk9C == 0) {
        func_0002F35C(temp_v0->unkC8, 0);
        temp_v0->unk9C = 1;
        func_00047BE8((s32) &func_00040B08, arg0);
        func_00040CD8((s32) temp_v0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
s32 func_0003F76C(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
    if ((temp_v0_2 != 6) & (temp_v0_2 != 1)) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_00047C48((s32) &func_00040B08);
        func_0003FDE8(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 0x80), 4, 2);
        func_0003F3F0((s32) temp_v0);
        func_0002F488(M2C_FIELD(temp_v0, s32 *, 0xC8), 0);
        M2C_FIELD(temp_v0, s32 *, 0x9C) = 7;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 260
s32 func_0003F76C(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
    if ((temp_v0_2 != 6) & (temp_v0_2 != 1)) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_00047C48((s32) &func_00040B08);
        func_0003FDE8(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 0x80), 4, 2);
        func_0003DA60_v260((s32) temp_v0);
        func_0002F488(M2C_FIELD(temp_v0, s32 *, 0xC8), 0);
        M2C_FIELD(temp_v0, s32 *, 0x9C) = 7;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION < 260
s32 func_0003F76C(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x9C);
    if ((temp_v0_2 != 6) & (temp_v0_2 != 1)) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_00047C48((s32) &func_00040B08);
        func_0003FDE8(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 0x80), 4, 2);
        func_0002F488(temp_v0->unkC4, 0);
        M2C_FIELD(temp_v0, s32 *, 0x9C) = 7;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_0003F76C(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_func_0003F76C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = temp_v0->unk9C;
    if ((temp_v0_2 != 6) & (temp_v0_2 != 1)) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_00047C48((s32) &func_00040B08);
        func_0003FDE8(temp_v0->unk0, temp_v0->unk80, 4, 2);
        func_00040E10((s32) temp_v0);
        func_0002F488(temp_v0->unkC8, 0);
        temp_v0->unk9C = 7;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00047E70(arg0);
    }
    return 0;
}
#endif

s32 func_0003F81C(s32 arg0) {
    struct Unk_func_0003F81C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unk9C == 7) {
        temp_v0->unk9C = 8;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F868);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003C5D4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000375E0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F97C);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003FCA8);

void func_0003FDE8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000108B4(arg0, arg1, arg2, arg3);
}

void func_0003FE04(s32 arg0) {
    if (arg0 != 0) {
        sceHVSlim_Library_896E55F6(arg0);
        func_00047E10(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003FE40);
#else
s32 func_0003FE40(s32 arg0) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_0003F3E0(arg0, (s32) &D_0005F364);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVSlim_Library_896E55F6(temp_v0);
        func_00010670((u8 *)func_00003D10() + 0x14DC, *temp_s0);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003FEAC);

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040004);
#else
void func_00040004(void) {
    sceHVNetfront_Module_504892A0(0, 0, 0, 0, 0, sceHVSlim_Library_27D353B1);
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040038);
#else
void func_00040038(struct Unk_func_00040038_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    sceHVNetfront_Module_22E35EF2();
    temp_v0 = sceHVNetfront_Module_504892A0(0, 0, 0, 0, 1, sceHVSlim_Library_27D353B1);
    arg0->unkAC = temp_v0;
    arg0->unkB0 = sceHVSlim_Library_5CA39435(temp_v0 * 4);
    arg0->unkB4 = sceHVSlim_Library_5CA39435(arg0->unkAC * 4);
    arg0->unkB8 = sceHVSlim_Library_5CA39435(arg0->unkAC * 4);
    temp_v0_2 = sceHVSlim_Library_5CA39435(arg0->unkAC * 4);
    arg0->unkBC = temp_v0_2;
    arg0->unkAC = sceHVNetfront_Module_504892A0(arg0->unkB4, arg0->unkB8, temp_v0_2, 0, 1, sceHVSlim_Library_27D353B1);
    sceHVNetfront_Module_F2FE2FA3();
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000400F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F358);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F364);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F368);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F37C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040258);

#if FW_VERSION >= 260 && FW_VERSION < 303
void func_0003D074(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0_3;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_v0 != 0) {
        func_00047E10(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_v0_2 != 0) {
        temp_v0_3 = sceHVSlim_Library_896E55F6(temp_v0_2);
        if (temp_v0_3 != NULL) {
            func_0001A504(M2C_FIELD(temp_v0_3, s32 *, 0x168), 0);
        }
        sceHVSlim_Library_B29BE9CE(M2C_FIELD(arg0, s32 *, 0xC8));
    }
}
#endif

#if FW_VERSION == 303
void func_00040420(struct Unk_func_00040420_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    struct Unk_func_00040420_temp_v0_3 *temp_v0_3;

    temp_v0 = arg0->unkD4;
    if (temp_v0 != 0) {
        func_00047E10(temp_v0);
        arg0->unkD4 = 0;
    }
    temp_v0_2 = arg0->unkC8;
    if (temp_v0_2 != 0) {
        temp_v0_3 = sceHVSlim_Library_896E55F6(temp_v0_2);
        if (temp_v0_3 != NULL) {
            func_0001A504(temp_v0_3->unk168, 0);
        }
        sceHVSlim_Library_B29BE9CE(arg0->unkC8);
    }
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040484);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040568);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040678);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040744);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040810);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040988);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000409D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040B08);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003B610);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D928);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F3F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F440);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003DA60_v260);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040B5C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040CD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040E10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040E60);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040ECC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040F2C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F3A8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F3B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040F8C);

void func_00041240(s32 arg0) {
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    struct Unk_func_00041240_temp_v0 *temp_v0;
    struct Unk_func_00041240_temp_v0_2 *temp_v0_2;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v1 = temp_v0->unkA8;
    if ((temp_v1 != 6) & (temp_v1 != 0)) {
        sceHVSlim_Library_B29BE9CE(arg0);
        return;
    }
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_880239D0(temp_v0->unkB0);
    temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0->unkAC);
    temp_v0_3 = temp_v0_2->unk4;
    if (temp_v0_3 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_v0_3);
    }
    temp_v0_4 = temp_v0_2->unk8;
    if (temp_v0_4 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_v0_4);
    }
    sceHVSlim_Library_B29BE9CE(temp_v0->unkAC);
    sceHVSlim_Library_880239D0(temp_v0->unkAC);
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004130C);

s32 func_000414AC(s32 arg0) {
    s32 temp_v0_3;
    struct Unk_func_000414AC_temp_v0 *temp_v0;
    struct Unk_func_000414AC_temp_v0_2 *temp_v0_2;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA8 == 0) {
        func_0002F35C(temp_v0->unkB0, 0);
        temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0->unkB0);
        if (temp_v0_2 != NULL) {
            temp_v0_3 = temp_v0_2->unk174;
            if (temp_v0_3 != 0) {
                func_000155D0(temp_v0_3, (s32) &func_0004130C, arg0);
            }
        }
        func_000155D0(temp_v0_2->unk16C, (s32) &func_00040ECC, arg0);
        func_000156A0(temp_v0_2->unk16C, (s32) &func_00040F2C, arg0);
        func_000156A0(temp_v0_2->unk174, (s32) &func_00040F2C, arg0);
        sceHVSlim_Library_B29BE9CE(temp_v0->unkB0);
        temp_v0->unkA8 = 1;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

void func_00041588(s32 arg0) {
    struct Unk_func_00041588_temp_v0 *temp_v0;
    struct Unk_func_00041588_temp_v0_2 *temp_v0_2;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0->unkB0);
    func_00015EFC(temp_v0_2->unk16C);
    func_00015EFC(temp_v0_2->unk174);
    sceHVSlim_Library_B29BE9CE(temp_v0->unkB0);
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_000415EC(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_000415EC_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = temp_v0->unkB4;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_896E55F6(temp_v0_2)->unkB4 = 2;
        sceHVSlim_Library_B29BE9CE(temp_v0->unkB4);
        func_0002C3FC(temp_v0->unkB4);
        temp_v0->unkA8 = 1;
        temp_v0->unkB4 = 0;
    }
    temp_v0_3 = temp_v0->unkA8;
    if ((temp_v0_3 != 4) & (temp_v0_3 != 1)) {
        sceHVSlim_Library_B29BE9CE(arg0);
    } else {
        func_0002F488(temp_v0->unkB0, 0);
        temp_v0->unkA8 = 5;
        sceHVSlim_Library_B29BE9CE(arg0);
        func_00041588(arg0);
        func_00047E70(arg0);
    }
    return 0;
}

s32 func_000416B4(s32 arg0) {
    struct Unk_func_000416B4_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA8 == 5) {
        temp_v0->unkA8 = 6;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

s32 func_00041700(s32 arg0, struct Unk_func_00041700_1 *arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0_2;
    struct Unk_func_00041700_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA8 == 1) {
        temp_a0 = arg1->unk10;
        if (temp_a0 != 0) {
            if (((temp_a0 == 0x20) | (temp_a0 == 8)) != 0) {
                temp_s0 = temp_v0->unkA0;
                temp_v0_2 = func_0002F680(temp_s0, arg1, temp_v0->unkB0);
                temp_v0->unkA0 = temp_v0_2;
                if (temp_s0 != temp_v0_2) {
                    func_00004408(0);
                }
            }
            if ((arg1->unk10 == 0x800) && (temp_v0->unk98 == 1)) {
                func_00004408(2);
                func_0002F99C(temp_v0->unkB0);
                func_00041588(arg0);
                func_000108B4(temp_v0->unk0, temp_v0->unk80, 0, 0);
                temp_v0->unkA8 = 4;
            }
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00039034);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000417F8);
#endif

void func_00041B18(s32 arg0) {
    if (arg0 != 0) {
        func_00041588(arg0);
        func_00047E10(arg0);
    }
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00041B4C);
#else
s32 func_00041B4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00040F8C(arg0, (s32) "BookMark_Edit", arg1, arg2, arg3);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVSlim_Library_896E55F6(temp_v0);
        func_00010670((u8 *)func_00003D10() + 0x14DC, *temp_s0);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00041BC8);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000404A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004064C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00041EE4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042090);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000420F4);

void func_00042330(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    struct Unk_func_00042330_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_0001EBE0(temp_v0);
    sceHVSlim_Library_880239D0(temp_v0->unkDC);
    temp_a0 = temp_v0->unkB4;
    if (temp_a0 != 0) {
        sceHVSlim_Library_0D525122(temp_a0);
    }
    temp_a0_2 = temp_v0->unkB8;
    if (temp_a0_2 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_2);
    }
    temp_a0_3 = temp_v0->unkC4;
    temp_v0->unkBC = 0;
    if (temp_a0_3 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_3);
    }
    temp_a0_4 = temp_v0->unkC8;
    if (temp_a0_4 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_4);
    }
    temp_a0_5 = temp_v0->unkC0;
    if (temp_a0_5 != 0) {
        sceHVSlim_Library_0D525122(temp_a0_5);
    }
    temp_a0_6 = temp_v0->unkD0;
    if (temp_a0_6 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_a0_6);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000423F8);
#else
s32 func_000423F8(s32 arg0) {
    struct Unk_func_000423F8_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unk9C == 0) {
        temp_v0->unk9C = 2;
        func_00010A68((u8 *)func_00003D10() + 0x14DC, temp_v0->unk0);
        func_0002F35C(temp_v0->unkDC, 0);
        func_00047DB0(temp_v0->unkE0);
        func_00044678((s32) temp_v0);
        func_00044808(temp_v0, 0);
        func_00047BE8((s32) &func_00044E94, arg0);
        func_000048E0(temp_v0->unk0, 1, 1);
        func_00003D4C(0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

s32 func_000424A8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    struct Unk_func_000424A8_temp_s0 *temp_s0;

    temp_s0 = sceHVSlim_Library_896E55F6(arg0);
    func_00047C48((s32) &func_00044E94);
    temp_v0 = temp_s0->unkF4;
    if (temp_v0 != 0) {
        func_0003E480(temp_v0);
        temp_s0->unkF4 = 0;
    }
    temp_v0_2 = temp_s0->unkE8;
    if (temp_v0_2 != 0) {
        func_00047E10(temp_v0_2);
    }
    func_000049B8(temp_s0->unk0, 1, 1);
    func_00047E10(temp_s0->unkE0);
    func_000447B4((s32) temp_s0);
    func_0002F488(temp_s0->unkDC, 0);
    temp_s0->unk9C = 0x10;
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00047E70(arg0);
    return 0;
}

s32 func_00042558(s32 arg0) {
    struct Unk_func_00042558_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unk9C == 0x10) {
        temp_v0->unk9C = 0x11;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040B60);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F02C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000425A4);
#endif

#if FW_VERSION < 260 || (FW_VERSION >= 271 && FW_VERSION < 303)
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004262C);
#endif

#if FW_VERSION == 260
s32 func_0004262C(s32 arg0, struct Unk_func_0004262C_1 *arg1) {
    s32 temp_s2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((M2C_FIELD(temp_v0, s32 *, 0x9C) == 0x12) || (arg1->unk18 & 0x28)) {
        if (arg1->unk10 == 0x800) {
            temp_s2 = temp_v0->unkB0;
            if (temp_s2 == 1) {
                func_00004408(2);
                func_00042FEC(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 0x80), 4, 1);
                M2C_FIELD(temp_v0, s32 *, 0x9C) = 0xF;
                if (M2C_FIELD(temp_v0, s32 *, 0x98) == temp_s2) {
                    func_00042FEC(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 0x80), 0, 0);
                    M2C_FIELD(temp_v0, s32 *, 0x9C) = 0xF;
                }
            }
        }
        if (arg1->unk10 == 0x200) {
            if ((M2C_FIELD(temp_v0, s32 *, 0xAC) == 1) && (M2C_FIELD(temp_v0, s32 *, 0xD4) == 0)) {
                func_000447B4((s32) temp_v0);
                func_00043538(temp_v0, arg0);
            }
        } else {
            func_0003F02C((s32) temp_v0);
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

#if FW_VERSION == 303
s32 func_0004262C(s32 arg0, struct Unk_func_0004262C_1 *arg1) {
    s32 temp_s2;
    struct Unk_func_0004262C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if ((temp_v0->unk9C == 0x12) || (arg1->unk18 & 0x28)) {
        if (arg1->unk10 == 0x800) {
            temp_s2 = temp_v0->unkB0;
            if (temp_s2 == 1) {
                func_00004408(2);
                func_00042FEC(temp_v0->unk0, temp_v0->unk80, 4, 1);
                temp_v0->unk9C = 0xF;
                if (temp_v0->unk98 == temp_s2) {
                    func_00042FEC(temp_v0->unk0, temp_v0->unk80, 0, 0);
                    temp_v0->unk9C = 0xF;
                }
            }
        }
        if (arg1->unk10 == 0x200) {
            if ((temp_v0->unkAC == 1) && (temp_v0->unkD4 == 0)) {
                func_00044808(temp_v0, 0);
                func_00043538(temp_v0, arg0);
            }
        } else {
            func_000425A4(temp_v0);
        }
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042754);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042820);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042DE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042FEC);

#if FW_VERSION >= 250 && FW_VERSION < 303
void func_00043008(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x98) == 0) {
            temp_v0_2 = temp_v0->unkD8;
            if (temp_v0_2 != 0) {
                sceHVNetfront_Module_76411162(8, -1, temp_v0_2);
                temp_v0->unkD8 = 0;
            }
        }
        func_00047E10(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 201
void func_00043008(s32 arg0) {
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (M2C_FIELD(temp_v0, s32 *, 0x98) == 0) {
            sceHVNetfront_Module_76411162(8, -1, temp_v0->unkD8);
        }
        func_00047E10(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 303
void func_00043008(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_func_00043008_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0->unk98 == 0) {
            temp_v0_2 = temp_v0->unkD8;
            if (temp_v0_2 != 0) {
                sceHVNetfront_Module_76411162(8, -1, temp_v0_2);
                temp_v0->unkD8 = 0;
            }
        }
        func_00047E10(arg0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043078);
#endif

#if FW_VERSION == 303
s32 func_00043078(s32 arg0, s32 arg1) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_000420F4(arg0, (s32) &D_0005F408, arg1);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_s0 = sceHVSlim_Library_896E55F6(temp_v0);
        func_00010670((u8 *)func_00003D10() + 0x14DC, *temp_s0);
        sceHVSlim_Library_B29BE9CE(temp_v0);
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

void func_000430E8(s32 arg0) {
    func_00043078(arg0, 0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043104);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004325C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004331C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F408);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F40C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F420);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043538);

#if FW_VERSION >= 260 && FW_VERSION < 303
void func_000401A0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xF8);
    if (temp_v0 != 0) {
        func_00047E10(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    }
    func_0001A504(func_0004452C(arg0), 0);
}
#endif

#if FW_VERSION == 303
void func_000436EC(struct Unk_func_000436EC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkF8;
    if (temp_v0 != 0) {
        func_00047E10(temp_v0);
        arg0->unkF8 = 0;
    }
    func_0001A504(func_0004452C(arg0), 0);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043738);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000438A4);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043A0C);
#endif

#if FW_VERSION < 271
s32 func_00043A0C(s32 arg0, struct Unk_func_00043A0C_1 *arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;

    var_s3 = -1;
    temp_v0 = func_0004452C(arg1);
    if ((temp_v0 != 0) && (temp_v0_2 = arg1->unkB4, (temp_v0_2 != 0)) && (var_s3 = 1, temp_s0 = func_0001941C(temp_v0, sceHVSlim_Library_E459881C(temp_v0_2), 0, 0, (s32) &func_00043738, arg0, 0), sceHVSlim_Library_08549708(arg1->unkB4), (temp_s0 != 0))) {
        arg1->unkCC += 1;
        func_00044470((s32) arg1);
        if ((M2C_FIELD(arg1, s32 *, 0x100) == 0) && (M2C_FIELD(arg1, s32 *, 0x104) == 0)) {
            func_00044678((s32) arg1);
        }
    }
    arg1->unk9C = 0x12;
    return var_s3;
}
#endif

#if FW_VERSION == 303
s32 func_00043A0C(s32 arg0, struct Unk_func_00043A0C_1 *arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s3;

    var_s3 = -1;
    temp_v0 = func_0004452C(arg1);
    if (temp_v0 != 0) {
        temp_v0_2 = arg1->unkB4;
        if (temp_v0_2 != 0) {
            var_s3 = 1;
            temp_s0 = func_0001941C(temp_v0, sceHVSlim_Library_E459881C(temp_v0_2), 0, 0, (s32) &func_00043738, arg0, 0);
            sceHVSlim_Library_08549708(arg1->unkB4);
            if (temp_s0 != 0) {
                arg1->unkCC = (s32) (arg1->unkCC + 1);
                func_00044470((s32) arg1);
                func_00044808(arg1, 1);
            }
        }
    }
    arg1->unk9C = 0x12;
    return var_s3;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043AD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043C6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043E70);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043F80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044110);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044378);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044420);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044470);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004452C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004457C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044608);

#if FW_VERSION >= 250 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00058354);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F45C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044678);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000447B4);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042E98);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004348C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000413B0);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EE1C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003BCBC);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044808);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044884);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044AC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044E94);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F394);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F510);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00043764(void) {
    func_0003F510(0x468);
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044EF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004506C);

void func_000450E8(void) {
    func_0004506C(0x468);
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045104);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004536C);

s32 func_00045460(s32 arg0) {
    struct Unk_func_00045460_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA4 == 0) {
        func_0002F35C(temp_v0->unkB4, 0);
        temp_v0->unkA4 = 1;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

s32 func_000454B8(s32 arg0) {
    struct Unk_func_000454B8_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA4 == 3) {
        func_0002F488(temp_v0->unkB4, 0);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    func_00047E70(arg0);
    return 0;
}

s32 func_0004550C(s32 arg0) {
    struct Unk_func_0004550C_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    if (temp_v0->unkA4 == 3) {
        temp_v0->unkA4 = 4;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045558);

void func_000456F4(s32 arg0) {
    struct Unk_func_000456F4_temp_s1 *temp_s1;

    temp_s1 = sceHVSlim_Library_896E55F6(arg0);
    if (arg0 != 0) {
        func_00047E10(arg0);
        temp_s1->unkA4 = 3;
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045744);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000457D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045C24);

void func_00045E20(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_func_00045E20_temp_v0 *temp_v0;

    if (arg0 != 0) {
        temp_v0 = sceHVSlim_Library_896E55F6(arg0);
        if (temp_v0 != NULL) {
            func_0001EBE0(temp_v0);
            temp_v0_2 = temp_v0->unk128;
            if (temp_v0_2 != 0) {
                sceHVSlim_Library_880239D0(temp_v0_2);
            }
            sceHVSlim_Library_B29BE9CE(arg0);
        }
        sceHVSlim_Library_880239D0(arg0);
    }
}

s32 func_00045E8C(s32 arg0) {
    if (arg0 == 0) {
        sceHVSlim_Library_896E55F6(arg0);
        sceHVSlim_Library_B29BE9CE(0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045EB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045F68);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046030);

void func_000460F8(s32 arg0) {
    if ((arg0 != 0) && (sceHVSlim_Library_896E55F6(arg0) != NULL)) {
        func_00047E10(arg0);
        sceHVSlim_Library_B29BE9CE(arg0);
    }
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F724);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F790);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004613C);
#else
s32 func_0004613C(s32 arg0) {
    s32 *temp_v0_2;
    s32 temp_v0;

    temp_v0 = func_00045C24(arg0, (s32) "THelpDlg", 0);
    if (temp_v0 != 0) {
        temp_v0_2 = sceHVSlim_Library_896E55F6(temp_v0);
        if (temp_v0_2 != NULL) {
            func_00010670((u8 *)func_00003D10() + 0x14DC, *temp_v0_2);
            sceHVSlim_Library_B29BE9CE(temp_v0);
        }
    }
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000461B0);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044894);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003D438);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046218);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F8B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004631C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046468);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000464C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046520);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046598);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046780);

void func_0004682C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        sceHVSlim_Library_0D525122(temp_v0);
    }
    sceHVSlim_Library_D611E938(arg0, 0, 4);
}

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003DA60);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046870);

s32 func_000469BC(s32 arg0) {
    s32 var_s0;

    var_s0 = 0x7FFFFFFF;
    if (sceHVSlim_Library_896E55F6(arg0)->unk8 >= 0) {
        var_s0 = sceHVSlim_Library_896E55F6(arg0)->unk8;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
    return var_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046A14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046B40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046B9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046CE8);

void func_00046DB4(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    struct Unk_func_00046DB4_temp_v0 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_00046CE8(temp_v0);
    sceHVSlim_Library_B8C28371((u8 *)temp_v0 + 0x18);
    temp_v0_2 = temp_v0->unk0;
    if (temp_v0_2 != 0) {
        sceHVSlim_Library_0D525122(temp_v0_2);
    }
    temp_v0_3 = temp_v0->unk10;
    if (temp_v0_3 != 0) {
        sceHVSlim_Library_A2F4AC9E(temp_v0_3);
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}

s32 func_00046E24(s32 arg0) {
    s32 temp_s1;
    void *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    func_00046CE8(temp_v0);
    temp_s1 = func_00046B40(temp_v0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046E74);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047068);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047168);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000471E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047270);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000474A4);

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000461EC);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003E874);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EA0C);

void func_0003EAF0(s32 arg0) {
    s32 temp_v0_2;
    struct Unk_ret_sceHVSlim_Library_896E55F6 *temp_v0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_v0_2 = M2C_FIELD(temp_v0, s32 *, 0x34);
    if (temp_v0_2 != -1) {
        func_0004B25C(temp_v0_2, 1);
        M2C_FIELD(temp_v0, s32 *, 0x34) = -1;
    }
    sceHVSlim_Library_B29BE9CE(arg0);
}
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000475E4);
#endif

s32 func_00047898(s32 arg0) {
    s32 *temp_v0;
    s32 temp_s0;

    temp_v0 = sceHVSlim_Library_896E55F6(arg0);
    temp_s0 = func_0004B4D4(sceHVSlim_Library_E459881C(*temp_v0), 1);
    sceHVSlim_Library_08549708(*temp_v0);
    sceHVSlim_Library_B29BE9CE(arg0);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000478FC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F8C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000479B0);

void func_000479E8(s32 arg0) {
    func_00046DB4(arg0);
    sceHVSlim_Library_880239D0(arg0);
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046104);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F8F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046138);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000461E4);
#endif

#if FW_VERSION == 260
void func_00041F6C(void) {
    D_0005F628 = 0;
}
#endif

#if FW_VERSION == 250
void func_00041F6C(void) {
    D_0005CD20 = 0;
    D_0005CD24 = 0;
    D_0005CD28 = 0;
}
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003ECCC);
#else
void func_00047A14(void) {
    sceHVSlim_Library_457A4136(&D_00064360, 8);
    D_00064384 = 0;
    D_00064388 = 0;
}
#endif

#if FW_VERSION < 271 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F8F4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000445F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004467C);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000446E4);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003ED50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EE24);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EE90);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EEBC);
#endif

#if FW_VERSION == 201
void func_0003EEBC(void) {
    sceHVSlim_Library_C04FADD9(&D_00064360);
    if (D_00057838 != 0) {
        D_0005783C = 1;
        sceKernelReleaseWaitThread(D_00057838);
        D_00057838 = 0;
    }
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003EF08);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047A48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047AF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047B64);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047BE8);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047C48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047CC8);

#if FW_VERSION >= 271 && FW_VERSION < 303
void func_00044844(void) {
    if (D_000620A8 > 0) {
        if (D_000620A0 != 0) {
            sceKernelCheckCallback();
        }
    }
}
#endif

#if FW_VERSION == 260
void func_00044844(void) {
    if (D_0005F628 > 0) {
        sceKernelCheckCallback();
    }
}
#endif

#if FW_VERSION == 303
void func_00047D24(void) {
    if (D_00064384 > 0) {
        if (D_0006437C != 0) {
            sceKernelCheckCallback();
        }
    }
}
#endif

s32 func_00047D5C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = sceHVSlim_Library_5CA39435(sceHVSlim_Library_15875ED4(arg0) + 1);
    if (temp_v0 != 0) {
        sceHVSlim_Library_BB5E8F0E(temp_v0, arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047DB0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047E10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047E70);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047ED0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047F58);

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005B0B4);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F910);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F918);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047FC8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004810C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048268);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048300);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004834C);

s32 func_000483D8(s32 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = func_00048300(*arg0);
    if (temp_v0 >= 0) {
        temp_s0 = sceHVSlim_Library_E459881C(*arg0) + temp_v0 + 1;
        temp_v0_2 = sceHVSlim_Library_D9FE99F5(temp_s0, (sceHVSlim_Library_3EDA77E7(*arg0) - temp_v0) - 1);
        if (temp_v0_2 == 0) {
            sceHVSlim_Library_08549708(*arg0);
            return -1;
        }
        sceHVSlim_Library_08549708(*arg0);
        temp_v0_3 = *arg0;
        if (temp_v0_3 != 0) {
            sceHVSlim_Library_0D525122(temp_v0_3);
        }
        *arg0 = temp_v0_2;
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042AE0);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0003F77C);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048484);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000484BC);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048730);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F94C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F954);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F95C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F964);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F96C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F974);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F97C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F984);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F98C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F994);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F99C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F9A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F9AC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005F9B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000489D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048AB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048BDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048CFC);

void func_00048E34(void) {
    func_00048CFC();
}

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000433F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043570);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00040088);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048E50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048FD4);
#endif

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FA64);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043718);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043838);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043B80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043EA0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004917C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000492F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049658);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049978);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049A60);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FAFC);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00053AB4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00053ABC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00053AC4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00053AD0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00053AE4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004045C);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000407C8);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049C34);
#else
s32 func_00049C34(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceIoDopen("ms0:/");
    var_v1 = 0;
    if (temp_v0 >= 0) {
        sceIoDclose(temp_v0);
        var_v1 = 1;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049C70);
#else
s32 func_00049C70(void) {
    sceKernelWakeupThread();
    return 0;
}
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
void func_00046634(void) {
    M2C_FIELD(&D_00069914, s32 *, 0) = M2C_FIELD(&D_00069914, s32 *, 4) = -1;
}

void func_000409CC(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((M2C_FIELD(&D_00069914, s32 *, 0) < 0) && (temp_v0 = sceKernelGetThreadId(), (temp_v0 > 0))) {
        temp_v0_2 = sceKernelSetAlarm(arg0, (s32) func_00049C70, (void *) temp_v0);
        if (temp_v0_2 > 0) {
            M2C_FIELD(&D_00069914, s32 *, 0) = temp_v0_2;
            M2C_FIELD(&D_00069914, s32 *, 4) = temp_v0;
            sceKernelSleepThread();
            M2C_FIELD(&D_00069914, s32 *, 0) = -1;
            M2C_FIELD(&D_00069914, s32 *, 4) = -1;
        }
    }
}
#endif

#if FW_VERSION < 260
void func_000409CC(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if ((M2C_FIELD(&D_00054DE8, s32 *, 0) < 0) && (temp_v0 = sceKernelGetThreadId(), (temp_v0 > 0))) {
        temp_v0_2 = sceKernelSetAlarm(arg0, (s32) func_00049C70, &D_00054DE8);
        if (temp_v0_2 > 0) {
            M2C_FIELD(&D_00054DE8, s32 *, 0) = temp_v0_2;
            M2C_FIELD(&D_00054DE8, s32 *, 4) = temp_v0;
            sceKernelSleepThread();
        }
    }
}
#endif

#if FW_VERSION == 303
void func_00049C90(void) {
    D_0006E670.unk0 = -1;
    D_0006E670.unk4 = -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049CA8);
#endif

s32 func_00049D54(void) {
    void *sp0;
    s32 var_a1;
    s32 var_v1;

    var_a1 = 1;
    var_v1 = 0;
    if (sceIoDevctl(&D_0005FB0C, 0x02125802, NULL, 0U, &sp0, 4U) >= 0) {
        if (sp0 != 0x11) {
            var_a1 = sp0 == 0x41;
        }
        var_v1 = var_a1;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049DB4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049E58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049EE8);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000484BC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048594);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00049F50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A028);
#endif

s32 func_0004A14C(s32 *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = sceHVSlim_Library_15875ED4(*arg0);
    return sceHVSlim_Library_9D38B11B(*arg0, temp_s0, arg1, sceHVSlim_Library_15875ED4(arg1), 0) == 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A1B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A1D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A224);

void func_0004A3B8(struct Unk_func_0004A3B8_0 *arg0) {
    sceHVSlim_Library_A2F4AC9E(*arg0->unk284);
    sceHVSlim_Library_A2F4AC9E(arg0->unk284);
    arg0->unk284 = NULL;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A3F0);

void func_0004A498(struct Unk_func_0004A3B8_0 *arg0) {
    sceHVSlim_Library_A2F4AC9E(*arg0->unk288);
    sceHVSlim_Library_A2F4AC9E(arg0->unk288);
    arg0->unk288 = NULL;
}

s32 func_0004A4D0(struct Unk_func_0004A4D0_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVSlim_Library_24B1FCE6(arg0->unk280);
    arg0->unk28C = temp_v0;
    var_v1 = -1;
    if (temp_v0 != 0) {
        sceHVSlim_Library_D611E938((void *) temp_v0, arg1, arg0->unk280 - 1);
        var_v1 = 0;
    }
    return var_v1;
}

void func_0004A52C(struct Unk_func_0004A3B8_0 *arg0) {
    sceHVSlim_Library_A2F4AC9E(arg0->unk28C);
    arg0->unk28C = 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A558);

void func_0004A6B8(struct Unk_func_0004A3B8_0 *arg0) {
    func_0004A52C(arg0);
    func_0004A498(arg0);
    func_0004A3B8(arg0);
    sceHVSlim_Library_D611E938(arg0, 0, 0x4C0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A6FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A768);

#if FW_VERSION >= 271
s32 func_0004A7A0(struct Unk_func_0004A7A0_0 *arg0) {
    return __builtin_allegrex_ext(arg0->unk8, 0xC, 1);
}
#else
s32 func_0004A7A0(struct Unk_func_0004A7A0_0 *arg0) {
    return ((u32) arg0->unk8 >> 0xC) & 1;
}
#endif

s32 func_0004A7AC(struct Unk_func_0004A7AC_0 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s3;
    void *var_s2;

    if ((arg0 == (void *)-0x2BA) || (var_s2 = &arg0->unk2BA, (arg0->unk2BA == 0))) {
        var_s2 = (u8 *)arg0 + 0x2A0;
    }
    temp_s0 = func_0004A1B0((s32) var_s2) * 2;
    temp_v0 = sceHVSlim_Library_5CA39435(temp_s0);
    var_s3 = 0;
    if (temp_v0 != 0) {
        sceHVSlim_Library_1A02495A(temp_v0, var_s2, temp_s0);
        var_s3 = func_000083D8(temp_v0, temp_s0, 0x22, 0x1E, 0);
        sceHVSlim_Library_A2F4AC9E(temp_v0);
    }
    return var_s3;
}

s32 func_0004A854(s32 *arg0) {
    sceIoDclose(*arg0);
    func_0004A6B8(arg0);
    return 0;
}

s32 func_0004A888(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceHVSlim_Library_27D353B1(arg0);
    var_v0 = -1;
    if (temp_v0 != 0) {
        temp_s0 = func_0004A8E0(temp_v0, arg1);
        sceHVSlim_Library_0D525122(temp_v0);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A8E0);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000414B0);
#else
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A9A0);
#endif

s32 func_0004AAF0(s32 arg0, M2C_UNK arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceHVSlim_Library_27D353B1(arg0);
    var_v0 = -1;
    if (temp_v0 != 0) {
        temp_s0 = func_0004AB48(temp_v0, arg1);
        sceHVSlim_Library_0D525122(temp_v0);
        var_v0 = temp_s0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004AB48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004ABF8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004ACBC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004ADD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004AE90);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004AF50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B25C);

s32 func_0004B3D0(s32 arg0, void *arg1, u32 arg2) {
    return __builtin_allegrex_max(sceIoRead(arg0, arg1, arg2), -1);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B3F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B4D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B568);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B5D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B618);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B760);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B7D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B850);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B8CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B944);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004BAE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004BB24);

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004BD60);
#else
s32 func_0004BD60(s32 arg0, void *arg1, u32 arg2, void *arg3) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = sceIoWrite(arg0, arg1, arg2);
    var_v0 = -1;
    if (temp_v0 >= 0) {
        M2C_FIELD(arg3, s32 *, 0x6644) = 1;
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

void func_0004BD90(s32 arg0, struct Unk_func_0004BD90_1 *arg1) {
    s32 temp_s1;
    void *temp_s0;

    temp_s1 = (u8 *)arg1 + 0x5CC0;
    sceIoClose(arg0);
    temp_s0 = (u8 *)arg1 + 0x6180;
    if (arg1->unk6644 != 0) {
        func_0004B850(temp_s1);
        func_0004B8CC((s32) temp_s0, temp_s1);
        return;
    }
    func_0004B850((s32) temp_s0);
}

s32 func_0004BDF4(void) {
    return (func_0004B850() == 0) ? 0 : -1;
}

#if FW_VERSION >= 260 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048510);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000485CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FB0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FB18);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005B2B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048650);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A5A0);
#endif

#if FW_VERSION < 303
void func_0004283C(void) {
    D_00057864 = (sceHVSlim_Library_457A4136(&D_00057868, 0x10) == 0) ? NULL : &D_00057868;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042878);

s32 *func_00042928(void) {
    return D_00057864;
}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042934);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004BE1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004BED8);
#endif

#if FW_VERSION < 260 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FB0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FB18);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042B30);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042B8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00042FB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000433D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043730);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000472B8);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00043AD0_v201);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044180);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000449D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044A54);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044AD4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00044E04);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004514C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004546C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004556C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045628);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D73C);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004597C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000459D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045A50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045AA8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045B08);

void func_00045B4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00045D2C();
    func_0004DACC(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045BB8);

void func_00045C34(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00045D2C();
    func_0004DD50(arg0, arg1, arg2, arg3, arg4);
}

void func_00045CA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_00045D2C();
    func_0004DE60(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045D2C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045DF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045E6C);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FB1C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004BF5C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C0DC);

void func_0004C138(void) {
    D_0006438C = (sceHVSlim_Library_457A4136(&D_00064390, 0x10) == 0) ? NULL : &D_00064390;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C174);

s32 *func_0004C224(void) {
    return D_0006438C;
}
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C230);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C258);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C430);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C55C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C588);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C5B8);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FB58);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005FE58);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000601CC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000601EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0006020C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0006022C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060270);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00046228);
#endif

#if FW_VERSION == 303
s32 func_0004C664(void) {
    D_00064514 = -1;
    D_000644E0 = sceGeEdramGetAddr();
    D_000644D8 = sceGeListEnQueue((void *) ((s32) &D_0005FE58 & 0x1FFFFFFF), NULL, D_00064514, NULL);
    func_0004C430();
    D_000644E4.unk2C = sceKernelCreateEventFlag("SceGuSignal", 0x200U, 3U, NULL);
    sceGeListSync(D_000644D8, 0);
    return 0;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C6FC);
#endif

#if FW_VERSION == 303
s32 func_0004C6FC(void) {
    sceKernelDeleteEventFlag(D_00064510);
    return 0;
}
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0006029C);
#endif

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000542E0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000542F4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005434C);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000602DC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000602F0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060348);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000603A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C720);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004C8D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CA50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CCD4);

void func_0004CDA0(void) {
    sceGeContinue();
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CDBC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CF00);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CFA8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CFDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CFEC);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D030);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D12C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D408);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D6B8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D6C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D754);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DACC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DBDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DD50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DE60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E090);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00047CB4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E124);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E574);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E680);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E6A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E6D0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00048278);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E6F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E99C);
#endif

#if FW_VERSION == 201 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EA88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EAEC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EB70);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EC80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004ED04);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EDAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EE8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EED4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EF20);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EF58);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EFD0);

void func_0004F018(s32 arg0) {
    func_0004F068(7, arg0);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F038);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F068);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F114);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F15C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F1C0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F1EC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F25C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F2A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F358);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F380);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F3F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F498);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F5B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F60C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F698);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F6D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F734);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F764);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F79C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F7FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F880);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F8E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F904);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FA04);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FA48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FA8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FAAC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FAD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FB20);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FB80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FC00);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FC54);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FC9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FCCC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FCFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FD40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FDF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FE3C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FE64);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FEA4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FF08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005006C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000500A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050218);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050254);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000603C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050450);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000504AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000508D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050CF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051050);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000513F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051AA0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051E94);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000526E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052768);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000527E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052B18);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052E60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053180);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053280);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005333C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053690);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053A14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053A6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053AE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053B40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053BA0);

void func_00053BE4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00053DC4();
    func_0004DACC(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053C50);

void func_00053CCC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00053DC4();
    func_0004DD50(arg0, arg1, arg2, arg3, arg4);
}

void func_00053D38(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_00053DC4();
    func_0004DE60(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053DC4);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053E88);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053FF8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000541F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005433C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005439C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054408);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005443C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000546A0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E7D8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005472C);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005479C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054804);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005486C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000548D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054924);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000549C0);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A97C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054A44);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054A9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054AFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054B40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054B78);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054BB4);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00058A54);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0006041C);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060438);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054BF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054C94);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004ACF0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054DAC);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054F94);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004A834);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004AAE0);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B00C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B2A8);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004B7C0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000550CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055378);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000558E8);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055BFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055CC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055D90);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060460);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060464);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060468);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060780);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055EC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056210);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060848);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060854);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056334);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060898);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000608A4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056454);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000608F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056C14);

s32 func_00056CE8(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050DC8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CC14);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056CF0);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056D04);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056DE0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060930);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060938);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056DF4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050FE4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CE60);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
void func_0004C71C(void) {
    func_0004CB64();
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CE8C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056F0C);

void func_00056F2C(void) {
    func_00057374();
}
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056F48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056F94);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004CB64);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057374);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005739C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000574C0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000577C0);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D778);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D5A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D5FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D690);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D8B4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057878);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057DD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057E24);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057EB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000580DC);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058150);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D940);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DD00);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058168);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058288);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058384);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000583DC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058450);

void func_00058534(s32 arg0) {
    func_000589B4(arg0, (s32) &func_00058288);
}

void func_00058554(void) {
    func_00058534(D_00061498);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058578);
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004E180);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000585FC);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058878);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000589B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058ABC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058C24);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058E4C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00059394);

void func_000594A0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_0006D9D4 == 0) {
        D_0006D9D8 = temp_a0;
    }
    D_0006D9D4 += 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000594DC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004ED30);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EDE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EE14);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F044);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_0004F044(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v1;

    var_a0_2 = arg0;
    var_v1 = 0;
    if (!(var_a0_2 & 0xFFFF0000)) {
        var_v1 = 0x10;
        var_a0_2 <<= 0x10;
    }
    if (!(var_a0_2 & 0xFF000000)) {
        var_v1 += 8;
        var_a0_2 <<= 8;
    }
    if (!(var_a0_2 & 0xF0000000)) {
        var_v1 += 4;
        var_a0_2 *= 0x10;
    }
    if (!(var_a0_2 & 0xC0000000)) {
        var_v1 += 2;
        var_a0_2 *= 4;
    }
    if ((var_a0_2 < 0) || (var_v1 += 1, var_a0 = 0x20, ((var_a0_2 & 0x40000000) != 0))) {
        var_a0 = var_v1;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F0C4);

void func_0004F17C(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0004ED30(arg0, 1);
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F1B0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F3C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F618);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F86C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00059518);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000595D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000595FC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005982C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000598B4);

void func_0005996C(s32 arg0, s32 arg1) {
    struct Unk_func_0005996C_temp_v0 *temp_v0;

    temp_v0 = func_00059518(arg0, 1);
    temp_v0->unk14 = arg1;
    temp_v0->unk10 = 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000599A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00059BB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00059E08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A05C);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A424);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A480);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A4F8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A584);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
void func_0005A5FC(struct Unk_func_0005A5FC_0 *arg0) {
    func_0005A750(func_0004CB64(), arg0->unkE);
}
#endif

#if FW_VERSION == 201
void func_0005A5FC(struct Unk_func_0005A5FC_0 *arg0) {
    func_0005A750(D_00061498, arg0->unkE);
}
#endif

#if FW_VERSION == 303
void func_0005A5FC(struct Unk_func_0005A5FC_0 *arg0) {
    func_0005A750(func_00057374(), arg0->unkE);
}
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A62C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FEB0);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A694);
#endif

#if FW_VERSION < 280 || FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A750);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A7AC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A810);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A878);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050100);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050128);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050300);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005042C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050458);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050488);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F4A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000098);
#endif

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000548EC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00058F98);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00058FA8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000590C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000590C4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000590C8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000590CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000590D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000593D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059744);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059764);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059784);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000597A4);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000597E8);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050534);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
s32 func_00050534(void) {
    D_0005E2C8 = -1;
    D_0005E294 = sceGeEdramGetAddr();
    D_0005E28C = sceGeListEnQueue((void *) ((s32) &D_000593D0 & 0x1FFFFFFF), NULL, D_0005E2C8, NULL);
    func_00050300();
    M2C_VFIELD(&D_0005E298, s32, 0x2C) = sceKernelCreateEventFlag("SceGuSignal", 0x200U, 3U, NULL);
    sceGeListSync(D_0005E28C, 0);
    return 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
s32 func_000505CC(void) {
    sceKernelDeleteEventFlag(D_0005E2C4);
    return 0;
}

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059814);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059854);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059868);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_000598C0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059918);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000505F0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000507A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050920);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050BA4);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000290);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000380);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00000424);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000004C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0000054C);

s32 func_0004FB48(void) {
    return 1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
void func_0004FB50(void) {
    sceGeContinue();
}
#endif

#if FW_VERSION == 201
void func_0004FB50(void) {
    sceIoRename();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050C8C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050DD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050E78);
#endif

#if FW_VERSION == 201
s32 func_0004FB6C(void) {
    return -1;
}

s32 func_0004FB74(void) {
    return -1;
}

s32 func_0004FB7C(void) {
    return -1;
}

s32 func_0004FB84(void) {
    return -1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FB8C);

s32 func_0004FBE0(void) {
    return -1;
}

s32 func_0004FBE8(void) {
    return -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FBF0);
#endif

#if FW_VERSION == 201
s32 func_0004FBF0(void) {
    return -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050EBC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050F00);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050FFC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000512D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FBF8);
#endif

#if FW_VERSION == 201
s32 func_0004FBF8(void) {
    return -1;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051594);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004D754);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DACC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DBDC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DD50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004DE60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051F60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051FF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052444);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052550);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052578);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000525A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000525C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005286C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052958);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000529BC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052A40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052B50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052BD4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052C7C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052D5C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052DA4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052DF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052E28);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052EA0);
#endif

#if FW_VERSION == 201
void func_0004FC00_v201(void) {
    sceKernelLibcClock();
}

void func_0004FC1C(void) {
    sceKernelLibcTime();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FC38);
#endif

#if FW_VERSION == 201
void func_0004FC38(void) {
    sceKernelLibcGettimeofday();
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052F08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052F38);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052FE4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005302C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053090);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000530BC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005312C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053178);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053228);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053250);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000532C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053368);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053484);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F60C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053568);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F6D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053604);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053634);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005366C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000536CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053750);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000537B4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F904);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000538D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053918);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005395C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005397C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FAD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FB20);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053A50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053AD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053B24);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053B6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053B9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053BCC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053C10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053CC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053D0C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053D34);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053D74);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053DD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053F3C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053F78);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000540E8);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EC24);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E87C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EE20);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004EE7C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F2A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004F6C4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FA20);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0004FDC0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050470);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050CC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050D44);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00050DC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000510F4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005143C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005175C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005185C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051918);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051C6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00051FF0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000459D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00045A50);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005211C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005217C);

void func_00045B4C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000523A0();
    func_0004DACC(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005222C);

void func_000522A8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000523A0();
    func_0004DD50(arg0, arg1, arg2, arg3, arg4);
}

void func_00052314(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_000523A0();
    func_0004DE60(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000523A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052464);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000525D4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000527CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052918);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052978);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000529E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052A18);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052AF4);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052C7C_v280);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052D08);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052D78);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052DE0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052E48);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052EB0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052F00);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00052F9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053020);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053078);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000530D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005311C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053154);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053190);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E8D0);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E8EC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000531CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053270);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053388);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053570);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000536A8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053954);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00053EC4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000541D8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000542A0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005436C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E910);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E914);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005E918);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EC30);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005449C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000547EC);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005ECF8);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005ED04);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054910);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005ED48);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005ED54);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054A30);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EDA4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000551F0);

s32 func_000552C4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000552CC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000552E0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000553BC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EC60_v282);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EDE0_v280);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EDE8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000553D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000554E8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055508);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055524);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055570);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055950);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055978);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055A80);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000577C0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00055E38);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056390);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000563E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056478);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005669C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056710);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056728);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056848);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056944);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005699C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056A10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056AF4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056B14);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056B38);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056BBC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056E38);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00056F74);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005707C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000571E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005740C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057954);

void func_00057A60(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_0006BB58 == 0) {
        D_0006BB5C = temp_a0;
    }
    D_0006BB58 += 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057A9C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057AD8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057B90);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057BBC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057DEC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057E74);

void func_00057F2C(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00057AD8(arg0, 1);
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00057F60);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058178);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000583C8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005861C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000589E4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058A40);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058AB8);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058B44);

void func_00058BBC(void *arg0) {
    func_00058D10(func_00055950(), (s32) M2C_FIELD(arg0, s16 *, 0xE));
}

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058BEC);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058C54);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058D10);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058D6C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058DD0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00058E38);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000589C4);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005A8E0);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005AEB4);

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_00054170);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_000544E8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005AF00);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B278);
#endif

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B49C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B4D0);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B548);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B60C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B63C);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B8A4);

INCLUDE_ASM("nonmatchings/htmlviewer_ui", func_0005B9B8);

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE0C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE10);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EE20);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF38);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF3C);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EDC0);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF40_v280);
#endif

#if FW_VERSION >= 280 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EF44);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00059940);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0005EB30);
#endif

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_0006095C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060960);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060970);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060A88);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060A8C);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060A90);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060A94);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060A98);

INCLUDE_RODATA("nonmatchings/htmlviewer_ui", D_00060AB0);
#endif
