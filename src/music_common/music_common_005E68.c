/* lang: c++ */
#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION >= 310 && FW_VERSION < 350
void music_common_65CD3924(s32 arg0) {
    func_00005CC4(arg0 + 4);
    func_00005CC4(arg0 + 0x14);
    func_00005CC4(arg0 + 0x24);
    func_00005CC4(arg0 + 0x34);
}
#endif

#if FW_VERSION < 310
void music_common_65CD3924(s32 arg0) {
    func_00005CC4(arg0 + 4);
    func_00005CC4(arg0 + 0x14);
    func_00005CC4(arg0 + 0x24);
}
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00005EA4);
#else
void func_00005EA4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001F2A8;
    music_common_9054BC13(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    music_common_9054BC13(arg0 + 0x18);
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
}
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00005EE4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00005F24);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00005F64);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00005FA4);

#if FW_VERSION >= 350
s32 music_common_C3E80AAC(s32 arg0) {
    return arg0 + 4;
}
#else
s32 music_common_53E5691D(s32 arg0) {
    return arg0 + 4;
}
#endif

s32 func_00005FF0(struct Unk_func_00005FF0_0 *arg0) {
    return arg0->unk14;
}

#if FW_VERSION >= 350
s32 music_common_8C758799(s32 arg0) {
    return arg0 + 0x18;
}
#else
s32 music_common_9418F6B2(s32 arg0) {
    return arg0 + 0x18;
}
#endif

#if FW_VERSION >= 300
s32 func_00006664(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}
#endif

#if FW_VERSION >= 310
s32 func_000066AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}
#endif

void func_00006000(struct Unk_func_00006000_0 *arg0, s32 arg1) {
    arg0->unk14 = arg1;
}

#if FW_VERSION >= 300
void func_00006674(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
}
#endif

#if FW_VERSION >= 310
void func_000066C4(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006008);
#endif

#if FW_VERSION >= 350
void func_0000670C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00022470;
    music_common_9054BC13(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_0000670C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00022470;
    music_common_74CC985E((s32) (arg0 + 4));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 350
void func_00006748(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00022470;
    music_common_9054BC13(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00006748(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00022470;
    music_common_74CC985E((s32) (arg0 + 4));
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006784);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000067AC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000067D4);
#endif

#if FW_VERSION >= 350
s32 music_common_E2916B77(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 music_common_9382B7D9(s32 arg0) {
    return arg0 + 4;
}
#endif

#if FW_VERSION >= 310
s32 func_00006818(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00006820(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

void func_00006828(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
}

void func_00006830(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
}

void func_00006838(void *arg0) {
    func_00005CC4(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION < 300
void func_00006008(struct Unk_func_00006008_0 *arg0) {
    func_00005CC4(( Unk_func_00005CC4_0*) ((u8 *)arg0 + 4));
    arg0->unk14 = 0;
    func_00005CC4(( Unk_func_00005CC4_0*) ((u8 *)arg0 + 0x18));
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006040);
#endif

#if FW_VERSION >= 350
void music_common_8E41320F(void *arg0) {
    music_common_9054BC13(arg0);
    music_common_9054BC13(arg0 + 0x10);
    music_common_9054BC13(arg0 + 0x20);
    music_common_9054BC13(arg0 + 0x30);
    music_common_9054BC13(arg0 + 0x40);
    func_00005EE4((s32) (arg0 + 0x50));
    func_00006748(arg0 + 0x80);
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00006040(struct Unk_func_00006040_0 *arg0) {
    music_common_74CC985E((s32) arg0);
    music_common_74CC985E((s32) &arg0->pad0[0x10]);
    music_common_74CC985E((s32) &arg0->pad0[0x20]);
    music_common_74CC985E((s32) &arg0->pad0[0x30]);
    music_common_74CC985E((s32) &arg0->pad0[0x40]);
    func_00005EE4((s32) &arg0->pad0[0x50]);
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
}
#endif

#if FW_VERSION < 300
void func_00006040(struct Unk_func_00006040_0 *arg0) {
    music_common_74CC985E(arg0);
    music_common_74CC985E((u8 *)arg0 + 0x10);
    music_common_74CC985E((u8 *)arg0 + 0x20);
    music_common_74CC985E((u8 *)arg0 + 0x30);
    music_common_74CC985E((u8 *)arg0 + 0x40);
    func_00005EE4((u8 *)arg0 + 0x50);
    arg0->unk78 = 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_9370D7F7);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void music_common_9370D7F7(struct Unk_music_common_9370D7F7_0 *arg0) {
    music_common_74CC985E((s32) arg0);
    music_common_74CC985E((s32) &arg0->pad0[0x10]);
    music_common_74CC985E((s32) &arg0->pad0[0x20]);
    music_common_74CC985E((s32) &arg0->pad0[0x30]);
    music_common_74CC985E((s32) &arg0->pad0[0x40]);
    func_00005EE4((s32) &arg0->pad0[0x50]);
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
}
#endif

#if FW_VERSION < 300
void music_common_9370D7F7(struct Unk_music_common_9370D7F7_0 *arg0) {
    music_common_74CC985E(arg0);
    music_common_74CC985E((u8 *)arg0 + 0x10);
    music_common_74CC985E((u8 *)arg0 + 0x20);
    music_common_74CC985E((u8 *)arg0 + 0x30);
    music_common_74CC985E((u8 *)arg0 + 0x40);
    func_00005EE4((u8 *)arg0 + 0x50);
    arg0->unk78 = 0;
}
#endif

#if FW_VERSION >= 310
void func_000060E0(s32 arg0) {
    func_000067AC(arg0 + 0x80);
    func_00005F64(arg0 + 0x50);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x40);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x30);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x20);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x10);
    _ZN14Class_0001F2C8D1Ev(arg0);
}
#endif

#if FW_VERSION >= 350
void music_common_C2365D1B(s32 arg0) {
    func_000067AC(arg0 + 0x80);
    func_00005F64(arg0 + 0x50);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x40);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x30);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x20);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x10);
    _ZN14Class_0001F2C8D1Ev(arg0);
}

s32 music_common_17279E1A(s32 arg0) {
    return arg0;
}

s32 music_common_DFB5FAD0(s32 arg0) {
    return arg0 + 0x10;
}

s32 music_common_379B3B96(s32 arg0) {
    return arg0 + 0x20;
}

s32 music_common_5CE1B703(s32 arg0) {
    return arg0 + 0x30;
}
#endif

#if FW_VERSION < 310
void func_000060E0(s32 arg0) {
    func_00005F64(arg0 + 0x50);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x40);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x30);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x20);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x10);
    _ZN14Class_0001F2C8D1Ev(arg0);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void music_common_3339B3EC(s32 arg0) {
    func_000067AC(arg0 + 0x80);
    func_00005F64(arg0 + 0x50);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x40);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x30);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x20);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x10);
    _ZN14Class_0001F2C8D1Ev(arg0);
}
#endif

#if FW_VERSION < 310
void music_common_3339B3EC(s32 arg0) {
    func_00005F64(arg0 + 0x50);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x40);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x30);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x20);
    _ZN14Class_0001F2C8D1Ev(arg0 + 0x10);
    _ZN14Class_0001F2C8D1Ev(arg0);
}
#endif

#if FW_VERSION < 350
s32 music_common_0786CB10(s32 arg0) {
    return arg0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 music_common_E35947CF(s32 arg0) {
    return arg0 + 0x10;
}
#endif

#if FW_VERSION < 310
s32 func_00006188(s32 arg0) {
    return arg0 + 0x10;
}
#endif

#if FW_VERSION < 350
s32 music_common_25A17DF3(s32 arg0) {
    return arg0 + 0x20;
}

s32 music_common_7420FA64(s32 arg0) {
    return arg0 + 0x30;
}
#endif

s32 func_000061A0(s32 arg0) {
    return arg0 + 0x40;
}

#if FW_VERSION >= 350
s32 music_common_2CCA44F9(s32 arg0) {
    return arg0 + 0x50;
}

s32 music_common_C8F8301C(s32 arg0) {
    return arg0 + 0x80;
}

s32 music_common_3DE8E212(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}
#else
s32 music_common_4DA67FC0(s32 arg0) {
    return arg0 + 0x50;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 music_common_291D0F22(s32 arg0) {
    return arg0 + 0x80;
}

s32 music_common_309C70F5(struct Unk_music_common_309C70F5_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x9C);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 music_common_309C70F5(struct Unk_music_common_309C70F5_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x7C);
}
#endif

#if FW_VERSION < 300
s32 music_common_309C70F5(struct Unk_music_common_309C70F5_0 *arg0) {
    return arg0->unk78;
}
#endif

#if FW_VERSION >= 310
void func_000061B8(struct Unk_func_000061B8_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_2A8FAB94);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_000061B8(struct Unk_func_000061B8_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
}
#endif

#if FW_VERSION < 300
void func_000061B8(struct Unk_func_000061B8_0 *arg0, s32 arg1) {
    arg0->unk78 = arg1;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_DD1980DD);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void music_common_DD1980DD(struct Unk_music_common_DD1980DD_0 *arg0) {
    func_00005CC4((struct Unk_func_00005CC4_0 *) arg0);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x10]);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x20]);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x30]);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x40]);
    func_00006008((struct Unk_func_00006008_0 *) &arg0->pad0[0x50]);
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void music_common_DD1980DD(struct Unk_music_common_DD1980DD_0 *arg0) {
    func_00005CC4((struct Unk_func_00005CC4_0 *) arg0);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x10]);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x20]);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x30]);
    func_00005CC4((struct Unk_func_00005CC4_0 *) &arg0->pad0[0x40]);
    func_00006008((struct Unk_func_00006008_0 *) &arg0->pad0[0x50]);
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
}
#endif

#if FW_VERSION < 300
void music_common_DD1980DD(struct Unk_music_common_DD1980DD_0 *arg0) {
    func_00005CC4((Unk_func_00005CC4_0*) arg0);
    func_00005CC4(( Unk_func_00005CC4_0*) ((u8 *)arg0 + 0x10));
    func_00005CC4(( Unk_func_00005CC4_0*) ((u8 *)arg0 + 0x20));
    func_00005CC4(( Unk_func_00005CC4_0*) ((u8 *)arg0 + 0x30));
    func_00005CC4(( Unk_func_00005CC4_0*) ((u8 *)arg0 + 0x40));
    func_00006008(( Unk_func_00006008_0*) ((u8 *)arg0 + 0x50));
    arg0->unk78 = 0;
}
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006210);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_894E982E);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F1FD2E7C);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006290);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_B3A3E115);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_682D82BC);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006310);

s32 func_00006354(s32 arg0) {
    return arg0 + 4;
}

#if FW_VERSION >= 350
s32 music_common_55C0DA63(s32 arg0) {
    return arg0 + 0x14;
}

void music_common_5B11D580(s32 arg0) {
    func_00005CC4(arg0 + 4);
    func_00005CC4(arg0 + 0x14);
}
#else
s32 music_common_867A32D8(s32 arg0) {
    return arg0 + 0x14;
}

void music_common_B58BD58B(s32 arg0) {
    func_00005CC4(arg0 + 4);
    func_00005CC4(arg0 + 0x14);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006398);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000063CC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006400);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006428);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006450);

s32 func_0000648C(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F234);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F23C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F244);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F24C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F254);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F25C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F264);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F26C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F274);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F298);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00022470);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2C8);

__asm__(".globl _ZTV14Class_0001F2C8\n_ZTV14Class_0001F2C8 = D_0001F2C8 - 8\n");

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2D0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006494);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000066DC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006734);

s32 func_00006800(void) {
    return 0;
}

s32 func_00006808(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006810);

void func_000068F4(void) {
}

void func_000068FC(void) {
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006904);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000694C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000069AC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F314);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000224F4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F31C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F328);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024654);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007554);
#endif

#if FW_VERSION >= 351
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007BE0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000246A0);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007BE0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007CB8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00006BD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000071D0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000071DC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000071E8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007944);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000894C);

void ***func_000079E4(void ***arg0, struct Unk_func_000079E4_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 -= 1;
    return arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void ***func_000079E4(void ***arg0, struct Unk_func_000079E4_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_000079E4_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007A4C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007ACC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007B10);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007B40);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007BD0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007C50);

void func_00007E20(s32 arg0) {
    struct Unk_func_00007E20_temp_v0 *temp_v0;

    temp_v0 = func_00007F9C();
    if (temp_v0->unk21 != 0) {

    } else {
        func_00008048(arg0, temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007E64);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00007F9C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00008048);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00008274);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000082C8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000831C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000850C);

s32 func_00008548(void) {
    return 0;
}

s32 func_00008550(void) {
    return 0;
}

s32 func_00008558(void) {
    return 0;
}

s32 func_00008560(void) {
    return 0;
}

s32 func_00008568(void) {
    return 0;
}

s32 func_00008570(void) {
    return 0;
}

s32 func_00008578(void) {
    return 0;
}

s32 func_00008580(void) {
    return 0;
}

void func_00008588(void) {
}
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00008590);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_4C9C9893);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_4BC80995);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_2C257325);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_A32A7678);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F5C917C8);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_4F03F4F4);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_CB3E8D44);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_B578BA93);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7A669C0D);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_335BA147);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_D0ED88F8);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_A2366257);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_306A56FF);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_24F7D129);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_BCD1A43A);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_84242F0A);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_E94CD2CD);
#endif

#if FW_VERSION >= 271 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_4137088A);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_3E2ED53D);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_8336BB49);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00009B04);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00009D54);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A0E8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A158);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A1C8);

void func_0000A32C(struct Unk_func_0000A32C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A33C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A37C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A3D0);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000B0F0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_13AEC09F);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_45085FB4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000B50C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_A9F8CE17);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_CF27B39E);
#endif

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A454);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F912A82E);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A944);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_211F93F6);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000ACE8);

s32 func_0000AD3C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3A8);
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_68075296);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_EC132A97);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_1B3190D1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7324090C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000B860);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000B8FC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BB20);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BC14);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BF94);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F3A4);

s32 func_0000F3D0(void) {
    return D_00016D7C;
}

s32 func_0000F3DC(void) {
    return D_00016D7C;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A520);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000A54C);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F912A82E);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_211F93F6);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000B1F0);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
s32 func_0000B244(struct Unk_func_0000B244_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x45C);
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_0000B244(struct Unk_func_0000B244_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk458;
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        arg0->unk458 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_2BE923C1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F904BDC5);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_1B3190D1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7324090C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CAD4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CB70);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CE58);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CF6C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DA28);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D2EC);
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F390);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F3C8);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F298);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F2C8);

__asm__(".globl _ZTV14Class_0001F2C8\n_ZTV14Class_0001F2C8 = D_0001F2C8 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F3F8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F400);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C858);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F408);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F410);
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F418);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F420);

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00022630);
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F428);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F430);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F438);

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F440);
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F444);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F44C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F460);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_E6C26E4A);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_19D3C191);

s32 func_0000BEFC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BF0C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BD60);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BD70);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_3EEF7A2D);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C178);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C268);

s32 func_00018120(struct Unk_func_00018120_0 *arg0, struct Unk_func_00018120_1 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unk0 - arg1->unk0;
    if (var_v0 == 0) {
        var_v0 = arg0->unk2 - arg1->unk2;
        if (var_v0 == 0) {
            var_v0 = arg0->unk4 - arg1->unk4;
            if (var_v0 == 0) {
                var_v0 = arg0->unk6 - arg1->unk6;
                if (var_v0 == 0) {
                    var_v0 = arg0->unk8 - arg1->unk8;
                    if (var_v0 == 0) {
                        var_v0 = (((u16) arg0->unkA >> 1) - ((u16) arg1->unkA >> 1)) * 2;
                    }
                }
            }
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C538);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_32915600);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024390);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8D8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000243A8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_44ED8EFB);

s32 func_0000BCD8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BCE8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BD60);

void func_0000BD70(M2C_UNK **arg0) {
    *arg0 = &D_0001F8D8;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_AAF0AF3D);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000BF54);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C044);

s32 func_00018120(struct Unk_func_00018120_0 *arg0, struct Unk_func_00018120_1 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unk0 - arg1->unk0;
    if (var_v0 == 0) {
        var_v0 = arg0->unk2 - arg1->unk2;
        if (var_v0 == 0) {
            var_v0 = arg0->unk4 - arg1->unk4;
            if (var_v0 == 0) {
                var_v0 = arg0->unk6 - arg1->unk6;
                if (var_v0 == 0) {
                    var_v0 = arg0->unk8 - arg1->unk8;
                    if (var_v0 == 0) {
                        var_v0 = (((u16) arg0->unkA >> 1) - ((u16) arg1->unkA >> 1)) * 2;
                    }
                }
            }
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C314);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C3D0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C484);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C4B0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_ED65F0D7);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_2F1FAAEA);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F912A82E);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_211F93F6);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D224);

s32 func_0000D278(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x45C);
    if (temp_v0 != 0) {
        _ZdaPv(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_E572789D);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_B0385755);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_1C49515A);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_DD7F761A);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_2BE923C1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F904BDC5);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_1B3190D1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7324090C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E544);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E5E0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E970);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EA84);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EEC8);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8C4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8C8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8D0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8E0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8EC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C8F8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C904);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C910);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C924);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C930);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C940);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C94C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C958);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C964);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C970);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C980);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C990);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C99C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9B4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9C4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9D4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9E4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9EC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001C9F8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA04);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA10);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA1C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA28);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA34);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA40);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA4C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA58);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA60);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA68);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CA74);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C278);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C404);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C6C4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CAF4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C740);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C8B0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CB20);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CB30);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CA6C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CBE4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CD38);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CDAC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CEFC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CF70);

s32 func_0000CFBC(void *arg0, s32 arg1, s8 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x58);
    M2C_FIELD(M2C_FIELD(temp_v0, void **, 8), s32 *, 0x10) = arg1;
    M2C_FIELD(M2C_FIELD(temp_v0, void **, 0xC), s8 *, 4) = arg2;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CFD8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D034);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D1C0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D46C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D58C);

void func_0000D7A8(void) {
    func_0000D58C(1, 0xFFFF);
}

void func_0000D7C8(void) {
    func_0000D58C(0, 0xFFFF);
}

void func_0000D7E8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D7F8);

void func_0000D838(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_0000DAA0((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D86C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D8C0);

void func_0000D934(s32 arg0) {
    func_0000DB60(arg0);
}

void func_0000D950(void) {
    func_0000DBB8();
}

void func_0000D96C(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000DAA0((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D9B0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D9EC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DA44);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DAA0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DB60);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DBB8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DBE4);

void func_0000DCB0(M2C_UNK **arg0) {
    *arg0 = &D_0001CB30;
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DCD8);

s32 func_0000DD04(void) {
    return D_0001D674;
}

s32 func_0000DD10(void) {
    return D_0001D674;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F468);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F474);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F480);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F48C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F498);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4C4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4D0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4DC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4EC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F4FC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F50C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F514);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F520);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F52C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F538);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F544);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F550);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F55C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F568);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F574);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F580);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021AC8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021AD4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021AE4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021AF4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B00);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B0C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B18);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B28);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B38);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F588);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F594);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5A0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5AC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5C4);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B90);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021B98);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024530);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021BA0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021BAC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021BB8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021BC4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5D0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5DC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5EC);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F5FC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F604);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F60C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F618);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F620);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F628);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F634);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F63C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F648);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F650);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F65C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F664);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F66C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F678);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F680);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F690);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000228D0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F69C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6A0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6C4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6D0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6DC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024648);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024658);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024664);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6E8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F6FC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_2BE923C1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_B08A22E0);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_1B3190D1);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7324090C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C314);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C3B0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C698);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000C7AC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F750);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F764);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F78C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F7A8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F7D4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CB2C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F800);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DC5C);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000247F0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000CCDC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D098);
#endif

#if FW_VERSION >= 301
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D26C);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021DA0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 301
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D26C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D5B8);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FDAC_v352);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FDAC_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FDAC_v350);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D6E0);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E860);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000106F4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010848);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000108BC);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000248B0);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000247F8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D870);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000D9FC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DB74);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DCC8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F0C0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000105D8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024C7C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024CA8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024CD8);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000248F4);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0002483C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024868);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DD3C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DDBC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DE50);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DE74);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000DED0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E05C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E308);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E428);

void func_0000E644(void) {
    func_0000E428(1, 0xFFFF);
}

void func_0000E664(void) {
    func_0000E428(0, 0xFFFF);
}

void func_0000E684(struct Unk_func_0000E684_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000EC98((s32) arg0, temp_v1 - 0xA);
    }
}

void func_0000E6C8(struct Unk_func_0000E6C8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E6D8);

void func_0000E718(struct Unk_func_0000E718_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_0000EC98((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E74C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E7A0);

void func_0000E824(void) {
    func_0000ED64();
}

void func_0000E840(void) {
    func_0000EDBC();
}

void func_0000E85C(struct Unk_func_0000E85C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E86C);

void func_0000E8AC(struct Unk_func_0000E8AC_0 *arg0, s32 arg1) {
    if (arg0->unk8 >= arg1) {

    } else {
        func_0000EDE8((s32) arg0, arg1);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E8E0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000E98C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EBA8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EBE4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EC3C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EC98);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000ED64);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EDBC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EDE8);

void func_0000EEE8(struct Unk_func_0000EEE8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EEF8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EF38);

void func_0000EFB4(struct Unk_func_0000EFB4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unk8;
    temp_v0 = arg0->unk4 - 1;
    arg0->unk4 = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000F0B4((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000EFF8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F0B4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_0000F17C(M2C_UNK **arg0) {
    *arg0 = &D_0001F8D8;
}

void func_0000F18C(M2C_UNK **arg0) {
    *arg0 = &D_0001F8D8;
    _ZdlPv(arg0);
}

void func_0000F1B4(M2C_UNK **arg0) {
    *arg0 = &D_0001F8C8;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F1C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0000F1C4(M2C_UNK **arg0) {
    *arg0 = &D_0001F8C8;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F1EC);

s32 func_0000F218(void) {
    return D_000205C8;
}

s32 func_0000F224(void) {
    return D_000205C8;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FA18);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_E602647F);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_93FA755C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FBD8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FC78);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FD18);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F88C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F894);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F898);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00022ADC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00022AF0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8C8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8D8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021DF8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021E08);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021E10);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021E24);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021E38);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021E54);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021E70);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7B422982);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_D87BC35C);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_08C4D799);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_4C8F8F22);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_CFD1A838);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_DBB7EC91);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010358);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010408);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_E5B6962E);

s32 music_common_3EE73C73(void *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = M2C_FIELD(arg0, u16 *, 0x378);
    *arg2 = M2C_FIELD(arg0, u16 *, 0x37A);
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_C98344EE);

s32 music_common_61BDC636(void *arg0, u16 *arg1, u16 *arg2) {
    *arg1 = M2C_FIELD(arg0, u16 *, 0x378);
    *arg2 = M2C_FIELD(arg0, u16 *, 0x37A);
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001057C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000105F0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_29E4E167);

s32 music_common_8F6408BA(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x37C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x344) = 1;
    return 0;
}

s32 music_common_8247F925(void *arg0, u8 *arg1) {
    *arg1 = M2C_FIELD(arg0, u8 *, 0x37C);
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_3CE4E2B0);

s32 music_common_3C362698(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x37C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x344) = 1;
    return 0;
}

s32 music_common_923A75FF(void *arg0, u8 *arg1) {
    *arg1 = M2C_FIELD(arg0, u8 *, 0x37C);
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010A3C);

void func_00010AA0(s32 arg0) {
    func_00010ACC(arg0);
    _ZN3paf8PhWidget11UpdateStateEv(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010ACC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010BCC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010C90);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010CBC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010CE8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010D14);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010D40);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010E94);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010F94);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000110C0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000110DC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000110F8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011164);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000111D0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011220);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001134C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_73AAB8A3);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_F2F9D067);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_AF9FD15A);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_9817121D);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011418);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011448);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000114E4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011534);
#endif

#if FW_VERSION >= 310
s32 func_00012220(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION == 303
s32 func_000115E8_v303(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION == 302
s32 func_000115E8_v302(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION == 301
s32 func_000115E8_v301(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION == 300
s32 func_000115E8_v300(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000115F0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024E10);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021ED0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00021FB0);

s32 func_00011644(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011650);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011660);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00011660(M2C_UNK **arg0) {
    *arg0 = &D_00021FB0;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011688);

s32 func_000116B4(void) {
    return D_00022A00;
}

s32 func_000116C0(void) {
    return D_00022A00;
}
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8E0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8F0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8F4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F8FC);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F904);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F90C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F230);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_57FEBDC7);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_240BD71A);
#endif

Class_0001F980::~Class_0001F980() {
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F708);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FA9C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FC14);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FC80);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FCE8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FD44);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000FDAC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_86ED3851);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_02005CB1);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000101A4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000102B8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024F9C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024FB0);

__asm__(".globl _ZTV14Class_0001F980\n_ZTV14Class_0001F980 = D_00024FB0 - 8\n");
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024BE4);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00024B2C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00022D78);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00022048);
#endif

void func_000103D8(void) {
    func_000102B8(1, 0xFFFF);
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000103F8);
#endif

void func_00010428(M2C_UNK **arg0) {
    *arg0 = &D_0001FA58;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010438);
#else
void func_00010438(M2C_UNK **arg0) {
    *arg0 = &D_0001FA58;
    _ZdlPv(arg0);
}
#endif

#if FW_VERSION < 300
s32 func_00010460(struct Unk_func_00010460_0 *arg0) {
    return arg0->unk1D4;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010468);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F980);

__asm__(".globl _ZTV14Class_0001F980\n_ZTV14Class_0001F980 = D_0001F980 - 8\n");

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FA58);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FA68);

__asm__(".globl _ZTV14Class_0001FA68\n_ZTV14Class_0001FA68 = D_0001FA68 - 8\n");

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001CCF8);
#endif

#if FW_VERSION == 260
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00016890);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000168A0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FA68);

__asm__(".globl _ZTV14Class_0001FA68\n_ZTV14Class_0001FA68 = D_0001FA68 - 8\n");
#endif

#if FW_VERSION < 300
s32 func_000104BC(struct Unk_func_000104BC_0 *arg0, s32 arg1) {
    arg0->unk1EC = arg1;
    return 0;
}
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010688);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000106A8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000106C8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010704);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010740);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001077C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000107B8);

s32 func_000107FC(s32 arg0, s32 arg1) {
    func_000109F0(arg0);
    func_00010898(arg0, arg1);
    return arg0;
}

s32 func_0001083C(s32 arg0, s32 arg1) {
    func_000109F0(arg0);
    func_00010898(arg0, arg1);
    return arg0;
}

void func_0001087C(s32 arg0) {
    func_000109F0(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010898);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000109F0);

void func_00010AD4(M2C_UNK **arg0) {
    *arg0 = &D_000168A0;
    _ZdlPv(arg0);
}
#endif

void func_000104C8(M2C_UNK **arg0) {
    *arg0 = &D_0001FA68;
}

void func_000104D8(M2C_UNK **arg0) {
    *arg0 = &D_0001FA68;
}

Class_0001FA68::~Class_0001FA68() {
}

#if FW_VERSION == 271
void func_0000F01C(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = arg2;
}

void func_0000F028(void *arg0, s32 arg1, s8 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = arg2;
}

void func_0000F034(void) {

}

void func_0000F03C(void) {

}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F044);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F16C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F294);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F470);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F774);

void func_0000F89C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001D098;
    func_00010DC4((s32) arg0);
    func_000100D4((s32) arg0);
    func_000107D4((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0xB3) = 0;
    func_000046F4(arg0 + 0x90);
}

void func_0000F8EC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001D098;
    func_00010DC4((s32) arg0);
    func_000100D4((s32) arg0);
    func_000107D4((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0xB3) = 0;
    func_000046F4(arg0 + 0x90);
}

void func_0000F93C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0001D098;
    func_00010DC4((s32) arg0);
    func_000100D4((s32) arg0);
    func_000107D4((s32) arg0);
    M2C_FIELD(arg0, s8 *, 0xB3) = 0;
    func_000046F4(arg0 + 0x90);
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0000F990);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000100D4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010478);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000107D4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000109A0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010DC4);

u8 func_000110C4(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0xB3);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000125E0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012698);

u32 func_0001280C(struct Unk_func_000044B0_0 *arg0) {
    return (u32) ~arg0->unk9C >> 0x1F;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001281C);

s32 func_00012834(struct Unk_func_00004420_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk98;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012844);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012A24);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012C7C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012CA0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012EFC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011AF4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012BBC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012C70);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012DC8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001D098);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014B48);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000143F8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014520);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000145AC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000146C8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014D0C);

s32 func_00014D50(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014D60);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014DD8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001D0B8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001D0C0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014E90);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014EB4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014F04);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014F54);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014F84);

s32 *func_00014FB4(s32 *arg0, void **arg1) {
    *arg0 = M2C_FIELD(*arg1, s32 *, 4);
    return arg0;
}

s32 *func_00014FC8(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    return arg0;
}

s32 func_00014FD8(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 4);
    return ((temp_a1 ^ M2C_FIELD(arg0, s32 *, 0x10)) == 0) ? temp_a1 : 0x8010C7FF;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014FF4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001511C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015318);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015404);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001547C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000155D4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015758);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015904);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015940);

void func_00015998(s32 arg0) {
    func_00015DB4(arg0);
}

void func_000159B4(void) {
    func_00015E0C();
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000159D0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015A2C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015AE8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015B20);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015BA0);

void func_00015BE4(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00015E38(arg0);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_00016054(arg0, (s32) temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015C28);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015C90);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015D24);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015DB4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015E0C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015E38);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015EC8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016054);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016280);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000163B8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016438);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016600);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016654);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000166A8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016864);

s32 func_00016AB0(void *arg0, void *arg1) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, u16 *, 0) - M2C_FIELD(arg1, u16 *, 0);
    if (var_v0 == 0) {
        var_v0 = M2C_FIELD(arg0, u16 *, 2) - M2C_FIELD(arg1, u16 *, 2);
        if (var_v0 == 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 4) - M2C_FIELD(arg1, u16 *, 4);
            if (var_v0 == 0) {
                var_v0 = M2C_FIELD(arg0, u16 *, 6) - M2C_FIELD(arg1, u16 *, 6);
                if (var_v0 == 0) {
                    var_v0 = M2C_FIELD(arg0, u16 *, 8) - M2C_FIELD(arg1, u16 *, 8);
                    if (var_v0 == 0) {
                        var_v0 = (((u16) M2C_FIELD(arg0, u16 *, 0xA) >> 1) - ((u16) M2C_FIELD(arg1, u16 *, 0xA) >> 1)) * 2;
                    }
                }
            }
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016B34);
#endif

#if FW_VERSION >= 282
void func_00010530(struct Unk_func_00010530_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_0001053C(struct Unk_func_0001053C_0 *arg0, s32 arg1, s8 arg2) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
}

void func_00010548(void) {
}

void func_00010550(void) {
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010558);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010680);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000107A8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010984);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010C88);

void func_00010DB0(struct Unk_func_00010DB0_0 *arg0) {
    arg0->unk0 = &D_0001FE40;
    func_000122D8((s32) arg0);
    func_000115E8((s32) arg0);
    func_00011CE8((s32) arg0);
    arg0->unkB3 = 0;
    func_000046F4(( Unk_func_000046F4_0*) ((u8 *)arg0 + 0x90));
}

void func_00010E00(struct Unk_func_00010E00_0 *arg0) {
    arg0->unk0 = &D_0001FE40;
    func_000122D8((s32) arg0);
    func_000115E8((s32) arg0);
    func_00011CE8((s32) arg0);
    arg0->unkB3 = 0;
    func_000046F4(( Unk_func_000046F4_0*) ((u8 *)arg0 + 0x90));
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010E50);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00010E50(struct Unk_func_00010E50_0 *arg0) {
    arg0->unk0 = &D_0001FE40;
    func_000122D8((s32) arg0);
    func_000115E8((s32) arg0);
    func_00011CE8((s32) arg0);
    arg0->unkB3 = 0;
    func_000046F4(( Unk_func_000046F4_0*) ((u8 *)arg0 + 0x90));
    _ZdlPv(arg0);
}

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001F980);

__asm__(".globl _ZTV14Class_0001F980\n_ZTV14Class_0001F980 = D_0001F980 - 8\n");
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FA58);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FA68);

__asm__(".globl _ZTV14Class_0001FA68\n_ZTV14Class_0001FA68 = D_0001FA68 - 8\n");

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FAA0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010EA4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000115E8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001198C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011CE8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00011EB4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000122D8);

u8 func_000125D8(struct Unk_func_000125D8_0 *arg0) {
    return arg0->unkB3;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000125E0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012698);

u32 func_0001280C(struct Unk_func_000044B0_0 *arg0) {
    return (u32) ~arg0->unk9C >> 0x1F;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001281C);

s32 func_00012834(struct Unk_func_00004420_0 *arg0, s32 *arg1) {
    *arg1 = arg0->unk98;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012844);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012A24);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012C7C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012CA0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00012EFC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00013008);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000140D0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014184);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000142DC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE40);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014B48);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015914);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015A3C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015AC8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE40);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00015BE4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016224);

s32 func_00016268(struct Unk_func_00016268_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk20 = arg1;
    arg0->unk24 = arg2;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016278);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000162F0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000163A8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000163CC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001641C);

void func_0001646C(s32 arg0) {
    func_00016F0C(arg0 + 0xC);
    func_00016E98(arg0);
}

void func_0001649C(s32 arg0) {
    func_00016F0C(arg0 + 0xC);
    func_00016E98(arg0);
}

s32 *func_000164CC(s32 *arg0, struct Unk_vt_func_000164CC_arg1 **arg1) {
    *arg0 = (*arg1)->unk4;
    return arg0;
}

s32 *func_000164E0(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    return arg0;
}

s32 func_000164F0(struct Unk_func_000164F0_0 *arg0) {
    s32 temp_a1;

    temp_a1 = arg0->unk4;
    return ((temp_a1 ^ arg0->unk10) == 0) ? temp_a1 : 0x8010C8FF;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001650C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016644);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016840);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001692C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001699C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016AF0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016C84);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016E34);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016E5C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016E98);

void func_00016EF0(void) {
    func_00017314();
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016F0C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016F28);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016F84);

s32 *func_00017040(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00017398(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017078);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000170FC);

void func_00017140(s32 arg0, s32 arg1) {
    struct Unk_func_00017140_temp_v0 *temp_v0;

    temp_v0 = func_00017398(arg0, arg1);
    if (temp_v0->unk19 != 0) {

    } else {
        func_000175D4(arg0, temp_v0);
    }
}
#endif

#if FW_VERSION >= 350
void ***func_00017184(void ***arg0, struct Unk_func_00017184_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 -= 1;
    return arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void ***func_00017184(void ***arg0, struct Unk_func_00017184_1 *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    struct Unk_func_00017184_temp_v1 *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = temp_v1->unk4;
    temp_a1 = temp_v1->unk0;
    *temp_s0 = temp_a1;
    M2C_FIELD(temp_v1->unk0, void ***, 4) = temp_s0;
    sce_paf_private_free2(temp_v1, temp_a1);
    *arg0 = temp_s0;
    arg1->unk4 = (s32) (arg1->unk4 - 1);
    return arg0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000171EC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017280);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017314);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001736C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017398);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017438);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000175D4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017800);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017938);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000179B8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017B80);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017BD4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017C28);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017DE4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00017ED4);

s32 func_00018120(struct Unk_func_00018120_0 *arg0, struct Unk_func_00018120_1 *arg1) {
    s32 var_v0;

    var_v0 = arg0->unk0 - arg1->unk0;
    if (var_v0 == 0) {
        var_v0 = arg0->unk2 - arg1->unk2;
        if (var_v0 == 0) {
            var_v0 = arg0->unk4 - arg1->unk4;
            if (var_v0 == 0) {
                var_v0 = arg0->unk6 - arg1->unk6;
                if (var_v0 == 0) {
                    var_v0 = arg0->unk8 - arg1->unk8;
                    if (var_v0 == 0) {
                        var_v0 = (((u16) arg0->unkA >> 1) - ((u16) arg1->unkA >> 1)) * 2;
                    }
                }
            }
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000181A4);
#endif

#if FW_VERSION < 330
void func_00018260(struct Unk_func_00018260_0 *arg0, void *arg1) {
    arg0->unk0 = &D_0001FE78;
    arg0->unk4 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}
#endif

void func_000182A4(struct Unk_func_000182A4_0 *arg0, void *arg1) {
    arg0->unk0 = &D_0001FE78;
    arg0->unk4 = sceKernelCreateEventFlag(arg1, 0x200U, 0U, NULL);
}

void func_000182E8(struct Unk_func_000182E8_0 *arg0) {
    arg0->unk0 = &D_0001FE78;
    sceKernelDeleteEventFlag(arg0->unk4);
}

void func_00018310(struct Unk_func_00018310_0 *arg0) {
    arg0->unk0 = &D_0001FE78;
    sceKernelDeleteEventFlag(arg0->unk4);
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018338);
#else
void func_00018338(struct Unk_func_00018338_0 *arg0) {
    arg0->unk0 = &D_0001FE78;
    sceKernelDeleteEventFlag(arg0->unk4);
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018374);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001838C);

s32 func_000183A4(s32 arg0) {
    return arg0;
}

s32 func_000183AC(struct Unk_func_000183AC_0 *arg0) {
    return arg0->unk4 > 0;
}

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00016D48);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00010CBC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000183B8);
#endif

s32 func_00018448(struct Unk_func_00018448_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = -1;
    temp_v0 = arg0->unk4;
    if (temp_v0 > 0) {
        var_v1 = sceKernelSetEventFlag(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001847C);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000184B8);
#else
s32 func_000184B8(struct Unk_func_000184B8_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0001B9F8(0x44);
    arg0->unk0 = temp_v0;
    var_v1 = 1;
    if (temp_v0 != 0) {
        func_00018904(temp_v0);
        arg0->unk8 = 0;
        arg0->unk4 = 0;
        arg0->unkC = 0;
        func_0001BD40((u8 *)arg0 + 0x10);
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018518);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000185B8);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BC54);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018654);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000186B4);

void *func_000187D4(struct Unk_func_000187D4_0 *arg0, s32 arg1) {
    s32 var_s0;
    struct Unk_func_000187D4_var_s1 *var_s1;

    var_s0 = arg1;
    func_0001BDF4(arg0->unk10);
    var_s1 = arg0->unk4;
    if (var_s0 != 0) {
        do {
            var_s0 -= 1;
            var_s1 = var_s1->unk18;
        } while (var_s0 != 0);
    }
    func_0001BEDC(arg0->unk10);
    return var_s1;
}

s32 func_00018830(struct Unk_func_00018830_0 *arg0) {
    return arg0->unkC;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018838);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018904);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018910);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018938);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018968);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000189E8);

void func_00018AA0(struct Unk_func_00018AA0_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = arg0->unkA4;
    if (temp_a0 != 0) {
        func_00018518(temp_a0);
        temp_a0_2 = arg0->unkA4;
        if (temp_a0_2 == 0) {
            arg0->unkA4 = 0;
        } else {
            func_0001BA1C(temp_a0_2);
            arg0->unkA4 = 0;
        }
    }
    temp_a0_3 = arg0->unkA0;
    if (temp_a0_3 != 0) {
        func_0001C908(temp_a0_3);
        temp_a0_4 = arg0->unkA0;
        if (temp_a0_4 == 0) {
            arg0->unkA0 = 0;
        } else {
            func_0001BA1C(temp_a0_4);
            arg0->unkA0 = 0;
        }
    }
    temp_a0_5 = arg0->unk84;
    if (temp_a0_5 == 0) {

    } else {
        func_0001BA1C(temp_a0_5);
        func_00018CD8(arg0, &arg0->unk84);
    }
    if (arg0->unk78 == 0) {

    } else {
        func_0001BA1C(arg0->unk78);
        func_00018CD8(arg0, &arg0->unk78);
    }
    if (arg0->unkA8 != 0) {
        func_0001C6A8(arg0->unkA8);
        temp_a0_6 = arg0->unkA8;
        if (temp_a0_6 == 0) {
            arg0->unkA8 = 0;
        } else {
            func_0001BA1C(temp_a0_6);
            arg0->unkA8 = 0;
        }
    }
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018BB8);

void func_00018CD0(struct Unk_func_00018CD0_0 *arg0, s8 arg1) {
    arg0->unk41 = arg1;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018CD8);

s32 func_00018CE8(struct Unk_func_00018CE8_0 *arg0) {
    return arg0->unk6C < arg0->unk70;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018CF8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018E88);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018F44);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00018FC8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000190E4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000191DC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00019384);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00019580);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000196C0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00019804);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00019954);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00019D50);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_00019FCC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A004);

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE60);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE68);
#endif

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE78);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE80);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE88);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE90);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE94);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE98);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FE9C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FEA0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FEA8);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FEB0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A05C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A090);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A24C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A39C);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001DB84);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001DCF8);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A4A0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A5B4);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A6F0);

#if FW_VERSION >= 330
s32 func_0001A780(struct Unk_func_0001A780_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;

    temp_a0 = arg0->unk58;
    if (temp_a0 != 0) {
        func_0001C908(temp_a0);
        temp_a0_2 = arg0->unk58;
        if (temp_a0_2 == 0) {
            arg0->unk58 = 0;
        } else {
            func_0001BA1C(temp_a0_2);
            arg0->unk58 = 0;
        }
    }
    temp_a0_3 = arg0->unk5C;
    if (temp_a0_3 != 0) {
        func_00018518(temp_a0_3);
        temp_a0_4 = arg0->unk5C;
        if (temp_a0_4 == 0) {
            arg0->unk5C = 0;
        } else {
            func_0001BA1C(temp_a0_4);
            arg0->unk5C = 0;
        }
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_a0_5 != 0) {
        func_0001C6A8(temp_a0_5);
        temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x60);
        if (temp_a0_6 == 0) {
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
        } else {
            func_0001BA1C(temp_a0_6);
            M2C_FIELD(arg0, s32 *, 0x60) = 0;
        }
    }
    temp_a0_7 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_a0_7 != 0) {
        func_0001BA1C(temp_a0_7);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    temp_a0_8 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_a0_8 != 0) {
        func_0001BA1C(temp_a0_8);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    temp_a0_9 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_a0_9 != 0) {
        func_0001BA1C(temp_a0_9);
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    return 0;
}
#else
s32 func_0001A780(struct Unk_func_0001A780_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;

    temp_a0 = arg0->unk54;
    if (temp_a0 != 0) {
        func_0001C908(temp_a0);
        temp_a0_2 = arg0->unk54;
        if (temp_a0_2 == 0) {
            arg0->unk54 = 0;
        } else {
            func_0001BA1C(temp_a0_2);
            arg0->unk54 = 0;
        }
    }
    temp_a0_3 = arg0->unk58;
    if (temp_a0_3 != 0) {
        func_00018518(temp_a0_3);
        temp_a0_4 = arg0->unk58;
        if (temp_a0_4 == 0) {
            arg0->unk58 = 0;
        } else {
            func_0001BA1C(temp_a0_4);
            arg0->unk58 = 0;
        }
    }
    temp_a0_5 = arg0->unk5C;
    if (temp_a0_5 != 0) {
        func_0001C6A8(temp_a0_5);
        temp_a0_6 = arg0->unk5C;
        if (temp_a0_6 == 0) {
            arg0->unk5C = 0;
        } else {
            func_0001BA1C(temp_a0_6);
            arg0->unk5C = 0;
        }
    }
    temp_a0_7 = arg0->unk44;
    if (temp_a0_7 != 0) {
        func_0001BA1C(temp_a0_7);
        arg0->unk44 = 0;
    }
    temp_a0_8 = arg0->unk38;
    if (temp_a0_8 != 0) {
        func_0001BA1C(temp_a0_8);
        arg0->unk38 = 0;
    }
    return 0;
}
#endif

void func_0001A884(struct Unk_func_0001A884_0 *arg0) {
    arg0->unkC8 = 0;
    arg0->unkCC = 0;
    func_00018968((s32) arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A8A8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A8FC);

s32 func_0001A940(struct Unk_func_0001A940_0 *arg0, s32 arg1) {
    struct Unk_vt_func_0001A940_temp_a0 **temp_a0;

    temp_a0 = arg0->unkCC;
    (*temp_a0)->unk28(temp_a0, arg0->unkC8, arg1);
    arg0->unkAC = arg1;
    return arg1;
}

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0001FEF4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A98C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B09C);

void func_0001B368(void) {
}

void func_0001B370(void) {
}

void func_0001B378(void) {
}

void func_0001B380(void) {
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B388);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B41C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B45C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B56C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B668);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B774);

s32 func_0001B898(void) {
    return -1;
}

s32 func_0001B8A0(void) {
    return -1;
}

s32 func_0001B8A8(void) {
    return -1;
}

void func_0001B8B0(s32 arg0) {
    func_0001B45C(D_00020A24, arg0);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B8D4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B8FC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_C1A7DF11);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_4F465C92);
#else
INCLUDE_ASM("nonmatchings/music_common_005E68", bXCeMemInitialize);

INCLUDE_ASM("nonmatchings/music_common_005E68", bXCeMemDestroy);
#endif

void func_0001B9CC(s32 arg0, s32 arg1) {
    func_0001B56C(D_00020A24, arg0, arg1);
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B9F8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BA1C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BA44);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BA94);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BC08);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BC28);

void func_0001BC48(void) {
}

s32 func_0001BC50(void) {
    return 2;
}

s32 func_0001BC58(void) {
    return 2;
}

s32 func_0001BC60(void) {
    return 2;
}

void func_0001BC68(void) {
}

s32 func_0001BC70(void) {
    return 2;
}

s32 func_0001BC78(void) {
    return 2;
}

s32 func_0001BC80(void) {
    return 2;
}

s32 func_0001BC88(struct Unk_func_0001BC88_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceKernelCreateSema("PFMutex", 0x100U, 1, 1, NULL);
    var_v1 = 1;
    if (temp_v0 > 0) {
        arg0->unk4 = temp_v0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BCD8);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BD40);

s32 func_0001BDAC(struct Unk_func_0001BDAC_0 *arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = 6;
    if (arg0 != NULL) {
        temp_s0 = sceKernelDeleteSema(arg0->unk4);
        func_0001BA1C((s32) arg0);
        var_v0 = temp_s0 != 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BDF4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BE6C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BEDC);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BF08);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BF48);

s32 func_0001BFAC(void) {
    return 2;
}

s32 func_0001BFB4(void) {
    return 2;
}

s32 func_0001BFBC(void) {
    return 2;
}

s32 func_0001BFC4(void) {
    return 2;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001BFCC);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001FC78);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001F8F8);
#endif

#if FW_VERSION == 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001F854);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001EF48);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001E310);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001A9D4);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/music_common_005E68", func_00014970);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C044);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C23C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C2E4);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C3C0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C43C);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00025078);
#endif

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C634);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C6A8);

void func_0001C708(struct Unk_func_0001C708_0 *arg0) {
    arg0->unkC = 0;
    arg0->unk8 = 0;
    arg0->unk18 = 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C718);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C758);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C798);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C844);

s32 func_0001C8FC(s32 *arg0) {
    *arg0 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C908);

void func_0001C978(void **arg0, struct Unk_func_0001C978_1 *arg1) {
    void *temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 != NULL) {
        arg1->unk8 = temp_v0;
    }
    *arg0 = arg1;
}

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C98C);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001C9F4);

s32 func_0001CA14(s32 *arg0) {
    return *arg0 == 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_B0626411);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_8FEA4BD6);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7A0F09EE);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00025650);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00025654);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00025658);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_9C8297EE);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_7DBB934B);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_049438D5);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_657CE44C);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_00025298);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_0002529C);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000252A0);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000251E0);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000251E4);

INCLUDE_RODATA("nonmatchings/music_common_005E68", D_000251E8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_55467A5B);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_000205C0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_000205FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B3B0);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B428);

INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001B580);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001CA20);

INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_55467A5B);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001CA60);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_A8FB7746);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/music_common_005E68", music_common_64CDE1AD);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/music_common_005E68", func_0001CA9C);
#endif
