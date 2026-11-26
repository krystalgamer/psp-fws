/* cflags: -Os -frename-registers */
#include "common.h"
#include "lftv_middleware_decls.h"

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003D910);
#else
s32 func_0003D910(s32 arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0x16;
    if (arg0 != 0) {
        temp_s0 = sce_paf_private_strlen() + 1;
        temp_v0 = scePaf_F13EBB78(temp_s0);
        var_v0 = 0xC;
        if (temp_v0 != 0) {
            sce_paf_private_memcpy(temp_v0, arg0, temp_s0);
            *arg1 = temp_v0;
            var_v0 = 0;
        }
    }
    return var_v0;
}
#endif

void func_0003D990(s32 arg0, s32 arg1, s32 arg2) {
    func_0004BB50(arg0, arg1, arg2);
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003D9AC);
#else
void func_0003D9AC(s32 arg0) {
    if (arg0 != 0) {
        scePaf_B3D2C3BB();
    }
}
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EFB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EFE8);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F044);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F018_v311);
#endif

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F1F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F464);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F558);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F5CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F610);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F6BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F73C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003D9CC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DA68);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DB94);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DC80);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DCDC);

s32 func_0003DD50(struct Unk_func_0003DD50_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DD5C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DE20);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DE6C);

s32 func_0003DF2C(struct Unk_func_0003DF2C_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unk8;
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DF38);
#else
void func_0003DF38(struct Unk_func_0003DF38_0 *arg0, s32 arg1) {
    arg0->unk4 = 0;
    sce_paf_private_memcpy(arg1, arg0->unkC, arg0->unk8);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DF64);

void func_0003DF88(struct Unk_func_0003DF88_0 *arg0) {
    arg0->unk0 = &D_00056878;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DF9C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003DFC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E0B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E13C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E1D4);

s32 func_0003E250(s32 arg0) {
    return arg0 + 8;
}

s32 func_0003E258(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E260);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E330);

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056840);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056860);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056878);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056890);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000568B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000568D0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000568F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E3E0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E42C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E4B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E544);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E5C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E64C);

void func_0003E674(M2C_UNK **arg0) {
    *arg0 = &D_000568F0;
    func_0003E13C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E69C);

s32 func_0003E6D4(struct Unk_func_0003E6D4_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != 0) {
        func_00048F88(temp_v1);
    }
    return 0;
}

s32 func_0003E700(struct Unk_func_0003E700_0 *arg0) {
    s32 temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != 0) {
        func_00048EE4(temp_v1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E72C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E7A0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003E8F8);

void func_0003EA20(M2C_UNK **arg0) {
    *arg0 = &D_000568D0;
    func_0003E13C((s32) arg0);
    *arg0 = &D_000568F0;
    func_0003E13C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EA64);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EAB0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EC30);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003ECC8);

void func_0003ED60(M2C_UNK **arg0) {
    *arg0 = &D_000568B0;
    func_0003E13C((s32) arg0);
    *arg0 = &D_000568F0;
    func_0003E13C((s32) arg0);
}

void func_0003EDA4(M2C_UNK **arg0) {
    *arg0 = &D_000568B0;
    func_0003E13C((s32) arg0);
    *arg0 = &D_000568F0;
    func_0003E13C((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EDE8);

s32 func_0003EE34(struct Unk_func_0003EE34_0 *arg0) {
    return (arg0->unk4 != 0) ? 0 : -1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EE44);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EF0C);

s32 func_0003EF7C(struct Unk_func_0003EF7C_0 *arg0) {
    return arg0->unk1C;
}

s32 func_0003EF84(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003EF8C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F018);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F0B4);

void func_0003F188(s32 **arg0) {
    *arg0 = &D_00056890;
    func_0003E13C((s32) arg0);
    func_0003ED60(arg0);
}

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F1C0);
#else
void func_0003F1C0(s32 **arg0) {
    *arg0 = &D_00056890;
    func_0003E13C((s32) arg0);
    func_0003ED60(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F200);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003A430);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003A490);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003A4F0);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0005BC8C);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F284);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F2E4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F344);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F3B0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F41C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056938);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056948);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007E970);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007E978);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007E9A8);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056970);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007E9C4);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F490);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F538);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F654);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F778);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F814);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F888);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003F990);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FA30);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FA58);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003AC2C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003ACAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003AD2C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003AE0C);
#endif

#if FW_VERSION >= 303
void func_0003FA30(struct Unk_func_0003FA30_0 *arg0) {
    void **temp_a0;
    struct Unk_func_0003FA30_temp_a2 *temp_a2;

    temp_a0 = arg0->unk8;
    temp_a2 = *temp_a0;
    temp_a2->unk4(temp_a0, -1, temp_a2);
}

void func_0003FA58(struct Unk_func_0003FA30_0 *arg0) {
    void **temp_a0;
    struct Unk_func_0003FA58_temp_a1 *temp_a1;

    temp_a0 = arg0->unk8;
    temp_a1 = *temp_a0;
    temp_a1->unk8(temp_a0, temp_a1);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FA80);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FB00);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FB80);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FC60);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056988);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0005698C);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FA30);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FA58);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0005C698);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0005C860);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003FE28);

s32 func_000400F0(struct Unk_func_0003FA30_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;

    func_0003FA30(arg0);
    temp_s2 = func_0004014C((s32) arg0, arg1, arg2);
    func_0003FA58(arg0);
    return temp_s2;
}

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569A8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569B0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569B8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569C0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569C4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569D0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569D8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569DC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569E4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569F0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000569F4);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056A00);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056A08);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056A0C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004014C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000405C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00040788);

u8 func_00040808(struct Unk_func_00040808_0 *arg0, u8 arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk20;
    arg0->unk20 = arg1;
    return temp_v0;
}

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003B9C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003BA44);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00040814);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00040898);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056A44);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004091C);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00051930);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000563E8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AA0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000409DC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000409EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00040A14);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00040A24);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00040A4C);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EDA0);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EAC8);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AA0);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EAE8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EAEC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EB18);
#endif

#if FW_VERSION >= 303
void func_00041018(M2C_UNK **arg0) {
    *arg0 = &D_00056A80;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041028);

void func_00041050(M2C_UNK **arg0) {
    *arg0 = &D_00056A80;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041060);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041088);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041198);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000411C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041264);

void func_00041394(M2C_UNK **arg0) {
    *arg0 = &D_00056AA0;
    func_00042270((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000413BC);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000413F4);
#else
void func_000413F4(s8 *arg0) {
    *arg0 = 0;
    memset(arg0 + 8, 0, 0x60);
    func_00041560((s32) arg0);
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041430);
#else
void func_00041430(s8 *arg0) {
    *arg0 = 0;
    memset(arg0 + 8, 0, 0x60);
    func_00041560((s32) arg0);
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0003C5A8);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0005E0C4);
#endif

#if FW_VERSION >= 303
void func_0004146C(s32 arg0, s32 arg1, s32 arg2) {
    func_0004E0C0(arg0 + 8, arg1, arg2);
}
#endif

#if FW_VERSION < 303 || FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041488);
#else
s32 func_00041488(s32 arg0, s32 arg1) {
    func_0004E0C0(arg0 + 8, arg1, sce_paf_private_strlen(arg1));
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000414D0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041560);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004158C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000415F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041664);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000416C0);

void func_0004171C(struct Unk_func_0004171C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_00056AD0;
    arg0->unk4 = 0;
    func_000443A4((s32) ((u8 *)arg0 + 8), arg1);
    func_00042110((s32) (&arg0->unk1C), arg2);
    arg0->unk1C = &D_00056AA0;
    func_0003DA68((s32) ((u8 *)arg0 + 0x34), 0, 0);
}

void func_0004178C(struct Unk_func_0004178C_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_00056AD0;
    arg0->unk4 = 0;
    func_000443A4((s32) ((u8 *)arg0 + 8), arg1);
    func_00042110((s32) (&arg0->unk1C), arg2);
    arg0->unk1C = &D_00056AA0;
    func_0003DA68((s32) ((u8 *)arg0 + 0x34), 0, 0);
}

void func_000417FC(struct Unk_func_000417FC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_00056AD0;
    arg0->unk4 = 0;
    func_000443A4((s32) ((u8 *)arg0 + 8), arg1);
    func_00042110((s32) (&arg0->unk1C), arg2);
    arg0->unk1C = &D_00056AA0;
    func_0003DB94((s32) ((u8 *)arg0 + 0x34), arg3);
}

void func_00041874(struct Unk_func_00041874_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_00056AD0;
    arg0->unk4 = 0;
    func_000443A4((s32) ((u8 *)arg0 + 8), arg1);
    func_00042110((s32) (&arg0->unk1C), arg2);
    arg0->unk1C = &D_00056AA0;
    func_0003DB94((s32) ((u8 *)arg0 + 0x34), arg3);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000418EC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041A58);

void func_00041BC4(struct Unk_func_00041BC4_0 *arg0) {
    arg0->unk0 = &D_00056AD0;
    func_0003DC80((s32) ((u8 *)arg0 + 0x34));
    arg0->unk1C = &D_00056AA0;
    func_00042270((s32) (&arg0->unk1C));
    func_00044490((s32) ((u8 *)arg0 + 8));
    arg0->unk0 = &D_00056878;
    arg0->unk4 = 0;
}

void func_00041C24(struct Unk_func_00041C24_0 *arg0) {
    arg0->unk0 = &D_00056AD0;
    func_0003DC80((s32) ((u8 *)arg0 + 0x34));
    arg0->unk1C = &D_00056AA0;
    func_00042270((s32) (&arg0->unk1C));
    func_00044490((s32) ((u8 *)arg0 + 8));
    arg0->unk0 = &D_00056878;
    arg0->unk4 = 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041C84);

s32 func_00041CEC(struct Unk_func_00041CEC_0 *arg0) {
    arg0->unk4 = 0;
    return (u8 *)arg0 + 8;
}

s32 func_00041CF8(struct Unk_func_00041CF8_0 *arg0) {
    arg0->unk4 = 0;
    return (u8 *)arg0 + 8;
}

s32 func_00041D04(struct Unk_func_00041D04_0 *arg0) {
    arg0->unk4 = 0;
    return (u8 *)arg0 + 0x1C;
}

s32 func_00041D10(struct Unk_func_00041D10_0 *arg0) {
    arg0->unk4 = 0;
    return (u8 *)arg0 + 0x1C;
}

s32 func_00041D1C(struct Unk_func_00041D1C_0 *arg0) {
    arg0->unk4 = 0;
    return (u8 *)arg0 + 0x34;
}

s32 func_00041D28(struct Unk_func_00041D28_0 *arg0) {
    arg0->unk4 = 0;
    return (u8 *)arg0 + 0x34;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041D34);

s32 func_00041DB0(struct Unk_func_00041DB0_0 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    arg0->unk4 = 0;
    temp_s0 = func_00044718((s32) ((u8 *)arg0 + 8));
    temp_s1 = temp_s0 + func_000411C8((s32) ((u8 *)arg0 + 0x1C));
    return temp_s1 + func_0003DF2C((u8 *)arg0 + 0x34) + 2;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041E0C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041EB8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041F94);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00041FC8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042110);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042270);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000422D4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042338);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000423A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042494);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000425C8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042640);

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056A70);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056A80);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AA0);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AB0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AD0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AE0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056AF0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042820);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042874);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000428A4);

s32 func_000428D4(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_000425C8(arg0, arg1);
    return (temp_v0 == 0) ? 0 : (temp_v0 + 1);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000428FC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000429C4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042D08);

void func_00042E84(M2C_UNK **arg0) {
    *arg0 = &D_00056B10;
    func_00042270((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042EAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042EE4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00042FA0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043018);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000431A8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056B10);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056B20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056B30);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004338C);

#if FW_VERSION != 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043440);
#else
s32 func_00043440(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000425C8(arg0 + 0x2C, (s32) "Transfer-Encoding");
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = sce_paf_private_strcmp(temp_v0, "chunked") == 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043488);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043554);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004368C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043738);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000437BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043840);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000438AC);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056B58);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004398C);

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056B90);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BA8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BD8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BF0);
#endif

s32 func_00043CE4(s32 arg0) {
    return arg0 + 0x18;
}

s32 func_00043CEC(s32 arg0) {
    return arg0 + 0x2C;
}

s32 func_00043CF4(s32 arg0) {
    return arg0 + 0x44;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043CFC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043D2C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043D5C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043D8C);

void func_00043DBC(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004171C(arg0, arg1, arg2);
    *arg0 = &D_00056B90;
}

void func_00043DEC(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004171C(arg0, arg1, arg2);
    *arg0 = &D_00056B90;
}

void func_00043E1C(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000417FC(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056B90;
}

void func_00043E4C(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000417FC(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056B90;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043E7C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043EAC);

void func_00043EDC(M2C_UNK **arg0) {
    *arg0 = &D_00056B90;
    func_00041BC4(arg0);
}

void func_00043F04(M2C_UNK **arg0) {
    *arg0 = &D_00056B90;
    func_00041BC4(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043F2C);

void func_00043F64(struct Unk_func_00043F64_0 *arg0) {
    arg0->unk4 = 0;
    func_00041CEC(arg0);
}

void func_00043F84(struct Unk_func_00043F84_0 *arg0) {
    arg0->unk4 = 0;
    func_00041CF8(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043FA4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043FD4);

void func_00044004(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004171C(arg0, arg1, arg2);
    *arg0 = &D_00056BA8;
}

void func_00044034(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    func_0004171C(arg0, arg1, arg2);
    *arg0 = &D_00056BA8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044064);

void func_00044094(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000417FC(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056BA8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000440C4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000440F4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044124);

void func_0004414C(M2C_UNK **arg0) {
    *arg0 = &D_00056BA8;
    func_00041BC4(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044174);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000441AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000441CC);

s32 func_000442A0(struct Unk_func_000442A0_0 *arg0) {
    return arg0->unkC;
}

s32 func_000442A8(struct Unk_func_000442A8_0 *arg0) {
    return arg0->unk10;
}

void func_000442B0(struct Unk_func_000442B0_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_00056BF0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk4 = 0;
    if (func_000441CC((s32) arg0, arg1, arg2, arg3) == 0) {
        arg0->unk4 = 1;
    }
}

void func_000442FC(struct Unk_func_000442FC_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk0 = &D_00056BF0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk4 = 0;
    if (func_000441CC((s32) arg0, arg1, arg2, arg3) == 0) {
        arg0->unk4 = 1;
    }
}

void func_00044348(struct Unk_func_00044348_0 *arg0, struct Unk_func_00044348_1 *arg1) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk0 = &D_00056BF0;
    if (func_000441CC((s32) arg0, arg1->unk8, arg1->unkC, arg1->unk10) == 0) {
        arg0->unk4 = 1;
    }
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000443A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044400);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044490);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044520);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000445B8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000446A0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044718);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044770);

void func_00044844(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000442B0(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056BD8;
}

void func_00044874(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000442B0(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056BD8;
}

void func_000448A4(M2C_UNK **arg0) {
    *arg0 = &D_00056BD8;
    func_00044400((s32) arg0);
}

void func_000448CC(M2C_UNK **arg0) {
    *arg0 = &D_00056BD8;
    func_00044400((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000448F4);

s32 func_0004492C(struct Unk_func_0004492C_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044938);

s32 func_0004495C(struct Unk_func_0004495C_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unk10;
}

void func_00044968(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000442B0(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056BC0;
}

void func_00044998(M2C_UNK **arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000442B0(arg0, arg1, arg2, arg3);
    *arg0 = &D_00056BC0;
}

void func_000449C8(M2C_UNK **arg0) {
    *arg0 = &D_00056BC0;
    func_00044400((s32) arg0);
}

void func_000449F0(M2C_UNK **arg0) {
    *arg0 = &D_00056BC0;
    func_00044400((s32) arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044A18);

s32 func_00044A50(struct Unk_func_00044A50_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unk8;
}

s32 func_00044A5C(struct Unk_func_00044A5C_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unkC;
}

s32 func_00044A68(struct Unk_func_00044A68_0 *arg0) {
    arg0->unk4 = 0;
    return arg0->unk10;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044A74);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044BEC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044C44);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044C9C);

s32 func_00044CFC(struct Unk_func_00044CFC_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044D04);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044E14);

void func_00044F94(struct Unk_func_00044F94_0 *arg0, s32 arg1) {
    arg0->unk6C = arg1;
}

s32 func_00044F9C(struct Unk_func_00044F9C_0 *arg0) {
    return arg0->unk70;
}

s32 func_00044FA4(struct Unk_func_00044FA4_0 *arg0) {
    return arg0->unk6C;
}

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056B90);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BA8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BD8);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056BF0);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044FAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00044FF8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045004);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045010);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004501C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045028);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_000565F4);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00051B2C);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CB0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CD0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CE0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CF0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056D00);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007F090);
#endif

#if FW_VERSION == 250
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EDB8);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CB0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CD0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CE0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE18);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE20);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE40);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE44);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE60);
#endif

s32 func_00045034(struct Unk_func_00045034_0 *arg0) {
    void *temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        func_0003E6D4(temp_v1);
    }
    return 0;
}

s32 func_00045060(struct Unk_func_00045060_0 *arg0) {
    void *temp_v1;

    temp_v1 = arg0->unk4;
    if (temp_v1 != NULL) {
        func_0003E700(temp_v1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004508C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045158);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045224);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000452F0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000453BC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045418);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045474);

s32 func_00045584(struct Unk_func_00045584_0 *arg0) {
    s32 var_a1;
    struct Unk_func_00045584_temp_v1 *temp_v1;

    temp_v1 = arg0->unk4;
    var_a1 = 0;
    if ((temp_v1 != NULL) && (arg0->unk8 != 0)) {
        var_a1 = temp_v1->unk4;
    }
    return var_a1;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000455A4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004565C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045714);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045858);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045930);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045A08);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045B4C);
#else
s32 func_00045B4C(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = sce_paf_private_strlen() + 1;
    temp_v0 = scePaf_F13EBB78(temp_s0);
    if (temp_v0 != 0) {
        sce_paf_private_memcpy(temp_v0, arg0, temp_s0);
    }
    return temp_v0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045BAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045C48);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045C88);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045D2C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045E50);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045EA4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045F28);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046068);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000460A4);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046174);
#else
s32 func_00046174(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = scePaf_F13EBB78(arg2);
    if (temp_v0 != 0) {
        sce_paf_private_memcpy(temp_v0, arg0, arg1);
        if (arg0 != 0) {
            scePaf_B3D2C3BB(arg0);
        }
    }
    return temp_v0;
}
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004131C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000413AC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004143C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004146C);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000414FC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00045E14);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004158C_v271);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00062FAC);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000630D0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000631F4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000634C0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00063374);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE70);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_0007EE84);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00063250);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00063374);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00063498);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CF0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056D00);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000461E0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046270);

s32 func_00046300(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00046E30(arg0 + 4, arg1, arg3 * 0x10, arg2);
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046330);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000463C0);

s32 func_00046450(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000474F8(arg0 + 4, arg1, arg3 * 0x10, arg2);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046480);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000464B4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000464E8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046514);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046540);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000416B0);
#endif

#if FW_VERSION >= 303
void func_00046540(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg0 + 4;
    func_000497CC(temp_s0, arg1, 0x21);
    func_0004873C(temp_s0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046574);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046734);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000467A8);
#else
void func_000467A8(s32 **arg0) {
    *arg0 = &D_00056D30;
    func_000486F4(arg0);
    scePaf_4E67BB08(arg0);
}
#endif

void func_000467E0(s32 **arg0) {
    *arg0 = &D_00056D30;
    func_000486F4(arg0);
}

void func_00046808(struct Unk_func_00046808_0 *arg0) {
    arg0->unk0 = 1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
}

void func_00046820(struct Unk_func_00046820_0 *arg0) {
    arg0->unk0 = 1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk1C = 0;
}

void func_00046838(void) {
}

void func_00046840(void) {
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046848);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00046E30);

#if FW_VERSION >= 311
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00048E00);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000474F8);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00047790);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00047AE0);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00047C84);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000481F8);

void func_000486F4(M2C_UNK **arg0) {
    *arg0 = &D_00056D48;
}

void func_00048704(M2C_UNK **arg0) {
    *arg0 = &D_00056D48;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00048714);

#if FW_VERSION >= 271 && FW_VERSION < 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00043878);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0004873C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056C8C);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CB0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CC0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CD0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CE0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056CF0);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056D00);
#endif

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056D30);

INCLUDE_RODATA("nonmatchings/lftv_middleware_03D910", D_00056D48);

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_0006582C);
#endif

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000487D4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_000489A4);

s32 func_00048CE0(void) {
    return 0;
}

s32 func_00048CE8(void) {
    return 0;
}

s32 func_00048CF0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00048CF8);

void func_00048DBC(struct Unk_func_00048DBC_0 *arg0) {
    arg0->unk0 = -1;
    arg0->unk4 = 0;
}

void func_00048DCC(struct Unk_func_00048DCC_0 *arg0) {
    arg0->unk0 = -1;
    arg0->unk4 = 0;
}

void func_00048DDC(s32 arg0) {
    func_00048EE4(arg0);
}

void func_00048DF8(s32 arg0) {
    func_00048EE4(arg0);
}

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00048E14);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00048EE4);

INCLUDE_ASM("nonmatchings/lftv_middleware_03D910", func_00048F88);
