#include "common.h"
#include "paf_decls.h"

#if FW_VERSION == 282
void func_001175E0(M2C_UNK **arg0) {
    *arg0 = &D_0019CFE8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#else
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117618);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FAEC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FAF8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FBBC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FCA8);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FCD0);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FD08);
#endif

#if FW_VERSION == 260
void func_0010FD08(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FD14);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FD84);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FE20);
#endif

#if FW_VERSION == 282
void func_00117618(struct Unk_func_00117618_0 *arg0, s32 arg1) {
    arg0->unk1E8->unk28 = arg1;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE408);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE488);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C083C);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE4C0);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE5A0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE828);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BE8A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_RODATA("nonmatchings/paf_1175E0", D_0011F128);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117624);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117684);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001176E4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117780);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011781C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_001178C0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011792C);

void func_0011794C(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}

void func_00117968(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117984(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_001179A0(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_001179BC(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}

void func_001179D8(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_001179F4(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117A10);

s32 func_00117A44(struct Unk_func_00117A44_0 *arg0, s32 arg1) {
    func_0000C8BC(arg1, arg0->unk84);
    return 0;
}

void func_00117A6C(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117A90);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117AF0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117B50);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117BEC);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117C88);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117D2C);
#endif

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117D98);

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FEE4);
#endif

#if FW_VERSION == 260
void func_0010FEE4(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF00);
#endif

#if FW_VERSION == 260
void func_0010FF00(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF1C);
#endif

#if FW_VERSION == 260
void func_0010FF1C(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF38);
#endif

#if FW_VERSION == 260
void func_0010FF38(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF54);
#endif

#if FW_VERSION == 260
void func_0010FF54(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF70);
#endif

#if FW_VERSION == 260
void func_0010FF70(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FF8C);
#endif

#if FW_VERSION == 260
void func_0010FF8C(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FFA8);
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_0010FFDC);
#endif

#if FW_VERSION == 260
s32 func_0010FFDC(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_00110004);
#endif

#if FW_VERSION == 260
void func_00110004(s32 arg0, s32 arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEB2C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEC68);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BECB0);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEEE4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BEF7C);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF0B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C3244);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C3280);
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF1AC);
#endif

#if FW_VERSION == 282
void func_00117DB8(s32 arg0) {
    func_000C2580(arg0 + 0x20);
}

void func_00117DD4(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117DF0(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_00117E0C(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_00117E28(s32 arg0) {
    func_000C25D8(arg0 + 0x20);
}

void func_00117E44(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_00117E60(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117E7C);

s32 func_00117EB0(struct Unk_func_00117EB0_0 *arg0, s32 arg1) {
    func_0000C8BC(arg1, arg0->unk84);
    return 0;
}

void func_00117ED8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_00117EFC);
#endif

#if FW_VERSION >= 200
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_6147E3D5);
#endif

void func_00117F74(struct Unk_func_00117F74_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_1B043852);
#endif

#if FW_VERSION >= 260
void scePaf_1B043852(struct Unk_scePaf_1B043852_0 *arg0) {
    sceKernelDeleteEventFlag(arg0->unk4);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_0B0959FC);
#endif

#if FW_VERSION == 260
s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0) {
    void *sp0;
    sceKernelSignalSema(*arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk4, 1U, 0x10, &sp0, NULL);
    sceKernelWaitSema((u32) *arg0->unk0, 1, NULL);
    return 0;
}
#endif

#if FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF204);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF220);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF280);
#endif

#if FW_VERSION == 282
s32 scePaf_0B0959FC(struct Unk_scePaf_0B0959FC_0 *arg0) {
    void *sp0;
    sceKernelSignalSema(*arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk4, 1U, 0x10, &sp0, NULL);
    sceKernelWaitSema(*arg0->unk0, 1, NULL);
    return 0;
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_CA5EF446);
#endif

#if FW_VERSION >= 260
void scePaf_CA5EF446(struct Unk_scePaf_CA5EF446_0 *arg0) {
    sceKernelSetEventFlag(arg0->unk4, 1);
}
#endif

void func_0011802C(struct Unk_func_0011802C_0 *arg0) {
    void *sp0;
    sceKernelCancelEventFlag(arg0->unk4, 0U, &sp0);
}

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C33D4);
#endif

#if FW_VERSION == 260
void func_000C33D4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0011F128, 0x200U, 3U, NULL);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_B884B031);
#endif

#if FW_VERSION == 260
void scePaf_B884B031(struct Unk_scePaf_B884B031_0 *arg0) {
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk0 = sceKernelCreateEventFlag(&D_0011F128, 0x200U, 3U, NULL);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C345C);
#endif

#if FW_VERSION == 260
void func_000C345C(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_9399AF50);
#endif

#if FW_VERSION == 260
void scePaf_9399AF50(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_C1F72218);
#endif

#if FW_VERSION == 260
void scePaf_C1F72218(struct Unk_scePaf_C1F72218_0 *arg0) {
    u32 temp_v0;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (arg0->unk4 != temp_v0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 1);
        sceKernelWaitEventFlag(arg0->unk0, 3U, 0x20, NULL, NULL);
        arg0->unk4 = temp_v0;
    }
    arg0->unk8 += 1;
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_539F2583);
#endif

#if FW_VERSION == 260
void scePaf_539F2583(struct Unk_scePaf_539F2583_0 *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(arg0->unk0, 1U, 0x20, NULL, NULL);
    temp_v1 = arg0->unk8 - 1;
    arg0->unk8 = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) arg0->unk0, 2);
        arg0->unk4 = 0;
    }
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C3590);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C360C);
#endif

#if FW_VERSION == 260
void func_000C360C(void) {
    func_000C3590(1, 0xFFFF);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000C362C);
#endif

#if FW_VERSION == 260
void func_000C362C(void) {
    func_000C3590(0, 0xFFFF);
}

void func_00115570(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0019705C, 0x200U, 3U, NULL);
}

void func_001155B0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_0019705C, 0x200U, 3U, NULL);
}

void func_001155F0(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_0011560C(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00115628(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 1) {

    } else {
        sceKernelClearEventFlag(M2C_FIELD(arg0, u32 *, 0), -2U);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_00115694(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 0) {

    } else {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_001156FC(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00115740(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

void func_00115760(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_00197068, 0x200U, 4U, NULL);
}

void func_001157A8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, u32 *, 0) = sceKernelCreateEventFlag(&D_00197068, 0x200U, 4U, NULL);
}

void func_001157F0(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_0011580C(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00115828(void *arg0) {
    if (sceKernelPollEventFlag(M2C_FIELD(arg0, s32 *, 0), 1, 0x20, 0) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 (**)(s32), 4)(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 (**)(s32), 4) = NULL;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0), 2);
    }
}

s32 scePaf_EB346F51(struct Unk_scePaf_EB346F51_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    sceKernelWaitEventFlag(arg0->unk0, 4U, 0x20, NULL, NULL);
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = 0;
    sceKernelSetEventFlag((s32) arg0->unk0, 1);
    sceKernelWaitEventFlag(arg0->unk0, 2U, 0x20, NULL, NULL);
    temp_s1 = arg0->unkC;
    sceKernelSetEventFlag((s32) arg0->unk0, 4);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/paf_1175E0", func_0011591C);

void func_00115998(void) {
    func_0011591C(1, 0xFFFF);
}

void func_001159B8(void) {
    func_0011591C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_96857E81);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 200
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_E05F3CEF);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_1175E0", scePaf_E977B833);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF2C4);

INCLUDE_ASM("nonmatchings/paf_1175E0", func_000BF3F4);
#endif
