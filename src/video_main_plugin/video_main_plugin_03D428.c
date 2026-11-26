#include "common.h"
#include "video_main_plugin_decls.h"

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D428);

void func_0003D464(void **arg0) {
    void *temp_s0;
    struct Unk_func_0003D464_var_a0 *var_a0;
    struct Unk_func_0003D464_var_v0 *var_v0;

    var_a0 = *arg0;
    var_v0 = var_a0->unk4;
    if (var_v0 != var_a0) {
        do {
            temp_s0 = var_v0->unk4;
            scePaf_997D2809(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_997D2809(var_a0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D4BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D518);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D574);

void func_0003D5F4(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D604(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}

void func_0003D62C(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D63C(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}

void func_0003D664(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D674(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}

void func_0003D69C(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D6AC(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}

void func_0003D6D4(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D6E4(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}

void func_0003D70C(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D71C(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}

void func_0003D744(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
}

void func_0003D754(M2C_UNK **arg0) {
    *arg0 = &D_00055890;
    func_0003D40C();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003C304);

void func_0003C378(void *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0xC;
    func_000250D0(temp_s2);
    func_0004C048((s32) arg0, M2C_FIELD(arg0, s32 *, 8), arg1);
    func_000250EC(temp_s2);
}

void func_0003C3D0(s32 arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0xC;
    func_000250D0(temp_s2);
    func_0004C048(arg0, arg0 + 4, arg1);
    func_000250EC(temp_s2);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003C428);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D77C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D900);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DA84);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DB4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DC14);

void func_0003DCE4(s32 arg0) {
    D_00081EA4 = arg0;
}

void func_0003DCF0(void) {
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DCF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DEF0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DFA8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E084);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E128);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E348);

s32 func_0003E434(struct Unk_func_0003E434_0 *arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_s0;
    s32 temp_s4;
    struct Unk_vt_func_0003E434_temp_a0 **temp_a0;
    struct Unk_vt_func_0003E434_temp_v0 **temp_v0;

    temp_s4 = (u8 *)arg0 + 0x5C;
    func_000250D0(temp_s4);
    temp_s0 = func_0003FFE0(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = arg0->unk4C;
            (*temp_v0)->unk24(temp_v0, 0, arg0->unk108);
            temp_a0 = arg0->unk4C;
            (*temp_a0)->unk24(temp_a0, 1, arg0->unk118);
        }
    }
    func_000250EC(temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000555F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055604);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055614);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055620);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055634);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055650);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055670);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005568C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000556B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000556C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000556D0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000556E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000556F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557D0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000557F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055800);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055818);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055830);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055848);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055860);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055878);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055890);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000558A8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000558D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000558E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000558F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055904);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054FA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054FC0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054FDC);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000552F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055314);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054FF8);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055014_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055014_v310);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055030);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00053DC4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00053DE0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00053DFC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00053E18);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00053E34);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00053E50);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DCF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003DEF0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003CDF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003CED0);
#endif

#if FW_VERSION >= 310
s32 func_0003D104(void) {
    void *sp0;
    s32 var_v1;

    var_v1 = 0;
    if (sceDisplayGetMode(&sp0, NULL, NULL) == 0) {
        var_v1 = (sp0 == 0xD1) | (sp0 == 0x1D1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D14C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D384);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003CF74);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D194);
#endif

#if FW_VERSION >= 310
s32 func_0003D264(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    void **temp_a0;
    void **temp_v0;
    void *temp_s4;

    temp_s4 = arg0 + 0x60;
    func_000250D0((s32) temp_s4);
    temp_s0 = func_0003FFE0(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x50);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0xC)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0x128));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x50);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0xC)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0x138));
        }
    }
    func_000250EC((s32) temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_0003D264(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x5C;
    func_000250D0(temp_s4);
    temp_s0 = func_0003FFE0(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0xC)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0x118));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0xC)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0x128));
        }
    }
    func_000250EC(temp_s4);
    return temp_s0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E4FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E62C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E784);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E8AC);
#endif

#if FW_VERSION == 282
s32 func_0003EAF0(struct Unk_func_0003EAF0_0 *arg0) {
    struct Unk_func_0003EAF0_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA0;
    if (temp_v0 != NULL) {
        return temp_v0->unk4;
    }
    return arg0->unkAC;
}
#endif

#if FW_VERSION >= 310
s32 func_0003EB0C(struct Unk_func_0003EB0C_0 *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 8);
    }
    return M2C_FIELD(arg0, s32 *, 0xB4);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_0003EB0C(struct Unk_func_0003EB0C_0 *arg0) {
    struct Unk_func_0003EB0C_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA0;
    if (temp_v0 != NULL) {
        return temp_v0->unk8;
    }
    return arg0->unkB0;
}
#endif

#if FW_VERSION >= 310
s32 func_0003D93C(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    return M2C_FIELD(arg0, s32 *, 0xB8);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_0003D93C(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0xA0);
    if (temp_v0 != NULL) {
        return M2C_FIELD(temp_v0, s32 *, 0xC);
    }
    return M2C_FIELD(arg0, s32 *, 0xB4);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003D958);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003EB28);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003EBC4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003EC8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003ED04);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F3D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F434);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_0003F460(struct Unk_func_0003F460_0 *arg0, s32 arg1) {
    arg0->unk50 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_0003F46C(struct Unk_func_0003F46C_0 *arg0, s32 arg1) {
    u8 *temp_s0;

    arg0->unk44 = arg1;
    temp_s0 = &arg0->pad0[0x3C];
    func_00024214((s32) temp_s0, arg1 + 0x94, 0);
    func_00024214((s32) temp_s0, arg1 + 0xA8, 3);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0003F46C(struct Unk_func_0003F46C_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk44 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0x84, 0);
    func_00024214((s32) temp_s0, arg1 + 0x98, 3);
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F4C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F4F4);
#endif

#if FW_VERSION >= 310
s32 func_0003E498(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0x94, 0);
    func_00024214((s32) temp_s0, arg1 + 0xA8, 3);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E4F4);
#endif

#if FW_VERSION >= 282
s32 func_0003F500(struct Unk_func_0003F500_0 *arg0, s32 arg1) {
    arg0->unk58 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 310
s32 func_0003E52C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E538);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E310);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E3A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E694);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F50C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F6D0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F79C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003E7C8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F818);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F854);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003EAB0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003FAF4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003FD3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003FFE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000401C4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F2F8);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000402F8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000403D4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F870);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F9EC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000408AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00040A38);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00040BD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00040CF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00040F14);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00040F60);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041150);
#endif

#if FW_VERSION >= 282
void func_00041194(s32 arg0) {
    func_0003DB4C(arg0 - 0x3C);
}

void func_000411B0(s32 arg0) {
    func_0003DC14(arg0 - 0x3C);
}

void func_000411CC(s32 arg0) {
    func_0003DEF0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000411E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000412D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000413C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004146C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041510);

void func_000415BC(s32 arg0) {
    D_00081EB0 = arg0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000405B4);
#endif

#if FW_VERSION == 282
void func_000415C8(struct Unk_func_000415C8_0 *arg0) {
    struct Unk_func_000415C8_var_a0 *var_a0;
    struct Unk_func_000415C8_var_v0 *var_v0;

    var_v0 = arg0->unk68;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk38;
        } while (var_v0 != NULL);
    }
    var_a0 = arg0->unk70;
    if (var_a0 != NULL) {
        do {
            var_a0 = var_a0->unk24;
        } while (var_a0 != NULL);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041600);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041814);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041884);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004095C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041914);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041A40);
#endif

#if FW_VERSION >= 310
s32 func_00041A40(void *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0x4C;
    func_000250D0(temp_s2);
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
    func_000250EC(temp_s2);
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00041A88(struct Unk_func_00041A88_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x4C;
    func_000250D0(temp_s1);
    arg0->unk5C = 0;
    func_000250EC(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041ACC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00040B94);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041B1C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041DEC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041E70);
#endif

#if FW_VERSION == 282
s32 func_00041E70(struct Unk_func_00041E70_0 *arg0, struct Unk_func_00041E70_1 *arg1) {
    s32 temp_s2;
    void **temp_v1;

    temp_s2 = (u8 *)arg0 + 0x54;
    func_000250D0(temp_s2);
    temp_v1 = arg0->unk74;
    arg0->unk74 = (void **) (&arg1->unk24);
    *temp_v1 = arg1;
    arg1->unk24 = 0;
    func_000250EC(temp_s2);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041ED0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041F60);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041FE0);
#endif

#if FW_VERSION >= 300
void func_00042008(struct Unk_func_00042008_0 *arg0, s32 arg1) {
    u8 *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = &arg0->pad0[0x3C];
    func_00024214((s32) temp_s0, arg1 + 0xEC, 2);
    func_00024214((s32) temp_s0, arg1 + 0x100, 3);
}
#endif

#if FW_VERSION == 282
void func_00042008(struct Unk_func_00042008_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk48 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0xD8, 2);
    func_00024214((s32) temp_s0, arg1 + 0xEC, 3);
}
#endif

#if FW_VERSION >= 282
void func_00042060(s32 arg0) {
    func_0004146C(arg0 - 0x3C);
}

void func_0004207C(s32 arg0) {
    func_00041510(arg0 - 0x3C);
}

void func_00042098(s32 arg0) {
    func_00041814(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000420B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004212C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041268);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041388);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000421A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000422C0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000423DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042478);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042514);

void func_000425B8(s32 arg0) {
    D_00081EB4 = arg0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041660);
#endif

#if FW_VERSION == 282
void func_000425C4(struct Unk_func_000425C4_0 *arg0) {
    struct Unk_func_000425C4_var_v0 *var_v0;

    var_v0 = arg0->unkA4;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk30;
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000425E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004295C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042988);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042A58);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042B14);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041D60);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042C90);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042E1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042E2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042E44);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00041FA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004203C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042EB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042F2C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042FD0);
#endif

#if FW_VERSION >= 300
s32 func_00042114(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042FE0);
#endif

#if FW_VERSION >= 300
s32 func_00043018(struct Unk_func_00043018_0 *arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 1;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x8C);
        var_v1 = 6;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 8);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_00043018(struct Unk_func_00043018_0 *arg0, s32 *arg1) {
    s32 var_v1;
    struct Unk_func_00043018_temp_a0 *temp_a0;

    var_v1 = 1;
    if (arg1 != NULL) {
        temp_a0 = arg0->unk9C;
        var_v1 = 6;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = temp_a0->unk4;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043040);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000430A8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000430E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043220);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004326C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000432B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043304);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043368);

void func_00043408(s32 arg0) {
    func_00042478(arg0 - 0x3C);
}

void func_00043424(s32 arg0) {
    func_00042514(arg0 - 0x3C);
}

void func_00043440(s32 arg0) {
    func_0004295C(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042530);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042710);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000428F0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004345C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043680);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000438A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004394C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000439F4);
#endif

#if FW_VERSION >= 300
void func_00042A9C(s32 arg0) {
    D_00080318 = arg0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042AA8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042AF0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043AB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043B18);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043F8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043FB0);
#endif

#if FW_VERSION >= 300
s32 func_00042E8C(void *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = arg0 + 0x48;
    func_000250D0(temp_s2);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    func_00043098((s32) arg0);
    temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x30)(arg0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0x2C)(arg0, 0);
    func_000250EC(temp_s2);
    return temp_s1;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043FF8);
#endif

#if FW_VERSION >= 300
s32 func_00044108(struct Unk_func_00044108_0 *arg0) {
    u8 *temp_s1;

    temp_s1 = &arg0->pad0[0x48];
    func_000250D0((s32) temp_s1);
    arg0->pad0[0x50] = 0;
    func_000250EC((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00044108(struct Unk_func_00044108_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D0(temp_s1);
    arg0->unk58 = 0;
    func_000250EC(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042F50);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042FA4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004414C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000441DC);
#endif

#if FW_VERSION >= 282
s32 func_00044218(struct Unk_func_00044218_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00024214((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043098);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000430F0);
#endif

#if FW_VERSION == 282
s32 func_00044244(void) {
    return 0;
}

s32 func_0004424C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044254);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044264);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000444CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000446DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044780);
#endif

#if FW_VERSION >= 282
void func_00044CFC(s32 arg0) {
    func_0004394C(arg0 - 0x3C);
}

void func_00044D18(s32 arg0) {
    func_000439F4(arg0 - 0x3C);
}

void func_00044D34(s32 arg0) {
    func_00043F8C(arg0 - 0x3C);
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044D50);
#endif

#if FW_VERSION >= 282
s32 func_00044F90(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000559C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000559F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A08);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A18);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A24);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A34);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A80);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055A90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055AA0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055AB0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055ABC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055AD0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B00);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B10);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B20);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B30);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B40);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B54);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B58);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B60);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B64);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B68);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B6C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B70);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B74);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B78);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B7C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B80);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B88);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B94);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B98);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055B9C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055BA0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055BA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055BA8);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055BAC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055BB8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044F98);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000452B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000453AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000454A0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043B78);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043BC0);
#endif

#if FW_VERSION == 282
void func_000455A8(struct Unk_func_000455A8_0 *arg0) {
    struct Unk_func_000455A8_var_v0 *var_v0;

    var_v0 = arg0->unk6C;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk20;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000455C8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000457C4);

s32 func_00045824(void) {
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043D14);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004582C);
#endif

#if FW_VERSION >= 300
s32 func_000458F0(struct Unk_func_000458F0_0 *arg0) {
    u8 *temp_s1;

    temp_s1 = &arg0->pad0[0x48];
    func_000250D0((s32) temp_s1);
    arg0->pad0[0x50] = 0;
    func_000250EC((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_000458F0(struct Unk_func_000458F0_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D0(temp_s1);
    arg0->unk58 = 0;
    func_000250EC(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043DA8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043DE0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045934);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004599C);
#endif

#if FW_VERSION >= 300
s32 func_00045A14(struct Unk_func_00045A14_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x180) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00045A14(struct Unk_func_00045A14_0 *arg0, s32 arg1) {
    arg0->unk178 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 282
s32 func_00045A20(struct Unk_func_00045A20_0 *arg0, s32 arg1) {
    arg0->unk44 = arg1;
    func_00024214((s32) ((u8 *)arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045A4C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043EC4);
#endif

#if FW_VERSION >= 282
s32 func_00045A80(void) {
    return 0;
}

s32 func_00045A88(void) {
    return 0;
}

s32 func_00045A90(void) {
    return 0;
}
#endif

#if FW_VERSION >= 300
s32 func_00045A98(struct Unk_func_00045A98_0 *arg0) {
    void **temp_a0;

    temp_a0 = arg0->unk44;
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x20)(temp_a0);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_00045A98(struct Unk_func_00045A98_0 *arg0) {
    struct Unk_vt_func_00045A98_temp_a0 **temp_a0;

    temp_a0 = arg0->unk44;
    (*temp_a0)->unk70(temp_a0);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045AC4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004401C);

s32 func_00044074(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045B78);
#endif

#if FW_VERSION >= 282
void func_00045B90(s32 arg0) {
    func_000453AC(arg0 - 0x3C);
}

void func_00045BAC(s32 arg0) {
    func_000454A0(arg0 - 0x3C);
}

void func_00045BC8(s32 arg0) {
    func_000457C4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045BE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045D24);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000438A4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045E64);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045F18);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045FCC);

void func_00046088(s32 arg0) {
    D_00081ED4 = arg0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044614);
#endif

#if FW_VERSION == 282
void func_00046094(struct Unk_func_00046094_0 *arg0) {
    struct Unk_func_00046094_var_v0 *var_v0;

    var_v0 = arg0->unk60;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk18;
        } while (var_v0 != NULL);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000460B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000462BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046308);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046350);
#endif

#if FW_VERSION >= 300
s32 func_0004640C(struct Unk_func_0004640C_0 *arg0) {
    u8 *temp_s1;

    temp_s1 = &arg0->pad0[0x48];
    func_000250D0((s32) temp_s1);
    arg0->pad0[0x50] = 0;
    func_000250EC((s32) temp_s1);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0004640C(struct Unk_func_0004640C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x48;
    func_000250D0(temp_s1);
    arg0->unk58 = 0;
    func_000250EC(temp_s1);
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046450);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000464D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046510);

s32 func_000465A0(struct Unk_func_000465A0_0 *arg0, s32 arg1) {
    void *temp_s0;

    arg0->unk44 = arg1;
    temp_s0 = (u8 *)arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0x40, 0);
    func_00024214((s32) temp_s0, arg1 + 0x54, 1);
    return 0;
}

s32 func_000465FC(void) {
    return 0;
}

void func_00046604(s32 arg0) {
    func_00045F18(arg0 - 0x3C);
}

void func_00046620(s32 arg0) {
    func_00045FCC(arg0 - 0x3C);
}

void func_0004663C(s32 arg0) {
    func_000462BC(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 310
s32 func_00044DC4(void) {
    return M2C_FIELD(scePaf_5DFB5858(), s32 *, 0x9C);
}

s32 func_00044DE4(void) {
    return func_00044DC4() != 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044E04);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044EE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044F54);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004504C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045130);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046658);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000466A0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055C58);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055CA8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055CBC);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054178);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055CD0);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055CE4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055CF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055D10);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000466E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046894);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046B80);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046C64);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000470E4);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045E84);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046234);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000472D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047488);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047640);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047ABC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047F38);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047390);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000474C4);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000483BC);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000485B0);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048788);
#else
s32 func_00048788(s32 arg0, s32 *arg1, s32 arg2) {
    if (arg2 != 0) {

    } else {
        func_00005DF0(arg0 + 0xAF0, *arg1);
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048864);

#if FW_VERSION >= 310
void func_00047904(void *arg0) {
    func_00049C4C();
    func_00005DF0(arg0 + 0x1288, 0);
    func_00005DF0(arg0 + 0x1284, 0);
    func_00005DF0(arg0 + 0x128C, 0);
    M2C_FIELD(arg0, s8 *, 0x1280) = 0;
    M2C_FIELD(arg0, s8 *, 0x1290) = 0;
    M2C_FIELD(arg0, s32 *, 0x1274) = 0;
    M2C_FIELD(arg0, s32 *, 0x1270) = 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048980);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000489F0);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047A40);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047B68);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047D0C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047E0C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047F74);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048034);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004811C);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048A60);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048D9C);

#if FW_VERSION >= 310
void func_0004833C(void *arg0) {
    s32 var_v0;

    M2C_FIELD(arg0, s32 *, 0x12C8) = (s32) M2C_FIELD(arg0, s32 *, 0x1330);
    var_v0 = 0;
    M2C_FIELD(arg0, s32 *, 0x12D8) = (s32) M2C_FIELD(arg0, s32 *, 0x1334);
    M2C_FIELD(arg0, s32 *, 0x12D0) = (s32) M2C_FIELD(arg0, s32 *, 0x1340);
    M2C_FIELD(arg0, s32 *, 0x12E0) = (s32) M2C_FIELD(arg0, s32 *, 0x1344);
    M2C_FIELD(arg0, s32 *, 0x12CC) = (s32) M2C_FIELD(arg0, s32 *, 0x1338);
    M2C_FIELD(arg0, s32 *, 0x12D4) = (s32) M2C_FIELD(arg0, s32 *, 0x1348);
    M2C_FIELD(arg0, s32 *, 0x12DC) = (s32) M2C_FIELD(arg0, s32 *, 0x133C);
    M2C_FIELD(arg0, s32 *, 0x12E4) = (s32) M2C_FIELD(arg0, s32 *, 0x134C);
    if (M2C_FIELD(arg0, u8 *, 0x1280) != 0) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x1281) != 0;
    }
    func_00048F24((s32) arg0, var_v0);
}
#else
void func_00048EC8(struct Unk_func_00048EC8_0 *arg0) {
    arg0->unk12C8 = (s32) arg0->unk1330;
    arg0->unk12D8 = (s32) arg0->unk1334;
    arg0->unk12D0 = (s32) arg0->unk1340;
    arg0->unk12E0 = (s32) arg0->unk1344;
    arg0->unk12CC = (s32) arg0->unk1338;
    arg0->unk12D4 = (s32) arg0->unk1348;
    arg0->unk12DC = (s32) arg0->unk133C;
    arg0->unk12E4 = (s32) arg0->unk134C;
    func_00048F24((s32) arg0, (s32) arg0->unk1281);
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048F24);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000490FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049270);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048830);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DDC);

#if FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DE0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DE4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DE8);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005546C);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DEC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DF0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DF4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DF8);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055480);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055DFC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E00);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E04);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E08);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E0C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E10);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E14);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E34);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000554CC);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049354);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048A14);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049438);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049564);

#if FW_VERSION >= 310
void func_00048EB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1358) = (s32) (((arg1 ^ 4) != 0) ? 0 : 8);
    M2C_FIELD(arg0, s32 *, 0x1350) = 0;
    M2C_FIELD(arg0, s32 *, 0x1354) = 0;
    M2C_FIELD(arg0, s32 *, 0x135C) = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048ED8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004907C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049130);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049830);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000499AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049B28);
#endif

void func_00049C4C(void) {
    scePaf_D0AD10FF();
    scePaf_7C2C2742();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049C70);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A1E4);

void func_0004A224(M2C_UNK **arg0) {
    *arg0 = &D_00056020;
}

void func_0004A234(M2C_UNK **arg0) {
    *arg0 = &D_00056020;
    scePaf_4E67BB08((s32) arg0);
}

void func_0004A25C(struct Unk_func_0004A25C_0 *arg0) {
    arg0->unk0 = &D_00055F88;
    arg0->unk8 = &D_00055220;
}

void func_0004A278(struct Unk_func_0004A278_0 *arg0) {
    arg0->unk0 = &D_00055F88;
    arg0->unk8 = &D_00055220;
    scePaf_4E67BB08((s32) arg0);
}

void func_0004A2AC(struct Unk_func_0004A2AC_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A2B4);

void func_0004A2D4(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

void func_0004A2F0(s32 arg0) {
    scePaf_1F0E9712(arg0 + 8);
}

void func_0004A30C(s32 arg0) {
    scePaf_0CFDBE2F(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A328);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A36C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A3AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A3E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A428);

void func_0004A44C(struct Unk_vt_func_0004A44C_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_0004A470(struct Unk_vt_func_0004A470_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_0004A494(struct Unk_vt_func_0004A494_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A4B8);

void func_0004A4DC(struct Unk_vt_func_0004A4DC_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_0004A500(struct Unk_vt_func_0004A500_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_0004A524(struct Unk_vt_func_0004A524_arg0 **arg0) {
    (*arg0)->unk28();
}

void func_0004A548(s32 arg0) {
    scePaf_95948FB6(arg0 + 8);
}

void func_0004A564(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

void func_0004A580(s32 arg0) {
    scePaf_BA433BEF(arg0 + 8);
}

void func_0004A59C(s32 arg0) {
    scePaf_B7865607(arg0 + 8);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A5B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A5F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A638);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A678);

void func_0004A6B8(void) {
}

s32 func_0004A6C0(void) {
    return -1;
}

s32 func_0004A6C8(void) {
    return -1;
}

s32 func_0004A6D0(void) {
    return -1;
}

s32 func_0004A6D8(void) {
    return -1;
}

s32 func_0004A6E0(void) {
    return 0;
}

s32 func_0004A6E8(void) {
    return 0;
}

s32 func_0004A6F0(void) {
    return 1;
}

void func_0004A6F8(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A700);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A76C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A7E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055E70);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055F08);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055F48);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00055F88);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056020);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056030);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056040);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056058);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056098);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000560B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000560CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000560DC);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000560F0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000560FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A88C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004AD0C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B128);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B178);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B1D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B23C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B264);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B2EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B380);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B41C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B4E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B7DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B840);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BB64);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BC20);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BE4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BF1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BFD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C0A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C180);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C218);

#if FW_VERSION >= 300
void func_0004C260(struct Unk_func_0004C260_0 *arg0, u32 arg1) {
    if (arg1 >= 3U) {

    } else {
        M2C_FIELD(arg0, u32 *, 0x520) = arg1;
        func_0004C484();
    }
}
#else
void func_0004C260(struct Unk_func_0004C260_0 *arg0, u32 arg1) {
    if (arg1 >= 3U) {

    } else {
        arg0->unk530 = arg1;
        func_0004C484();
    }
}
#endif

#if FW_VERSION >= 300
void func_0004C28C(struct Unk_func_0004C28C_0 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x524) = arg1;
    M2C_FIELD(arg0, s32 *, 0x528) = arg2;
    func_0004C484();
}
#else
void func_0004C28C(struct Unk_func_0004C28C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk534 = arg1;
    arg0->unk538 = arg2;
    func_0004C484();
}
#endif

#if FW_VERSION >= 300
void func_0004C2B0(struct Unk_func_0004C2B0_0 *arg0, s8 arg1) {
    arg0->pad4DC[0x50] = (u8) arg1;
    func_0004C304((s32) arg0, 0, arg0->unk4D8 == 0);
}
#else
void func_0004C2B0(struct Unk_func_0004C2B0_0 *arg0, s8 arg1) {
    arg0->unk53C = arg1;
    func_0004C304((s32) arg0, 0, arg0->unk4D8 == 0);
}
#endif

#if FW_VERSION >= 300
void func_0004C2D8(struct Unk_func_0004C2D8_0 *arg0, s8 arg1) {
    arg0->pad4DC[0x51] = (u8) arg1;
    func_0004C304((s32) arg0, 3, arg0->unk4D8 == 3);
}
#else
void func_0004C2D8(struct Unk_func_0004C2D8_0 *arg0, s8 arg1) {
    arg0->unk53D = arg1;
    func_0004C304((s32) arg0, 3, arg0->unk4D8 == 3);
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C304);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C484);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C4D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C5C0);

void func_0004C694(void) {
    func_0004C5C0(1, 0xFFFF);
}

void func_0004C6B4(void) {
    func_0004C5C0(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C6D4);

s32 func_0004C700(void) {
    return D_0005714C;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C70C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C748);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C78C);

s32 func_0004C7B8(void) {
    return D_00057150;
}

s32 func_0004C7C4(s32 arg0) {
    return arg0 + 0x334;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C7CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C900);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C9A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C9EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000561F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056208);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000562E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000563B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000563C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000563DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000563E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056408);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056414);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056434);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056444);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056460);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056470);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005648C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000564A0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000564C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000564D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000564F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056500);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056524);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056534);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056558);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005656C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056578);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CA10);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CBA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CD14);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CD80);

void func_0004CDB8(M2C_UNK **arg0) {
    *arg0 = &D_000565C0;
    D_00081F40 = 0;
    func_00036CC0((s32) arg0);
}

void func_0004CDE4(M2C_UNK **arg0) {
    *arg0 = &D_000565C0;
    D_00081F40 = 0;
    func_00036CC0((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CE24);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CECC);

void func_0004CF10(M2C_UNK **arg0) {
    *arg0 = &D_00056640;
    D_00081F44 = 0;
    func_00036CC0((s32) arg0);
}

void func_0004CF3C(M2C_UNK **arg0) {
    *arg0 = &D_00056640;
    D_00081F44 = 0;
    func_00036CC0((s32) arg0);
}

void func_0004CF68(M2C_UNK **arg0) {
    *arg0 = &D_00056640;
    D_00081F44 = 0;
    func_00036CC0((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000565C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000565E0);

#if FW_VERSION != 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CFA8);
#else
void func_0004CFA8(struct Unk_func_0004CFA8_0 *arg0) {
    s32 temp_v0;
    struct Unk_func_0004CFA8_temp_v0_2 *temp_v0_2;

    temp_v0 = arg0->unk14;
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = scePaf_72514A05(temp_v0, "video_home_menu_plane", 0);
        arg0->unk20 = temp_v0_2;
        if (temp_v0_2 != NULL) {
            temp_v0_2->unk1FD = 0;
            temp_v0_2->unk1FE = 0;
            scePaf_86B41BA3(temp_v0_2);
        }
    }
}
#endif

void func_0004D008(void) {
}

s32 func_0004D010(struct Unk_func_0004D010_0 *arg0) {
    arg0->unk20 = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D01C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D238);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D270);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D32C);

void func_0004D384(M2C_UNK **arg0) {
    *arg0 = &D_00056760;
    D_00081F48 = 0;
    func_00036CC0((s32) arg0);
}

void func_0004D3B0(M2C_UNK **arg0) {
    *arg0 = &D_00056760;
    D_00081F48 = 0;
    func_00036CC0((s32) arg0);
}

void func_0004D3DC(M2C_UNK **arg0) {
    *arg0 = &D_00056760;
    D_00081F48 = 0;
    func_00036CC0((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D41C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056640);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056660);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005667C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056698);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000566B4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000566D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000566F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005671C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056738);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D4F0);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056760);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056780);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000567A0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054538);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054548);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054558);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054564);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054574);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005457C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054584);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005458C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054594);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005459C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000545A8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000545B4);
#endif

void func_0004D684(struct Unk_func_0004D684_0 *arg0) {
    if (arg0->unk10 == 0) {

    } else {
        func_000373F4((s32) arg0);
    }
}

void func_0004D6B4(struct Unk_func_0004D6B4_0 *arg0) {
    if (arg0->unk24 != 0) {

    } else {
        func_000373F4((s32) arg0);
    }
}

s32 func_0004D6E4(struct Unk_func_0004D6E4_0 *arg0) {
    return arg0->unk30;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D6EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D760);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D78C);

void func_0004D840(struct Unk_func_0004D840_0 *arg0, s32 arg1) {
    func_00036B48(arg0, arg1, (s32) &D_00056780, 1, 4);
    arg0->unk28 = -1;
    arg0->unk0 = &D_000567A0;
    arg0->unk24 = 0;
    arg0->unk20 = 0;
}

void func_0004D890(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_00005878(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_00005878(&sp0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D8DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004D914);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DA8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DABC);

s32 func_0004DB00(void) {
    sceVshCommonGui_A0DE7090(0);
    sceVshCommonGui_441D55D7(0);
    return 1;
}

void func_0004DB28(M2C_UNK **arg0) {
    *arg0 = &D_000567A0;
    D_00081F4C = 0;
    func_00036CC0((s32) arg0);
}

void func_0004DB54(M2C_UNK **arg0) {
    *arg0 = &D_000567A0;
    D_00081F4C = 0;
    func_00036CC0((s32) arg0);
    scePaf_4E67BB08((s32) arg0);
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C048);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C088);

void func_0004C0CC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (arg0 + 4);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044A54);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044BD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044D5C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044E24);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044EEC);

void func_00044FBC(s32 arg0) {
    D_00080050 = arg0;
}

void func_00044FC8(void) {

}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044FD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000451C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045280);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004535C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045400);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045620);

s32 func_0004570C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s4;
    void **temp_a0;
    void **temp_v0;

    temp_s4 = arg0 + 0x5C;
    func_000250D0(temp_s4);
    temp_s0 = func_000472AC(arg0, arg1, arg2, arg3);
    if (arg1 == 2) {
        if (temp_s0 == 0) {
            temp_v0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x24)(temp_v0, 0, M2C_FIELD(arg0, s32 *, 0x108));
            temp_a0 = M2C_FIELD(arg0, void ***, 0x4C);
            M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x24)(temp_a0, 1, M2C_FIELD(arg0, s32 *, 0x118));
        }
    }
    func_000250EC(temp_s4);
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000457D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045904);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045A5C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045B84);

s32 func_0003EAF0(struct Unk_func_0003EAF0_0 *arg0) {
    struct Unk_func_0003EAF0_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA0;
    if (temp_v0 != NULL) {
        return temp_v0->unk4;
    }
    return arg0->unkAC;
}

s32 func_0003EB0C(struct Unk_func_0003EB0C_0 *arg0) {
    struct Unk_func_0003EB0C_temp_v0 *temp_v0;

    temp_v0 = arg0->unkA0;
    if (temp_v0 != NULL) {
        return temp_v0->unk8;
    }
    return arg0->unkB0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045E00);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045E9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045F64);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003ED04);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054670);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000546A0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000546B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000546C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000546CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000546DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000546F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054728);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054738);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054748);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054758);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054764);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054778);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000547A8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000547B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000547C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000547D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000547E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054800);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0003F3D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046700);

s32 func_0004672C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    return 0;
}

s32 func_00046738(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0x84, 0);
    func_00024214((s32) temp_s0, arg1 + 0x98, 3);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046794);

s32 func_000467C0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x54) = arg1;
    return 0;
}

s32 func_000467CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000467D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004699C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046A68);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046AE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046B20);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046DC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047008);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000472AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047490);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000475C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000476A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047B78);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047D04);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047EB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00047FD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000481F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004823C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004842C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048448);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048464);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048480);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048570);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048660);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048704);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000487A8);

void func_00048854(s32 arg0) {
    D_0008005C = arg0;
}

void func_00048860(void *arg0) {
    void *var_a0;
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x68);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x38);
        } while (var_v0 != NULL);
    }
    var_a0 = M2C_FIELD(arg0, void **, 0x70);
    if (var_a0 != NULL) {
        do {
            var_a0 = M2C_FIELD(var_a0, void **, 0x24);
        } while (var_a0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048898);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048AAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048B1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048BAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048CD8);

s32 func_00048D20(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x4C;
    func_000250D0(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x5C) = 0;
    func_000250EC(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048D64);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00048DB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049084);

s32 func_00049108(void *arg0, void *arg1) {
    s32 temp_s2;
    void **temp_v1;

    temp_s2 = arg0 + 0x54;
    func_000250D0(temp_s2);
    temp_v1 = M2C_FIELD(arg0, void ***, 0x74);
    M2C_FIELD(arg0, void ***, 0x74) = (void **) (arg1 + 0x24);
    *temp_v1 = arg1;
    M2C_FIELD(arg1, s32 *, 0x24) = 0;
    func_000250EC(temp_s2);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049168);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000491F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049278);

void func_000492A0(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0xD8, 2);
    func_00024214((s32) temp_s0, arg1 + 0xEC, 3);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000492F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049314);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049330);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004934C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000493C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004943C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049558);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049674);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049710);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000497AC);

void func_00049850(s32 arg0) {
    D_00080060 = arg0;
}

void func_0004985C(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0xA4);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x30);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004987C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049C08);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049C34);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049D04);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049DC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00049F3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042E1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042E2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00042E44);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A15C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A1D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A27C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A28C);

s32 func_0004A2C4(void *arg0, s32 *arg1) {
    s32 var_v1;
    void *temp_a0;

    var_v1 = 1;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x9C);
        var_v1 = 6;
        if (temp_a0 != NULL) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(temp_a0, s32 *, 4);
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A2EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A354);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A38C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A4CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004326C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000432B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A5B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A614);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A6B4);

void func_0004A6D0_v271(s32 arg0) {
    func_000497AC(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A6EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A708);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004A858);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000438A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004AA34);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004AAC0);

void func_0004AB54(s32 arg0) {
    D_00080064 = arg0;
}

void func_00043AB0(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x114);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x40);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043B18);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043F8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00043FB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B104);

s32 func_0004B21C(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D0(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
    func_000250EC(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B260);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B2F0);

s32 func_0004B32C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_00024214((s32) (arg0 + 0x3C), arg1 + 0x18, (s32) arg0);
    return 0;
}

s32 func_0004B358(void) {
    return 0;
}

s32 func_0004B360(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B368);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B378);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B5C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B660);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004B67C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044D34);

s32 func_0004B6B4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00044F98);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000548A0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000548F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054904);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054918);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005492C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054940);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054958);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000452B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BAD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004BBC4);

void func_000455A8(struct Unk_func_000455A8_0 *arg0) {
    struct Unk_func_000455A8_var_v0 *var_v0;

    var_v0 = arg0->unk6C;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->unk20;
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000455C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000457C4);

s32 func_0004BF48(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004582C);

s32 func_0004C014(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x48;
    func_000250D0(temp_s1);
    M2C_FIELD(arg0, s8 *, 0x58) = 0;
    func_000250EC(temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C058);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C0C0);

s32 func_0004C138(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x178) = arg1;
    return 0;
}

s32 func_0004C144(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    func_00024214((s32) (arg0 + 0x3C), arg1 + 0x2C, (s32) arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C170);

s32 func_0004C1A4(void) {
    return 0;
}

s32 func_00045A88(void) {
    return 0;
}

s32 func_0004C1B4(void) {
    return 0;
}

s32 func_0004C1BC(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x70)(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C1E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045B78);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C2B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C2D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045BC8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045BE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C448);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00045E64);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C63C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C6F0);

void func_0004C7AC(s32 arg0) {
    D_00080080 = arg0;
}

void func_0004C7B8_v271(void *arg0) {
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x60);
    if (var_v0 != NULL) {
        do {
            var_v0 = M2C_FIELD(var_v0, void **, 0x18);
        } while (var_v0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000460B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000462BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046308);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046350);

s32 func_0004640C(struct Unk_func_0004640C_0 *arg0) {
    u8 *temp_s1;

    temp_s1 = &arg0->pad0[0x48];
    func_000250D0((s32) temp_s1);
    arg0->unk58 = 0;
    func_000250EC((s32) temp_s1);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CB74);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_000464D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_00046510);

s32 func_0004CCC4(void *arg0, s32 arg1) {
    void *temp_s0;

    M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    temp_s0 = arg0 + 0x3C;
    func_00024214((s32) temp_s0, arg1 + 0x40, 0);
    func_00024214((s32) temp_s0, arg1 + 0x54, 1);
    return 0;
}

s32 func_0004CD20(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CD28);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004CD44);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004663C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DB94);

s32 func_0004DC48(s32 arg0, s32 *arg1) {
    func_00005DF0(arg0 + 0x84, *arg1);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DC6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DD08);

void func_0004DDAC(struct Unk_func_0004DDAC_0 *arg0, struct Unk_func_0004DDAC_1 *arg1) {
    arg0->unk50 = (s32) arg1->unk0;
    arg0->unk54 = (s32) arg1->unk4;
    arg0->unk58 = (s32) arg1->unk8;
    arg0->unk5C = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DDD0);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DE28);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DEFC);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DF80);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004C548);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DFFC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004E5D0);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004EBEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004EF34);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004EF9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F010);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F388);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F5AC);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F634);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F6BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F798);

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F86C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004F8B0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004DFD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004E170);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004FA3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004FCA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004FDB8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004E69C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004FF1C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_03D428", func_0004E70C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056760);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056780);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000567A0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_000567C8);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056858);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005685C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056860);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056864);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056868);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005686C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056870);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056874);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056878);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005687C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056880);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056898);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00056998);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_0005699C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054E38);

INCLUDE_RODATA("nonmatchings/video_main_plugin_03D428", D_00054E3C);
#endif
