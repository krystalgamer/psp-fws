/* cflags[100]: -O2 */
/* cflags: -Os */
#include "common.h"
#include "msvideo_plugin_decls.h"

#if FW_VERSION == 201
void func_00001F84(void) {
    s32 temp_v0;
    struct Unk_func_00001F84_temp_v0_2 *temp_v0_2;

    D_00065E18 = 0;
    temp_v0 = _ZN3paf4View4FindEPKc(&D_000615CC);
    if (temp_v0 != 0) {
        temp_v0_2 = _ZNK3paf4View12GetInterfaceEi(temp_v0, 1);
        if (temp_v0_2 != NULL) {
            D_00065E18 = temp_v0_2->unk30();
        }
    }
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00001FE0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000020D0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002188);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000021FC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002254);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000230C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000024A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002844);

void func_00002868(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002888();
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002888);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000028A8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000290C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002A14);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002B1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002CB0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002DE0);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002D1C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002DD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002908);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002954);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000299C);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002E34);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00002F6C);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000036E8);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003798);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000036EC);
#endif

#if FW_VERSION == 100
void func_00002F58(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 1) {

    } else {
        func_00003194((s32) arg0);
    }
}

void func_00002F8C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4D) = 1;
    M2C_FIELD(arg0, s32 *, 0x450) = -1;
    M2C_FIELD(arg0, s8 *, 0x4E) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x38) != 1) {

    } else {
        func_00003AB0((s32) arg0);
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000038A4);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003948);

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00003868(void) {
    M2C_FIELD(&D_0004CE9C, s8 *, 0) = 0;
    M2C_FIELD(&D_0004CE9C, s32 *, 0x80) = -1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003880);
#endif

#if FW_VERSION == 100
s32 func_000030BC(void *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 0;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x450);
        if (temp_a0 != -1) {
            *arg1 = temp_a0;
            var_v1 = 1;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 201
void func_00003A6C(void) {
    D_00065E24.unk0 = 0;
    D_00065E24.unk80 = -1;
}

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003A84);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003AB0);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000399C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003AA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003194);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003238);
#endif

#if FW_VERSION < 201
void func_00003310(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
}

void func_0000331C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003BA0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003CA4);

void func_00003E88(struct Unk_func_00003E88_0 *arg0) {
    arg0->unk20 = 1;
}

void func_00003E94(struct Unk_func_00003E94_0 *arg0) {
    arg0->unk20 = 0;
}
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003E9C);
#else
void func_00003E9C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 2) {
        func_00003194((s32) arg0);
    } else {
        func_00003238((s32) arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003EFC);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000412C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004208);

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003684);
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004370);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004440);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000044D4);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004608);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000464C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004720);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_0000480C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004694);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003C18);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00003CB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000047F4);
#endif

#if FW_VERSION == 100
void func_00003D44(void *arg0) {
    s32 temp_v0;
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 8);
    if (M2C_FIELD(*temp_a0, s32 (**)(void **, M2C_UNK), 0x78)(temp_a0, 1) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_v0 == 0) {

        } else {
            func_0001CDA0(temp_v0, 0xA);
        }
        M2C_FIELD(arg0, s32 *, 0x40) = 6;
    }
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004940);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000049F0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004AA0);
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004B24);

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004C04);
#else
void func_00004C04(void) {

}

u8 func_00003E90(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x18);
}
#endif

#if FW_VERSION == 201
u8 func_00004C5C(struct Unk_func_00004C5C_0 *arg0) {
    return arg0->unk18;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004C64);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004CCC);

#if FW_VERSION < 201
void func_00003F70(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
}

s32 func_00003F78(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x48);
}

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000461E0);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000461FC);
#else
void func_00004D48(struct Unk_func_00004D48_0 *arg0) {
    arg0->unk18 = 0;
}

s32 func_00004D50(struct Unk_func_00004D50_0 *arg0) {
    return arg0->unk50;
}
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000617B4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000617D0);

#if FW_VERSION == 201
INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000617EC);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_00061808);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_00061824);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_00061840);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_00061854);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_00061878);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000618A0);
#endif

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000618C4);

INCLUDE_RODATA("nonmatchings/msvideo_plugin_001F84", D_000618E0);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004D58);

#if FW_VERSION < 201
u8 func_00004134(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x36);
}

u8 func_0000413C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}

u8 func_00004144(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x35);
}

u8 func_0000414C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x37);
}
#else
u8 func_00004F0C(struct Unk_func_00004F0C_0 *arg0) {
    return arg0->unk36;
}

u8 func_00004F14(struct Unk_func_00004F14_0 *arg0) {
    return arg0->unk34;
}

u8 func_00004F1C(struct Unk_func_00004F1C_0 *arg0) {
    return arg0->unk35;
}

u8 func_00004F24(struct Unk_func_00004F24_0 *arg0) {
    return arg0->unk37;
}
#endif

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004F2C);

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004C84);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000041B4);
#endif

#if FW_VERSION < 201
s32 func_00004380(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}
#else
INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_00004F8C);

INCLUDE_ASM("nonmatchings/msvideo_plugin_001F84", func_000050E0);

s32 func_00005224(struct Unk_func_00005224_0 *arg0) {
    return arg0->unk38;
}
#endif
