#include "common.h"
#include "dd_helper_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00000000);
#endif

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

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002961C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029620);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029628);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029640);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002964C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029664);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029678);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029690);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000296A8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000296B4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000296C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000296D8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000296E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029708);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029750);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029794);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000297B4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002982C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029838);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000299DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000299E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029A38);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029A70);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029A8C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029A94);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029AAC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029AE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029E90);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012C5C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A118);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA00);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA04);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00012CE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012CF8);
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

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000001C4);
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

#if FW_VERSION < 330
void func_00000230(void) {
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 330
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

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_0000038C(void) {
    func_0000052C(0);
    return 0;
}
#endif

#if FW_VERSION < 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000002C4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000003AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000003D4);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA08);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA18);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000041C);
#endif

#if FW_VERSION < 280 || (FW_VERSION >= 282 && FW_VERSION < 330)
INCLUDE_ASM("nonmatchings/dd_helper", func_000004C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000052C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00000614);
#endif

#if FW_VERSION == 282
void func_000005BC(void) {
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000005C4(void) {
    func_0000052C(2);
}

u8 func_000005E0(void) {
    return D_0000B618;
}
#endif

#if FW_VERSION < 330
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
#endif

#if FW_VERSION < 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_000082A0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000082B0);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA40);
#endif

#if FW_VERSION == 280 || (FW_VERSION >= 300 && FW_VERSION < 330)
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

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_000006E0(struct Unk_func_000006E0_0 *arg0) {
    sceHtmlViewerHelper_05E0C3D4(1);
    scePaf_CAF05F1D(arg0->unk4, &D_0000AA40);
}
#endif

#if FW_VERSION < 330
void func_00000718(struct Unk_func_00000718_0 *arg0) {
    sceHtmlViewerHelper_F27998C2(arg0->unk8);
}
#endif

#if FW_VERSION >= 280 && FW_VERSION < 330
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

#if FW_VERSION < 330
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
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000010C0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
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

#if FW_VERSION >= 310 && FW_VERSION < 330
void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((s32) &arg0->pad0[0x10]);
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0x104), 1);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((s32) &arg0->pad0[0x10]);
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0x11C), 1);
}
#endif

#if FW_VERSION < 271 || FW_VERSION == 282
void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((u8 *)arg0 + 0xC);
    sceKernelSetEventFlag(arg0->unkC0, 1);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA64);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA78);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AA90);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAB8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00012DC0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012DE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012E10);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012E40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012E6C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012E94);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00012EC0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_00029D74);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029D84);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029D98);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029DAC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029DC4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029DE0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029DF8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029E14);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029E2C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029E54);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029E7C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029E9C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029EC4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029EE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029F0C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029F34);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029F5C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029F84);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029F9C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029FB8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029FD4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00029FF8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A01C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A044);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A068);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A090);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A0AC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A0CC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A0E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A0F8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A10C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A120);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A140);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A164);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A180);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A1A0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A1BC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A1DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A1F8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A214);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A234);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A248);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A260);

INCLUDE_ASM("nonmatchings/dd_helper", func_000001C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000027C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000284);

INCLUDE_ASM("nonmatchings/dd_helper", func_000002C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000580);

INCLUDE_ASM("nonmatchings/dd_helper", func_000005A0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000005C8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000618);

void func_000006BC(void) {
    func_00000768(0);
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A2AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000006D8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000768);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00000800);
#endif

#if FW_VERSION >= 350
void func_00000800(void) {
    scePaf_39E62C88(D_0002E06C, &D_0002A2AC, 0, 0);
    scePaf_A013540A(D_0002E06C, &D_0002A2AC);
}
#endif

#if FW_VERSION >= 330
void func_00000850(void) {
    func_00000768(2);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0000086C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000005EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000089C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000008E8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000944);

void func_0000096C(void) {

}
#endif

#if FW_VERSION >= 350
void func_00000974(s32 arg0) {
    sceHtmlViewerHelper_D2FC6A5A();
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00000974(s32 arg0) {
    sceHtmlViewerHelper_F27998C2(arg0);
}
#endif

#if FW_VERSION >= 350
void func_00000990(s32 arg0) {
    sceHtmlViewerHelper_2030683A();
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00000990(s32 arg0) {
    sceHtmlViewerHelper_C92C71B7(arg0);
}
#endif

#if FW_VERSION >= 350
void func_000009AC(void) {
    sceHtmlViewerHelper_4FA8ECCA();
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000009AC(void) {
    sceHtmlViewerHelper_B1B946C4();
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000009C8);

void func_00000A50(void) {
    func_000009C8(1, 0xFFFF);
}

void func_00000A70(void) {
    func_000009C8(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000007FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000082C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000085C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000B8C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000BBC);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00000BF0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_00000BF0(s32 arg0, void *arg1) {
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
#endif

#if FW_VERSION >= 350
void func_00000C70(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (scePaf_5E4447F6(arg1) * 2) + 0x20;
    temp_v0 = scePaf_3AC3E06A(temp_s0);
    if (temp_v0 != NULL) {
        scePaf_780C7FF4(temp_v0, temp_s0, arg1, arg2);
        func_00002570(arg0, (s32) temp_v0, scePaf_5E4447F6(temp_v0));
        scePaf_4729E549(temp_v0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00000C70(s32 arg0, void *arg1, s32 arg2) {
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
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00000D10);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000E24);

INCLUDE_ASM("nonmatchings/dd_helper", func_000010DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000123C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00000F88);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001020);

INCLUDE_ASM("nonmatchings/dd_helper", func_000010C0);

void func_00001138(struct Unk_func_00001138_0 *arg0) {
    func_00003830((s32) &arg0->pad0[0x80]);
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0x154), 1);
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A2D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A2E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A2FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A318);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A330);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A350);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAD0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AADC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAF4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AAFC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB04);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB0C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB14);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00012F40);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_0000116C);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB40);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00001374);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001574);
#else
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB70);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AB8C);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ABA8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ABBC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000136C);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000014E0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_000014E0(struct Unk_func_000014E0_0 *arg0) {
    func_00002B2C(&arg0->pad0[0x10], M2C_FIELD(arg0, s32 *, 0x94));
}
#endif

#if FW_VERSION < 300
void func_000014E0(struct Unk_func_000014E0_0 *arg0) {
    func_00002B2C((u8 *)arg0 + 0xC, arg0->unk6C);
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00001500);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00001ADC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001BD0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000130D4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000130EC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013108);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013128);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001313C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001314C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013164);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001317C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013190);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000131AC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000131C0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000131D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000131E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013200);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002ABEC);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A854);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002A68C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_000132B0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013218);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013274);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013278);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001D90);

INCLUDE_ASM("nonmatchings/dd_helper", func_000022BC);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/dd_helper", func_000023D4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000249C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002674);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013330);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/dd_helper", func_000024B8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002528);

INCLUDE_ASM("nonmatchings/dd_helper", func_000025BC);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_0000269C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000027C4);
#endif

#if FW_VERSION >= 330
void func_00002A84(s32 arg0) {
    sceKernelDelayThread(0xF4240U);
    func_00006920(arg0 + 0x80, arg0 + 0x64, arg0 + 0x104);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
void func_00002A84(s32 arg0) {
    sceKernelDelayThread(0xF4240U);
    func_00006920(arg0 + 0x10, arg0 + 0xA0, arg0 + 0xAC);
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000015C0);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
void func_0000178C(s32 arg0) {
    func_00006920(arg0 + 0x10, arg0 + 0xA0, arg0 + 0xAC);
}
#endif

#if FW_VERSION < 300
void func_0000178C(s32 arg0) {
    func_000031E8(arg0 + 0xC, arg0 + 0x78);
}
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_000029F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000132CC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000132DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000132E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000132F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013300);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013318);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013334);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013358);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001336C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013384);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013398);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000017AC);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ACE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000ACEC);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_000133C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000133EC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000133F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000133FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013408);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013410);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013414);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013418);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD08);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD1C);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013454);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013470);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013490);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000134BC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000134E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000134F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013514);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000868C);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD34);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD4C);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD68);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AD84);
#endif

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

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013750);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013768);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013788);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013798);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000137B8);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_000018C4);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00002DB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002DF8);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00001A38);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001AF0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001BB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00001C24);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00003460);
#endif

#if FW_VERSION >= 350
void func_00003678(void *arg0) {
    scePaf_39E62C88(M2C_FIELD(arg0, s32 *, 4), &D_0000ACEC, 0, 0);
    scePaf_A013540A(M2C_FIELD(arg0, s32 *, 4), &D_0000ACEC);
    func_000024A8((s32) arg0, 3);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00003678(void *arg0) {
    scePaf_F609FA81(M2C_FIELD(arg0, s32 *, 4), &D_0000ACEC, 0, 0);
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4), &D_0000ACEC);
    func_000024A8((s32) arg0, 3);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000036D4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003818);

s32 func_00003998(s8 arg0) {
    return (arg0 == 0x20) | (arg0 == 9);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/dd_helper", func_00003A6C);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/dd_helper", func_000039B4_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/dd_helper", func_000039B4_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/dd_helper", func_000039B4_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000039B4_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00003AA8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003EB4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003FA8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004028);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004090);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004124);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000422C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004268);

INCLUDE_ASM("nonmatchings/dd_helper", func_000045DC);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/dd_helper", func_00004748);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00004C00);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/dd_helper", func_0000463C);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00001E00);
#endif

#if FW_VERSION < 271 || (FW_VERSION >= 280 && FW_VERSION < 300)
INCLUDE_ASM("nonmatchings/dd_helper", func_00002184);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/dd_helper", func_00001D50);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00002268);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002290);

INCLUDE_ASM("nonmatchings/dd_helper", func_000022D4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00002420);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000244C);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000024A8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00004AB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004B5C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00004C34);
#endif

#if FW_VERSION >= 350
void func_00004D58(void *arg0, s32 arg1, s32 arg2) {
    func_00002520(arg1, scePaf_2CD3AB9E(M2C_FIELD(arg0, s32 *, 4), &D_0000AD1C));
    func_00002520(arg2, scePaf_2CD3AB9E(M2C_FIELD(arg0, s32 *, 4), &D_00013454));
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00004D58(void *arg0, s32 arg1, s32 arg2) {
    func_00002520(arg1, scePaf_4842A808(M2C_FIELD(arg0, s32 *, 4), &D_0000AD1C));
    func_00002520(arg2, scePaf_4842A808(M2C_FIELD(arg0, s32 *, 4), &D_00013454));
}
#endif

#if FW_VERSION >= 300
void func_00004DC8(s32 arg0, void *arg1) {
    if ((u32) (M2C_FIELD(arg1, u8 *, 8) - 5) >= 2U) {

    } else {
        func_000054F0(arg0, (s32) arg1);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00004E00);

INCLUDE_ASM("nonmatchings/dd_helper", func_000054C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_000054F0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005544);

INCLUDE_ASM("nonmatchings/dd_helper", func_000055B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005668);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005870);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005914);

INCLUDE_ASM("nonmatchings/dd_helper", func_000059E0);
#endif

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

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000026F0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00002800);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005CC0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000026F0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00005D1C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003920);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002740);

#if FW_VERSION >= 300
void func_00005F30(M2C_UNK **arg0) {
    *arg0 = &D_00013880;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00005F40);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00005F40(M2C_UNK **arg0) {
    *arg0 = &D_00013880;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00002800);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002908);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00005FD0);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002964);

INCLUDE_ASM("nonmatchings/dd_helper", func_000029D4);

#if FW_VERSION != 271
INCLUDE_ASM("nonmatchings/dd_helper", func_00002ABC);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_000027CC);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00002B2C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000AFD0);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013880);
#endif

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

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000068D4);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_000031E8);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B028);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_000138D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_000138D4);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B030);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B034);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_000138E0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006920);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006BE0);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B038);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003338);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00006EFC);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00003638);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003830);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003854);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00007378);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007530);

INCLUDE_ASM("nonmatchings/dd_helper", func_000076E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001391C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007890);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000797C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000079A4);
#endif

s32 *func_000038E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00003AB4(arg1, arg2);
    return arg0;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00003920);
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_000039B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003A34);

INCLUDE_ASM("nonmatchings/dd_helper", func_00003AB4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00007BDC);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
s32 func_00007BDC(s32 arg0, void *arg1) {
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
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013930);
#else
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
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B054);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B05C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B064);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B06C);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013954);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001395C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013964);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0001396C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013974);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/dd_helper", D_000089DC);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B074);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B09C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B0D8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00007C5C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007E3C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007FE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008124);

INCLUDE_ASM("nonmatchings/dd_helper", func_00008288);

INCLUDE_ASM("nonmatchings/dd_helper", func_000083CC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000085AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000085D8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00008604);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_00008604(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 == 0) {

    } else {
        scePaf_545FE2DA(temp_a0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

    } else {
        scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {

    } else {
        scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x18));
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {

    } else {
        scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    func_00004EC8(arg0, M2C_FIELD(arg0, s32 *, 4));
    func_00004EC8(arg0, M2C_FIELD(arg0, s32 *, 8));
    func_00004F30(arg0, M2C_FIELD(arg0, s32 *, 0xC));
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (temp_a0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        scePaf_545FE2DA(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_000086D8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 350
void func_000086D8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 == 0) {

    } else {
        scePaf_545FE2DA(temp_a0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

    } else {
        scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {

    } else {
        scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x18));
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {

    } else {
        scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    func_00004EC8(arg0, M2C_FIELD(arg0, s32 *, 4));
    func_00004EC8(arg0, M2C_FIELD(arg0, s32 *, 8));
    func_00004F30(arg0, M2C_FIELD(arg0, s32 *, 0xC));
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (temp_a0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        scePaf_545FE2DA(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
#endif

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

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00005908);
#else
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
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_000059CC);

void func_000059EC(s32 *arg0) {
    *arg0 = 0;
}

void func_000059F4(s32 *arg0) {
    *arg0 = 0;
}

#if FW_VERSION >= 350
void func_000059FC(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_4729E549((void *) temp_v0);
    }
}
#else
void func_000059FC(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
}
#endif

#if FW_VERSION >= 350
void func_00005A2C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_4729E549((void *) temp_v0);
    }
}
#else
void func_00005A2C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00005A5C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005BCC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005ED0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00005FE0);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_0000AAE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000AB14);

void func_0000AB48(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00013B48;
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {

    } else {
        func_0000ACB8((s32) arg0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0000AB80);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000AC04);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000ACB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000AD70);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000AEDC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B04C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B11C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B2A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B374);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B4A8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B55C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B624);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B6B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B700);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B720);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B744);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B764);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B820);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000B8B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BAC4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BBF0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BD04);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BD4C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BDA4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BDC0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BDE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BE00);

void func_0000BE20(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BE28);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BE70);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BEDC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BF0C);

s32 func_0000BF38(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BF40);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BF70);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BF8C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BFAC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BFC8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000BFF0);
#endif

#if FW_VERSION >= 330
void func_0000C018(void) {
    sceVshBridge_39B499E0();
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_0000C018(void) {
    sceVshBridge_FC427071();
}
#endif

#if FW_VERSION >= 330
s32 func_0000C034(void) {
    sceVshBridge_7BB63511(0x20);
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
s32 func_0000C034(void) {
    sceVshBridge_E015B063(0x20);
    return 0;
}
#endif

#if FW_VERSION >= 330
void func_0000C054(void) {
    sceVshBridge_5317A582();
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_0000C054(void) {
    sceVshBridge_4E45C872();
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_0000C070);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000C094);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000C0B8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000C0DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000C100);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000C120);
#endif

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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000060C0);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_000060F0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 350
void func_00006170(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (scePaf_5E4447F6(arg1) * 2) + 0x20;
    temp_v0 = scePaf_3AC3E06A(temp_s0);
    if (temp_v0 != NULL) {
        scePaf_780C7FF4(temp_v0, temp_s0, arg1, arg2);
        func_00002570(arg0, (s32) temp_v0, scePaf_5E4447F6(temp_v0));
        scePaf_4729E549(temp_v0);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
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
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_00006210);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000C950);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000CA1C);

void func_0000CAE8(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0000B3F0;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xC8));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 0xC4));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000075C8((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
}

void func_00006594(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0000B3F0;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xC8));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 0xC4));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000075C8((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
void func_0000662C(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0000B3F0;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xC8));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 0xC4));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000075C8((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
    scePaf_6261C0A5(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0000662C(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0000B3F0;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xC8));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 0xC4));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000075C8((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000066CC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
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
#endif

#if FW_VERSION >= 330
void func_00006744(s32 arg0) {
    func_00007B60(arg0 + 0x7C);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00006744(s32 arg0) {
    func_00007B60(arg0 + 0xC);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_00006760);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B48);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B50);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B54);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B5C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B60);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B64);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B68);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B6C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B70);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B74);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B78);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B7C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B80);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B84);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B88);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013B98);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1D8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B1FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B204);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006804);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000694C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_0000694C(struct Unk_func_0000694C_0 *arg0) {
    func_00007668(&arg0->pad0[0xC], M2C_FIELD(arg0, s32 *, 0x40));
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000CF6C);
#endif

#if FW_VERSION == 282
void func_0000694C(struct Unk_func_0000694C_0 *arg0) {
    func_00007668((u8 *)arg0 + 0xC, arg0->unk24);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000696C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000069D0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B354);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013C98);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B690);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B2F8);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B130);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013CB0);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2C0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2C4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B2F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B304);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B314);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013D2C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013D34);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013D40);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B320);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B338);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B354);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B370);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006AAC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006C20);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006CD8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006D98);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006E0C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00006F9C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007254);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_0000D6F0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000DA04);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000DF30);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000073E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_00007410);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007454);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000074B0);
#endif

#if FW_VERSION >= 282
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

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_0000E400);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000E798);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0000E7C8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_0000E7C8(s32 arg0, void *arg1) {
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
#endif

#if FW_VERSION >= 350
void func_0000E848(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (scePaf_5E4447F6(arg1) * 2) + 0x20;
    temp_v0 = scePaf_3AC3E06A(temp_s0);
    if (temp_v0 != NULL) {
        scePaf_780C7FF4(temp_v0, temp_s0, arg1, arg2);
        func_00002570(arg0, (s32) temp_v0, scePaf_5E4447F6(temp_v0));
        scePaf_4729E549(temp_v0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0000E848(s32 arg0, void *arg1, s32 arg2) {
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
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000E8E8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000E9FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000EB40);

void func_0000EC84(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B698;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xFC));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000007FC((s32) (arg0 + 0xD4));
    func_000007FC((s32) (arg0 + 0xC8));
    func_000007FC((s32) (arg0 + 0xBC));
    func_000007FC((s32) (arg0 + 0xB0));
    func_00011D6C((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
}

void func_0000ED10(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B698;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xFC));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000007FC((s32) (arg0 + 0xD4));
    func_000007FC((s32) (arg0 + 0xC8));
    func_000007FC((s32) (arg0 + 0xBC));
    func_000007FC((s32) (arg0 + 0xB0));
    func_00011D6C((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
void func_0000ED9C(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B698;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xFC));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000007FC((s32) (arg0 + 0xD4));
    func_000007FC((s32) (arg0 + 0xC8));
    func_000007FC((s32) (arg0 + 0xBC));
    func_000007FC((s32) (arg0 + 0xB0));
    func_00011D6C((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
    scePaf_6261C0A5(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0000ED9C(void *arg0) {
    void *temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B698;
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 0xFC));
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        sceIoRemove(temp_v1);
    }
    func_000024A8((s32) arg0, 0);
    func_000007FC((s32) (arg0 + 0xD4));
    func_000007FC((s32) (arg0 + 0xC8));
    func_000007FC((s32) (arg0 + 0xBC));
    func_000007FC((s32) (arg0 + 0xB0));
    func_00011D6C((s32) (arg0 + 0x7C));
    func_0001FF9C((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000EE30);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000EF10);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000EF40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B2E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B2EC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B2F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B2FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B304);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B32C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4C0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B360);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B36C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B378);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B384);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B38C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000EFE4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B430);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B44C);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B9C4);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B62C);
#endif

#if FW_VERSION == 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B464);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0000F15C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F2AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F2CC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F378);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4B0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4B4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4B8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4BC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4D8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4EC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B4F8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B504);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B50C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B510);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B51C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B52C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B530);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B534);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B53C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B540);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B544);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B550);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B55C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B568);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B574);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B580);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B58C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B598);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B5D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B5E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B604);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F5B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F728);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F7E0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F8A0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000F914);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000FAA4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000FD60);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000FEC0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001017C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000102B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000105A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_000108B8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010A34);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010B24);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010B68);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010BB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010BE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010C8C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000111F8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011588);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011708);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011890);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011954);

INCLUDE_ASM("nonmatchings/dd_helper", func_000119B8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011B0C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000108F4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011CD8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011D2C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011D6C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011DAC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011DF0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011E2C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B698);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B6B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011E74);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011FCC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B6C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B6D0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011FF4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001201C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012044);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001206C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B6E8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012094);

INCLUDE_ASM("nonmatchings/dd_helper", func_000120BC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000120E4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012374);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012380);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012414);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012460);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001247C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012498);

INCLUDE_ASM("nonmatchings/dd_helper", func_000124B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012538);

void func_000125BC(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B790;
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    func_000024A8((s32) arg0, 0);
    func_0001FF9C((s32) arg0);
}

void func_00012604(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B790;
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    func_000024A8((s32) arg0, 0);
    func_0001FF9C((s32) arg0);
}
#endif

#if FW_VERSION >= 350
void func_0001264C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B790;
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    func_000024A8((s32) arg0, 0);
    func_0001FF9C((s32) arg0);
    scePaf_6261C0A5(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001264C(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002B790;
    sceNetApctlDelHandler(M2C_FIELD(arg0, s32 *, 8));
    func_000024A8((s32) arg0, 0);
    func_0001FF9C((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001269C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012718);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012784);
#endif

#if FW_VERSION >= 350
void func_000127B8(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_00002520(arg1, scePaf_2CD3AB9E(M2C_FIELD(arg0, s32 *, 4), arg3));
    if (arg2 == 0) {

    } else {
        sceVshCommonUtil_6F2E2BDC(arg1, arg2);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000127B8(void *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_00002520(arg1, scePaf_4842A808(M2C_FIELD(arg0, s32 *, 4), arg3));
    if (arg2 == 0) {

    } else {
        sceVshCommonUtil_7EEFA381(arg1, arg2);
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B704);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B70C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B71C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B748);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012818);

INCLUDE_ASM("nonmatchings/dd_helper", func_000128F4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012964);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012984);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B790);

INCLUDE_ASM("nonmatchings/dd_helper", func_000129A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012BA4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012C84);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012CE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012D08);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012D30);

void func_00012DAC(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_00012DB4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B80C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B818);

INCLUDE_ASM("nonmatchings/dd_helper", func_00012EC0);

void func_00012F98(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_00012FA0);

void func_00012FEC(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_00012FF4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013088);

s32 func_000130E8(void) {
    return D_0002D97C;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000130F4);

INCLUDE_ASM("nonmatchings/dd_helper", func_000131BC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013284);

INCLUDE_ASM("nonmatchings/dd_helper", func_000132E4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013344);

void func_000133AC(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_000164FC(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}
#endif

#if FW_VERSION >= 350
void func_00013400(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    func_0001E2E4((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    temp_v0 = func_0001CE54(M2C_FIELD(arg0, s32 *, 4), scePaf_43B151A2(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC)), M2C_FIELD(arg0, s32 *, 0x28), (s32) (arg0 + 0x3C), (s32) (arg0 + 0x24));
    if (temp_v0 == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_0001E288((s32) arg0);
        func_000133AC((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00013400(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    func_0001E2E4((s32) arg0);
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    temp_v0 = func_0001CE54(M2C_FIELD(arg0, s32 *, 4), scePaf_B09203B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC)), M2C_FIELD(arg0, s32 *, 0x28), (s32) (arg0 + 0x3C), (s32) (arg0 + 0x24));
    if (temp_v0 == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_0001E288((s32) arg0);
        func_000133AC((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00013478);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001352C);

void func_0001359C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x80001000;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 350
void func_000135B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    scePaf_F86BD417(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000135B8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    scePaf_1811AD32(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
}
#endif

#if FW_VERSION >= 350
void func_000135E4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x54)(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    scePaf_581F3612(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    func_0001B46C(0, 0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000135E4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x54)(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    scePaf_D05C226F(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    func_0001B46C(0, 0);
}
#endif

#if FW_VERSION >= 330
void func_0001362C(s32 arg0) {
    func_000132E4(arg0 - 0x24);
}

void func_00013648(s32 arg0) {
    func_00013344(arg0 - 0x24);
}

void func_00013664(s32 arg0, s32 arg1) {
    func_0001352C(arg0 - 0x24, arg1);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00013680);

void func_00013750(void) {

}

void func_00013758(void) {

}

void func_00013760(M2C_UNK **arg0) {
    *arg0 = &D_0002B880;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00013770);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00013770(M2C_UNK **arg0) {
    *arg0 = &D_0002B880;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B830);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B880);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013798);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001383C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001392C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013A44);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B8B0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B8B4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B8B8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B8BC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B8C0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B8C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013B0C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013C6C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013CB4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013D34);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013DE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013DFC);

s32 func_00013E5C(void) {
    return D_0002D980;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00013E68);

s32 func_00013EA0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00013EA8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013EF8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00013FB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001402C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000140A8);

INCLUDE_ASM("nonmatchings/dd_helper", func_000140DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014110);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014154);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014208);
#endif

#if FW_VERSION >= 350
void func_00014240(s32 arg0) {
    func_0001E554(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x40) == 1) {
        sceVshCommonGui_6F4C9FDB();
    }
    func_000143EC(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00014240(s32 arg0) {
    func_0001E554(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x40) == 1) {
        sceVshCommonGui_80271F41();
    }
    func_000143EC(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001428C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014320);
#endif

#if FW_VERSION >= 350
void func_00014374(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 1) {

    } else {
        sceVshCommonGui_E4ED451E();
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        if (scePaf_723D0C80(M2C_FIELD(arg0, s32 *, 0x4C)) == 0) {
            scePaf_8429BA7C(0, M2C_FIELD(arg0, s32 *, 0x4C));
        }
    }
    func_0001E6D4((s32) arg0);
    func_0001E338((s32) arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00014374(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 1) {

    } else {
        sceVshCommonGui_1CF884A1();
    }
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        if (scePaf_75062BCF(M2C_FIELD(arg0, s32 *, 0x4C)) == 0) {
            scePaf_79493F8F(0, M2C_FIELD(arg0, s32 *, 0x4C));
        }
    }
    func_0001E6D4((s32) arg0);
    func_0001E338((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000143EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014438);
#endif

#if FW_VERSION >= 350
void func_00014478(void *arg0, s32 arg1) {
    if (func_0001E448() == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
        M2C_FIELD(arg0, s32 *, 0x4C) = scePaf_3EDD45EF(0, func_00013EA0, arg0, -1, -1, &func_00013EA8);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00014478(void *arg0, s32 arg1) {
    if (func_0001E448() == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
        M2C_FIELD(arg0, s32 *, 0x4C) = scePaf_A0ED77C4(0, (void (*)(void *)) func_00013EA0, arg0, -1, -1, &func_00013EA8);
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000144DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000145BC);

void func_000145F4(void) {
    void *temp_v0;

    temp_v0 = func_00013E5C();
    if ((M2C_FIELD(temp_v0, s32 *, 0x30) | M2C_FIELD(temp_v0, s32 *, 0x34)) == 0) {

    } else {
        func_00014634((s32) temp_v0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00014634);

void func_000149B0(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_00016440(M2C_FIELD(arg0, s32 *, 4), 1, (s32) &func_00013E68, 0, 0);
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_00014A04(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_000164FC(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00014A58);

void func_00014AA0(s32 arg0) {
    func_000140DC(arg0 - 0x24);
}

void func_00014ABC(s32 arg0) {
    func_00014110(arg0 - 0x24);
}

void func_00014AD8(s32 arg0, s32 arg1, s32 arg2) {
    func_00014438(arg0 - 0x24, arg1, arg2);
}

void func_00014AF4(s32 arg0, s32 arg1) {
    func_00014478(arg0 - 0x24, arg1);
}

void func_00014B10(M2C_UNK **arg0) {
    *arg0 = &D_0002B9F8;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00014B20);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00014B20(M2C_UNK **arg0) {
    *arg0 = &D_0002B9F8;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00014B48);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014BB4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014CA4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014D94);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014E6C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00014F44);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015024);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015040);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001505C);

s32 func_000150B0(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x30;
    func_0000085C(temp_s0, arg1);
    func_0001B990(temp_s0);
    return 0;
}

s32 func_000150E4(s32 arg0) {
    return arg0 + 0x30;
}

u8 func_000150EC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3E);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000150F4);

s32 func_00015148(s32 arg0, s32 arg1) {
    func_0000085C(arg0 + 0x24, arg1);
    return 0;
}

s32 func_00015168(s32 arg0) {
    return arg0 + 0x24;
}

u8 func_00015170(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3D);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00015178);

INCLUDE_ASM("nonmatchings/dd_helper", func_000151CC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015294);

s32 func_000153B8(s32 arg0) {
    return arg0 + 0x18;
}

u8 func_000153C0(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x3C);
}

s32 func_000153C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

void func_000153D0(s32 arg0, s32 arg1) {
    func_00003920(arg0 + 8, arg1);
}

s32 func_000153EC(s32 arg0) {
    return arg0 + 8;
}

s32 func_000153F4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000153FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B98C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B998);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B9A8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002B9F8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA08);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015440);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015670);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015914);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015970);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015A88);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015AD8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015B58);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015BD0);

void func_00015CCC(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x50);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x54);
}

void func_00015CE0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
}

void func_00015CEC(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_00015CF4);

void func_00015D68(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00015D78);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015DB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015E0C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015E80);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015EDC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00015FCC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000160C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001618C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001624C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001630C);
#endif

#if FW_VERSION >= 350
void func_0001630C(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00016610();
    func_0001E458(temp_v0, arg0);
    if (M2C_FIELD(temp_v0, u8 *, 0x40) != 1) {

    } else {
        scePaf_08350B98(arg0, 0x80005, &func_000163A8, 0);
    }
}
#endif

#if FW_VERSION >= 330
void func_0001637C(void) {
    func_00016890(func_00016610());
}

void func_000163A0(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_000163A8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016440);

INCLUDE_ASM("nonmatchings/dd_helper", func_000164FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000165B0);

s32 func_00016610(void) {
    return D_0002D984;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001661C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016650);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016694);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016724);

INCLUDE_ASM("nonmatchings/dd_helper", func_000167B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_000167F0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001682C);
#endif

#if FW_VERSION >= 350
void func_00016870(void *arg0) {
    scePaf_C5DBD12F(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00016870(void *arg0) {
    scePaf_5EBC648F(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, s32 *, 0xC));
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00016890);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016910);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016A10);

void func_00016A48(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x40) = arg1;
}

void func_00016A50(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_00016610();
    func_0001E120(temp_v0);
    func_000165B0();
    temp_v0_2 = func_000164FC(M2C_FIELD(temp_v0, s32 *, 4), 4, 0x80000401, 0);
    func_0001E0C0(temp_v0_2);
    func_0001E198(temp_v0_2);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00016AB0);

s32 func_00016B00(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00016B08);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016CB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00016E68);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA18);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA20);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA30);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA50);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA60);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BA84);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BAA8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BABC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BAD8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BAF0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BB08);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BB24);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BB40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BB5C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BB74);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BB98);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BBB8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BBD0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BBDC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BBF0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BC18);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BC24);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001705C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017100);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001716C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000171B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001741C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000174D0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017568);

s32 func_000175D8(s32 arg0) {
    return arg0 + 0x18;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000175E0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000175EC);

void func_000175F8(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x34);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x38);
}

void func_0001760C(void *arg0, s32 arg1) {
    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x44), 1, NULL);
    M2C_FIELD(arg0, s32 *, 0x40) = arg1;
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x44), 1);
}

s32 func_00017658(void *arg0) {
    s32 temp_s1;

    sceKernelWaitSema(M2C_FIELD(arg0, s32 *, 0x44), 1, NULL);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x40);
    sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x44), 1);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000176A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_000176DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017714);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017750);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001778C);

s32 func_000177CC(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a1;

    func_0000085C(arg0 + 4, arg1);
    var_a1 = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    if (arg2 != 0) {
        if (arg2 == 1) {
            var_a1 = 0x602;
        }
    } else {
        var_a1 = 1;
    }
    temp_v0 = func_0001BDF8(M2C_FIELD(arg0, s32 *, 4), var_a1, 0x21B6);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
    if (temp_v0 >= 0) {

    } else {
        func_00017A04((s32) arg0, temp_v0);
    }
    return M2C_FIELD(arg0, s32 *, 0x18);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00017850);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017918);
#endif

#if FW_VERSION >= 350
s32 func_00017A1C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) > 0;
}
#endif

#if FW_VERSION >= 330
void func_000179F0(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x18);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00017A04);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BC40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BC50);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017A9C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BC70);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00017B14);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017BFC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017C58);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017C80);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017CA8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00017D50);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00017D18(void) {

}
#endif

#if FW_VERSION >= 350
void func_00017D20(void **arg0) {
    void *temp_v0;

    temp_v0 = func_00018094();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32, M2C_UNK), 0xB4)(arg0, func_000150E4(M2C_FIELD(temp_v0, s32 *, 0x28)), 0xC8);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32, M2C_UNK), 0xB4)(arg0, func_00015168(M2C_FIELD(temp_v0, s32 *, 0x28)), 0x100C8);
    if ((u32) M2C_FIELD(temp_v0, u32 *, 0x30) >= 2U) {

    } else {
        scePaf_0A5E4265((M2C_FIELD(*arg0, s32 (**)(void **, s32), 0)(arg0, scePaf_10F9ADC8()) != 0) ? arg0 : NULL, M2C_FIELD(temp_v0, u32 *, 0x30));
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00017D20(void **arg0) {
    void *temp_v0;

    temp_v0 = func_00018094();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32, M2C_UNK), 0xB4)(arg0, func_000150E4(M2C_FIELD(temp_v0, s32 *, 0x28)), 0xC8);
    M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32, M2C_UNK), 0xB4)(arg0, func_00015168(M2C_FIELD(temp_v0, s32 *, 0x28)), 0x100C8);
}
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C1C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C1E8);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BCB4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017D94);

void func_00017E6C(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_00017E74);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/dd_helper", func_00018034_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00018034_v350);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00017EC0(void *arg0, void *arg1) {
    void **temp_v0;

    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else if (func_00018B70(func_00018094()) != 0) {
        temp_v0 = scePaf_72514A05(M2C_FIELD(arg0, s32 *, 0x1CC), &D_0002BC70, 0);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xBC)(temp_v0, 0, 0);
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00017F38);

INCLUDE_ASM("nonmatchings/dd_helper", func_00017FC0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018034);

s32 func_00018094(void) {
    return D_0002D988;
}

s32 func_000180A0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000180A8);

INCLUDE_ASM("nonmatchings/dd_helper", func_000180F8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018188);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018250);

INCLUDE_ASM("nonmatchings/dd_helper", func_000182B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000182E4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018318);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001835C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018470);

void func_000185CC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x80000100;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 350
void func_000185E8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_v0 != 0) {
        if (scePaf_723D0C80(temp_v0) == 0) {
            scePaf_8429BA7C(0, M2C_FIELD(arg0, s32 *, 0x34));
        }
    }
    func_0001E338((s32) arg0);
    func_0001E6D4((s32) arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000185E8(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_v0 != 0) {
        if (scePaf_75062BCF(temp_v0) == 0) {
            scePaf_79493F8F(0, M2C_FIELD(arg0, s32 *, 0x38));
        }
    }
    func_0001E338((s32) arg0);
    func_0001E6D4((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00018644);
#endif

#if FW_VERSION >= 350
void func_0001871C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x34) = scePaf_3EDD45EF(0, func_000180A0, arg0, -1, -1, &func_000180A8);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001871C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = scePaf_A0ED77C4(0, (void (*)(void *)) func_000180A0, arg0, -1, -1, &func_000180A8);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00018764);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00018884);
#endif

#if FW_VERSION >= 350
void func_00018884(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_00013D34(func_0001E450((void *) arg0));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_000188D4);
#endif

#if FW_VERSION >= 350
void func_000188D4(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_00019274(func_0001E450((void *) arg0));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_00018924(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = 2;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_0001E0C0((s32) arg0);
    func_0001E198((s32) arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00018924(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_0001E0C0((s32) arg0);
    func_0001E198((s32) arg0);
}
#endif

#if FW_VERSION >= 350
void func_00018958(void *arg0) {
    void *temp_v0;

    func_0001E120((s32) arg0);
    temp_v0 = func_00016440(M2C_FIELD(arg0, s32 *, 4), 2, (s32) &func_000180F8, 0, 0);
    func_00016A48(temp_v0, 1);
    func_0001E0C0((s32) temp_v0);
    func_0001E198((s32) temp_v0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00018958(void *arg0) {
    void *temp_v0;

    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_0001E120((s32) arg0);
    temp_v0 = func_00016440(M2C_FIELD(arg0, s32 *, 4), 2, (s32) &func_000180F8, 0, 0);
    func_00016A48(temp_v0, 1);
    func_0001E0C0((s32) temp_v0);
    func_0001E198((s32) temp_v0);
}
#endif

#if FW_VERSION >= 330
void func_000189BC(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_000164FC(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}
#endif

#if FW_VERSION >= 350
void func_00018A10(void *arg0) {
    void *temp_v0;

    func_0001E120((s32) arg0);
    temp_v0 = func_00016440(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), (s32) &func_00018188, 0, 0);
    func_00016A48(temp_v0, 1);
    func_0001E0C0((s32) temp_v0);
    func_0001E198((s32) temp_v0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00018A10(void *arg0) {
    void *temp_v0;

    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_0001E120((s32) arg0);
    temp_v0 = func_00016440(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), (s32) &func_00018188, 0, 0);
    func_00016A48(temp_v0, 1);
    func_0001E0C0((s32) temp_v0);
    func_0001E198((s32) temp_v0);
}
#endif

#if FW_VERSION >= 350
void func_00018A7C(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;

    func_0001E2E4((s32) arg0);
    temp_s0 = scePaf_43B151A2(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    temp_v0 = func_0001CF08(M2C_FIELD(arg0, s32 *, 4), temp_s0, 0, func_000150E4(M2C_FIELD(arg0, s32 *, 0x28)), (s32) (arg0 + 0x24));
    if (temp_v0 == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_0001E288((s32) arg0);
        func_000189BC((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00018A7C(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_0001E2E4((s32) arg0);
    temp_s0 = scePaf_B09203B0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    temp_v0 = func_0001CF08(M2C_FIELD(arg0, s32 *, 4), temp_s0, 0, func_000150E4(M2C_FIELD(arg0, s32 *, 0x28)), (s32) (arg0 + 0x24));
    if (temp_v0 == 0) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_0001E288((s32) arg0);
        func_000189BC((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 330
void func_00018B00(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg1 == 0) {
        func_000150B0(M2C_FIELD(arg0, s32 *, 0x28), arg2);
    }
    func_0001CFBC();
    temp_v0 = func_00015B58(M2C_FIELD(arg0, s32 *, 0x28));
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        func_000189BC((s32) arg0);
    } else {
        func_0001E288((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00018B70);
#endif

#if FW_VERSION >= 330
void func_00018B98(s32 arg0) {
    func_000182E4(arg0 - 0x24);
}

void func_00018BB4(s32 arg0) {
    func_00018318(arg0 - 0x24);
}

void func_00018BD0(s32 arg0, s32 arg1, s32 arg2) {
    func_00018B00(arg0 - 0x24, arg1, arg2);
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BCE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018BEC);

void func_00018CB4(void) {
    func_0001B46C(1, 2);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00018CD4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018D10);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018DB4);

void func_00018E00(void) {

}

void func_00018E08(void) {

}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BD74);

INCLUDE_ASM("nonmatchings/dd_helper", func_00018E10);

INCLUDE_ASM("nonmatchings/dd_helper", func_000191EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019274);

INCLUDE_ASM("nonmatchings/dd_helper", func_000192E8);

s32 func_00019348(void) {
    return D_0002D98C;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00019354);

INCLUDE_ASM("nonmatchings/dd_helper", func_000193B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001940C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019450);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019494);

INCLUDE_ASM("nonmatchings/dd_helper", func_000194E0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019520);

void func_0001953C(s32 arg0) {
    func_00019A78(arg0);
    func_0001E478(arg0);
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDAC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDB0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDB4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDB8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDBC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDC0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019568);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019680);

void func_0001973C(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s8 *, 0x48) = 0;
    func_0001E120((s32) arg0);
    temp_v0 = func_000164FC(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x14), 0);
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_00019794(void *arg0) {
    s32 temp_v0;

    M2C_FIELD(arg0, s8 *, 0x48) = 0;
    func_0001E120((s32) arg0);
    temp_v0 = func_00018094();
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_000197D4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x48) = 1;
    func_0001E120((s32) arg0);
    func_0001E0C0((s32) arg0);
    func_0001E198((s32) arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00019810);

void func_0001987C(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x28) != 1) {
        func_0001996C((s32) arg0);
        func_000197D4(arg0);
    } else {
        func_00019A18((s32) arg0);
        func_00019794(arg0);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000198D0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001996C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019A18);

void func_00019A44(void *arg0) {
    func_00015148(M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2C);
    func_00019A18((s32) arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00019A78);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019B84);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019C28);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019C70);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019D00);

void func_00019D60(void *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002BE40;
    func_0001A1B8((s32) arg0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 >= 0) {
        sceHttpDeleteTemplate(temp_v1);
    }
    func_000007FC((s32) (arg0 + 4));
}

void func_00019DAC(void *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002BE40;
    func_0001A1B8((s32) arg0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 >= 0) {
        sceHttpDeleteTemplate(temp_v1);
    }
    func_000007FC((s32) (arg0 + 4));
}
#endif

#if FW_VERSION >= 350
void func_00019DF8(void *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002BE40;
    func_0001A1B8((s32) arg0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 >= 0) {
        sceHttpDeleteTemplate(temp_v1);
    }
    func_000007FC((s32) (arg0 + 4));
    scePaf_6261C0A5(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00019DF8(void *arg0) {
    s32 temp_v1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002BE40;
    func_0001A1B8((s32) arg0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 >= 0) {
        sceHttpDeleteTemplate(temp_v1);
    }
    func_000007FC((s32) (arg0 + 4));
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BDE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00019E4C);

s32 func_00019EF0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = sceHttp_4E4A284A(arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
    if (temp_v0 >= 0) {

    } else {
        func_0001A438((s32) arg0, temp_v0);
    }
    return M2C_FIELD(arg0, s32 *, 0x28);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00019F3C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A068);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A1B8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A268);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A2E4);

void func_0001A3A8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x34) = arg2;
}

void func_0001A3B4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
}

void func_0001A3C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_v0 >= 0) {
        sceHttpAbortRequest(temp_v0);
    }
}

void func_0001A3E8(void *arg0) {
    sceHttpGetStatusCode(M2C_FIELD(arg0, s32 *, 0x18));
}

s32 func_0001A404(void *arg0) {
    sceHttpGetContentLength(M2C_FIELD(arg0, s32 *, 0x18));
    return 0;
}

void func_0001A424(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x28);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x2C);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A438);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A558);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A5CC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A630);

s32 func_0001A6A0(void) {
    return D_0002D990;
}

s32 func_0001A6AC(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A6B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A76C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A7DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A83C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A89C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001A900);

void func_0001AA60(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = arg1;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001AA68);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001AAD0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001AB34);

void func_0001AB7C(void) {
    func_0001E79C();
    func_0001E814();
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001ABA0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001ABE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001AD38);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001AD94);

s32 func_0001ADE4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_0001ADEC(s32 arg0) {
    return arg0 + 0xC;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001ADF4);

s32 func_0001AF8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001AF94);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B02C);

void func_0001B0A8(void *arg0) {
    void *temp_v0;
    void *var_v1;

    temp_v0 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_v0 != NULL) {
        var_v1 = temp_v0;
        if (M2C_FIELD(temp_v0, s32 *, 4) != 0) {
            do {
                var_v1 += 8;
            } while (M2C_FIELD(var_v1, s32 *, 4) != 0);
        }
    }
}

void func_0001B0DC(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) & (arg0 == 1)) {
        M2C_FIELD(&D_0002D990, s32 *, 0) = 0;
        M2C_FIELD(&D_0002D990, s8 *, 4) = 0;
        M2C_FIELD(&D_0002D990, s32 *, 8) = 0;
    }
}

void func_0001B110(void) {
    func_0001B0DC(1, 0xFFFF);
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BE40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BE50);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B130);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001B258);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_0001B258(s32 arg0, void *arg1) {
    s32 temp_s0;
    void *temp_v0;

    temp_s0 = (M2C_FIELD(arg1, s32 *, 4) * 2) + 2;
    temp_v0 = scePaf_F13EBB78(temp_s0 * 2);
    if (temp_v0 != NULL) {
        sceCccUTF8toUTF16(temp_v0, temp_s0, M2C_FIELD(arg1, void **, 0));
        func_00002520(arg0, (s32) temp_v0);
        scePaf_B3D2C3BB(temp_v0);
    }
    return arg0;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001B2D8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B368);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C444);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B524);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001B3F4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001B46C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B504);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BEEC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001B578);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B720);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BEFC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BF08);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B85C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B8B8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B940);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001B990);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BA64);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BB78);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BD2C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BDF8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BE64);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BEB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001BF74);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001C144);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001C00C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001C050);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C0A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C100);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C15C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C1A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C280);

void func_0001C2B4(void) {

}

void func_0001C2BC(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C2C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C338);

s32 func_0001C398(void) {
    return D_0002D99C;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C3A4);

s32 func_0001C40C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C414);

s32 func_0001C464(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C46C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C540);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C5C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C624);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C684);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C6EC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C734);
#endif

#if FW_VERSION >= 350
void func_0001C780(s32 arg0) {
    func_0001CAC8(arg0);
    scePaf_F86BD417(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), 0, 0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001C780(s32 arg0) {
    func_0001CAC8(arg0);
    scePaf_1811AD32(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), 0, 0);
}
#endif

#if FW_VERSION >= 350
void func_0001C7B8(void *arg0) {
    sceVshCommonGui_6F4C9FDB();
    scePaf_C5DBD12F(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10));
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001C7B8(void *arg0) {
    sceVshCommonGui_80271F41();
    scePaf_5EBC648F(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg0, s32 *, 0x10));
}
#endif

#if FW_VERSION >= 350
void func_0001C7E8(void *arg0) {
    scePaf_F9879204(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10));
    sceVshCommonGui_E4ED451E();
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001C7E8(void *arg0) {
    scePaf_7E8C08D8(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10));
    sceVshCommonGui_1CF884A1();
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001C810);

void func_0001C858(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x18) = 0x80000100;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (temp_a1 == 0) {

    } else {
        func_0002395C(temp_a1);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001C89C);

void func_0001C950(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00012FF4(M2C_FIELD(arg0, s32 *, 8), arg0 + 0x3C, (s32) &func_0001C3A4);
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_0001C998(void *arg0) {
    s32 temp_v0;

    func_0001E120(arg0 + 4);
    temp_v0 = func_0001F308(M2C_FIELD(arg0, s32 *, 8));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_0001C9DC(void *arg0) {
    s32 temp_v0;

    func_0001E120(arg0 + 4);
    temp_v0 = func_000164FC(M2C_FIELD(arg0, s32 *, 8), func_0001661C(M2C_FIELD(arg0, s32 *, 0x18)), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CA34);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CAC8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CB60);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CC10);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CCB4);

void func_0001CD04(s32 arg0) {
    func_0001C624(arg0 - 4);
}

void func_0001CD20(s32 arg0) {
    func_0001C684(arg0 - 4);
}

void func_0001CD3C(s32 arg0) {
    func_0001C6EC(arg0 - 4);
}

void func_0001CD58(s32 arg0) {
    func_0001C734(arg0 - 4);
}

void func_0001CD74(s32 arg0) {
    func_0001C780(arg0 - 4);
}

void func_0001CD90(s32 arg0) {
    func_0001C7B8(arg0 - 4);
}

void func_0001CDAC(s32 arg0) {
    func_0001C7E8(arg0 - 4);
}

void func_0001CDC8(s32 arg0) {
    func_0001C810(arg0 - 4);
}

void func_0001CDE4(s32 arg0) {
    func_0001C858(arg0 - 4);
}

void func_0001CE00(s32 arg0) {
    func_0001C89C(arg0 - 4);
}

void func_0001CE1C(M2C_UNK **arg0) {
    *arg0 = &D_0002BFA0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001CE2C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001CE2C(M2C_UNK **arg0) {
    *arg0 = &D_0002BFA0;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001CE54);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CF08);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001CFBC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D034);

void func_0001D0A8(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D0B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D1A0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D290);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D338);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001D3E0);
#endif

#if FW_VERSION >= 350
void func_0001D3E0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x90);
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
    }
    func_0000082C((s32) (arg0 + 0x84));
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001D424);
#endif

#if FW_VERSION >= 350
void func_0001D424(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x90);
    if (temp_v0 != 0) {
        scePaf_CCFF20ED(temp_v0);
    }
    func_0000082C((s32) (arg0 + 0x84));
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BF38);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BFA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002BFB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D468);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D61C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D6D8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D7DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D874);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D90C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D9A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001D9C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DA8C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DAB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DCC8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DDA4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DEDC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DF30);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DF84);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001DFA0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E00C);

void func_0001E078(M2C_UNK **arg0) {
    *arg0 = &D_0002C078;
}

void func_0001E088(M2C_UNK **arg0) {
    *arg0 = &D_0002C078;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001E098);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001E098(M2C_UNK **arg0) {
    *arg0 = &D_0002C078;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001E0C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E120);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E198);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E220);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E288);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E2E4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E338);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E35C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E3B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E3EC);

u8 func_0001E430(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x10);
}

u8 func_0001E438(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x11);
}

u8 func_0001E440(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x12);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E448);

s32 func_0001E450(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

void func_0001E458(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

s32 func_0001E460(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

void func_0001E468(void) {

}

void func_0001E470(void) {

}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E478);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C058);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E4AC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E554);
#endif

#if FW_VERSION >= 350
void func_0001E65C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 1) {
        scePaf_F9879204(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001E65C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 1) {
        scePaf_7E8C08D8(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    }
}
#endif

#if FW_VERSION >= 330
void func_0001E68C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x80000100;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_0001E6A8(s32 arg0) {
    func_0001E338(arg0);
    func_0001E6D4(arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E6D4);

void func_0001E744(M2C_UNK **arg0) {
    *arg0 = &D_0002C0A8;
}

void func_0001E754(M2C_UNK **arg0) {
    *arg0 = &D_0002C0A8;
}

void func_0001E764(M2C_UNK **arg0) {
    *arg0 = &D_0002C0A8;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0001E774);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001E774(M2C_UNK **arg0) {
    *arg0 = &D_0002C0A8;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION >= 350
s32 func_0001E79C(void) {
    void *sp0;
    func_0001EBE8((s32) &D_0002D9A4);
    sceVshCommonGui_2EBB5C2B(&sp0, sceVshCommonGui_30FA68C3());
    func_0000085C((s32) &D_0002DCB4, &sp0);
    func_0000082C(&sp0);
    sceVshCommonGui_11C48509(&sp0, sceVshCommonGui_EC899EBE());
    func_0000085C((s32) &D_0002DCC0, &sp0);
    return func_0000082C(&sp0);
}
#endif

#if FW_VERSION == 340
s32 func_0001E79C(void) {
    void *sp0;
    func_0001EBE8((s32) &D_0002D9A4);
    sceVshCommonGui_6C81492F(&sp0, sceVshCommonGui_764A5495());
    func_0000085C((s32) &D_0002DCB4, &sp0);
    func_0000082C(&sp0);
    sceVshCommonGui_54BC644C(&sp0, sceVshCommonGui_DBEE94DC());
    func_0000085C((s32) &D_0002DCC0, &sp0);
    return func_0000082C(&sp0);
}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/dd_helper", func_0001E7BC);
#endif

#if FW_VERSION == 330
s32 func_0001E79C(void) {
    return func_0001EBE8((s32) &D_0002D9A4);
}

void func_0001E7BC(void) {
    func_0001C338();
    func_00013088();
    func_0001F37C();
    func_00018034();
    func_000192E8();
    func_00013DFC();
    func_000165B0();
    func_0001B46C(0, 0);
}
#endif

#if FW_VERSION >= 330
s32 func_0001E814(void) {
    s32 temp_s0;

    temp_s0 = func_0001C2C4(func_0001ADE4(func_0001A6A0())) + 4;
    func_0001E0C0(temp_s0);
    return func_0001E198(temp_s0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E858);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E8B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E8DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001E95C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001EA38);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001EB28);

void func_0001EBA8(void) {
    func_0001EB28(1, 0xFFFF);
}

void func_0001EBC8(void) {
    func_0001EB28(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001EBE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001EC3C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001ECB0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001ED9C);

void func_0001EE5C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001EE6C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C078);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0A8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001EEAC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F038);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F0DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F1CC);

void func_0001F2A8(s32 arg0) {
    func_0001E458(func_0001F3DC(), arg0);
}

void func_0001F2D8(void) {
    func_0001FAA8(func_0001F3DC());
    func_0001B46C(1, 2);
}

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0EC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0F8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C0FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F308);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F37C);

s32 func_0001F3DC(void) {
    return D_0002D9B4;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F3E8);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F6E4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F7A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F804);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F848);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001F88C);

void func_0001F8D8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1C) = __builtin_allegrex_ext(M2C_FIELD(func_0001ADEC(func_0001A6A0()), s32 *, 0x50), 5, 1);
}

void func_0001F910(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0x80000100;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
#endif

#if FW_VERSION >= 350
void func_0001F92C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 1) {
        scePaf_C5DBD12F(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    } else {
        func_0001F9C8((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001F92C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) != 1) {
        scePaf_5EBC648F(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, s32 *, 0xC));
    } else {
        func_0001F9C8((s32) arg0);
    }
}
#endif

#if FW_VERSION >= 350
void func_0001F96C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 != 0) {
        if (scePaf_723D0C80(temp_v0) == 0) {
            scePaf_8429BA7C(0, M2C_FIELD(arg0, s32 *, 0x50));
        }
    }
    func_0001E338((s32) arg0);
    func_0001E6D4((s32) arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001F96C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_v0 != 0) {
        if (scePaf_75062BCF(temp_v0) == 0) {
            scePaf_79493F8F(0, M2C_FIELD(arg0, s32 *, 0x50));
        }
    }
    func_0001E338((s32) arg0);
    func_0001E6D4((s32) arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001F9C8);

s32 func_0001FA10(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0001FA18);
#endif

#if FW_VERSION >= 350
void func_0001FD1C(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_00017FC0(M2C_FIELD(arg0, s32 *, 4));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}

void func_0001FD5C(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_000164FC(M2C_FIELD(arg0, s32 *, 4), func_0001661C(M2C_FIELD(arg0, s32 *, 0x14)), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x18));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0001FA68(s32 arg0) {
    s32 temp_v0;

    func_0001E120(arg0);
    temp_v0 = func_00017FC0(M2C_FIELD(arg0, s32 *, 4));
    func_0001E0C0(temp_v0);
    func_0001E198(temp_v0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C114);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001FAA8);
#endif

#if FW_VERSION >= 350
void func_0001FA68(s32 arg0) {
    void **temp_v0;

    temp_v0 = func_0001AF8C(func_0001A6A0());
    if (M2C_FIELD(*temp_v0, s32 (**)(void **), 8)(temp_v0) == 0) {
        func_0001FD1C(arg0);
    } else {
        func_00015CCC(temp_v0, arg0 + 0x14, arg0 + 0x18);
        func_0001FD5C(arg0);
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_0001FCC4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001FF9C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001FFFC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002005C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C160);

INCLUDE_ASM("nonmatchings/dd_helper", func_000200C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002013C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00020158);

void func_00020174(void *arg0) {
    func_00000974(M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00020190(void *arg0) {
    func_00000990(M2C_FIELD(arg0, s32 *, 0xC));
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000024A8);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_00007C00);
#endif

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

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00007EB0);
#else
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
#endif

INCLUDE_ASM("nonmatchings/dd_helper", func_00007F1C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00007FE4);

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C198);
#endif

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B45C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B464);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B46C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B474);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B47C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4A4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B4D0_v280);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
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

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C1F0);
#endif

#if FW_VERSION == 280
INCLUDE_ASM("nonmatchings/dd_helper", func_000081B0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_000081AC);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00020A50);

INCLUDE_ASM("nonmatchings/dd_helper", func_00020C54);
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

#if FW_VERSION >= 330
void func_00020DF0(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 > 0) {
        sceHttpDeleteRequest(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceHttpDeleteConnection(temp_v0_2);
    }
}

void func_00020E38(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
        func_00008494((s32) arg0);
        sceHttpAbortRequest(M2C_FIELD(arg0, s32 *, 0xC));
    }
}
#endif

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

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00008DA8);
#else
void func_00008DA8(s32 *arg0) {
    func_00008B24();
    scePaf_7EC15225(*arg0);
}
#endif

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

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dd_helper", func_0000982C);

INCLUDE_ASM("nonmatchings/dd_helper", func_0000989C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009910);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009984);

INCLUDE_ASM("nonmatchings/dd_helper", func_000099C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009A04);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009A48);
#endif

#if FW_VERSION >= 350
s32 func_00009BB8(s32 arg0, void *arg1, s32 arg2) {
    return scePaf_3308156F() + arg2;
}
#else
s32 func_00009BB8(s32 arg0, void *arg1, s32 arg2) {
    return scePaf_F95EA3F1(arg0, arg1, arg2) + arg2;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_0001043C);
#else
INCLUDE_ASM("nonmatchings/dd_helper", func_00009BE0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009D6C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009E54);

INCLUDE_ASM("nonmatchings/dd_helper", func_00009F14);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B538);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B540);

#if FW_VERSION == 280
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B554);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B560);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B570);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B544);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B550);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0000B560);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_00010464);

INCLUDE_ASM("nonmatchings/dd_helper", func_0001052C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000106B8);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00022A38);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022A7C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C268);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C280);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C294);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C2AC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C2C4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C2DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C2F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C30C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C324);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C32C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C338);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C340);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C34C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C354);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C36C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C38C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C3AC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C3C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C3E4);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C974_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C974_v350);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C404);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C49C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4A8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4B4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4C0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4CC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4D8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C4FC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C508);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C514);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C520);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C52C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C538);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C544);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C550);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C55C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C568);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C574);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C580);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C58C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C598);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB38);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C5A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022ABC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022CBC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022D10);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022DA8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022E40);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022E80);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022F00);

INCLUDE_ASM("nonmatchings/dd_helper", func_00022F30);

void func_00022F60(M2C_UNK **arg0) {
    *arg0 = &D_0002C6C8;
    func_00014D94((s32) arg0);
}

void func_00022F88(M2C_UNK **arg0) {
    *arg0 = &D_0002C6C8;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00022FB0);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00022FB0(M2C_UNK **arg0) {
    *arg0 = &D_0002C6C8;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00022FE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023070);

s32 func_000230D8(s8 *arg0, s8 *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (*arg0 == *arg1) {
        do {
            var_a2 += 1;
        } while (*(arg0 + var_a2) == *(arg1 + var_a2));
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0002311C);

s32 func_00023154(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_0002315C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023214);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002334C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023388);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C698);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C6A4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C6C8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023444);

INCLUDE_ASM("nonmatchings/dd_helper", func_000235C8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023604);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023698);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002372C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000238C0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002395C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000239B4);

void func_00023BE8(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 8);
    *arg2 = M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00023BFC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023C94);

void func_00023CC4(M2C_UNK **arg0) {
    *arg0 = &D_0002C870;
    func_00014D94((s32) arg0);
}

void func_00023CEC(M2C_UNK **arg0) {
    *arg0 = &D_0002C870;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00023D14);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00023D14(M2C_UNK **arg0) {
    *arg0 = &D_0002C870;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00023D4C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023DD8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023EC8);

void func_00023EF8(M2C_UNK **arg0) {
    *arg0 = &D_0002CAA0;
    func_00014D94((s32) arg0);
}

void func_00023F20(M2C_UNK **arg0) {
    *arg0 = &D_0002CAA0;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00023F48);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00023F48(M2C_UNK **arg0) {
    *arg0 = &D_0002CAA0;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00023F80);

INCLUDE_ASM("nonmatchings/dd_helper", func_00023FEC);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002406C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000240C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002420C);

void func_0002423C(M2C_UNK **arg0) {
    *arg0 = &D_0002CBA0;
    func_00014D94((s32) arg0);
}

void func_00024264(M2C_UNK **arg0) {
    *arg0 = &D_0002CBA0;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0002428C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0002428C(M2C_UNK **arg0) {
    *arg0 = &D_0002CBA0;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000242C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024330);

INCLUDE_ASM("nonmatchings/dd_helper", func_000243B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002440C);

INCLUDE_ASM("nonmatchings/dd_helper", func_000244FC);

void func_0002452C(M2C_UNK **arg0) {
    *arg0 = &D_0002CBF0;
    func_00014D94((s32) arg0);
}

void func_00024554(M2C_UNK **arg0) {
    *arg0 = &D_0002CBF0;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_0002457C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_0002457C(M2C_UNK **arg0) {
    *arg0 = &D_0002CBF0;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000245B4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002466C);

void func_0002469C(M2C_UNK **arg0) {
    *arg0 = &D_0002CCA0;
    func_00014D94((s32) arg0);
}

void func_000246C4(M2C_UNK **arg0) {
    *arg0 = &D_0002CCA0;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_000246EC);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000246EC(M2C_UNK **arg0) {
    *arg0 = &D_0002CCA0;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00024724);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024790);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024810);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024870);

INCLUDE_ASM("nonmatchings/dd_helper", func_000248A0);

void func_000248D0(M2C_UNK **arg0) {
    *arg0 = &D_0002CD10;
    func_00014D94((s32) arg0);
}

void func_000248F8(M2C_UNK **arg0) {
    *arg0 = &D_0002CD10;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00024920);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00024920(M2C_UNK **arg0) {
    *arg0 = &D_0002CD10;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00024958);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C740);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C748);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C774);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C79C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C7C4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C7DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C7E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C808);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C814);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C834);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C840);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C858);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C870);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CA58);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C890);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CA7C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CA8C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CAA4);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8A0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8B8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8C4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8D0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8DC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C8F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C904);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C914);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C920);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C92C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C938);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C948);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C958);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C968);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C974);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C980);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C98C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C998);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C9A4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C9B0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C9BC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C9C8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C9D4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002C9E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CA88);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CAA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CAC0);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CCEC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CCFC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD0C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CAD4);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD3C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CAEC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CAF8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB04);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB10);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB1C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB28);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB34);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB4C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB58);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB64);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CB8C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CBA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CBC0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CBCC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CBF0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC10);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC24);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC34);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC44);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC5C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC74);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CC8C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CCA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CCC0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CCCC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CCF0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD10);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF98);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFAC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD30);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D3AC);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFCC_v340);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFE4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFFC);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD40);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD4C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD58);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD64);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD70);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD7C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD88);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CD94);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CDA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CDB0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CDC0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000249D4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024BAC);

void func_00024BF4(M2C_UNK **arg0) {
    *arg0 = &D_0002CEA0;
    func_00014D94((s32) arg0);
}

void func_00024C1C(M2C_UNK **arg0) {
    *arg0 = &D_0002CEA0;
    func_00014D94((s32) arg0);
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00024C44);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00024C44(M2C_UNK **arg0) {
    *arg0 = &D_0002CEA0;
    func_00014D94((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00024C7C);

void func_00024CD0(void *arg0) {
    s8 temp_v0;

    M2C_FIELD(arg0, s8 *, 0x3C) = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) == 0;
    M2C_FIELD(arg0, s8 *, 0x3D) = temp_v0;
    M2C_FIELD(arg0, s8 *, 0x3E) = temp_v0;
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00024CE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024D94);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024E14);

INCLUDE_ASM("nonmatchings/dd_helper", func_00024E4C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00025330);

void func_00025360(M2C_UNK **arg0) {
    *arg0 = &D_0002D5A0;
    func_00014D94((s32) arg0);
}

void func_00025388(M2C_UNK **arg0) {
    *arg0 = &D_0002D5A0;
    func_00014D94((s32) arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper", func_000253B0);

INCLUDE_ASM("nonmatchings/dd_helper", func_000253E8);
#endif

#if FW_VERSION >= 330
void func_00024F2C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00024F3C);
#endif

#if FW_VERSION >= 350
void func_00024F3C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_CCFF20ED(temp_v0);
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00024F6C);
#endif

#if FW_VERSION >= 350
void func_00024F6C(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0;
    if (temp_v0 == 0) {

    } else {
        scePaf_CCFF20ED(temp_v0);
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00024F9C);

void func_00025008(void *arg0, s32 arg1) {
    s32 *temp_v1;

    if ((arg1 >= M2C_FIELD(arg0, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) >= arg1)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0) + (((u32) arg1 >> 5) * 4);
        *temp_v1 |= 1 << ((arg1 - 1) & 0x1F);
    }
}

INCLUDE_ASM("nonmatchings/dd_helper", func_00025058);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025190);

INCLUDE_ASM("nonmatchings/dd_helper", func_000251FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025224);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002524C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025288);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025524);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025748);

INCLUDE_ASM("nonmatchings/dd_helper", func_000259C4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025B84);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025BB8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00025CE8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000108F4);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000109DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000109FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010B4C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010CB4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010D6C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010E14);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010ED0);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010FC4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00010FFC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011058);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_ASM("nonmatchings/dd_helper", func_000110F8);
#endif

#if FW_VERSION >= 350
void func_000110F8(void) {
    scePaf_CB4C96CE();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_000110F8(void) {
    scePaf_FCFAA39F();
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/dd_helper", func_000111E4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_000265E0);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002665C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00026B44);

INCLUDE_ASM("nonmatchings/dd_helper", func_00026BE8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00026C18);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000112E4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011310);

INCLUDE_ASM("nonmatchings/dd_helper", func_00011384);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00026DA4);

INCLUDE_ASM("nonmatchings/dd_helper", func_00026DE0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper", func_000113DC);

INCLUDE_ASM("nonmatchings/dd_helper", func_000119B0);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper", func_00027A84);

INCLUDE_ASM("nonmatchings/dd_helper", func_00027DCC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00027E34);

INCLUDE_ASM("nonmatchings/dd_helper", func_00027EA8);

INCLUDE_ASM("nonmatchings/dd_helper", func_00028220);

INCLUDE_ASM("nonmatchings/dd_helper", func_000282FC);

INCLUDE_ASM("nonmatchings/dd_helper", func_00028374);

INCLUDE_ASM("nonmatchings/dd_helper", func_000283A4);

INCLUDE_ASM("nonmatchings/dd_helper", func_0002860C);

INCLUDE_ASM("nonmatchings/dd_helper", func_00028720);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper", func_00009F6C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CE38);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CE60);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CE88);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CEA0);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D570);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D57C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D5A0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CEC0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CED4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CEE8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CEFC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF08);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF1C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF30);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF44);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF58);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF6C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF78);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CF8C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFA0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFB4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFCC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002CFD8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D0B4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D0C0);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013F78);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013F7C);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013F80);

INCLUDE_RODATA("nonmatchings/dd_helper", D_00013F88);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D0E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1E0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1E4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1E8);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1EC);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1F0);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1F4);

INCLUDE_RODATA("nonmatchings/dd_helper", D_0002D1F8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper", D_00013F90);
#endif
