#include "common.h"
#include "dd_helper_decls.h"

INCLUDE_ASM("nonmatchings/dd_helper", func_00000024);

INCLUDE_ASM("nonmatchings/dd_helper", func_000000AC);

INCLUDE_ASM("nonmatchings/dd_helper", module_start);

s32 module_stop(void) {
    func_00009F6C();
    return 0;
}

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/dd_helper", func_0000015C);
#endif

#if FW_VERSION == 280
void func_000001C4(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_0000085C((s32) &D_0000B62C, &sp0);
    func_0000082C(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_0000085C((s32) &D_0000B638, &sp0);
    func_0000082C(&sp0);
}
#endif

#if FW_VERSION == 282
void func_000001C4(void) {
    void *sp0;
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_0000085C((s32) &D_0000B61C, &sp0);
    func_0000082C(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_0000085C((s32) &D_0000B628, &sp0);
    func_0000082C(&sp0);
}
#endif

void func_00000230(void) {
}

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/dd_helper", func_00000238);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000274);
#endif

#if FW_VERSION == 280
s32 func_0000038C_v280(void) {
    func_0000052C(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000003AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000003D4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA18);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA28);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000041C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000004C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000052C);
#endif

#if FW_VERSION < 282
void func_00000164(void) {

}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_0000016C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000038C);
#endif

#if FW_VERSION == 280
s32 func_0000038C(void) {
    return func_0000052C(2);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000005E0);
#endif

#if FW_VERSION == 282
s32 func_0000038C(void) {
    func_0000052C(0);
    return 0;
}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000002C4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000003AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000003D4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA08);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA18);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000041C);
#endif

#if FW_VERSION != 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000004C0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper", func_0000052C);

void func_000005BC(void) {
}

void func_000005C4(void) {
    func_0000052C(2);
}

u8 func_000005E0(void) {
    return D_0000B618;
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_000005EC);

void func_00000610(struct Unk_func_00000610_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_0000AAB8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_00000628(struct Unk_func_00000628_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_0000AAB8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_00000640(M2C_UNK **arg0) {
    *arg0 = &D_0000AAB8;
}

void func_00000650(M2C_UNK **arg0) {
    *arg0 = &D_0000AAB8;
}

void func_00000660(M2C_UNK **arg0) {
    *arg0 = &D_0000AAB8;
    scePaf_4E67BB08();
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00000688);

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_000082A0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000082B0);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA40);

#if FW_VERSION == 280
void func_000006A8(void) {
    void *temp_v0;

    temp_v0 = scePaf_D4FAE7D0("htmlviewer_plugin");
    if (temp_v0 != NULL) {
        scePaf_5EBC648F(temp_v0, M2C_FIELD(temp_v0, s32 *, 0x1B8));
    }
    sceHtmlViewerHelper_05E0C3D4(0);
}
#endif

#if FW_VERSION < 280
void func_000006A8(void) {
    void *temp_v0;

    temp_v0 = scePaf_D4FAE7D0("htmlviewer_plugin");
    if (temp_v0 != NULL) {
        scePaf_5EBC648F(temp_v0, M2C_FIELD(temp_v0, s32 *, 0x1B8));
    }
}
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000006E0);
#endif

#if FW_VERSION == 282
void func_000006A8(void) {
    struct Unk_func_000006A8_temp_v0 *temp_v0;

    temp_v0 = scePaf_D4FAE7D0("htmlviewer_plugin");
    if (temp_v0 != NULL) {
        scePaf_5EBC648F(temp_v0, temp_v0->unk1B8);
    }
    sceHtmlViewerHelper_05E0C3D4(0);
}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_0000046C);
#endif

#if FW_VERSION == 282
void func_000006E0(struct Unk_func_000006E0_0 *arg0) {
    sceHtmlViewerHelper_05E0C3D4(1);
    scePaf_CAF05F1D(arg0->unk4, &D_0000AA40);
}
#endif

void func_00000718(struct Unk_func_00000718_0 *arg0) {
    sceHtmlViewerHelper_F27998C2(arg0->unk8);
}

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/dd_helper", func_00000734);

void func_000007BC(void) {
    func_00000734(1, 0xFFFF);
}

void func_000007DC(void) {
    func_00000734(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000007FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000082C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000085C);
#endif

void func_000008F8(void) {
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00000900);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000930);

s32 func_00000964(s32 arg0, struct Unk_func_00000964_1 *arg1) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (arg1->unk4 * 2) + 2;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != NULL) {
        sceCccUTF8toUTF16(temp_v0, temp_s0, arg1->unk0);
        func_00002520(arg0, (s32) temp_v0);
        scePaf_545FE2DA((s32) temp_v0);
    }
    return arg0;
}

void func_000009E4(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (scePaf_FD4C9F47(arg1) * 2) + 0x20;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != NULL) {
        scePaf_49A81B18(temp_v0, temp_s0, arg1, arg2);
        func_00002570(arg0, (s32) temp_v0, scePaf_FD4C9F47(temp_v0));
        scePaf_545FE2DA((s32) temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00000A84);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000B98);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000DF0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000EF0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000F88);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001020);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000010C0);
#else
void func_000010C0(struct Unk_func_000006E0_0 *arg0) {
    void *sp0;
    if ((sceNetApctlGetState(&sp0) != 0) || (sp0 != 0)) {
        func_000006E0(arg0);
        scePaf_A0ED77C4(0, func_000014E0, arg0, -1, -1, &func_00001500);
    } else {
        sceHtmlViewerHelper_C92C71B7(arg0->unk8);
    }
}
#endif

#if FW_VERSION == 280
void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((s32) &arg0->pad0[0xC]);
    sceKernelSetEventFlag(arg0->unkC0, 1);
}
#endif

#if FW_VERSION == 271
void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((s32) &arg0->pad0[0xC]);
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0xCC), 1);
}
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA74);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA88);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAA0_v280);
#endif

#if FW_VERSION < 271 || FW_VERSION == 282
void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((u8 *)arg0 + 0xC);
    sceKernelSetEventFlag(arg0->unkC0, 1);
}
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA64);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA78);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA90);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAB8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAD0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AADC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAF4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAFC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB04);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB0C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB14);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000116C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB70);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB8C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ABA8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ABBC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000136C);

void func_000014E0(struct Unk_func_000014E0_0 *arg0) {
    func_00002B2C((u8 *)arg0 + 0xC, arg0->unk6C);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00001500);

INCLUDE_ASM("nonmatchings/dd_helper", func_000015C0);

void func_0000178C(s32 arg0) {
    func_000031E8(arg0 + 0xC, arg0 + 0x78);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000017AC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ACE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ACEC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD08);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD1C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000868C);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD34);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD4C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD68);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD84);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD9C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ADC0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ADEC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AE10);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AE80);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AE9C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AEB4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AECC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AEE4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AEFC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AF14);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AF2C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AF44);

INCLUDE_ASM("nonmatchings/dd_helper", func_000018C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001A38);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001AF0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001BB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001C24);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001E00);

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/dd_helper", func_00002184);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_00001D50);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002268);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002290);

INCLUDE_ASM("nonmatchings/dd_helper", func_000022D4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002420);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000244C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000024A8);

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000007FC);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002520);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002570);

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_0000082C);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_0000263C);

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_0000085C);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_000026F0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002740);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002800);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002908);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002964);

INCLUDE_ASM("nonmatchings/dd_helper", func_000029D4);

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/dd_helper", func_00002ABC);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_000027CC);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002B2C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AFD0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AFE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002B74);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002D48);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002DA4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B00C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B014);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002DE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002E2C);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/dd_helper", func_00002B98);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00008984);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002E70);

void func_00003100(s32 arg0, s32 arg1, s32 arg2) {
    struct Unk_func_00003100_temp_a0 *temp_a0;

    temp_a0 = arg0 + 0x14;
    temp_a0->unk10 = arg1;
    temp_a0->unk14 = arg2;
}

#if FW_VERSION >= 280
INCLUDE_ASM("nonmatchings/dd_helper", func_00003110);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_000031E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B028);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B030);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B034);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B038);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003338);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003638);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003830);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003854);

s32 *func_000038E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00003AB4(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00003920);

INCLUDE_ASM("nonmatchings/dd_helper", func_000039B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003A34);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003AB4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003BB8);

void func_00003BE4(struct Unk_func_00003BE4_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = arg0->unk10;
    if (temp_a0 == 0) {

    } else {
        scePaf_545FE2DA(temp_a0);
    }
    if (arg0->unk14 == 0) {

    } else {
        scePaf_545FE2DA(arg0->unk14);
    }
    if (arg0->unk18 == 0) {

    } else {
        scePaf_545FE2DA(arg0->unk18);
    }
    if (arg0->unk1C == 0) {

    } else {
        scePaf_545FE2DA(arg0->unk1C);
    }
    func_00004EC8(arg0, arg0->unk4);
    func_00004EC8(arg0, arg0->unk8);
    func_00004F30(arg0, arg0->unkC);
    temp_a0_2 = arg0->unk20;
    arg0->unk0 = 0;
    if (temp_a0_2 == 0) {
        arg0->unk28 = 0;
    } else {
        scePaf_545FE2DA(temp_a0_2);
        arg0->unk28 = 0;
    }
}

void func_00003CB8(struct Unk_func_00003CB8_0 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = arg0->unk10;
    if (temp_a0 == 0) {

    } else {
        scePaf_545FE2DA(temp_a0);
    }
    if (arg0->unk14 == 0) {

    } else {
        scePaf_545FE2DA(arg0->unk14);
    }
    if (arg0->unk18 == 0) {

    } else {
        scePaf_545FE2DA(arg0->unk18);
    }
    if (arg0->unk1C == 0) {

    } else {
        scePaf_545FE2DA(arg0->unk1C);
    }
    func_00004EC8(arg0, arg0->unk4);
    func_00004EC8(arg0, arg0->unk8);
    func_00004F30(arg0, arg0->unkC);
    temp_a0_2 = arg0->unk20;
    arg0->unk0 = 0;
    if (temp_a0_2 == 0) {
        arg0->unk28 = 0;
    } else {
        scePaf_545FE2DA(temp_a0_2);
        arg0->unk28 = 0;
    }
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B054);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B05C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B064);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B06C);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/dd_helper", D_000089DC);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B074);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B09C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B0D8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003D8C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003EE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003F20);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000418C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004438);

INCLUDE_ASM("nonmatchings/dd_helper", func_000046A8);

s32 func_00004E10(s32 *arg0) {
    return *arg0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00004E18);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004E60);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004E84);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004EC8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004EEC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004F30);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004F54);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005038);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B0F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B0FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B104);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B10C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B118);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B120);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005108);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000522C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005370);

INCLUDE_ASM("nonmatchings/dd_helper", func_000054AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000055E8);

s32 func_00005908(struct Unk_func_00005908_0 *arg0, struct Unk_func_00005908_1 *arg1) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_v1;

    arg0->unk28 = (s32) ((arg1->unk10 << 0x18) + (arg1->unk11 << 0x10) + (arg1->unk12 << 8) + arg1->unk13);
    temp_a1 = arg0->unk20;
    arg0->unk24 = (s32) ((arg1->unk20 << 8) + arg1->unk21);
    if (temp_a1 == 0) {

    } else {
        scePaf_545FE2DA(temp_a1);
    }
    temp_v0 = scePaf_CE699963(arg0->unk24 + 1, 1);
    arg0->unk20 = temp_v0;
    var_v1 = 0x80108B01;
    if (temp_v0 != 0) {
        scePaf_F95EA3F1(temp_v0, (u8 *)arg1 + 0x22, arg0->unk24);
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000059CC);

void func_000059EC(s32 *arg0) {
    *arg0 = 0;
}

void func_000059F4(s32 *arg0) {
    *arg0 = 0;
}

void func_000059FC(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
}

void func_00005A2C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00005A5C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005BCC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005ED0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005FE0);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000060C4);

s32 func_000060F4(s32 arg0, void *arg1) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (M2C_FIELD(arg1, s32 *, 4) * 2) + 2;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != NULL) {
        sceCccUTF8toUTF16(temp_v0, temp_s0, M2C_FIELD(arg1, void **, 0));
        func_00002520(arg0, (s32) temp_v0);
        scePaf_545FE2DA((s32) temp_v0);
    }
    return arg0;
}

void func_00006174(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (scePaf_FD4C9F47(arg1) * 2) + 0x20;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != NULL) {
        scePaf_49A81B18(temp_v0, temp_s0, arg1, arg2);
        func_00002570(arg0, (s32) temp_v0, scePaf_FD4C9F47(temp_v0));
        scePaf_545FE2DA((s32) temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00006214);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006328);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006414);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006500);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006598);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006630);

INCLUDE_ASM("nonmatchings/dd_helper", func_000066D0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006748);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006764);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B200);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B20C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B214);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006808);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006950);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006970);

INCLUDE_ASM("nonmatchings/dd_helper", func_000069D4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2D4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B304);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B314);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B324);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B330);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B348);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B364);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B380);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006AB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006C24);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006CDC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006D9C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006E10);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006FA0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007258);

INCLUDE_ASM("nonmatchings/dd_helper", func_000073EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007414);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007458);

INCLUDE_ASM("nonmatchings/dd_helper", func_000074B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007568);

INCLUDE_ASM("nonmatchings/dd_helper", func_000075A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_000075CC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000075F4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007630);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000766C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B400);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B418);

INCLUDE_ASM("nonmatchings/dd_helper", func_000076B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000780C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B430);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B438);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007834);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000785C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007884);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B448);

INCLUDE_ASM("nonmatchings/dd_helper", func_000078AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000078D4);

void func_00007B64(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x14) = 1;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00007B70);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000060C0);

s32 func_000060F0(s32 arg0, struct Unk_func_000060F0_1 *arg1) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (arg1->unk4 * 2) + 2;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != NULL) {
        sceCccUTF8toUTF16(temp_v0, temp_s0, arg1->unk0);
        func_00002520(arg0, (s32) temp_v0);
        scePaf_545FE2DA((s32) temp_v0);
    }
    return arg0;
}

void func_00006170(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (scePaf_FD4C9F47(arg1) * 2) + 0x20;
    temp_v0 = scePaf_5FAC9869(temp_s0);
    if (temp_v0 != NULL) {
        scePaf_49A81B18(temp_v0, temp_s0, arg1, arg2);
        func_00002570(arg0, (s32) temp_v0, scePaf_FD4C9F47(temp_v0));
        scePaf_545FE2DA((s32) temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00006210);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006324);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006410);

INCLUDE_ASM("nonmatchings/dd_helper", func_000064FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006594);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000662C);

void func_000066CC(struct Unk_func_000006E0_0 *arg0) {
    void *sp0;
    if ((sceNetApctlGetState(&sp0) != 0) || (sp0 != 0)) {
        func_000006E0(arg0);
        scePaf_A0ED77C4(0, func_0000694C, arg0, -1, -1, &func_0000696C);
    } else {
        sceHtmlViewerHelper_C92C71B7(arg0->unk8);
    }
}

void func_00006744(s32 arg0) {
    func_00007B60(arg0 + 0xC);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00006760);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1D8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B204);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006804);

void func_0000694C(struct Unk_func_0000694C_0 *arg0) {
    func_00007668((u8 *)arg0 + 0xC, arg0->unk24);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0000696C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000069D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2C0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2C4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B304);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B314);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B320);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B338);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B354);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B370);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006AAC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006C20);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006CD8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006D98);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006E0C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006F9C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007254);

INCLUDE_ASM("nonmatchings/dd_helper", func_000073E8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007410);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007454);

INCLUDE_ASM("nonmatchings/dd_helper", func_000074B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007564);

INCLUDE_ASM("nonmatchings/dd_helper", func_000075A0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000075C8);

INCLUDE_ASM("nonmatchings/dd_helper", func_000075F0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000762C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007668);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B3F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B408);

INCLUDE_ASM("nonmatchings/dd_helper", func_000076B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007808);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B420);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B428);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007830);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007858);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007880);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B438);

INCLUDE_ASM("nonmatchings/dd_helper", func_000078A8);

INCLUDE_ASM("nonmatchings/dd_helper", func_000078D0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007B60);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007B6C);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00007C00);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007C70);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007CE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007D64);

void func_00007DE8(struct Unk_func_00007DE8_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unkC;
    arg0->unk0 = &D_0000B538;
    if (temp_v1 > 0) {
        sceHttpDeleteRequest(temp_v1);
    }
    temp_v0 = arg0->unk8;
    if (temp_v0 > 0) {
        sceHttpDeleteConnection(temp_v0);
    }
    sceHttpDeleteTemplate(arg0->unk4);
    sceKernelDeleteSema(arg0->unk18);
}

void func_00007E4C(struct Unk_func_00007E4C_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unkC;
    arg0->unk0 = &D_0000B538;
    if (temp_v1 > 0) {
        sceHttpDeleteRequest(temp_v1);
    }
    temp_v0 = arg0->unk8;
    if (temp_v0 > 0) {
        sceHttpDeleteConnection(temp_v0);
    }
    sceHttpDeleteTemplate(arg0->unk4);
    sceKernelDeleteSema(arg0->unk18);
}

void func_00007EB0(struct Unk_func_00007EB0_0 *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = arg0->unkC;
    arg0->unk0 = &D_0000B538;
    if (temp_v1 > 0) {
        sceHttpDeleteRequest(temp_v1);
    }
    temp_v0 = arg0->unk8;
    if (temp_v0 > 0) {
        sceHttpDeleteConnection(temp_v0);
    }
    sceHttpDeleteTemplate(arg0->unk4);
    sceKernelDeleteSema(arg0->unk18);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00007F1C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007FE4);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B45C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B464);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B46C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B474);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B47C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4A4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4D0_v280);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B44C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B454);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B45C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B464);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B46C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B494);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4C0);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008070);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000081B0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000081AC);
#endif

void func_00008408(struct Unk_func_00008408_0 *arg0) {
    sceHttpGetStatusCode(arg0->unkC);
}

void func_00008424(struct Unk_func_00008424_0 *arg0) {
    sceHttpGetNetworkPspError(arg0->unkC);
}

void func_00008440(struct Unk_func_00008440_0 *arg0) {
    sceHttpsGetSslError(arg0->unkC);
}

void func_0000845C(struct Unk_func_0000845C_0 *arg0) {
    sceHttpReadData(arg0->unkC);
}

void func_00008478(struct Unk_func_00008478_0 *arg0) {
    sceHttpGetContentLength(arg0->unkC);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00008494);

INCLUDE_ASM("nonmatchings/dd_helper", func_000084EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008514);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008530);

void func_0000854C(s32 arg0) {
    func_00008734();
    func_00008AEC(arg0);
}

void func_00008578(s32 arg0) {
    func_00008734();
    func_00008AEC(arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000085A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008734);

INCLUDE_ASM("nonmatchings/dd_helper", func_000087C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008A58);

void func_00008AD0(void) {
    func_00008D50();
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00008AEC);

void func_00008B08(void) {
    func_00008DD4();
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00008B24);

void func_00008BEC(void) {
    func_00008E00();
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00008C08);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008C70);

s32 *func_00008D18(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00009248(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00008D50);

void func_00008DA8(s32 *arg0) {
    func_00008B24();
    scePaf_7EC15225(*arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00008DD4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008E00);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008E58);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009048);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009248);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009320);

INCLUDE_ASM("nonmatchings/dd_helper", func_000093FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009534);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000966C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000096C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009714);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009768);

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/dd_helper", func_00009830);

INCLUDE_ASM("nonmatchings/dd_helper", func_000098A0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009914);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009988);

INCLUDE_ASM("nonmatchings/dd_helper", func_000099C8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009A08);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009A4C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper", func_0000982C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000989C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009910);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009984);

INCLUDE_ASM("nonmatchings/dd_helper", func_000099C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009A04);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009A48);
#endif

s32 func_00009BB8(s32 arg0, void *arg1, s32 arg2) {
    return scePaf_F95EA3F1(arg0, arg1, arg2) + arg2;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00009BE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009D6C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009E54);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009F14);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B538);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B540);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B554);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B560);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B570);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B544);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B550);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B560);
#endif
