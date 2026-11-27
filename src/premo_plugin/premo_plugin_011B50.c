/* lang: c++ */
#include "common.h"
#include "premo_plugin_decls.h"

void func_00011B50(void) {
}

void func_00011B58(void) {
}

void func_00011B60(void) {
}

void func_00011B68(void) {
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0000ABA4);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0000ADAC);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A7A8);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A7B0);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A7C0);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A7D0);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011B70);
#endif

#if FW_VERSION == 352
s32 func_00011B70(void) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = D_0002CC00;
    if (var_v0 == 0) {
        var_v0 = sceKernelCreateSema("PremoCrypt", 0U, 1, 1, NULL);
        D_0002CC00 = var_v0;
    }
    var_v1 = 0;
    if (var_v0 <= 0) {
        func_00011BDC();
        var_v1 = -1;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011BDC);
#endif

#if FW_VERSION == 352
s32 func_00011BDC(void) {
    s32 var_v0;

    var_v0 = D_0002CC00;
    if (var_v0 > 0) {
        var_v0 = sceKernelDeleteSema(var_v0);
        D_0002CC00 = 0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011C14);
#endif

#if FW_VERSION == 352
s32 func_00011C14(s32 arg0) {
    s32 temp_s1;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    temp_s1 = sceMlnBridgeSetDKS(arg0, 0);
    sce_paf_private_memcpy((s32) &D_0002CC10, arg0, 0x10);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s1;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011C8C);
#endif

#if FW_VERSION == 352
s32 func_00011C8C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    temp_s0 = sceMlnBridgeAesCbcEncrypt(arg0, arg1, arg2, arg3);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011D14);
#endif

#if FW_VERSION == 352
s32 func_00011D14(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    temp_s0 = sceMlnBridgeAesCbcDecrypt(arg0, arg1, arg2, arg3);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011D9C);
#endif

#if FW_VERSION == 352
s32 func_00011D9C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    sceKernelWaitSema(D_0002CC00, 1, 0);
    sceMlnBridgeSetDKS(arg4, 0);
    temp_s0 = sceMlnBridgeAesCbcEncrypt(arg0, arg1, arg2, arg3);
    sceMlnBridgeSetDKS((s32) &D_0002CC10, 0);
    sceKernelSignalSema(D_0002CC00, 1);
    return temp_s0;
}
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011E4C);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00011F80);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000120B4);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000123F0);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0001272C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00012A70);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00012BF8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00012C70);
#endif

#if FW_VERSION == 352
void func_00012BF8(struct Unk_func_00012BF8_0 *arg0) {
    struct Unk_func_00012BF8_temp_v0 *temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != NULL) {
        temp_v0->unk348 = 0;
    }
    func_000086F0((s32) ((u8 *)arg0 + 0xB4), 0);
    func_000086F0((s32) ((u8 *)arg0 + 0x664), 0);
    func_000086F0((s32) ((u8 *)arg0 + 0x660), 0);
    func_0001391C((u8 *)arg0 + 0x66C, 0);
    func_000086F0((s32) ((u8 *)arg0 + 0x6D4), 0);
    func_000086F0((s32) ((u8 *)arg0 + 0x668), 0);
}

void func_00012C70(struct Unk_func_00012C70_0 *arg0) {
    arg0->unk40 = 1;
    func_00012BF8((Unk_func_00012BF8_0*) arg0);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00012C94);
#endif

#if FW_VERSION == 352
void func_00012C94(struct Unk_func_00012C94_0 *arg0) {
    if (arg0->unk664 != 0) {
        arg0->unk40 = 0;
    } else if (func_00012A70() == 0) {
        arg0->unk40 = 0;
    }
}
#endif

void func_00012CD8(struct Unk_func_00012CD8_0 *arg0, struct Unk_func_00012CD8_1 *arg1) {
    arg0->unk30 = (s32) arg1->unk0;
    arg0->unk34 = (s32) arg1->unk4;
    arg0->unk38 = (s32) arg1->unk8;
    arg0->unk3C = (s32) arg1->unkC;
}

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00012CFC);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00012DF8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013118);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000132B8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013328);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013398);
#endif

#if FW_VERSION == 352
void func_00013398(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

#if FW_VERSION < 350
void func_00013398(void) {
    _ZN3paf13PhApplication14FinishDispListEv();
    _ZN3paf13PhApplication13StartDispListEv();
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000133BC);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0001349C);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0001357C);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013794);

#if FW_VERSION < 350
void func_0000C4C8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000C5F8((s32) arg0);
}
#endif

void func_000138FC(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00013994();
}

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0001391C);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0000C580);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0000C5F8);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013994);

void func_000139B4(M2C_UNK **arg0) {
    *arg0 = &D_0002A9D0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000139C4);
#else
void func_000139C4(M2C_UNK **arg0) {
    *arg0 = &D_0002A9D0;
    _ZdlPv((s32) arg0);
}
#endif

void func_000139EC(M2C_UNK **arg0) {
    *arg0 = &D_0002A9C0;
}

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000139FC);
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013A24);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013A34);
#endif

#if FW_VERSION == 352
void func_000139FC(M2C_UNK **arg0) {
    *arg0 = &D_0002A9C0;
    _ZdlPv((s32) arg0);
}

void func_00013A24(M2C_UNK **arg0) {
    *arg0 = &D_0002A9A8;
}

void func_00013A34(M2C_UNK **arg0) {
    *arg0 = &D_0002A9A8;
    _ZdlPv((s32) arg0);
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013A5C);
#endif

#if FW_VERSION == 352
void func_00013A5C(struct Unk_func_00013A5C_0 *arg0) {
    arg0->unk0 = &D_0002A910;
    arg0->unk8 = &D_0002A9C0;
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013A78);
#endif

#if FW_VERSION == 352
void func_00013A78(struct Unk_func_00013A78_0 *arg0) {
    arg0->unk0 = &D_0002A910;
    arg0->unk8 = &D_0002A9C0;
    _ZdlPv((s32) arg0);
}
#endif

void func_00013AAC(struct Unk_func_00013AAC_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013AB4);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013AD4);
#endif

#if FW_VERSION == 352
void func_00013AD4(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013AD4(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEii(arg0 + 8);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013AF0);
#endif

#if FW_VERSION == 352
void func_00013AF0(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013AF0(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEif(arg0 + 8);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013B0C);
#endif

#if FW_VERSION == 352
void func_00013B0C(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013B0C(s32 arg0) {
    _ZN3paf9PhSRender8SetStyleEiRK4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013B28);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013B6C);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013BAC);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013BE8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013C28);

void func_00013C4C(struct Unk_vt_func_00013C4C_arg0 **arg0) {
    (*arg0)->unk10();
}

void func_00013C70(struct Unk_vt_func_00013C70_arg0 **arg0) {
    (*arg0)->unk14();
}

void func_00013C94(struct Unk_vt_func_00013C94_arg0 **arg0) {
    (*arg0)->unk18();
}

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013CB8);

void func_00013CDC(struct Unk_vt_func_00013CDC_arg0 **arg0) {
    (*arg0)->unk20();
}

void func_00013D00(struct Unk_vt_func_00013D00_arg0 **arg0) {
    (*arg0)->unk24();
}

void func_00013D24(struct Unk_vt_func_00013D24_arg0 **arg0) {
    (*arg0)->unk28();
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013D48);
#endif

#if FW_VERSION == 352
void func_00013D48(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013D48(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRb(arg0 + 8);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013D64);
#endif

#if FW_VERSION == 352
void func_00013D64(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013D64(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRi(arg0 + 8);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013D80);
#endif

#if FW_VERSION == 352
void func_00013D80(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013D80(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiRf(arg0 + 8);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013D9C);
#endif

#if FW_VERSION == 352
void func_00013D9C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

#if FW_VERSION < 350
void func_00013D9C(s32 arg0) {
    _ZNK3paf9PhSRender8GetStyleEiR4vec4(arg0 + 8);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013DB8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013DF8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013E38);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013E78);

void func_00013EB8(void) {
}

s32 func_00013EC0(void) {
    return -1;
}

s32 func_00013EC8(void) {
    return -1;
}

s32 func_00013ED0(void) {
    return -1;
}

s32 func_00013ED8(void) {
    return -1;
}

s32 func_00013EE0(void) {
    return 0;
}

s32 func_00013EE8(void) {
    return 0;
}

s32 func_00013EF0(void) {
    return 1;
}

void func_00013EF8(void) {
}

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013F00);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013F6C);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A838);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A878);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A910);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A9A8);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A9C0);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A9D0);

INCLUDE_RODATA("nonmatchings/premo_plugin_011B50", D_0002A9D8);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00013FE0);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000141F0);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00014248);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_000142A0);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00014300);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_0001432C);

INCLUDE_ASM("nonmatchings/premo_plugin_011B50", func_00014368);
#endif
