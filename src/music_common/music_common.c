#include "common.h"
#include "music_common_decls.h"

INCLUDE_ASM("nonmatchings/music_common", func_00000030);

INCLUDE_ASM("nonmatchings/music_common", func_000000B8);

s32 module_start(void) {
    func_00000000();
    func_00000164(0, 0);
    return 0;
}

s32 module_stop(void) {
    func_0001E098();
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common", func_00000164);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_common", music_common_28E2ACD6);
#endif

INCLUDE_ASM("nonmatchings/music_common", music_common_0964CEB5);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common", music_common_4979245D);
#endif

INCLUDE_ASM("nonmatchings/music_common", func_000001D8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common", music_common_B0385F67);
#endif

INCLUDE_ASM("nonmatchings/music_common", music_common_780357F2);

INCLUDE_ASM("nonmatchings/music_common", func_000002C8);

#if FW_VERSION == 271
void func_00000494(s32 arg0, s32 arg1) {
    if (scePaf_FCFAA39F() != 0) {

    } else {
        scePaf_2FDC80B3(arg0, arg1);
    }
}
#endif

#if FW_VERSION == 260
void music_common_58BD2898(s32 arg0, s32 arg1) {
    if (scePaf_FCFAA39F() != 0) {

    } else {
        scePaf_2FDC80B3(arg0, arg1);
    }
}
#endif

INCLUDE_ASM("nonmatchings/music_common", func_00000324);

INCLUDE_ASM("nonmatchings/music_common", music_common_4D43311C);

#if FW_VERSION >= 271
INCLUDE_ASM("nonmatchings/music_common", music_common_DF0D3D08);
#else
INCLUDE_ASM("nonmatchings/music_common", music_common_9D16129F);
#endif

INCLUDE_ASM("nonmatchings/music_common", music_common_1BF4D165);

INCLUDE_ASM("nonmatchings/music_common", func_00000624);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common", music_common_E09E4F5B);

INCLUDE_ASM("nonmatchings/music_common", music_common_4F799715);

INCLUDE_ASM("nonmatchings/music_common", music_common_4C4D49D8);

INCLUDE_ASM("nonmatchings/music_common", music_common_AF19050F);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common", func_00000AA4);
#endif

#if FW_VERSION < 282
void music_common_AD4A8D7D(void *arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_a0 == 0) || (temp_v0 = M2C_FIELD(arg1, s32 *, 4), (temp_v0 == 0))) {
        func_00000324(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 8));
    } else if (scePaf_ED2B47FA(temp_a0, temp_v0) == 0) {
        scePaf_66FE90D7(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4));
    }
}
#endif

INCLUDE_RODATA("nonmatchings/music_common", D_0001ED88);

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_common", D_00015F2C);
#endif

INCLUDE_RODATA("nonmatchings/music_common", D_0001ED8C);

INCLUDE_RODATA("nonmatchings/music_common", D_0001ED90);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_common", D_00015F40);

INCLUDE_RODATA("nonmatchings/music_common", D_00015F44);

INCLUDE_RODATA("nonmatchings/music_common", D_00015F4C);
#endif

INCLUDE_ASM("nonmatchings/music_common", music_common_C65931C4);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common", D_0001C528);

INCLUDE_RODATA("nonmatchings/music_common", D_0001C538);

INCLUDE_ASM("nonmatchings/music_common", music_common_6D7F04FA);

INCLUDE_ASM("nonmatchings/music_common", func_00000D6C);

INCLUDE_ASM("nonmatchings/music_common", func_00000DA8);

INCLUDE_ASM("nonmatchings/music_common", func_00000DE4);

INCLUDE_ASM("nonmatchings/music_common", music_common_9BB2F2B5);

INCLUDE_ASM("nonmatchings/music_common", func_00000E5C);

s32 func_00000EA0(s32 arg0, s32 arg1) {
    func_00001094(arg0);
    func_00000F3C(arg0, arg1);
    return arg0;
}

s32 func_0001083C(s32 arg0, s32 arg1) {
    func_00001094(arg0);
    func_00000F3C(arg0, arg1);
    return arg0;
}

void func_0001087C(s32 arg0) {
    func_00001094(arg0);
}

INCLUDE_ASM("nonmatchings/music_common", func_00000F3C);

INCLUDE_ASM("nonmatchings/music_common", func_00001094);

INCLUDE_ASM("nonmatchings/music_common", func_00001168);

void func_00001178(M2C_UNK **arg0) {
    *arg0 = &D_0001C538;
    scePaf_4E67BB08(arg0);
}
#endif

void func_000007B8(void) {
}

INCLUDE_ASM("nonmatchings/music_common", func_000007C0);

INCLUDE_ASM("nonmatchings/music_common", func_00000D24);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common", func_000017A0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common", func_00000DD8);
#endif

INCLUDE_RODATA("nonmatchings/music_common", D_0001EDA0);

INCLUDE_RODATA("nonmatchings/music_common", D_0001EDC8);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common", func_00001804);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common", func_000012B0);

INCLUDE_RODATA("nonmatchings/music_common", D_00015FA4);

INCLUDE_RODATA("nonmatchings/music_common", D_00015FC8);

INCLUDE_RODATA("nonmatchings/music_common", D_00016000);

INCLUDE_ASM("nonmatchings/music_common", func_00001714);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common", func_00001A5C);

INCLUDE_ASM("nonmatchings/music_common", music_common_7CCAB1CE);

INCLUDE_ASM("nonmatchings/music_common", music_common_BE06733A);
#else
INCLUDE_ASM("nonmatchings/music_common", func_00000E3C);

INCLUDE_ASM("nonmatchings/music_common", func_000012FC);

INCLUDE_ASM("nonmatchings/music_common", func_00001444);

INCLUDE_ASM("nonmatchings/music_common", music_common_9CA5469C);

INCLUDE_ASM("nonmatchings/music_common", music_common_7B737748);
#endif

INCLUDE_ASM("nonmatchings/music_common", music_common_F1645B63);

INCLUDE_ASM("nonmatchings/music_common", func_0000216C);

INCLUDE_ASM("nonmatchings/music_common", func_00002208);

INCLUDE_ASM("nonmatchings/music_common", func_000022A4);

u8 func_00002340(struct Unk_func_00002340_0 *arg0) {
    return arg0->unk8;
}

INCLUDE_ASM("nonmatchings/music_common", music_common_8442A3B0);

INCLUDE_ASM("nonmatchings/music_common", music_common_768D326E);

INCLUDE_ASM("nonmatchings/music_common", func_000023E8);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/music_common", music_common_1BD3F78E);
#else
INCLUDE_ASM("nonmatchings/music_common", func_0000247C);
#endif

INCLUDE_ASM("nonmatchings/music_common", music_common_7A267F31);

INCLUDE_ASM("nonmatchings/music_common", func_00002590);

INCLUDE_ASM("nonmatchings/music_common", music_common_D6D8B64F);

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common", func_00003370);

INCLUDE_ASM("nonmatchings/music_common", func_000033B4);

void music_common_F6EAB2FA(void) {
    s32 temp_v0;

    if (D_00016DFC == 0) {
        temp_v0 = scePaf_B7E6052B(0x14);
        func_000033B4(temp_v0);
        D_00016DFC = temp_v0;
    }
}

INCLUDE_ASM("nonmatchings/music_common", music_common_0D0F5D23);

s32 music_common_E79F4C9B(void) {
    return D_00016DFC;
}

INCLUDE_ASM("nonmatchings/music_common", music_common_F97B96B0);

INCLUDE_ASM("nonmatchings/music_common", music_common_73D4788A);

INCLUDE_ASM("nonmatchings/music_common", func_00004100);

INCLUDE_ASM("nonmatchings/music_common", func_0000368C);
#endif
