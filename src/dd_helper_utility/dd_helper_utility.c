/* lang: c++ */
/* cflags: -Os */
#include "common.h"
#include "dd_helper_utility_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000024);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000000AC);

INCLUDE_ASM("nonmatchings/dd_helper_utility", module_start);

s32 module_stop(void) {
    func_00004100();
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000015C);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006500);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006504);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000651C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006528);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006540);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006554);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000656C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006584);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006590);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000065A4);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000065B0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000065D0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000065F0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006608);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000662C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006688);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006694);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006740);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006744);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006768);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000676C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006784);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006790);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006874);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00005FFC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000068CC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000472C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004730);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006048);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006058);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000198);
#else
void func_00000198(void) {
    void *sp0;
    _ZN3vsh31SetButtonNavigationString_EnterEPKw(&sp0, _ZN3vsh15GetString_EnterEv());
    func_000007F0((s32) &D_00004B7C, &sp0);
    func_000007C0(&sp0);
    _ZN3vsh30SetButtonNavigationString_BackEPKw(&sp0, _ZN3vsh14GetString_BackEv());
    func_000007F0((s32) &D_00004B88, &sp0);
    func_000007C0(&sp0);
}
#endif

void func_00000204(void) {
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000020C);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000294);
#else
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000248);
#endif

s32 func_00000320(void) {
    func_000004C0(0);
    return 0;
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000340);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000368);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004738);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004748);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000003B0);

#if FW_VERSION >= 330
void func_0000050C(void) {
    func_000004C0(0);
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000454);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000004C0);

#if FW_VERSION >= 300 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000005A8);
#endif

#if FW_VERSION >= 350
void func_000005A8(void) {
    _ZN3paf4View8PageOpenEPKcii(D_00006F3C, &D_00004770, 0, 0);
    _ZN3paf4View12PageActivateEPKc(D_00006F3C, &D_00004770);
}
#endif

#if FW_VERSION == 282
void func_00000550(void) {
}
#endif

void func_00000558(void) {
    func_000004C0(2);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000574);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000580);

#if FW_VERSION < 330
void func_000005A4(struct Unk_func_000005A4_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000047C8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}

void func_000005BC(struct Unk_func_000005BC_0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk0 = &D_000047C8;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
Class_000047C8::~Class_000047C8() {
}
#endif

#if FW_VERSION == 282
void func_000005D4(M2C_UNK **arg0) {
    *arg0 = &D_000047C8;
}

void func_000005E4(M2C_UNK **arg0) {
    *arg0 = &D_000047C8;
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000005F4);
#endif

#if FW_VERSION == 282
void func_000005F4(M2C_UNK **arg0) {
    *arg0 = &D_000047C8;
    _ZdlPv(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000061C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004770);

#if FW_VERSION >= 300
void func_0000063C(void) {
    void *temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc("htmlviewer_plugin");
    if (temp_v0 != NULL) {
        _ZN3paf4View12PageActivateEPv(temp_v0, M2C_FIELD(temp_v0, s32 *, 0x1B8));
    }
    sceHtmlViewerHelper_05E0C3D4(0);
}
#else
void func_0000063C(void) {
    struct Unk_func_0000063C_temp_v0 *temp_v0;

    temp_v0 = _ZN3paf4View4FindEPKc("htmlviewer_plugin");
    if (temp_v0 != NULL) {
        _ZN3paf4View12PageActivateEPv(temp_v0, temp_v0->unk1B8);
    }
    sceHtmlViewerHelper_05E0C3D4(0);
}
#endif

#if FW_VERSION < 330
void func_00000674(struct Unk_func_00000674_0 *arg0) {
    sceHtmlViewerHelper_05E0C3D4(1);
    _ZN3paf4View12PageActivateEPKc(arg0->unk4, &D_00004770);
}
#endif

#if FW_VERSION >= 350
void func_000006AC(struct Unk_func_000006AC_0 *arg0) {
    sceHtmlViewerHelper_F27998C2(arg0);
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000006AC(struct Unk_func_000006AC_0 *arg0) {
    sceHtmlViewerHelper_F27998C2((s32) arg0);
}
#endif

#if FW_VERSION < 330
void func_000006AC(struct Unk_func_000006AC_0 *arg0) {
    sceHtmlViewerHelper_F27998C2(arg0->unk8);
}
#else
void func_00000774(void) {
    sceHtmlViewerHelper_C92C71B7();
}
#endif

#if FW_VERSION == 352
void func_00000790_v352(void) {
    sceHtmlViewerHelper_4FA8ECCA();
}
#endif

#if FW_VERSION == 351
void func_00000790_v351(void) {
    sceHtmlViewerHelper_4FA8ECCA();
}
#endif

#if FW_VERSION == 350
void func_00000790_v350(void) {
    sceHtmlViewerHelper_4FA8ECCA();
}
#endif

#if FW_VERSION == 340
void func_00000790_v340(void) {
    sceHtmlViewerHelper_B1B946C4();
}
#endif

#if FW_VERSION == 330
void func_00000790_v330(void) {
    sceHtmlViewerHelper_B1B946C4();
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000006C8);

void func_00000750(void) {
    func_000006C8(1, 0xFFFF);
}

void func_00000770(void) {
    func_000006C8(0, 0xFFFF);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000790);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000007C0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000007F0);

#if FW_VERSION < 330
void func_0000088C(void) {
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000894);

s32 func_000008C4(s32 arg0, struct Unk_func_000008C4_1 *arg1) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (arg1->unk4 * 2) + 2;
    temp_v0 = sce_paf_private_malloc(temp_s0);
    if (temp_v0 != 0) {
        sceCccUTF8toUTF16(temp_v0, temp_s0, arg1->unk0);
        func_00001CFC(arg0, temp_v0);
        sce_paf_private_free(temp_v0);
    }
    return arg0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000944);
#else
void func_00000944(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = (sce_paf_private_wcslen(arg1) * 2) + 0x20;
    temp_v0 = sce_paf_private_malloc(temp_s0);
    if (temp_v0 != 0) {
        sce_paf_private_swprintf(temp_v0, temp_s0, arg1, arg2);
        func_00001D4C(arg0, temp_v0, sce_paf_private_wcslen(temp_v0));
        sce_paf_private_free(temp_v0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000009E4);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000BD4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000CA0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000D6C);
#else
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000AF8);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000BE4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000CD0);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000D68);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000E00);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000EA0);

#if FW_VERSION >= 330
void func_00000F18(s32 arg0) {
    func_000026C0(arg0 + 0x7C);
}
#else
void func_00000F18(s32 arg0) {
    func_000026C0(arg0 + 0xC);
}
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000F34);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004794);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000047AC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000047B4);

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000047C8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
__asm__(".globl _ZTV14Class_000047C8\n_ZTV14Class_000047C8 = D_000047C8 - 8\n");
#endif

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000047E0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000047EC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000047F8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004804);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000480C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00000FD8);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001120);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
void func_00001120(struct Unk_func_00001120_0 *arg0) {
    func_000021C8(&arg0->pad0[0xC], M2C_FIELD(arg0, s32 *, 0x40));
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000011F0);
#endif

#if FW_VERSION == 282
void func_00001120(struct Unk_func_00001120_0 *arg0) {
    func_000021C8((u8 *)arg0 + 0xC, arg0->unk24);
}
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001140);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000011A4);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000495C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000061F0);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006AA8);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006200);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006208);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000048C8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000048CC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000048E8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000048FC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000490C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000491C);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006284);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000628C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006298);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004928);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004940);

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000495C);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004978);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001280);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000013F4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000014AC);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000156C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000015E0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001770);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001A28);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001CE0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001FF4);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000021B4);
#else
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001BBC);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001BE4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001C28);

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001C84);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001CFC);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001D4C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001E18);

void func_00001ECC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != 0) {
        var_v0 = sce_paf_private_strlen(arg1);
    }
    func_00001F1C(arg0, arg1, var_v0);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001F1C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00001FC8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002798);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000026D0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000272C);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002088);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000020C4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002100);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002914);
#else
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002128);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002150);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000218C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000021C8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000049F8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A10);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002210);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002368);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A28);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A30);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002390);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000023B8);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000023E0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A40);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002408);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002430);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000026C0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000026CC);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002F2C);
#endif

s32 *func_00002760(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000292C(arg1, arg2);
    return arg0;
}

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002798);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000282C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000028AC);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000292C);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003168);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003440);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000034A0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003500);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006C5C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006C64);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006C6C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006C74);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006C7C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006CA4);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006420);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003564);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000035E0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000035FC);

void func_00003618(void *arg0) {
    func_000006AC(M2C_FIELD(arg0, struct Unk_func_000006AC_0 **, 0xC));
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003634);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003650);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000031F8);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003268);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000032EC);

void func_00003370(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00004AC8;
    if (temp_v1 > 0) {
        sceHttpDeleteRequest(temp_v1);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 > 0) {
        sceHttpDeleteConnection(temp_v0);
    }
    sceHttpDeleteTemplate(M2C_FIELD(arg0, s32 *, 4));
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x18));
}

void func_00002128(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00004AC8;
    if (temp_v1 > 0) {
        sceHttpDeleteRequest(temp_v1);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 > 0) {
        sceHttpDeleteConnection(temp_v0);
    }
    sceHttpDeleteTemplate(M2C_FIELD(arg0, s32 *, 4));
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x18));
}

void func_00002150(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00004AC8;
    if (temp_v1 > 0) {
        sceHttpDeleteRequest(temp_v1);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 > 0) {
        sceHttpDeleteConnection(temp_v0);
    }
    sceHttpDeleteTemplate(M2C_FIELD(arg0, s32 *, 4));
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x18));
    _ZdlPv(arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000034A4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_0000356C);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006CE8);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000063AC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000063B4);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000063BC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000063C4);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000063CC);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000063F4);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006420);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006428);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00006430);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000643C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_0000644C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000035F8);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003744);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000040F8);
#endif

#if FW_VERSION >= 300
void func_000039A0(void *arg0, void *arg1) {
    sceHttpGetStatusCode(M2C_FIELD(arg0, s32 *, 0xC), arg1);
}

void func_000039BC(void *arg0, void *arg1) {
    sceHttpGetNetworkPspError(M2C_FIELD(arg0, s32 *, 0xC), arg1);
}

void func_000039D8(void *arg0, void *arg1, void *arg2) {
    sceHttpsGetSslError(M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2);
}

void func_000039F4(void *arg0, void *arg1, u32 arg2) {
    sceHttpReadData(M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2);
}

void func_00003A10(void *arg0, void *arg1) {
    sceHttpGetContentLength(M2C_FIELD(arg0, s32 *, 0xC), arg1);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003A2C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003A84);
#endif

#if FW_VERSION >= 330
void func_00004294(void *arg0) {
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

void func_000042DC(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
        func_00003A2C((s32) arg0);
        sceHttpAbortRequest(M2C_FIELD(arg0, s32 *, 0xC));
    }
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003AAC);
#endif

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002A20);

void func_00002A3C(s32 arg0) {
    func_00002C24();
    func_00002FDC(arg0);
}

void func_00002A68(s32 arg0) {
    func_00002C24();
    func_00002FDC(arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002A94);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002C24);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002CB0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002F48);

void func_00002FC0(void) {
    func_00003240();
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00002FDC);

void func_00002FF8(void) {
    func_000032C4();
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003014);

void func_000030DC(void) {
    func_000032F0();
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000030F8);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003160);

s32 *func_00003208(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_00003738(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003240);

void func_00003298(s32 *arg0) {
    func_00003014();
    sce_paf_private_free2(*arg0);
}

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000032C4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000032F0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003348);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003538);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003738);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003810);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000038EC);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003A24);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003B5C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003BB0);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003C04);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003C58);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003D1C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003D8C);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003E00);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003E74);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003EB4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003EF4);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00003F38);

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_000040A8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A54);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A5C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A64);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A6C);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A74);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004A9C);
#endif

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004AC8);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004AD0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004AD4);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004AE0);

INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_00004AF0);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00005150);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00005218);

INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00005270);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dd_helper_utility", func_00004100);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/dd_helper_utility", D_000064D0);
#endif
