/* lang: c++ */
#include "common.h"
#include "video_main_plugin_decls.h"

void func_0000664C(void) {
}

void func_00006654(void) {
}

void func_0000665C(void) {
}

void func_00006664(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000666C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000066B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000066FC);

s32 func_00006728(void) {
    return D_000569B8;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00006734);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00006774);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000079F0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051DD8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052BE0);
#else
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051E00);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051ED8);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00006718);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00006C84);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00006818);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00006894);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00007B04);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00008C6C);

u8 func_00008E20(void *arg0) {
    u8 temp_v0;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_v0_2;

    temp_v0 = func_0003824C(M2C_FIELD(arg0, s32 *, 0xAC));
    M2C_FIELD(arg0, u8 *, 0xC0) = temp_v0;
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = M2C_FIELD(arg0, void ***, 0xB4);
        M2C_FIELD(*temp_v0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(temp_v0_2, 2, 0, 0);
        temp_a0 = M2C_FIELD(arg0, void ***, 0xB4);
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(temp_a0, 1, 0, 0);
        temp_a0_2 = M2C_FIELD(arg0, void ***, 0xB4);
        M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(temp_a0_2, 0, 0, 0);
    }
    return M2C_FIELD(arg0, u8 *, 0xC0);
}

s32 func_00008E70(struct Unk_func_00008E70_0 *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = arg1 & 0xFF;
    var_a2 = 0;
    if (arg0->unkC0 != 0) {
        if (temp_v1 != 0) {
            arg0->unkC0 = 0;
        }
        var_a2 = func_00038458(arg0->unkAC, temp_v1);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00008EF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009058);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000091A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009268);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009398);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009380);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009404);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000095A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000095E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000099EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B64);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B70);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009C2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009EE8);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051EF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051F28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051F44);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051F60);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051F84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051FB0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051FD0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051FEC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052004);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005201C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005203C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052050);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005206C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052084);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052098);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000520AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000520BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000520D0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000520E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052100);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052110);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005212C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052140);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052150);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052168);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052188);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521A4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521F4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052218);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005222C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005223C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052254);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052264);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052270);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005227C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052288);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052294);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000522A8);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00008C6C);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
u8 func_00008DD8(struct Unk_func_00008DD8_0 *arg0) {
    u8 temp_v0;
    void **temp_a0;
    void **temp_a0_2;
    void **temp_v0_2;

    temp_v0 = func_0003824C(arg0->unkAC);
    arg0->unkC0 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = arg0->unkB4;
        M2C_FIELD(*temp_v0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(temp_v0_2, 2, 0, 0);
        temp_a0 = arg0->unkB4;
        M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(temp_a0, 1, 0, 0);
        temp_a0_2 = arg0->unkB4;
        M2C_FIELD(*temp_a0_2, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x60)(temp_a0_2, 0, 0, 0);
    }
    return arg0->unkC0;
}
#endif

#if FW_VERSION < 300
u8 func_00008DD8(struct Unk_func_00008DD8_0 *arg0) {
    u8 temp_v0;
    struct Unk_vt_func_00008DD8_temp_a0 **temp_a0;
    struct Unk_vt_func_00008DD8_temp_a0_2 **temp_a0_2;
    struct Unk_vt_func_00008DD8_temp_v0_2 **temp_v0_2;

    temp_v0 = func_0003824C(arg0->unkAC);
    arg0->unkC0 = temp_v0;
    if (temp_v0 == 0) {

    } else {
        temp_v0_2 = arg0->unkB4;
        (*temp_v0_2)->unkC8(temp_v0_2, 2, 0, 0);
        temp_a0 = arg0->unkB4;
        (*temp_a0)->unkC8(temp_a0, 1, 0, 0);
        temp_a0_2 = arg0->unkB4;
        (*temp_a0_2)->unkC8(temp_a0_2, 0, 0, 0);
    }
    return arg0->unkC0;
}
#endif

#if FW_VERSION < 310
s32 func_00008E70(struct Unk_func_00008E70_0 *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = arg1 & 0xFF;
    var_a2 = 0;
    if (arg0->unkC0 != 0) {
        if (temp_v1 != 0) {
            arg0->unkC0 = 0U;
        }
        var_a2 = func_00038458(arg0->unkAC, temp_v1);
    }
    return var_a2;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00008EB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00008FF0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000913C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009200);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009330);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009380);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009404);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009540);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000095E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009984);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B1C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B30);

M2C_UNK *func_00009B64(void) {
    return &D_000522D4;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009B70);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009C2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00009EE8);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000522D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A040);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A108);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A1F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A2EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A3E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A4D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A5C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A5F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A7F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000A9C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000AA94);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000AC50);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000AD68);

void func_0000AE88(void) {
    func_0000AEA4();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000AEA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000AED0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B038);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B0A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B0BC);

M2C_UNK *func_0000B0F0(void) {
    return &D_00052478;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B0FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B1B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B1F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052398);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523D0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052448);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052478);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B240);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000532B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000532C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000532F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053320);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B900);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B950);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BFF4);
#else
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000524C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000524E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052508);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052538);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000B9A8);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BA1C);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BAB0);
#else
void func_0000BAB0(void) {
    if (D_00057238 != 0) {
        _ZN3vsh10FixedAlloc6UnlockEPKc(_ZN3vsh10FixedAlloc8InstanceEv(), &D_00053320);
        D_00057238 = 0;
        D_0005723C = 0;
        D_00057240 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BB08);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050748);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050750);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005075C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BCF0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BD2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BD68);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BDEC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00028570);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BE38);

void func_000286B4(void) {
    sceIoClose();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000286D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000286EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000287AC);

s32 func_00028838(u32 arg0, u32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg1 >= 4U) {

    } else {
        var_v0 = sceIoDclose(arg0);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00028868);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C0E8_v271);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C1EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C340);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C390);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C3E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C4A4);

void func_00028D98(struct Unk_func_00028D98_0 *arg0, s32 arg1) {
    arg0->unk330 = arg1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00028DA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00028DB8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00028DE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C748);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00029198);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000291E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CA28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000507C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000507D8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053D78);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000508B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CACC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00029334);

void func_0000CB90(M2C_UNK **arg0) {
    *arg0 = &D_00053D78;
}

void func_0000CBA0(M2C_UNK **arg0) {
    *arg0 = &D_00053D78;
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CBC8);

s32 func_0000CBF4(void) {
    return D_00056A84;
}

void func_000293E0(void) {
    func_0000CC48();
    func_0000CCAC();
}

void func_00029404(void) {
    func_0000CC7C();
    func_0000CCE0();
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CC48);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CC7C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CCAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CCE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CD10);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CE70);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CF6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D050);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D134);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D220);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D500);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D864);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D910);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D950);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050984);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005098C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050994);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005099C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509A4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509D4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509F4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000509FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050A04);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050A0C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050A44);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050A50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050A5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050A68);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050AA0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050AB8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050AD8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050AF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B10);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B2C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B30);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B34);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B38);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DA30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002A244);

void func_0000DB68(s32 arg0) {
    func_0000E084(arg0);
    func_0000E750(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DB94);

void func_0000DE54(s32 arg0, s32 arg1) {
    if (func_0000DECC(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = arg1;
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DE8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DECC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E084);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E0CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050B60);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E3BC);

void func_0000E700(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0x1C) != 2) {

    } else {
        if (M2C_FIELD(arg0, u8 *, 0x1FD) != 0) {
            M2C_FIELD(arg0, s8 *, 0x1FE) = 0;
            M2C_FIELD(arg0, u8 *, 0x1FD) = 0U;
        } else {
            M2C_FIELD(arg0, u8 *, 0x1FD) = 1U;
            M2C_FIELD(arg0, s8 *, 0x1FE) = 1;
        }
        _ZN3paf8PhWidget13UpdateCamerasEv(arg0);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E750);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002AF8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E908);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E9F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002B3AC);

void func_0000ECC0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_00011AE4();
    func_00011914((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
}

void func_0000ED00(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    func_00011AE4();
    func_00011914((s32) arg0, M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x48) = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002B520);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002BA78);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002BB1C);

s32 func_0000F3FC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x50);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F404);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F514);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F718);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F8C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FA54);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FC2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FD9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FE20);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FED4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010024);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002C914);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002C950);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002C98C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002C9C8);

s32 func_0002CA04(struct Unk_func_0002CA04_0 *arg0) {
    if (arg0->unk50 != 1) {
        return arg0->unk3C;
    }
    return arg0->unk40;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CA24);

void func_0002CA84(s32 arg0, s32 arg1) {
    sce_paf_private_memcpy(arg0 + 0x54, arg1, 0x21);
}

s32 func_0002CAA4(s32 arg0) {
    return arg0 + 0x54;
}

s32 func_0002CAAC(struct Unk_func_0002CAAC_0 *arg0) {
    return arg0->unk78;
}

s32 func_0002CAB4(struct Unk_func_0002CAB4_0 *arg0, s32 arg1) {
    arg0->unk80 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CAC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CAFC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010358);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CBA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001048C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CD38);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CE30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CEAC);

void func_0002CF60(struct Unk_func_0002CF60_0 *arg0) {
    arg0->unk28 = 1;
}

void func_0002CF6C(struct Unk_func_0002CF6C_0 *arg0) {
    arg0->unk28 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002CF74);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002D040);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000108FC_v271);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002D1C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010A1C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050D90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050D94);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050DB4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050DCC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050DE4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050DFC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050E14);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050E2C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050E44);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050E5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050E74);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050E8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050EA0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050EB8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050ED0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050EE8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F04);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F1C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F38);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F54);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F70);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050F8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050FA8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050FCC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050FE8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051008);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051028);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051030);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051038);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010AF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010D60);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002D754);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010FB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001102C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011108);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011184);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011260);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000113D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011574);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000115DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000116A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011708);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002DFAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011868);

s32 func_000118AC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002E094);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011914);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001198C);

u8 func_00011A28_v271(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x20);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011A30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011A8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011AE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011AEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011B3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011B80);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011BC4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051068);

s32 func_00011CC0(void *arg0) {
    s32 var_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xC);
    var_v0 = 0;
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(temp_v1, s32 *, 8);
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011CD8);

u8 func_00011D24(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x35);
}

u8 func_00011D2C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x37);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011D34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011D94);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011FD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000121B8);

void func_0001234C(void) {
    func_000001F8(1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012368);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000124A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012510);

s32 func_000125A4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38);
}

void func_000125AC(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x38) + 1;
    func_0001198C((s32) arg0, (temp_a1 >= 3) ? 0 : temp_a1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000125D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001270C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000127BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012850);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001294C);

void func_00012AA4(s32 arg0, s32 arg1, s32 arg2) {
    func_00011260(arg0, arg1, arg2);
}

void func_00012AC0(s32 arg0, s32 arg1, s32 arg2) {
    func_000113D0(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012ADC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012B8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002F3C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002F3FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002F438);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012D80);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002F5CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012E2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012E60);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012F18);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012F6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012FB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012FF4);

void func_00013040(s32 arg0) {
    func_00037354(arg0, 0);
}

void func_0001305C(void) {

}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013064);

s32 func_000130DC(void) {
    return D_000553A0 < 1;
}

void func_000130EC(void *arg0) {
    _ZN3paf4View11ForEachPageEPFbPS0_PvS2_ES2_(M2C_FIELD(arg0, s32 *, 4), &func_00013118, arg0 + 0x2C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013118);

void func_00013174(void *arg0) {
    _ZN3paf4View11ForEachPageEPFbPS0_PvS2_ES2_(M2C_FIELD(arg0, s32 *, 4), &func_000131A0, arg0 + 0x2C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000131A0);

void func_00013204(void) {
    if ((D_00055394 == NULL) || (M2C_FIELD(D_00055394, u8 *, 0x94) == 0)) {
        func_00002180();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001323C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001343C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013474);

void func_00013574(void) {
    s32 temp_v0;

    temp_v0 = D_000553A0 - 1;
    D_000553A0 = temp_v0;
    if (temp_v0 > 0) {

    } else {
        func_00012E2C();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002FD8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051128);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002FEE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013794);

void func_000137D0(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            sce_paf_private_free2(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    sce_paf_private_free2(var_a0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013828);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000138A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013904);

void func_00013DF4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00051158;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void func_00013E10(M2C_UNK **arg0) {
    *arg0 = &D_00051158;
    D_000553A8 = 0;
}

void func_00013E28_v271(M2C_UNK **arg0) {
    *arg0 = &D_00051158;
    D_000553A8 = 0;
}

void func_00013E40(M2C_UNK **arg0) {
    *arg0 = &D_00051158;
    D_000553A8 = 0;
    _ZdlPv((s32) arg0);
}

void *func_0003064C(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = D_000553A8;
    if (var_v0 == 0) {
        temp_v0 = _Znwj(0x10);
        func_00013DF4(temp_v0, arg0, arg1);
        D_000553A8 = (s32) temp_v0;
        var_v0 = (s32) temp_v0;
    }
    return (void *) var_v0;
}

s32 func_00013EE0(void) {
    return D_000553A8;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013EEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013F74);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051158);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051180);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051194);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000511A4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000511B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000511CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000511E0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000511FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051210);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051224);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005123C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051250);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051268);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051280);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051294);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512F4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005130C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005131C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051334);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051348);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051360);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051378);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051394);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000513AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000513B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000513C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000513DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000513E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000513FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051408);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051414);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051430);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005143C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005145C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051468);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005148C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005149C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000514B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000514C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000514E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000514F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005150C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051514);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005152C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051534);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005154C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051558);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051560);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051578);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051584);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051590);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000515B0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000515BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000515DC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000515E4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000515FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051608);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051610);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005162C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051638);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051640);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051658);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051664);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051670);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051688);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051694);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005169C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000516B4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000516C0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000516CC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000516E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000516F4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005170C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005171C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051728);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051740);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00030874);

void func_000141E0(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_000312E8();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        if (func_0002CAC0(temp_v0) == 0) {
            func_00031154(0);
            if (func_0002DFAC(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
                func_0002CD38(M2C_FIELD(arg0, s32 *, 0xC));
            } else {
                func_0002CBA0(M2C_FIELD(arg0, s32 *, 0xC));
            }
            func_0002CAFC(M2C_FIELD(arg0, s32 *, 0xC));
        }
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

void func_0001428C(void *arg0) {
    s32 temp_s1;

    temp_s1 = func_000312E8();
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_00031154(0);
        func_00010FB0(M2C_FIELD(arg0, s32 *, 0xC), 0);
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

void func_00014304(void *arg0) {
    s32 temp_s1;

    temp_s1 = func_000312E8();
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_00031154(0);
        func_00011108(M2C_FIELD(arg0, s32 *, 0xC), 0);
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001437C);

void func_0001442C(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_s1 = func_000312E8();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        if (func_0002CAC0(temp_v0) == 0) {
            func_00031154(0);
            temp_v0_2 = func_0002DFAC(M2C_FIELD(arg0, s32 *, 0xC));
            if (temp_v0_2 != 4) {
                if (temp_v0_2 == 5) {
                    func_0002CD38(M2C_FIELD(arg0, s32 *, 0xC));
                }
            } else {
                func_0002CBA0(M2C_FIELD(arg0, s32 *, 0xC));
            }
            func_0002CAFC(M2C_FIELD(arg0, s32 *, 0xC));
        }
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000144F0);

void func_00014568(void *arg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = func_000312E8();
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        if (func_0002CAC0(temp_v0) == 0) {
            func_00031154(0);
            if ((u32) (func_0002DFAC(M2C_FIELD(arg0, s32 *, 0xC)) - 2) < 2U) {
                func_0002D754(M2C_FIELD(arg0, s32 *, 0xC));
            }
            func_0002CAFC(M2C_FIELD(arg0, s32 *, 0xC));
        }
    }
    if (temp_s1 != func_000312E8()) {

    } else {
        func_00031320();
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014614);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014654);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00030EE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00031030);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00031094);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00031108);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00031154);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000149CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00031268);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000312E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00031320);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014B74);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014BAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000313D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014C94);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014CCC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014D08);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014D3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014D74);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014E34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014E90);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001523C);

s32 func_00015338(s32 arg0) {
    void *temp_v1;

    func_000001B8((s32) &func_00015CD8, arg0);
    temp_v1 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_v1 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_v1, s32 *, 0x4D8);
    }
    M2C_FIELD(arg0, void **, 0x20) = NULL;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015388);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000156F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000158DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001591C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015974);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015B38);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015BC4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015C28);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015CD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015D04);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015D2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00032534);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005193C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051940);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051944);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00032630);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016018);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051960);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051980);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051998);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000519C8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000519F0);

void func_000160B0(void) {
    func_00016018(1, 0xFFFF);
}

void func_000160D0(M2C_UNK **arg0) {
    *arg0 = &D_00051960;
    D_00081DF0 = 0;
    func_00036CC0((s32) arg0);
}

void func_000160FC(M2C_UNK **arg0) {
    *arg0 = &D_00051960;
    D_00081DF0 = 0;
    func_00036CC0((s32) arg0);
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001613C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000161C0);

void func_00016244(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00051998;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000519C8;
}

void func_00016284(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00051998;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000519C8;
}

void func_000162C4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00051998;
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x44));
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_000519C8;
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001630C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000163F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001646C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000164E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016554);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BE70);
#endif

#if FW_VERSION == 271
s32 func_0000BF44(void) {
    D_00057211 = 1;
    return 0;
}
#else
s32 func_0000BF44(void) {
    return (D_00057254 == 0) ? 0 : (D_00057254 + 0x3C);
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000165CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016648);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000166BC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016730);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000167A4);

void func_00016818(M2C_UNK **arg0) {
    *arg0 = &D_000519C8;
}

void func_00016828(M2C_UNK **arg0) {
    *arg0 = &D_000519C8;
    _ZdlPv((s32) arg0);
}

s32 func_00016850(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016858);

s32 func_00016868(void) {
    return 0;
}

s32 func_00016870(void) {
    return 0;
}

s32 func_00016878(void) {
    return 0;
}

s32 func_00016880(void) {
    return 0;
}

s32 func_00016888(void) {
    return 0;
}

s32 func_00016890(void) {
    return 0x1E;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016898);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000169D0);

void func_00016A98(M2C_UNK **arg0) {
    *arg0 = &D_00051D30_v271;
    D_000554A4 = 0;
    func_00036CC0((s32) arg0);
}

void func_00016AC4(M2C_UNK **arg0) {
    *arg0 = &D_00051D30_v271;
    D_000554A4 = 0;
    func_00036CC0((s32) arg0);
}

void func_00016AF0(M2C_UNK **arg0) {
    *arg0 = &D_00051D30_v271;
    D_000554A4 = 0;
    func_00036CC0((s32) arg0);
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016B30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016B94);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051A58);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051A70);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051A7C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051A88_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051A94);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051AA8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051AC4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051AE0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051AFC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B0C_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B20_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B3C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B4C_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B64);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B74);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B80_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051B8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051BA4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051BBC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051BD4_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051BF0_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C0C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C20);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C24);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001759C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001777C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017A1C);

void func_00017A70(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x94) = 0;
    func_000377F4((s32) arg0, 0);
    func_0003737C((s32) arg0, 0, 0);
    func_00017AF0((s32) arg0);
}

void func_00017AB4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x94) = 0;
    func_000377F4((s32) arg0, 0);
    func_00037568((s32) arg0);
    func_00017AF0((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017AF0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017C50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C64);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C6C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C78_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051C88);

void func_000180A0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x94) = (u8) M2C_FIELD(arg0, u8 *, 0x10);
    func_000377F4((s32) arg0, 1);
    func_0003737C((s32) arg0, 0, 0);
}

void func_000180E0(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x94) = (u8) M2C_FIELD(arg0, u8 *, 0x96);
    func_000377F4((s32) arg0, 1);
    func_00037568((s32) arg0);
}

void func_00018118(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x94) != 0) {
        func_00017AB4(arg0);
    } else {
        func_000375CC((s32) arg0);
    }
}

void func_00018150(void) {

}

void func_00018158(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x96) = 1;
    func_0001919C((s32) arg0);
}

void func_0001817C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x96) = 0;
    func_000377F4((s32) arg0, 0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001819C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018288);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018384);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001852C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018590);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000186A4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018800_v271);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018840);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018904);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018AC4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018D04);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018E28);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018F6C);

void func_000190AC(s32 arg0) {
    func_0001759C(arg0);
    func_000196E0(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000190D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001919C);

void func_00019330(s32 arg0) {
    func_0001759C(arg0);
    func_000197B4(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001935C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019538);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019654);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000196E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000197B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000198AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019A20);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019A60);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019A9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019AD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019B10);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019B58);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019BD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019C28);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036468);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036484);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019CB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019D78);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019DCC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019E20);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019E68);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019EB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019EF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019F40);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019F88);

void func_00019FB4(s32 arg0) {
    D_00055470 = func_00016B30(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019FD8);

void func_0001A01C(void) {
    if (D_00055470 != 0) {
        if (M2C_FIELD(D_00055470, u8 *, 0x10) != 0) {
            func_000180E0((void *) D_00055470);
        } else {
            func_000180A0((void *) D_00055470);
        }
    }
}

void func_00036850(void) {
    if (D_00055470 != 0) {
        if (M2C_FIELD(D_00055470, u8 *, 0x10) != 0) {
            func_00017AB4((void *) D_00055470);
        } else {
            func_00017A70((void *) D_00055470);
        }
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036898);

void func_000368CC(void) {
    if ((D_00055470 != 0) && (M2C_FIELD(D_00055470, u8 *, 0x10) != 0)) {
        func_00017AB4((void *) D_00055470);
    }
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036908);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A150);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A184);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051D30_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00055220);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051D68);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051D88);

void func_0001A2E4(void) {
    func_0001A184(1, 0xFFFF);
}

void func_0001A304(void) {
    func_0001A184(0, 0xFFFF);
}

void func_0001A324(M2C_UNK **arg0) {
    *arg0 = &D_00055220;
}

void func_0001A334(M2C_UNK **arg0) {
    *arg0 = &D_00055220;
    _ZdlPv((s32) arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036B48);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036CC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A5A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A67C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00036F4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00037040);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A8CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00037180);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001AAA0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00037354);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0003737C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000373F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000374AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0003751C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00037568);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000375CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00037660);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001AF44);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000377F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B114);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B188);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B274);

void func_0001B2B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B2C4);

void func_0001B384(void) {

}

s32 func_0001B38C(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B394);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00037C64);

void func_0001B55C(void) {
    D_000554C0 = 0;
}

void func_00037D54(void) {
    D_000554C0 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B574);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B5C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B60C);

s32 func_0001B658(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_00010024(temp_v0, arg1, arg2, arg3, arg4);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B690);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B750);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B7D4);

s32 func_0001B818(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000FD9C(temp_v0, arg1 & 0xFF);
    }
    return var_v1;
}

s32 func_0001B854(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000F718(temp_v0, arg1, arg2 & 0xFF);
    }
    return var_v1;
}

s32 func_0001B890(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = *arg0;
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_0000F8C8(temp_v0, arg1, arg2 & 0xFF, arg3 & 0xFF);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B8D0);

s32 func_0001B94C(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_0000FED4(temp_v0, arg1);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B984);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0003824C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051DD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00038458);

s32 func_0001BD38(void) {
    _ZN8PSJSExec16FinalizeExecSyncEv(_ZN3paf4View4FindEPKc(&D_00051DD0) + 0xF8);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BD68);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000385F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BE44);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BE60);

void func_0001BEDC_v271(void) {

}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BEE4_v271);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0003893C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000389C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00038A10);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00038A84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00051E84);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C414);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C47C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C4E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00038D38);

s32 func_00038D88(struct Unk_func_00038D88_0 *arg0, s32 *arg1) {
    struct Unk_func_00038D88_temp_v1 *temp_v1;

    temp_v1 = arg0->unk98;
    *arg1 = temp_v1->unk1954;
    return temp_v1->unk1950;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00038D9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C5D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C614);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00038F70);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C8F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CA2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CB64);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CCA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CCB8);

M2C_UNK *func_0001CCEC(void) {
    return &D_00051E84;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CCF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CF8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D2EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D494);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D58C_v271);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D67C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D79C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D8B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D9D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DAF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DC14);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DD34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DE30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DF58);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E13C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E230);

void func_0001E468(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E474);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E5D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E6B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EA10);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EB3C);

s32 func_0001ED94(void) {
    return 0;
}

s32 func_0001ED9C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EDA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EE48);

void func_0001EE54(void *arg0, void *arg1) {
    func_0001B890(M2C_FIELD(arg1, s32 **, 0x28), M2C_FIELD(arg0, s32 *, 8), (s32) M2C_FIELD(arg0, u8 *, 0xC), (s32) M2C_FIELD(arg0, u8 *, 0xD));
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EE80);

void func_0001EE8C(void *arg0, void *arg1) {
    func_0001B7D4(M2C_FIELD(arg1, s32 *, 0x28), (s32) M2C_FIELD(arg0, u8 *, 6));
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EEB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EEBC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EEE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EEEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EF58);

void func_0001EF64(s32 arg0, void *arg1) {
    func_0001B94C(M2C_FIELD(arg1, s32 **, 0x28), arg0 + 8);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EF8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EF98);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F40C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F56C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F6D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F7E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FA54_v271);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FF84);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020338);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020548);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020688);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020848);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020988_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052130);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005213C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005214C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052158);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005216C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052188_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521A8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521C4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521E8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052208);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052218_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000556F0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000522F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000522FC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052300);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052304);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052308);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005230C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052310);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052314);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052318);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005231C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052320);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052324);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052328);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052338);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052350);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052368);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052380);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052398_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523B0_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523C8_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000523E0);

void func_00020B24(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00020B40(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00020B5C(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00020B78(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00020B94(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00020BB0(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00020BCC(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00020BE8(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

void func_00020C04(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}

void func_00020C20(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020C3C);

void func_00020C78(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            _ZN8PSJSHeap12private_freeEPv(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    _ZN8PSJSHeap12private_freeEPv(var_a0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020CD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020D2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020D88);

void func_00020E08(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020E18(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

void func_00020E40(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020E50(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

void func_00020E78(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020E88(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

void func_00020EB0_v271(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020EC0(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

void func_00020EE8(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020EF8(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

void func_00020F20(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020F30(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

void func_00020F58(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
}

void func_00020F68(M2C_UNK **arg0) {
    *arg0 = &D_000523C8_v271;
    func_00020C20(arg0);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020F90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052434);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052444);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052450);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052460);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052468);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052478_v271);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052480);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BF58);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000BF90);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C03C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C0E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C2B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000C488);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CB14);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000CB9C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D0E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D1E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D2C0);

#if FW_VERSION < 300
s32 func_0000D3A0(struct Unk_vt_func_0000D3A0_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk78(arg0);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D3FC(struct Unk_vt_func_0000D3FC_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk7C(arg0);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D458(struct Unk_vt_func_0000D458_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk80(arg0);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D4B4);

s32 func_0000D518(struct Unk_vt_func_0000D518_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk88(arg0, arg1);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D57C(struct Unk_vt_func_0000D57C_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk8C(arg0, arg1);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D5E0);

s32 func_0000D644(struct Unk_vt_func_0000D644_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk94(arg0, arg1, arg2);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D6B8(struct Unk_vt_func_0000D6B8_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk98(arg0, arg1, arg2);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D72C(struct Unk_vt_func_0000D72C_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unk9C(arg0);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D788);

s32 func_0000D834(struct Unk_vt_func_0000D834_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkA4(arg0, arg1, arg2);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D8A8(struct Unk_vt_func_0000D8A8_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkA8(arg0, arg1, arg2);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D91C(struct Unk_vt_func_0000D91C_arg0 **arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkAC(arg0, arg1, arg2);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D990(struct Unk_vt_func_0000D990_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkB0(arg0, arg1);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000D9F4(struct Unk_vt_func_0000D9F4_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkB4(arg0, arg1);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000DA58(struct Unk_vt_func_0000DA58_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkB8(arg0, arg1);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000DABC(struct Unk_vt_func_0000DABC_arg0 **arg0, M2C_UNK arg1) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkBC(arg0, arg1);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000DB20(struct Unk_vt_func_0000DB20_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkC0(arg0);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

s32 func_0000DB7C(struct Unk_vt_func_0000DB7C_arg0 **arg0) {
    s32 temp_s1;

    (*arg0)->unkC8();
    temp_s1 = (*arg0)->unkC4(arg0);
    (*arg0)->unkCC(arg0);
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DBD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DDA4);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DF94);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E044);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000DB14);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D3FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D458);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D4B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D518);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D57C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000D5E0);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000E5DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000EA6C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000ED28);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000EF94);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F048);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F238);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F390);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000525EC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000525F8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052604);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052614);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052624);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052634);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052648);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052658);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052668);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052678);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005268C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005269C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000526AC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000526BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000526C8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F820);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_0005345C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052484);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052184);
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050FA0);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F948);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F440);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F820);

s32 func_0000F948(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F950);

s32 func_0000FAE0(void) {
    return 0;
}

s32 func_0000FAE8(void) {
    return 0;
}

s32 func_0000FAF0(void) {
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000EF90);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F0B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FAF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FB00);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FC34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FE2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FF18);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FF34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FF50);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FF70);

s32 func_0000FF90(struct Unk_func_0000FF90_0 *arg0) {
    return func_0003ED04((s32) &arg0->pad0[0x48]);
}
#else
s32 func_0000FAF8(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FB00);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FC34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FE2C);

void func_0000FF18(s32 arg0) {
    func_00042E1C(arg0 + 0x258);
}

void func_0000FF34(s32 arg0) {
    func_00042E2C(arg0 + 0x258);
}
#endif

#if FW_VERSION == 271
s32 func_0000FF50(s32 arg0) {
    func_000250D0(arg0 + 0xA0C);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0000FF50(s32 arg0) {
    func_000250D0(arg0 + 0xA50);
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_0000FF70(s32 arg0) {
    func_000250EC(arg0 + 0xA0C);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0000FF70(s32 arg0) {
    func_000250EC(arg0 + 0xA50);
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_0000FF90(struct Unk_func_0000FF90_0 *arg0) {
    arg0->pad0[0xAD0] = 1;
    func_00025068(&arg0->pad0[0xA24], 1);
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0000FF90(struct Unk_func_0000FF90_0 *arg0) {
    arg0->unkB14 = 1;
    func_00025068((u8 *)arg0 + 0xA68, 1);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FFBC);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FFF4);
#endif

#if FW_VERSION == 282
s32 func_0000FFF4(struct Unk_func_0000FFF4_0 *arg0, s32 arg1) {
    struct Unk_vt_func_0000FFF4_temp_a0 **temp_a0;

    arg0->unkC78 = arg1;
    func_0003F4F4((u8 *)arg0 + 0x44);
    temp_a0 = arg0->unkA40;
    (*temp_a0)->unk78(temp_a0, arg1);
    return 0;
}
#endif

#if FW_VERSION < 300
void func_00010044(s32 arg0) {
    func_0003ED04(arg0 + 0x44);
}

void func_00010060(s32 arg0) {
    func_0003F3D8(arg0 + 0x44);
}
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001007C);
#endif

#if FW_VERSION < 300
void func_0001007C(s32 arg0) {
    func_0004326C(arg0 + 0x258);
}
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FFF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010044);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010060);
#endif

#if FW_VERSION < 300
void func_00010098(s32 arg0) {
    func_0004326C(arg0 + 0x258);
}

void func_000100B4(s32 arg0) {
    func_000432B8(arg0 + 0x258);
}
#endif

#if FW_VERSION == 271
s32 func_000100D0(struct Unk_func_000100D0_0 *arg0) {
    if (func_00016C08(M2C_FIELD(arg0, s32 *, 0x9FC), (s32) &arg0->padA44[0x1EC]) != 0) {
        M2C_FIELD(arg0, s32 *, 0xC30) = -1;
    }
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_000100D0(struct Unk_func_000100D0_0 *arg0) {
    if (func_00016C08(arg0->unkA40, &arg0->unkC74) != 0) {
        arg0->unkC74 = -1;
    }
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001010C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010098);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000100B4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000100D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000F80C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010144);

#if FW_VERSION >= 350
s32 func_0000F944(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = func_0001D464(M2C_FIELD(arg0, struct Unk_func_0001D464_0 **, 0xAF0));
    }
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0000F944(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = func_0001D464(M2C_FIELD(arg0, struct Unk_func_0001D464_0 **, 0xAB8));
    }
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_0000F944(void *arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = func_0001D464(M2C_FIELD(arg0, struct Unk_func_0001D464_0 **, 0xA80));
    }
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_00010230(struct Unk_func_00010230_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != NULL) {
        var_v1 = func_00045E00((s32) &arg0->pad0[0x44], (s32) arg1);
        if (var_v1 == 6) {
            var_v1 = 0;
            *arg1 = M2C_FIELD(arg0, s32 *, 0xA38);
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION == 282
s32 func_00010230(struct Unk_func_00010230_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (arg1 != NULL) {
        var_v1 = func_0003EB28((u8 *)arg0 + 0x44);
        if (var_v1 == 6) {
            var_v1 = 0;
            *arg1 = arg0->unkA7C;
        }
    }
    return var_v1;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010290);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000103C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010494);

s32 func_00010504(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_0001050C(struct Unk_func_0001050C_0 *arg0, s32 *arg1) {
    void **temp_a0;

    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void ***, 0xA08);
        *arg1 = M2C_FIELD(*temp_a0, s32 (**)(void **), 0xC)(temp_a0);
    }
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0001050C(struct Unk_func_0001050C_0 *arg0, s32 *arg1) {
    struct Unk_vt_func_0001050C_temp_a0 **temp_a0;

    if (arg1 != NULL) {
        temp_a0 = arg0->unkA4C;
        *arg1 = (*temp_a0)->unkC(temp_a0);
    }
    return 0;
}
#endif

s32 func_0001054C(void) {
    return 0;
}

s32 func_00010554(void) {
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010230);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010290);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000103C4);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001055C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010610);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000106B0);
#endif

s32 func_00010724(void) {
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010494);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010504);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001072C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000107E8);
#endif

s32 func_000108FC(void) {
    return 0;
}

s32 func_00010904(void) {
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FD3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001050C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FE74);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0000FF6C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_0000FF6C(void *arg0, s32 arg1, u32 arg2) {
    s32 var_a4;

    var_a4 = 1;
    if (arg2 < 0x41U) {
        M2C_FIELD(arg0, u32 *, 0xBA8) = arg2;
        sce_paf_private_memcpy(arg0 + 0xBAC, arg1, arg2 * 4);
        var_a4 = 0;
    }
    return var_a4;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_0000FF6C(void *arg0, s32 arg1, u32 arg2) {
    s32 var_a4;

    var_a4 = 1;
    if (arg2 < 0x41U) {
        M2C_FIELD(arg0, u32 *, 0xB78) = arg2;
        sce_paf_private_memcpy(arg0 + 0xB7C, arg1, arg2 * 4);
        var_a4 = 0;
    }
    return var_a4;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001055C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010610);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000106B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000100C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001072C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000107E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000101DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000111E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000106A8);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053498);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000524C0);
#endif

#if FW_VERSION == 311
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521C0_v311);
#endif

#if FW_VERSION == 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000521C0_v310);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052A30);
#endif

#if FW_VERSION >= 350
void func_000108E0(s32 arg0) {
    func_00025068(arg0 + 0xB04, 1);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_000108E0(s32 arg0) {
    func_00025068(arg0 + 0xACC, 1);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010900);
#endif

#if FW_VERSION >= 350
s32 func_00010920(s32 arg0) {
    return (func_00024FE0(arg0 + 0xB04, 1, 0x11, 0) != 0) ? 0 : 8;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_00010920(s32 arg0) {
    return (func_00024FE0(arg0 + 0xACC, 1, 0x11, 0) != 0) ? 0 : 8;
}
#endif

#if FW_VERSION >= 350
void func_00010954(s32 arg0) {
    func_00025068(arg0 + 0xB04, 1);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
void func_00010954(s32 arg0) {
    func_00025068(arg0 + 0xACC, 1);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00050FE0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052A30);

void func_000108A4(void *arg0) {
    s32 temp_s1;

    temp_s1 = arg0 + 0xA94;
    func_000250D0(temp_s1);
    M2C_FIELD(arg0, s32 *, 0xAA0) = 0;
    M2C_FIELD(arg0, s8 *, 0xA9C) = 0;
    func_000250EC(temp_s1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000108E8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010948);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000114EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011588);
#endif

s32 func_0001090C(void) {
    return 0;
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010914);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000109D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010A8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010BA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010BE8);
#endif

#if FW_VERSION == 271
u8 func_00010C3C(struct Unk_func_00010C3C_0 *arg0) {
    return arg0->pad0[0xA98];
}
#endif

#if FW_VERSION == 282
u8 func_00010C3C(struct Unk_func_00010C3C_0 *arg0) {
    return arg0->unkADC;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010C44);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010D00);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010DA8);

void func_00010E24(s32 arg0) {
    func_00042E44(arg0 + 0x258);
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000526F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00010E40);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000111E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001131C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000114EC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011588);
#endif

s32 func_0001160C(void) {
    return 0;
}

s32 func_00011614(void) {
    return 0;
}

s32 func_0001161C(void) {
    return 0;
}

s32 func_00011624(void) {
    return 0;
}

void func_0001162C(s32 arg0) {
    func_0000C2B8(arg0 - 0x40);
}

void func_00011648(s32 arg0) {
    func_0000C2B8(arg0 - 0x3C);
}

void func_00011664(s32 arg0) {
    func_0000C488(arg0 - 0x40);
}

void func_00011680(s32 arg0) {
    func_0000C488(arg0 - 0x3C);
}

void func_0001169C(s32 arg0) {
    func_0000D0E4(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000116B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001172C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000117A0);
#else
void func_000117A0(s32 arg0) {
    func_0000D3A0(arg0 - 0x3C);
}
#endif

void func_000117BC(s32 arg0) {
    func_0000D3FC(arg0 - 0x3C);
}

void func_000117D8(s32 arg0) {
    func_0000D458(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000117F4);

void func_00011814(s32 arg0, s32 arg1) {
    func_0000D518(arg0 - 0x3C, arg1);
}

void func_00011830(s32 arg0, s32 arg1) {
    func_0000D57C(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001184C);

#if FW_VERSION < 300
void func_0001186C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D644(arg0 - 0x3C, arg1, arg2);
}

void func_00011888(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D6B8(arg0 - 0x3C, arg1, arg2);
}

void func_000118A4(s32 arg0) {
    func_0000D72C(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000118C0);

void func_0001192C(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D834(arg0 - 0x3C, arg1, arg2);
}

void func_00011948(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D8A8(arg0 - 0x3C, arg1, arg2);
}

void func_00011964(s32 arg0, s32 arg1, s32 arg2) {
    func_0000D91C(arg0 - 0x3C, arg1, arg2);
}

void func_00011980(s32 arg0, s32 arg1) {
    func_0000D990(arg0 - 0x3C, arg1);
}

void func_0001199C(s32 arg0, s32 arg1) {
    func_0000D9F4(arg0 - 0x3C, arg1);
}

void func_000119B8(s32 arg0, s32 arg1) {
    func_0000DA58(arg0 - 0x3C, arg1);
}

void func_000119D4(s32 arg0, s32 arg1) {
    func_0000DABC(arg0 - 0x3C, arg1);
}

void func_000119F0(s32 arg0) {
    func_0000DB20(arg0 - 0x3C);
}

void func_00011A0C(s32 arg0) {
    func_0000DB7C(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011A28);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011A9C);

void func_00011B10(s32 arg0) {
    func_0000DF94(arg0 - 0x3C);
}

void func_00011B2C(s32 arg0) {
    func_0000EA6C(arg0 - 0x3C);
}

void func_00011B48(s32 arg0) {
    func_0000ED28(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011B64);

void func_00011B84(s32 arg0) {
    func_0000F048(arg0 - 0x3C);
}

void func_00011BA0(s32 arg0) {
    func_0000F238(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011BBC);

void func_00011BDC(s32 arg0) {
    func_0000F440(arg0 - 0x3C);
}
#endif

void func_00011BF8(s32 arg0) {
    func_0000F820(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C14);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011CB8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011CD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011CF0);

void func_00011D0C(s32 arg0) {
    func_0000FB00(arg0 - 0x3C);
}

void func_00011D28(s32 arg0) {
    func_0000FC34(arg0 - 0x3C);
}

void func_00011D44(s32 arg0) {
    func_0000FE2C(arg0 - 0x3C);
}

void func_00011D60(s32 arg0) {
    func_0000FF18(arg0 - 0x3C);
}

void func_00011D7C(s32 arg0) {
    func_0000FF34(arg0 - 0x3C);
}

void func_00011D98(s32 arg0) {
    func_0000FF50(arg0 - 0x3C);
}

void func_00011DB4(s32 arg0) {
    func_0000FF70(arg0 - 0x3C);
}

void func_00011DD0(s32 arg0) {
    func_0000FF90(arg0 - 0x3C);
}

void func_00011DEC(s32 arg0) {
    func_0000FFBC(arg0 - 0x3C);
}

void func_00011E08(s32 arg0, s32 arg1) {
    func_0000FFF4(arg0 - 0x3C, arg1);
}

void func_00011E24(s32 arg0) {
    func_00010044(arg0 - 0x3C);
}

void func_00011E40(s32 arg0) {
    func_00010060(arg0 - 0x3C);
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011E5C);
#else
void func_00011E5C(s32 arg0) {
    func_0001007C(arg0 - 0x3C);
}
#endif

void func_00011E78(s32 arg0) {
    func_00010098(arg0 - 0x3C);
}

void func_00011E94(s32 arg0) {
    func_000100B4(arg0 - 0x3C);
}

void func_00011EB0(s32 arg0) {
    func_000100D0(arg0 - 0x3C);
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011ECC);
#else
void func_00011ECC(s32 arg0) {
    func_0001010C(arg0 - 0x3C);
}
#endif

void func_00011EE8(s32 arg0) {
    func_00010144(arg0 - 0x3C);
}

void func_00011F04(s32 arg0, s32 *arg1) {
    func_00010230(arg0 - 0x3C, arg1);
}

void func_00011F20(s32 arg0) {
    func_00010290(arg0 - 0x3C);
}

void func_00011F3C(s32 arg0) {
    func_000103C4(arg0 - 0x3C);
}

void func_00011F58(s32 arg0) {
    func_00010494(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011F74);

void func_00011F90(s32 arg0, s32 *arg1) {
    func_0001050C(arg0 - 0x3C, arg1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011FAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011FC8);

void func_00011FE4(s32 arg0) {
    func_0001055C(arg0 - 0x3C);
}

void func_00012000(s32 arg0) {
    func_00010610(arg0 - 0x3C);
}

void func_0001201C(s32 arg0) {
    func_000106B0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012038);

void func_00012054(s32 arg0) {
    func_0001072C(arg0 - 0x3C);
}

void func_00012070(s32 arg0) {
    func_000107E8(arg0 - 0x3C);
}

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001208C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000120A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000120C8);

void func_000120E4(s32 arg0) {
    func_00010914(arg0 - 0x3C);
}

void func_00012100(s32 arg0) {
    func_000109D0(arg0 - 0x3C);
}

void func_0001211C(s32 arg0) {
    func_00010A8C(arg0 - 0x3C);
}

void func_00012138(s32 arg0) {
    func_00010BA4(arg0 - 0x3C);
}

void func_00012154(s32 arg0) {
    func_00010BE8(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012170);

void func_0001218C(s32 arg0) {
    func_00010C44(arg0 - 0x3C);
}

void func_000121A8(s32 arg0) {
    func_00010D00(arg0 - 0x3C);
}

void func_000121C4(s32 arg0) {
    func_00010DA8(arg0 - 0x3C);
}

void func_000121E0(s32 arg0) {
    func_00010E24(arg0 - 0x3C);
}
#endif

void func_000121FC(s32 arg0) {
    func_000111E4(arg0 - 0x40);
}

void func_00012218(M2C_UNK **arg0) {
    *arg0 = &D_00052A30;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012228);
#else
void func_00012228(M2C_UNK **arg0) {
    *arg0 = &D_00052A30;
    _ZdlPv((s32) arg0);
}
#endif

void func_00012250(void) {
}

#if FW_VERSION >= 350
s32 func_000111D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCF0);
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
s32 func_000111D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xCB8);
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_000111D4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC88);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000111DC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000111F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001123C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011280);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000112B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000112E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011320);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011440);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011870);
#endif

#if FW_VERSION >= 310
s32 func_000118DC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_000118DC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    return 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000118F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011978);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011994);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000119B0);

void func_00011BF0(void) {

}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011B00);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011B38);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011BF8_v303);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C30_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011BF8_v302);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C30_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011BF8_v301);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C30_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011BF8_v300);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C30_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011C68);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012338);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011CF8);
#endif

s32 func_00012258(void) {
    return 0;
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011D5C);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011CD8);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011DD0_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011DD0_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011DD0_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011DD0_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00011DE0);

s32 func_0001210C(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x20)(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012138);
#else
s32 func_00012260(void) {
    return 0;
}

s32 func_00012268(void) {
    return 0;
}

s32 func_00012270(void) {
    return 0;
}

s32 func_00012278(void) {
    return 0;
}

s32 func_00012280(void) {
    return 0;
}

s32 func_00012288(void) {
    return 0;
}

s32 func_00012290(void) {
    return 0;
}

s32 func_00012298(void) {
    return 0;
}

s32 func_000122A0(void) {
    return 0;
}

s32 func_000122A8(void) {
    return 0;
}

s32 func_000122B0(void) {
    return 0;
}

s32 func_000122B8(void) {
    return 0;
}

s32 func_000122C0(void) {
    return 0;
}

s32 func_000122C8(void) {
    return 0;
}

s32 func_000122D0(void) {
    return 0;
}

s32 func_000122D8(void) {
    return 0;
}

s32 func_000122E0(void) {
    return 0;
}

s32 func_000122E8(void) {
    return 0;
}

s32 func_000122F0(void) {
    return 0;
}

s32 func_000122F8(void) {
    return 0;
}

s32 func_00012300(void) {
    return 0;
}

s32 func_00012308(void) {
    return 0;
}

s32 func_00012310(void) {
    return 0;
}

s32 func_00012318(void) {
    return 0;
}

s32 func_00012320(void) {
    return 0;
}
#endif

#if FW_VERSION == 271
s32 func_00012338(struct Unk_func_00012338_0 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC14);
}
#endif

#if FW_VERSION == 282
s32 func_00012328(void) {
    return 0;
}

s32 func_00012330(void) {
    return 0;
}

s32 func_00012338(struct Unk_func_00012338_0 *arg0) {
    return arg0->unkC58;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012340);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001220C);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001235C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000123A8);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012298);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000122C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000122F8);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012240);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012338_v303);
#endif

#if FW_VERSION == 302
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012338_v302);
#endif

#if FW_VERSION == 301
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012338_v301);
#endif

#if FW_VERSION == 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012338_v300);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000123E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000123F0);

s32 func_00012784(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x44);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x20)(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000127B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012864);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012880);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001289C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012974);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000123F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012424);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012454);

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012494);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012650);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012A4C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012AB8);
#endif

#if FW_VERSION == 282
s32 func_00012AB8(struct Unk_func_00012AB8_0 *arg0) {
    arg0->unk1DC = 0;
    arg0->unk1D8 = 0;
    arg0->unk1D4 = 0;
    return 0;
}
#endif

#if FW_VERSION < 300
void func_00012ACC(s32 arg0) {
    func_00012424(arg0 - 0x3C);
}

void func_00012AE8(s32 arg0) {
    func_00012454(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012B04);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012B3C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012B74);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012BBC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012C04);

s32 func_00012C60(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012C68);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012D38);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00012D48);

s32 func_000130D4(struct Unk_func_000130D4_0 *arg0) {
    struct Unk_vt_func_000130D4_temp_a0 **temp_a0;

    temp_a0 = arg0->unk44;
    (*temp_a0)->unk70(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013100);

void func_000131B8(s32 arg0) {
    func_00012BBC(arg0 - 0x3C);
}

void func_000131D4(s32 arg0) {
    func_00012C04(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000131F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013228);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013260);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013290);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000132C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013300);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000133AC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000133B8);

s32 func_000137A0(struct Unk_func_000137A0_0 *arg0) {
    struct Unk_vt_func_000137A0_temp_a0 **temp_a0;

    temp_a0 = arg0->unk44;
    (*temp_a0)->unk70(temp_a0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000137CC);

void func_00013880(s32 arg0) {
    func_00013290(arg0 - 0x3C);
}

void func_0001389C(s32 arg0) {
    func_000132C0(arg0 - 0x3C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000138B8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013990);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013A68);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013A98);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013AC8);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013B08);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013DF0);
#else
void func_00013DF0(s32 arg0) {
    func_00013A98(arg0 - 0x3C);
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013E0C);
#else
void func_00013E0C(s32 arg0) {
    func_00013AC8(arg0 - 0x3C);
}
#endif

s32 func_00013E28(void) {
    return D_00057270;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00013E34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000144C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014E8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000151CC);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014554);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015520);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001562C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001576C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015824);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014BF8);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015A74);
#endif

s32 func_00015C78(s32 arg0) {
    func_00025068(arg0 + 0xCC, 0x10000000);
    return 0;
}

s32 func_00015C9C(struct Unk_func_00015C9C_0 *arg0) {
    s32 temp_s1;

    temp_s1 = (u8 *)arg0 + 0x8C;
    func_000250D0(temp_s1);
    if (arg0->unk78C != 0) {
        func_00025068((u8 *)arg0 + 0xCC, 0x20100000);
        func_000250EC(temp_s1);
        func_00024FE0((u8 *)arg0 + 0xD4, 1, 0x11, -1);
    } else {
        func_000250EC(temp_s1);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015D18);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015EA4);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014F90);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00014FF0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015050);

s32 func_00015ED8(struct Unk_func_00015ED8_0 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_s3;

    temp_s3 = &arg0->pad0[0x8C];
    func_000250D0((s32) temp_s3);
    arg0->unk778 = arg1;
    arg0->unk77C = arg2;
    func_00025068(&arg0->pad0[0xCC], 0x20040000);
    return func_000250EC((s32) temp_s3);
}
#else
s32 func_00015ED8(struct Unk_func_00015ED8_0 *arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;

    temp_s3 = (u8 *)arg0 + 0x8C;
    func_000250D0(temp_s3);
    arg0->unk778 = arg1;
    arg0->unk77C = arg2;
    func_00025068((u8 *)arg0 + 0xCC, 0x20040000);
    func_000250EC(temp_s3);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015F44);

#if FW_VERSION < 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015FC4);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016154);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001623C);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015450);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000162D0);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001645C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016508);

s32 func_00016590(void) {
    return 0;
}

#if FW_VERSION < 300
s32 func_00016598(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000165A0);

s32 func_00016788(struct Unk_func_00016788_0 *arg0, s32 arg1) {
    arg0->unkDC = arg1;
    return 0;
}

s32 func_00016794(struct Unk_func_00016794_0 *arg0, s32 arg1) {
    arg0->unkE0 = arg1;
    return 0;
}

s32 func_000167A0(struct Unk_func_000167A0_0 *arg0, s32 arg1) {
    arg0->unkE4 = arg1;
    return 0;
}

s32 func_000167AC(struct Unk_func_000167AC_0 *arg0, s32 arg1) {
    arg0->unk794 = arg1;
    func_00025068((u8 *)arg0 + 0xCC, 0x20010000);
    return 0;
}

s32 func_000167D4(struct Unk_func_000167D4_0 *arg0, s32 arg1) {
    arg0->unk798 = arg1;
    func_00025068((u8 *)arg0 + 0xCC, 0x20020000);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000167FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016920);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016AD0);

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015D48);
#else
s32 func_00016BE4(struct Unk_func_00016BE4_0 *arg0, s32 arg1) {
    arg0->unk84 = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 310
s32 func_00016BF0(struct Unk_func_00016BF0_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD4C) = arg1;
    return 0;
}
#endif

#if FW_VERSION >= 300 && FW_VERSION < 310
s32 func_00016BF0(struct Unk_func_00016BF0_0 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD2C) = arg1;
    return 0;
}
#endif

#if FW_VERSION < 300
s32 func_00016BF0(struct Unk_func_00016BF0_0 *arg0, s32 arg1) {
    arg0->unkD20 = arg1;
    return 0;
}
#endif

s32 func_00016BFC(struct Unk_func_00016BFC_0 *arg0, s32 arg1) {
    arg0->unk88 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016C08);

s32 func_00016CB4(struct Unk_func_00016CB4_0 *arg0, s32 *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0->unk42C != 0) {
        if (arg0->unk788 < 0) {
            var_v1 = 6;
        } else {
            *arg1 = arg0->unk3E8;
        }
    } else {
        var_v1 = 6;
    }
    return var_v1;
}

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00015E68);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00016CE4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001717C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017208);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000172CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017368);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017508);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017720);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000177CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017868);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000178F0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017988);

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000170A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001747C);
#else
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00017E84);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018220);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000186A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018800);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00018CBC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001908C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019458);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019860);

#if FW_VERSION < 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052730);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052A30);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052B98);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512B8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512BC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000512C8);
#else
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052BC0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052C10);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052C68);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052BC0);
#else
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052CC0);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D08);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D14);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D20);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D2C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D38);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D44);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D50);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D5C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D64);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052C00);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052C08);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052C10_v271);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019AC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00019F8C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A254);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A698);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A878);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001A93C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001AB24);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001AFC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B0D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B37C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B4F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B634);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001B95C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BAD0);

void func_0001BBFC(s32 arg0) {
    func_00014E8C(arg0 - 0x7C);
}

void func_0001BC18(s32 arg0) {
    func_00014E8C(arg0 - 0x68);
}

void func_0001BC34(s32 arg0) {
    func_000151CC(arg0 - 0x7C);
}

void func_0001BC50(s32 arg0) {
    func_000151CC(arg0 - 0x68);
}

void func_0001BC6C(s32 arg0) {
    func_0001562C(arg0 - 0x68);
}

void func_0001BC88(s32 arg0) {
    func_0001576C(arg0 - 0x7C);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BCA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BCE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BD24);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BDE8);

void func_0001BEB4(void) {
}

#if FW_VERSION < 300
s32 func_0001BEBC(void) {
    return 0;
}

s32 func_0001BEC4(void) {
    return 0;
}

s32 func_0001BECC(void) {
    return 0;
}

s32 func_0001BED4(void) {
    return 0;
}

s32 func_0001BEDC(void) {
    return 0;
}

s32 func_0001BEE4(void) {
    return 0;
}

s32 func_0001BEEC(void) {
    return 0;
}

s32 func_0001BEF4(void) {
    return 0;
}

s32 func_0001BEFC(void) {
    return 0;
}

s32 func_0001BF04(void) {
    return 0;
}

s32 func_0001BF0C(void) {
    return 0;
}

s32 func_0001BF14(void) {
    return 0;
}

s32 func_0001BF1C(void) {
    return 0;
}

s32 func_0001BF24(void) {
    return 0;
}

s32 func_0001BF2C(void) {
    return 0;
}

s32 func_0001BF34(void) {
    return 0;
}

s32 func_0001BF3C(void) {
    return 0;
}

s32 func_0001BF44(void) {
    return 0;
}

s32 func_0001BF4C(void) {
    return 0;
}

s32 func_0001BF54(void) {
    return 0;
}

s32 func_0001BF5C(void) {
    return 0;
}

s32 func_0001BF64(void) {
    return 0;
}

s32 func_0001BF6C(void) {
    return 0;
}

s32 func_0001BF74(void) {
    return 0;
}

s32 func_0001BF7C(void) {
    return 0;
}

s32 func_0001BF84(void) {
    return 0;
}

s32 func_0001BF8C(void) {
    return 0;
}

s32 func_0001BF94(void) {
    return 0;
}

s32 func_0001BF9C(void) {
    return 0;
}
#endif

#if FW_VERSION == 282
s32 func_0001BFA4(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001BFAC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C068);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C124);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C1FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C2D4);

void func_0001C3C0(void) {
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C3C8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C610);

s32 func_0001C690(struct Unk_func_0001C690_0 *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = (u8 *)arg0 + 0x18;
    func_000250D0(temp_s2);
    arg0->unk54 = arg1;
    func_000250EC(temp_s2);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C6E0);

s32 func_0001C7B4(struct Unk_func_0001C7B4_0 *arg0, s32 arg1) {
    if (arg1 != arg0->unk78) {

    } else {
        func_00025068((u8 *)arg0 + 0x28, 4);
    }
    return 0;
}

s32 func_0001C7F0(struct Unk_func_0001C7F0_0 *arg0, s32 arg1) {
    if (arg1 != arg0->unk78) {

    } else {
        func_00025068((u8 *)arg0 + 0x28, 2);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C82C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C8D4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C940);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C978);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CB7C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CC04);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CC88);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CD0C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CD40);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CD74);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CDF4);

#if FW_VERSION >= 350
void func_0001CEB4(void) {

}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C6E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C798);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C8F4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001C99C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CA4C);

s32 func_0001CABC(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00021F54(arg1);
    var_v1 = 0;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CAF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CB54);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D88);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D8C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D90);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D94);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D98);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052D9C);

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_000514C8);
#else
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052DA8);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052E68);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052EF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F00);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F0C);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F18);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F28);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F34);

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052DE0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052DE8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052DEC);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052DF4);
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F48);

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CEB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CEE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001CF9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D0F8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D1A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D250);

s32 func_0001D2C0(struct Unk_func_0001D2C0_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00021F54(arg1);
    var_v1 = 0;
    arg0->unk8 = temp_v0;
    if (temp_v0 == 0) {
        var_v1 = arg0->unk4;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D2FC);

void func_0001D358(struct Unk_func_0001D358_0 *arg0) {
    func_00021DA4(arg0->unk8);
}
#endif

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F74);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052F84);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052FB4);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052FDC);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D374);

void func_0001D3A8(struct Unk_func_0001D3A8_0 *arg0) {
    func_0002081C((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D3D8);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053AA0);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053078);
#endif

s32 func_0001D40C(s32 arg0, s32 arg1) {
    func_00020D60(arg0 + (arg1 * 0x60) + 0x18);
    return 0;
}

s32 func_0001D43C(struct Unk_func_0001D43C_0 *arg0, s32 arg1) {
    arg0->unkC = arg1;
    return 0;
}

s32 func_0001D448(struct Unk_func_0001D448_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 6;
    if (arg1 < 3) {
        arg0->unkC = arg1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0001D464(struct Unk_func_0001D464_0 *arg0) {
    return arg0->unk8->unk11C;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D470);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D4F0);

void func_0001D58C(struct Unk_func_0001D58C_0 *arg0) {
    arg0->unk4 = func_00020E4C((u8 *)arg0 + (arg0->unkC * 0x60) + 0x18);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D5CC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D61C);

void func_0001D66C(struct Unk_func_0001D66C_0 *arg0) {
    func_00020EE0((u8 *)arg0 + (arg0->unkC * 0x60) + 0x18);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D69C);

void func_0001D738(struct Unk_func_0001D738_0 *arg0) {
    func_00020EEC((u8 *)arg0 + (arg0->unkC * 0x60) + 0x18);
}

void func_0001D768(struct Unk_func_0001D768_0 *arg0) {
    func_00020988((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

void func_0001D798(struct Unk_func_0001D798_0 *arg0) {
    func_00020994((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

void func_0001D7C8(struct Unk_func_0001D7C8_0 *arg0) {
    func_00020838((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

void func_0001D7F8(struct Unk_func_0001D7F8_0 *arg0) {
    func_00020844((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D828);

void func_0001D8A8(struct Unk_func_0001D8A8_0 *arg0) {
    func_000209C0((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

void func_0001D8D8(struct Unk_func_0001D8D8_0 *arg0) {
    func_000209D0((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001D908);

void func_0001D9C4(struct Unk_func_0001D9C4_0 *arg0) {
    func_000209B0((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

void func_0001D9F4(struct Unk_func_0001D9F4_0 *arg0) {
    func_000204A8((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

void func_0001DA24(struct Unk_func_0001DA24_0 *arg0) {
    func_0002044C((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DA54);

void func_0001DB00(struct Unk_func_0001DB00_0 *arg0) {
    func_00020AA4((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DB30);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DDE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DE38);

void func_0001DE88(struct Unk_func_0001DE88_0 *arg0) {
    func_000218F4((u8 *)arg0 + (arg0->unkC * 0x60) + 0x30);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DEB8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001DF5C);

void func_0001E040(struct Unk_func_0001E040_0 *arg0) {
    func_000219EC((u8 *)arg0 + (arg0->unkC * 0x60) + 0x38);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E070);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E124);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E248);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E2EC);

void func_0001E3D0(struct Unk_func_0001E3D0_0 *arg0) {
    func_000201A8((u8 *)arg0 + (arg0->unkC * 0x60) + 0x48);
}

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E400);
#else
void func_0001E400(struct Unk_vt_func_0001E400_arg0 **arg0) {
    s32 temp_s1;

    temp_s1 = func_0001F998();
    func_0001E450(arg0, temp_s1, (*arg0)->unk68(arg0));
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E450);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E520);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E590);

void func_0001E668(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0001E590(arg0, arg1, arg2 + arg3, arg4);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E688);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E6B0);

void func_0001E6D8(struct Unk_func_0001E6D8_0 *arg0) {
    func_0002025C((u8 *)arg0 + (arg0->unkC * 0x60) + 0x48);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001E708);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EA2C);

void func_0001EC1C(struct Unk_func_0001EC1C_0 *arg0) {
    func_00020FE8((u8 *)arg0 + (arg0->unkC * 0x60) + 0x18);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EC4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001ECE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EDAC);

void func_0001EE34(struct Unk_func_0001EE34_0 *arg0, s32 arg1) {
    arg0->unk4 = func_0002007C((u8 *)arg0 + (arg0->unkC * 0x60) + 0x50, arg1 - 1);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EE78);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001EEF4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F028);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F22C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F344);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F490);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F58C);

void func_0001F698(struct Unk_func_0001F698_0 *arg0) {
    func_0002001C((u8 *)arg0 + (arg0->unkC * 0x60) + 0x50);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F6C8);

void func_0001F770(struct Unk_func_0001F770_0 *arg0, s32 arg1) {
    func_000200D4((u8 *)arg0 + (arg0->unkC * 0x60) + 0x50, arg1 - 1);
}

void func_0001F7A4(struct Unk_func_0001F7A4_0 *arg0, s32 arg1) {
    func_00020024((u8 *)arg0 + (arg0->unkC * 0x60) + 0x50, arg1 - 1);
}

void func_0001F7D8(struct Unk_func_0001F7D8_0 *arg0) {
    func_000214D0((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
}

void func_0001F808(struct Unk_func_0001F808_0 *arg0) {
    func_000214D8((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
}

void func_0001F838(struct Unk_func_0001F838_0 *arg0) {
    func_00021548((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
}

void func_0001F868(struct Unk_func_0001F868_0 *arg0) {
    func_00021600((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
}

void func_0001F898(struct Unk_func_0001F898_0 *arg0) {
    func_00021674((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
}

void func_0001F8C8(struct Unk_func_0001F8C8_0 *arg0) {
    func_00021748((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
}

s32 func_0001F8F8(struct Unk_func_0001F8F8_0 *arg0) {
    s32 temp_v0;

    temp_v0 = func_00021420((u8 *)arg0 + (arg0->unkC * 0x60) + 0x64);
    return temp_v0 + ((u32) ~temp_v0 >> 0x1F);
}

s32 func_0001F934(struct Unk_func_0001F934_0 *arg0) {
    return func_00020E44((u8 *)arg0 + (arg0->unkC * 0x60) + 0x18) + 1;
}

void func_0001F968(struct Unk_func_0001F968_0 *arg0) {
    func_00020BA0((u8 *)arg0 + (arg0->unkC * 0x60) + 0x24);
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001F998);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FA54);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FA74);

#if FW_VERSION >= 300
s32 func_0001FAA8(s32 arg0) {
    return func_000250D0(arg0 + 0x10);
}
#else
s32 func_0001FAA8(s32 arg0) {
    func_000250D0(arg0 + 0x10);
    return 0;
}
#endif

#if FW_VERSION >= 300
s32 func_0001FAC8(s32 arg0) {
    return func_000250EC(arg0 + 0x10);
}
#else
s32 func_0001FAC8(s32 arg0) {
    func_000250EC(arg0 + 0x10);
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FAE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FB38);

void func_0001FB80(M2C_UNK **arg0) {
    *arg0 = &D_00053078;
}

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FB90);
#else
void func_0001FB90(M2C_UNK **arg0) {
    *arg0 = &D_00053078;
    _ZdlPv((s32) arg0);
}
#endif

#if FW_VERSION < 300
s32 func_0001FBB8(void) {
    return 0;
}

s32 func_0001FBC0(void) {
    return 1;
}

s32 func_0001FBC8(void) {
    return 0;
}

s32 func_0001FBD0(void) {
    return 1;
}

s32 func_0001FBD8(void) {
    return 1;
}

s32 func_0001FBE0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FBE8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FC0C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FC24);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FC34);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FC44);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FC54);

s32 func_0001FC6C(void) {
    return 1;
}

s32 func_0001FC74(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FC7C);

s32 func_0001FC98(void) {
    return 1;
}

s32 func_0001FCA0(void) {
    return 1;
}

s32 func_0001FCA8(void) {
    return 1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FCB0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FCD4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FCFC);

s32 func_0001FD24(void) {
    return 1;
}

s32 func_0001FD2C(void) {
    return 1;
}

s32 func_0001FD34(void) {
    return 0;
}

s32 func_0001FD3C(void) {
    return 0;
}

s32 func_0001FD44(void) {
    return 0;
}

s32 func_0001FD4C(struct Unk_func_0001FD4C_0 *arg0) {
    return arg0->unkC;
}
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FD54);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FDD4);

#if FW_VERSION >= 350
void func_0001FEAC(struct Unk_func_0001FEAC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        arg0->unk8 = 0;
    }
    temp_v0_2 = arg0->unkC;
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        arg0->unkC = 0;
    }
}
#else
void func_0001FEAC(struct Unk_func_0001FEAC_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        arg0->unk8 = 0;
    }
    temp_v0_2 = arg0->unkC;
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        arg0->unkC = 0;
    }
}
#endif

s32 func_0001FF04(struct Unk_func_0001FF04_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    arg0->unk4 = 0;
    func_0001FF2C();
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0001FF2C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002001C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020024);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002007C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000200D4);

s32 func_00020148(s32 arg0, s32 arg1) {
    return (arg0 << 8) | arg1;
}

void func_00020154(s32 *arg0) {
    *arg0 = 0;
}

void func_0002015C(s32 *arg0) {
    *arg0 = 0;
}

s32 func_00020164(s32 *arg0) {
    *arg0 = 0;
    return 0;
}

s32 func_00020170(s32 *arg0, s32 arg1) {
    func_00020164(arg0);
    *arg0 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000201A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000201C4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002025C);

void func_00020324(struct Unk_func_00020324_0 *arg0) {
    func_00021868((Unk_func_00021868_0*) ((u8 *)arg0 + 0xC));
    func_00021950((Unk_func_00021950_0*) ((u8 *)arg0 + 0x14));
    func_00021A58((Unk_func_00021A58_0*) ((u8 *)arg0 + 0x1C));
    func_0002015C((s32*) ((u8 *)arg0 + 0x24));
    func_0002015C((s32*) ((u8 *)arg0 + 0x28));
    arg0->unk0 = -1;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

s32 func_0002037C(struct Unk_func_0002037C_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_00021874((u8 *)arg0 + 0xC);
    func_00021964((u8 *)arg0 + 0x14);
    func_00021A6C((u8 *)arg0 + 0x1C);
    func_00020164((s32*) ((u8 *)arg0 + 0x24));
    func_00020164((s32*) ((u8 *)arg0 + 0x28));
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000203D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020428);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002044C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000204A8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020644);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000206D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020750);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_0002081C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020838);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020844);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020850);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020900);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020988);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020994);

s32 func_000209A0(struct Unk_func_000209A0_0 *arg0) {
    return arg0->unk8->unk1C->unk4;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000209B0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000209C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000209D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020AA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020BA0);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00052FF8);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053078);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020BA8);

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053130);

INCLUDE_RODATA("nonmatchings/video_main_plugin_00664C", D_00053158);
#endif

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020BF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020C48);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020C90);

void func_00020CD8(struct Unk_func_00020CD8_0 *arg0) {
    func_00020324((Unk_func_00020324_0*) ((u8 *)arg0 + 0xC));
    func_0001FDD4((u8 *)arg0 + 0x38);
    func_000211A8((u8 *)arg0 + 0x4C);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

void func_00020D1C(struct Unk_func_00020D1C_0 *arg0) {
    func_00020324((Unk_func_00020324_0*) ((u8 *)arg0 + 0xC));
    func_0001FDD4((u8 *)arg0 + 0x38);
    func_000211A8((u8 *)arg0 + 0x4C);
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020D60);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020DB4);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020E44);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020E4C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020E60);

s32 func_00020EB0(void *arg0, s32 arg1) {
    return (func_00020EE0(arg0) >= arg1) ? 0 : 6;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020EE0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020EEC);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020F44);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020F9C);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020FBC);

s32 func_00020FDC(struct Unk_func_00020FDC_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00020FE8);

s32 func_0002107C(struct Unk_func_0002107C_0 *arg0, u32 arg1) {
    return (arg1 < (u32) arg0->unk8) ? 0 : 6;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021090);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000210E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021128);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000211A8);

#if FW_VERSION >= 350
void func_00021280(struct Unk_func_00021280_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        arg0->unk8 = 0;
    }
    temp_v0_2 = arg0->unkC;
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        arg0->unkC = 0;
    }
}
#else
void func_00021280(struct Unk_func_00021280_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        arg0->unk8 = 0;
    }
    temp_v0_2 = arg0->unkC;
    if (temp_v0_2 != 0) {
        sce_paf_private_free(temp_v0_2);
        arg0->unkC = 0;
    }
}
#endif

s32 func_000212D8(struct Unk_func_000212D8_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    arg0->unk4 = func_00021D9C(arg1);
    func_00021314(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021314);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021420);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021478);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000214D0);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_000214D8);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021548);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021600);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021674);

INCLUDE_ASM("nonmatchings/video_main_plugin_00664C", func_00021748);
