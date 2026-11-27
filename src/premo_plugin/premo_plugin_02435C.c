/* lang: c++ */
#include "common.h"
#include "premo_plugin_decls.h"

void func_0002435C(struct Unk_vt_func_0002435C_arg0 **arg0) {
    (*arg0)->unk54();
}

void func_00024380(struct Unk_vt_func_00024380_arg0 **arg0) {
    (*arg0)->unk58();
}

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000243A4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000243B8);
#endif

#if FW_VERSION == 352
void func_000243A4(struct Unk_func_000243A4_0 *arg0) {
    arg0->unk0 = &D_0002C150;
    arg0->unkC = 0;
}

void func_000243B8(struct Unk_func_000243B8_0 *arg0) {
    arg0->unk0 = &D_0002C150;
    arg0->unkC = 0;
}
#endif

void func_000243CC(M2C_UNK **arg0) {
    *arg0 = &D_0002C150;
}

void func_000243DC(M2C_UNK **arg0) {
    *arg0 = &D_0002C150;
}

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001C404);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001C414);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000243EC);
#else
void func_000243EC(M2C_UNK **arg0) {
    *arg0 = &D_0002C150;
    scePaf_6261C0A5((s32) arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C080);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024414);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001C44C);
#endif

s32 func_000244BC(struct Unk_func_000244BC_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C30;
    temp_v0 = arg0->unk4;
    if (temp_v0 >= 0) {
        var_v1 = sceHttpDeleteConnection(temp_v0);
    }
    arg0->unk4 = -1;
    return var_v1;
}

s32 func_00024508(struct Unk_func_00024508_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C31;
    temp_v0 = arg0->unk8;
    if (temp_v0 >= 0) {
        var_v1 = sceHttpDeleteRequest(temp_v0);
    }
    arg0->unk8 = -1;
    return var_v1;
}

s32 func_00024554(struct Unk_func_00024508_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C31;
    temp_v0 = arg0->unk8;
    if (temp_v0 >= 0) {
        var_v1 = sceHttpAbortRequest(temp_v0);
    }
    return var_v1;
}

s32 func_0002458C(struct Unk_func_0002458C_0 *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk8;
    var_v1 = 0x80108C31;
    if (temp_v0 >= 0) {
        var_v1 = sceHttpSendRequest(temp_v0, NULL, 0U);
    }
    if (var_v1 == 0x80431063) {
        sceHttpGetNetworkPspError(arg0->unk8, &sp0);
        var_v1 = sp0;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000245F8);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024644);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000246DC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024760);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000247EC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024860);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024884);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024900);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024924);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000249A4);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024A24);
#endif

#if FW_VERSION == 352
void func_00024A24(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_0002C1D0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &D_0002B7F0;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_0002AE78;
    func_000243CC(arg0);
}
#endif

#if FW_VERSION < 350
void func_00024A24(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_0002C1D0;
    M2C_FIELD(arg0, M2C_UNK **, 0x44) = &D_0002B7F0;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_0002AE78;
    func_0001C404();
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024A64);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024AA4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024AF4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024B78);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024BE0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C150);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C168);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024C20);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024D94);

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024DE0);
#else
s32 func_00024DE0(struct Unk_func_00024DE0_0 *arg0) {
    arg0->unk28 = 0;
    func_0001B284((u8 *)arg0 + 0x30);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024E04);

#if FW_VERSION >= 330 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024E7C);
#endif

#if FW_VERSION < 330
s32 func_00024E7C(struct Unk_func_00024508_0 *arg0, s32 arg1) {
    void **temp_a0;

    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    sceHttpSetConnectTimeOut(arg0->unk4, 0x2DC6C0);
    sceHttpSetRecvTimeOut(arg0->unk4, 0x2DC6C0);
    sceHttpSetSendTimeOut(arg0->unk4, 0x2DC6C0);
    temp_a0 = M2C_FIELD(arg0, void ***, 0xF0);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK), 0x48)(temp_a0, 1);
    if (arg0->unk8 >= 0) {
        func_00024508(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION == 352
s32 func_00024E7C(struct Unk_func_00024508_0 *arg0, s32 arg1) {
    struct Unk_vt_func_00024E7C_temp_a0 **temp_a0;

    if ((arg1 & 0xFF) == 0) {
        arg0->unk54 = 0;
    }
    sceHttpSetConnectTimeOut(arg0->unk4, 0x2DC6C0);
    sceHttpSetRecvTimeOut(arg0->unk4, 0x2DC6C0);
    sceHttpSetSendTimeOut(arg0->unk4, 0x2DC6C0);
    temp_a0 = arg0->unkF8;
    (*temp_a0)->unk48(temp_a0, 1);
    if (arg0->unk8 >= 0) {
        func_00024554(arg0);
        func_00024508(arg0);
    }
    return 0;
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024F10);
#endif

#if FW_VERSION == 352
s32 func_00024F10(struct Unk_func_00024F10_0 *arg0, s32 arg1) {
    arg0->unk24 = arg1;
    return 0;
}
#endif

#if FW_VERSION < 350
s32 func_00024F10(struct Unk_func_00024F10_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00024F1C);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025030);
#endif

#if FW_VERSION == 352
void func_00025030(struct Unk_func_00025030_0 *arg0, s32 arg1) {
    arg0->unk100 = arg1;
}
#endif

#if FW_VERSION < 350
void func_00025030(struct Unk_func_00025030_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xF8) = arg1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001CF18);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001D058);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001D2A0);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001D3B0);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025038);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025338);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025604);
#endif

#if FW_VERSION == 352
void func_00025850(s32 arg0) {
    func_00024A64(arg0 - 0x4C);
}

void func_0002586C(s32 arg0) {
    func_00024A64(arg0 - 0x30);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025888);
#endif

#if FW_VERSION < 350
void func_00025888(s32 arg0) {
    func_00024A64(arg0 - 0x44);
}
#endif

#if FW_VERSION == 352
void func_00025888(s32 arg0) {
    func_00024AA4(arg0 - 0x4C);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258A4);
#endif

#if FW_VERSION < 350
void func_000258A4(s32 arg0) {
    func_00024A64(arg0 - 0x2C);
}
#endif

#if FW_VERSION == 352
void func_000258A4(s32 arg0) {
    func_00024AA4(arg0 - 0x30);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258C0);
#endif

#if FW_VERSION < 350
void func_000258C0(s32 arg0) {
    func_00024AA4(arg0 - 0x44);
}
#endif

#if FW_VERSION == 352
void func_000258C0(s32 arg0) {
    func_00025038(arg0 - 0x30);
}
#endif

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258DC);
#endif

#if FW_VERSION < 350
void func_000258DC(s32 arg0) {
    func_00024AA4(arg0 - 0x2C);
}
#endif

#if FW_VERSION == 352
void func_000258DC(s32 arg0) {
    func_00024E04(arg0, 0);
}
#else
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258F8);
#endif

#if FW_VERSION == 351
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258DC_v351);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258F8_v351);
#endif

#if FW_VERSION == 350
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258DC_v350);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000258F8_v350);
#endif

#if FW_VERSION == 352
void func_000258F8(struct Unk_func_00024508_0 *arg0) {
    func_00024E7C(arg0, 0);
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025914);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025954);

void func_00025994(void) {
}

void func_0002599C(void) {
}

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C1D0);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000259A4);

#if FW_VERSION >= 350 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025A70);
#endif

#if FW_VERSION == 352
s32 func_00025A70(struct Unk_func_00025A70_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk40;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk20 = 0;
    if (temp_v0 >= 0) {
        sceHttpDeleteTemplate(temp_v0);
    }
    arg0->unk40 = -1;
    return 0;
}
#endif

#if FW_VERSION < 350
s32 func_00025A70(struct Unk_func_00025A70_0 *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk20 = 0;
    if (temp_v0 >= 0) {
        sceHttpDeleteTemplate(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025AC4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025B08);
#else
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001D708);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025CB4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025DAC);

s32 func_00025E4C(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025E54);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025F18);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00025FC8);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026084);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026100);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000261CC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026218);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026264);

s32 func_000262B0(struct Unk_func_000262B0_0 *arg0) {
    struct Unk_vt_func_000262B0_temp_a0 **temp_a0;

    temp_a0 = arg0->unkC;
    (*temp_a0)->unk10(temp_a0);
    func_000244BC(( Unk_func_000244BC_0*) arg0->unkC);
    func_00024DE0(( Unk_func_00024DE0_0*) arg0->unkC);
    arg0->unk1C = 1;
    return 0;
}

s32 func_00026300(struct Unk_func_000262B0_0 *arg0) {
    struct Unk_vt_func_00026300_temp_a0 **temp_a0;

    if (arg0->unk20 != 0) {
        temp_a0 = arg0->unk0;
        (*temp_a0)->unk58(temp_a0);
        arg0->unk20 = 0U;
    }
    if (arg0->unk1C != 0) {

    } else {
        func_000262B0(arg0);
    }
    if (arg0->unk18 != 0) {

    } else {
        func_00026264((s32) arg0);
    }
    if (arg0->unk14 != 0) {

    } else {
        func_00026218((s32) arg0);
    }
    if (arg0->unk10 != 0) {

    } else {
        func_000261CC(arg0);
    }
    return 0;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000263B8);
#else
s32 func_0001E038(struct Unk_func_00023230_0 **arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    var_a3 = 0;
    if (arg1 == 1) {
        var_a3 = func_00023230(*arg0, arg1, arg2);
    }
    return var_a3;
}
#endif

s32 func_00026400(struct Unk_func_00026400_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    var_a3 = 0x80108C63;
    if (arg0->unk10 != 1) {
        var_a3 = func_00023284(arg0->unk0, arg1, arg2);
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026438);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000264CC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026540);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C258);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C2B8);
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025700);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025710);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025718);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025720);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025730);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025740);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025760);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000257A0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000257E0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000257EC);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000257F4);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000257FC);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025808);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025818);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025838);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025878);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025898);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000258A0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000258B0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_000258D0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025910);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025990);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025A90);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025AB8);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025ACC);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025AE8);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025B0C);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025B48);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025BC4);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025CC0);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025CD8);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025D58);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025D64);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025D6C);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025DEC);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025E4C);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_00025EA8);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0002655C);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000265A8);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000265F4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026634);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026674);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000266BC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026818);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000268C4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000268F0);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026954);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026A7C);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026AE0);

s32 func_00026BDC(struct Unk_func_00026BDC_0 *arg0) {
    return arg0->unk5C;
}

s32 func_00026BE4(struct Unk_func_00026BE4_0 *arg0) {
    return 5 - arg0->unk5C;
}

s32 func_00026BF4(struct Unk_func_00026BF4_0 *arg0, s32 arg1) {
    s32 var_a3;

    arg0->unk2C = 0;
    var_a3 = 0x80108C44;
    if (arg0->unk30 != 0) {
        var_a3 = 0;
        if ((u32) arg0->unk5C >= (u32) (5 - arg1)) {
            var_a3 = func_00021BB8((s32) ((u8 *)arg0 + 4), arg1);
        }
    }
    return var_a3;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026C50);

void func_00026C90(s32 arg0) {
    func_00021E28(arg0 + 4);
}

void *func_00026CAC(struct Unk_func_00026CAC_0 *arg0) {
    return (u8 *)arg0 + (arg0->unk68 * 0x1C) + 0x80;
}

s32 func_00026CCC(void) {
    return 0x80004001;
}

s32 func_00026CD8(void) {
    return 0x80004001;
}

s32 func_00026CE4(void) {
    return 0x80004001;
}

s32 func_00026CF0(s32 arg0) {
    func_00021EB8(arg0 + 4);
    return 0;
}

s32 func_00026D10(void) {
    return 0x80004001;
}

void func_00026D1C(struct Unk_func_00026D1C_0 *arg0) {
    arg0->unk30 = 1;
}

void func_00026D28(struct Unk_func_00026D28_0 *arg0) {
    arg0->unk30 = 0;
}

s32 func_00026D30(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026D38);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026D94);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026DF0);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026E30);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026E70);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00026EB8);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000270A4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000271F0);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000272E0);

s32 func_00027374(void) {
    return 0x80004001;
}

s32 func_00027380(void) {
    return 0x80004001;
}

s32 func_0002738C(void) {
    return 0x80004001;
}

s32 func_00027398(void) {
    return 0x80004001;
}

s32 func_000273A4(s32 arg0) {
    func_00021EB8(arg0 + 4);
    return 0;
}

s32 func_000273C4(void) {
    return 0x80004001;
}

s32 func_000273D0(void) {
    return 0x80004001;
}

void func_000273DC(struct Unk_func_000273DC_0 *arg0) {
    arg0->unk30 = 1;
}

void func_000273E8(struct Unk_func_000273E8_0 *arg0) {
    arg0->unk30 = 0;
}

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000273F0);
#else
s32 func_000273F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F064);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F09C);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F0EC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F15C);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F1DC);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F2C8);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F35C);
#endif

#if FW_VERSION == 311
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F38C_v311);
#endif

#if FW_VERSION == 310
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F38C_v310);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0001F4B4);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00020000);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0002000C);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00020E70);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00021008);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0002134C);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_0002151C);
#endif

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00027400);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000274C0);

INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_00027590);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/premo_plugin_02435C", func_000275E8);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C258);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C2B8);
#endif

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C310);

INCLUDE_RODATA("nonmatchings/premo_plugin_02435C", D_0002C410);
