#include "common.h"
#include "premo_plugin_decls.h"

void func_0002435C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x54)();
}

void func_00024380(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x58)();
}

void func_000243A4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002C150;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
}

void func_000243B8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_0002C150;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
}

void func_000243CC(M2C_UNK **arg0) {
    *arg0 = &D_0002C150;
}

void func_000243DC(M2C_UNK **arg0) {
    *arg0 = &D_0002C150;
}

void func_000243EC(M2C_UNK **arg0) {
    *arg0 = &D_0002C150;
    scePaf_6261C0A5((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C080);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024414);

s32 func_000244BC(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C30;
    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 >= 0) {
        var_v1 = sceHttpDeleteConnection(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 4) = -1;
    return var_v1;
}

s32 func_00024508(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C31;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 >= 0) {
        var_v1 = sceHttpDeleteRequest(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = -1;
    return var_v1;
}

s32 func_00024554(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80108C31;
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 >= 0) {
        var_v1 = sceHttpAbortRequest(temp_v0);
    }
    return var_v1;
}

s32 func_0002458C(void *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    var_v1 = 0x80108C31;
    if (temp_v0 >= 0) {
        var_v1 = sceHttpSendRequest(temp_v0, NULL, 0U);
    }
    if (var_v1 == 0x80431063) {
        sceHttpGetNetworkPspError(M2C_FIELD(arg0, s32 *, 8), &sp0);
        var_v1 = sp0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000245F8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024644);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000246DC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024760);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000247EC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024860);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024884);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024900);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024924);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000249A4);

void func_00024A24(s32 **arg0) {
    M2C_FIELD(arg0, s32 **, 0) = &D_0002C1D0;
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &D_0002B7F0;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_0002AE78;
    func_000243CC(arg0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024A64);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024AA4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024AF4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024B78);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024BE0);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C150);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C168);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024C20);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024D94);

s32 func_00024DE0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    func_0001B284(arg0 + 0x30);
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024E04);

s32 func_00024E7C(void *arg0, s32 arg1) {
    void **temp_a0;

    if (!(arg1 & 0xFF)) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
    sceHttpSetConnectTimeOut(M2C_FIELD(arg0, s32 *, 4), 0x2DC6C0);
    sceHttpSetRecvTimeOut(M2C_FIELD(arg0, s32 *, 4), 0x2DC6C0);
    sceHttpSetSendTimeOut(M2C_FIELD(arg0, s32 *, 4), 0x2DC6C0);
    temp_a0 = M2C_FIELD(arg0, void ***, 0xF8);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK), 0x48)(temp_a0, 1);
    if (M2C_FIELD(arg0, s32 *, 8) >= 0) {
        func_00024554(arg0);
        func_00024508(arg0);
    }
    return 0;
}

s32 func_00024F10(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00024F1C);

void func_00025030(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x100) = arg1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025038);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025338);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025604);

void func_00025850(s32 arg0) {
    func_00024A64(arg0 - 0x4C);
}

void func_0002586C(s32 arg0) {
    func_00024A64(arg0 - 0x30);
}

void func_00025888(s32 arg0) {
    func_00024AA4(arg0 - 0x4C);
}

void func_000258A4(s32 arg0) {
    func_00024AA4(arg0 - 0x30);
}

void func_000258C0(s32 arg0) {
    func_00025038(arg0 - 0x30);
}

void func_000258DC(s32 arg0) {
    func_00024E04(arg0, 0);
}

void func_000258F8(void *arg0) {
    func_00024E7C(arg0, 0);
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025914);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025954);

void func_00025994(void) {
}

void func_0002599C(void) {
}

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C1D0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000259A4);

s32 func_00025A70(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
    if (temp_v0 >= 0) {
        sceHttpDeleteTemplate(temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 0x40) = -1;
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025AC4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025B08);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025CB4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025DAC);

s32 func_00025E4C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025E54);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025F18);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00025FC8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026084);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026100);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000261CC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026218);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026264);

s32 func_000262B0(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0xC);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x10)(temp_a0);
    func_000244BC(M2C_FIELD(arg0, void ***, 0xC));
    func_00024DE0(M2C_FIELD(arg0, void ***, 0xC));
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    return 0;
}

s32 func_00026300(void *arg0) {
    void **temp_a0;

    if (M2C_FIELD(arg0, u8 *, 0x20) != 0) {
        temp_a0 = M2C_FIELD(arg0, void ***, 0);
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x58)(temp_a0);
        M2C_FIELD(arg0, u8 *, 0x20) = 0U;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {

    } else {
        func_000262B0(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {

    } else {
        func_00026264((s32) arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {

    } else {
        func_00026218((s32) arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {

    } else {
        func_000261CC(arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000263B8);

s32 func_00026400(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a3;

    var_a3 = 0x80108C63;
    if (M2C_FIELD(arg0, s32 *, 0x10) != 1) {
        var_a3 = func_00023284(M2C_FIELD(arg0, s32 *, 0), arg1, arg2);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026438);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000264CC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026540);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_0002655C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000265A8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000265F4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026634);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026674);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000266BC);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026818);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000268C4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000268F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026954);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026A7C);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026AE0);

s32 func_00026BDC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C);
}

s32 func_00026BE4(void *arg0) {
    return 5 - M2C_FIELD(arg0, s32 *, 0x5C);
}

s32 func_00026BF4(void *arg0, s32 arg1) {
    s32 var_a3;

    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    var_a3 = 0x80108C44;
    if (M2C_FIELD(arg0, u8 *, 0x30) != 0) {
        var_a3 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) >= (u32) (5 - arg1)) {
            var_a3 = func_00021BB8((s32) (arg0 + 4), arg1);
        }
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026C50);

void func_00026C90(s32 arg0) {
    func_00021E28(arg0 + 4);
}

void *func_00026CAC(void *arg0) {
    return arg0 + (M2C_FIELD(arg0, s32 *, 0x68) * 0x1C) + 0x80;
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

void func_00026D1C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}

void func_00026D28(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}

s32 func_00026D30(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026D38);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026D94);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026DF0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026E30);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026E70);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00026EB8);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000270A4);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000271F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000272E0);

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

void func_000273DC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}

void func_000273E8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000273F0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00027400);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000274C0);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_00027590);

INCLUDE_ASM("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", func_000275E8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C258);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C2B8);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C310);

INCLUDE_RODATA("tmp/asm/352/premo_plugin/nonmatchings/premo_plugin_02435C", D_0002C410);
