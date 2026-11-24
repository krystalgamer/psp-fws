#include "common.h"
#include "savedata_plugin_decls.h"

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000024);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000000AC);

INCLUDE_ASM("nonmatchings/savedata_plugin", module_start);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", module_stop);
#endif

#if FW_VERSION == 100
void func_0000015C_v100(void) {

}
#endif

#if FW_VERSION == 100
void func_00000164(void) {
    D_00021CA4 = 0;
}
#endif

#if FW_VERSION == 100
u8 func_00000170(void) {
    return (u8) D_00021CA4;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00020B3C();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000015C);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000001B0);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021778);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_0002178C);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000217A4);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000217BC);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000217C8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000217D8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000217E8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000217FC);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021810);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021820);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021834);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021848);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021858);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021870);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021880);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021894);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000218A8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000218B8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000218C8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000218DC);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000218E8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000218F8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021908);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000001D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000002A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021918);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000280);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000030C);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000348);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000036C);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000003A8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000003B0);
#endif

#if FW_VERSION == 100
void func_000007B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x54) = func_00000960();
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000003E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000508);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000062C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000758);
#endif

#if FW_VERSION != 100
s32 func_000008C8(struct Unk_func_000008C8_0 *arg0) {
    s32 temp_v0;

    func_00013C90(arg0, 0);
    temp_v0 = arg0->unk10;
    arg0->unk4E = 0;
    arg0->unk60 = 0;
    if (temp_v0 != 0) {
        func_00006DCC(temp_v0, 0);
    }
    return func_00013C5C(arg0) != 0;
}
#endif

#if FW_VERSION != 100
void func_00000924(struct Unk_func_00000924_0 *arg0) {
    arg0->unk50 = 0;
    if (arg0->unk58 != 0) {
        arg0->unk50 = func_00000960();
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000960);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0001130C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000890);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000894);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000009B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000A14);
#endif

#if FW_VERSION != 100
s32 func_00000A58(struct Unk_func_00000A58_0 *arg0) {
    return arg0->unk18;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000A60);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000009C8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020768);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021938);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021950);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000B00);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_0002197C);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000BE4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000207C4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000207D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000CC8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000D10);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A1C);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A2C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020800);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A30);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A48);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A60);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A70);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A80);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021A90);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021AA4);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021AB4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000B18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021ABC);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000F20);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000DC0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000ED0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00000F54);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001124);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001060);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000011A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000011D4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001288);
#endif

#if FW_VERSION != 100
s32 func_00001478(struct Unk_func_00001478_0 *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        var_v1 = 0x8010300B;
        if (arg0->unk60 == 0) {
            var_v1 = -1;
            if (scePaf_75062BCF(arg1) == 0) {
                var_v1 = func_0000D3D4(arg0->unk0->unk10(arg0), 0, 0x800, (s32) &func_000011A8, arg1);
            }
        }
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000150C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001258);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000015E0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001964);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001B90);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001C50);

#if FW_VERSION == 100
void func_00001A74(void) {

}
#endif

#if FW_VERSION != 100
void func_00001E88(void) {
}
#endif

#if FW_VERSION == 100
void func_00001E90(s32 arg0, void *arg1) {
    struct Unk_D_00022EE0 *temp_s0;
    void *temp_a0;

    if (M2C_FIELD(arg1, s32 *, 0xC) != -1) {
        temp_s0 = D_00022EE0;
        if (scePaf_66FE90D7(func_0001351C(M2C_FIELD(temp_s0, s32 *, 0x1C)), &D_0002197C) == 0) {
            if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x28), u8 *, 5) == 1) {
                func_000040D0(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), void **, 0x58));
                func_0000FD8C(M2C_FIELD(temp_s0, s32 *, 0x2C), arg0, M2C_FIELD(arg1, s32 *, 0xC));
                temp_a0 = M2C_FIELD(temp_s0, void **, 0x20);
                M2C_FIELD(M2C_FIELD(temp_a0, void **, 0), M2C_UNK (**)(void *, s32), 0xC)(temp_a0, arg0);
                func_00005FCC((s32) M2C_FIELD(temp_s0, void **, 0x20), arg0);
            }
        }
    }
}
#else
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001E90);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001F70);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001C2C);
#endif

#if FW_VERSION == 100
void func_000020A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002144();
}
#endif

#if FW_VERSION != 100
void func_0000206C(s32 arg0, struct Unk_func_0000206C_1 *arg1) {
    if (((u32) arg1->unk8 >> 8) & 0x80) {

    } else {
        func_00000B00(arg0, (s32) arg1);
    }
}
#endif

#if FW_VERSION != 100
void func_000020A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002144();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000020C4);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000020F4);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002144);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002164);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001E10);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002218);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000022C8);

#if FW_VERSION == 100
void func_00001ED0(void *arg0) {
    void **temp_a0;

    func_00005EF8(M2C_FIELD(arg0, s32 *, 0x20));
    func_0000D214(M2C_FIELD(arg0, s32 *, 0x28));
    temp_a0 = M2C_FIELD(arg0, void ***, 0x1C);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK), 0x14)(temp_a0, 2);
    func_000007B4(arg0);
    scePaf_D24E4016(scePaf_962FA087(), 6, 9);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021AE8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00001F34);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021AF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B08);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B2C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B3C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000231C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002384);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000023B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000024A4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000025D8);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002600);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002638);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B5C);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B70);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B80);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021B8C);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000026A0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000273C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000273C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000283C);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000028C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000023EC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002554);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002928);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002AC4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002BD8);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002C00);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002C38);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002D74);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002EB0);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021C00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021C0C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002F24);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003224);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021CE8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021CEC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021CF0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021CF4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021CF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021CFC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D00);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000038D8);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003934);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000039E4);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003A80);

#if FW_VERSION != 100
void func_00003B18(s32 arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(D_00022EE0->unk58, s32 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_00009D4C(arg0, arg1, (s32) D_00022EE0);
        break;
    case 0:
        func_000072FC(arg0, arg1, (s32) D_00022EE0);
        break;
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003B70);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D0C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003C08);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003D14);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00002DB8);
#endif

#if FW_VERSION == 100
void func_00004048(struct Unk_func_00004048_0 *arg0) {
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    func_00005A64(arg0->pad20, 0);
    func_00005ADC(&arg0->pad20[4], 0);
    func_00005B38(&arg0->pad20[8], 0);
    arg0->unk2C = 0;
    arg0->unk30 = 0;
    func_000040D0(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003D70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003E60);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003F50);
#endif

#if FW_VERSION != 100
void func_00004048(struct Unk_func_00004048_0 *arg0) {
    arg0->unk18 = 0;
    arg0->unk1C = 0;
    func_00005A64((u8 *)arg0 + 0x20, 0);
    func_00005ADC((u8 *)arg0 + 0x24, 0);
    func_00005B38((u8 *)arg0 + 0x28, 0);
    arg0->unk2C = 0;
    arg0->unk30 = 0;
    arg0->unk34 = 0;
    arg0->unk38 = 0;
    func_000040D0(arg0);
}
#endif

#if FW_VERSION != 100
void func_000040AC(struct Unk_func_000040AC_0 *arg0) {
    arg0->unk34 = 0;
    arg0->unk38 = 0;
    func_0000F280(arg0);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000040D0);

#if FW_VERSION == 100
s32 func_00003214(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x2C) == 0;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 100
void func_00003234(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = scePaf_B7E6052B(0x60);
    sceVshCommonGui_35D57A35(temp_v0, arg1, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_v0;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000328C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000032B0);
#endif

#if FW_VERSION != 100
void func_000041D4(struct Unk_func_000041D4_0 *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = scePaf_B7E6052B(0x50);
    vsh_DE027583(temp_s1, arg1, 0, 0, scePaf_72514A05(arg1, "savedata_list", 0));
    arg0->unk1C = temp_s1;
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D50);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D60);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D6C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021D80);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004244);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000042A8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000043C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000044DC);
#endif

#if FW_VERSION != 100
void func_0000463C(struct Unk_func_0000463C_0 *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    if (arg2 != 0) {
        if (arg0->unk8 & 0x80) {
            if (arg0->unk34 != 3) {

            } else {
                func_0000468C(arg1, arg2, arg3);
            }
        }
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000468C);
#endif

#if FW_VERSION != 100
void func_00004A94(struct Unk_func_00004A94_0 *arg0) {
    vsh_FA1DE461(arg0->unk10->unk24->unk1C, &func_00004AC4, arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004AC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004B30);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004DE4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000036F8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003A40);
#endif

#if FW_VERSION == 100
void func_00005A24(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B94();
}
#endif

#if FW_VERSION == 100
void func_00005A44(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005BC4();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005190);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005550);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005954);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005A04);
#endif

#if FW_VERSION != 100
void func_00005A24(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B94();
}
#endif

#if FW_VERSION != 100
void func_00005A44(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005BC4();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005A64);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005ADC);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005B38);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005B94);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005BC4);

#if FW_VERSION == 100
void func_00003E68(M2C_UNK **arg0) {
    *arg0 = &D_00021DD0;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003E90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003EC0);
#endif

#if FW_VERSION == 100
void func_00003EF0(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
}
#endif

#if FW_VERSION == 100
void func_00003F18(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
}
#endif

#if FW_VERSION == 100
void func_00003F40(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00003F78);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000040B0);
#endif

#if FW_VERSION != 100
void func_00005CBC(M2C_UNK **arg0) {
    *arg0 = &D_00021DD0;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION != 100
void func_00005CE4(struct Unk_func_00005CE4_0 *arg0, s32 arg1) {
    func_0000FB58(arg0, arg1);
    arg0->unk1C = 1;
    arg0->unk0 = &D_00021E38;
    arg0->unk18 = 0;
}
#endif

#if FW_VERSION != 100
void func_00005D20(struct Unk_func_00005D20_0 *arg0, s32 arg1) {
    func_0000FB58(arg0, arg1);
    arg0->unk1C = 1;
    arg0->unk0 = &D_00021E38;
    arg0->unk18 = 0;
}
#endif

#if FW_VERSION != 100
void func_00005D5C(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
}
#endif

#if FW_VERSION != 100
void func_00005D84(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
}
#endif

#if FW_VERSION != 100
void func_00005DAC(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
    scePaf_4E67BB08(arg0);
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021DA8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021DC0);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A08);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021DD0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004158);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000459C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A40);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A4C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A5C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A64);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A70);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A84);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020A98);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020AB0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021DF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020AC4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020AC8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020ACC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004670);
#endif

#if FW_VERSION == 100
void func_00004950(void *arg0) {
    sceVshCommonGui_FA1DE461(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), void **, 0x58), s32 *, 0x1C), &func_00004980, arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004980);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000049E4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004C98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004CE0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004D70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004DB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00004E58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000052DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005358);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005464);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000054FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005DE4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006080);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005630);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006114);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000061D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006630);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000066F4);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006854);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006920);

#if FW_VERSION == 100
void func_0000574C(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_00005774(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_00006950(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_00006978(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_000069A0(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000069D8);
#endif

#if FW_VERSION != 100
void func_00006B04(void) {
}
#endif

#if FW_VERSION != 100
void func_00006B0C(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006B14);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006B74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006BD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006C50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006CCC);
#endif

#if FW_VERSION != 100
void func_00006D50(struct Unk_func_00006D50_0 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000126B0();
    temp_v0 = scePaf_B7E6052B(0x3C);
    func_00003D14(temp_v0, arg1);
    arg0->unk24 = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_B7E6052B(0x20);
        func_0000F44C(temp_v0_2, arg1);
        arg0->unk20 = temp_v0_2;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006DCC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006E5C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006EF4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006F60);
#endif

#if FW_VERSION == 100
void func_00006FF0(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#else
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006FF0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021DF0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021DF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E0C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E24);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E38);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E48);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000057D4);
#endif

#if FW_VERSION == 100
void func_00005AA8(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00005AEC((s32) arg0, temp_v1 - 0xA);
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005AEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005C10);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005C70);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005CEC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005D68);
#endif

#if FW_VERSION == 100
void func_00005DEC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000102C4(arg0, arg1, arg2);
    temp_v0 = scePaf_B7E6052B(0x34);
    func_00003D14(temp_v0, arg1);
    M2C_FIELD(arg0, s32 *, 0x58) = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_B7E6052B(0x20);
        func_0000F44C(temp_v0_2, arg1);
        M2C_FIELD(arg0, s32 *, 0x50) = temp_v0_2;
    }
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005E68);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005EF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005F3C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022070);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00005FCC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E4C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E6C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021E90);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021EB0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021ED8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021EFC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021F1C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021F3C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021F60);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021F80);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021F98);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006048);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000060B4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000061EC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020CB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000625C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000062B8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020CFC);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021FAC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00021FCC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022070);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022088);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000703C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007114);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007164);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000220B0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007290);
#endif

#if FW_VERSION != 100
void func_000072F4(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000220F4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022150);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000221AC);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000221BC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000221D4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022200);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020DB4);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_0002221C);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_0002223C);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022254);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022270);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022294);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000222B4);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000222D4);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000222F4);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_0002230C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022320);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022330);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022348);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000062DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000063BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006504);
#endif

#if FW_VERSION == 100
void func_000065FC(s32 arg0) {
    D_00021CA8 = arg0;
}
#endif

#if FW_VERSION == 100
s32 func_00006608(void) {
    return D_00021CA8;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006614);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006688);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000072FC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000073E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000075D8);
#endif

#if FW_VERSION != 100
void func_0000763C(struct Unk_func_0000763C_0 *arg0) {
    func_00010260(arg0->unk1C);
    func_00010104(3, 0);
    func_0000947C(arg0, 0);
}
#endif

#if FW_VERSION != 100
void func_0000767C(s32 arg0) {
    D_00022EF0 = arg0;
}
#endif

#if FW_VERSION != 100
s32 func_00007688(void) {
    return D_00022EF0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007694);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000780C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000789C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007AE0);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007B18);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007CB4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006A64);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006B8C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006CD4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00006D58);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007050);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000072F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007D34);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007EC0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007FB0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008078);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000083C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008618);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000864C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000086EC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000088AC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000089F4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008A28);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008AC8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000076E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007798);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000077F8);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008C2C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007900);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007984);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008C48);
#endif

#if FW_VERSION != 100
void func_00008D14(struct Unk_func_00008D14_0 *arg0, struct Unk_func_00008D14_1 *arg1) {
    M2C_UNK sp10;

    func_00010104(3, 1);
    func_0000767C(3);
    scePaf_533F3856(&sp10, scePaf_4842A808(arg1->unk4, &D_00022270), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_00010184(arg1->unk1C, arg0->unk1D0, (s32) &sp10, 5, (s32) &func_00008F6C, 5, 0, (s32) arg1);
    func_000020C4((s32) &sp10);
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008DC4);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008E98);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007C24);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00007E9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008F6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008FF8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000902C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009234);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000092F0);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009438);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000080E0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000081E4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000947C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000095A4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009624);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009658);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000097D4);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009868);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00011150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008448);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008494);
#endif

#if FW_VERSION != 100
void func_0000992C(struct Unk_func_0000763C_0 *arg0) {
    if (arg0 != NULL) {
        func_0000763C(arg0);
        func_0000283C(arg0, 0x80101003);
        func_00000D10(arg0, 0x80101003);
    }
}
#endif

#if FW_VERSION != 100
void func_00009978(struct Unk_func_00009978_0 *arg0) {
    if (arg0 != NULL) {
        func_00010260(arg0->unk1C);
        func_0000231C(arg0, 0);
    }
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_000099B0);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009A08);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009A60);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009AB8);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009B10);

#if FW_VERSION == 100
void func_000086E8(void) {
    func_00009B10();
}
#endif

#if FW_VERSION != 100
void func_00009B68(void) {
    func_00009B10();
}
#endif

#if FW_VERSION != 100
void func_00009B84(void) {
    func_00009C30();
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009BA0);

#if FW_VERSION == 100
void func_00008770(void) {
    func_00009BA0();
}
#endif

#if FW_VERSION == 100
void func_0000878C(void) {
    func_00009BA0();
}
#endif

#if FW_VERSION != 100
void func_00009BF8(void) {
    func_00009BA0();
}
#endif

#if FW_VERSION != 100
void func_00009C14(void) {
    func_00009BA0();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009C30);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022378);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009CC8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008804);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000882C);
#endif

#if FW_VERSION != 100
void func_00009D44(void) {
}
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000223B4);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000223C8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000223D8);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000223E8);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022408);
#endif

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022420);

INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022434);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00020F9C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009D4C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009E30);

#if FW_VERSION == 100
s32 func_00009F20(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg2 == 0x80101003) {
        func_0000D850(M2C_FIELD(arg1, s32 *, 0x2C));
        func_0000E180(arg0, (s32) arg1, 0);
        func_00009E30((s32) arg1, 1);
        var_v1 = 1;
    }
    return var_v1;
}
#else
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009F20);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009FA8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008C80);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00008E44);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000091A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000932C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000A154);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000A304);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000A500);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000A878);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AA0C);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AAD4);

#if FW_VERSION == 100
void func_00009478(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000094B0(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
}
#endif

#if FW_VERSION == 100
void func_000094E8(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000ABBC);
#endif

#if FW_VERSION != 100
void func_0000AB0C(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000AB44(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_0000AB7C(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
    scePaf_4E67BB08(arg0);
}
#endif

#if FW_VERSION != 100
void func_0000ABBC(struct Unk_func_0000ABBC_0 *arg0) {
    arg0->unkA34 = 0;
    arg0->unkA38 = 0;
    arg0->unkA3C = 0;
}
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000ABCC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009574);
#endif

#if FW_VERSION != 100
s32 func_0000AC3C(struct Unk_func_0000AC3C_0 *arg0, s32 arg1) {
    return (func_00017FD4(arg0->unk4, arg1, 2) > 0) ? 0 : -1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AC68);
#endif

#if FW_VERSION != 100
s32 func_0000ACE0(struct Unk_func_0000ACE0_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = arg0->unkA3C;
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000B34C(temp_v0), 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
s32 func_0000AD20(struct Unk_func_0000AD20_0 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = arg0->unkA3C;
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000B75C(temp_v0, arg1), 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AD60);
#endif

#if FW_VERSION != 100
void func_0000AE00(struct Unk_func_0000AE00_0 *arg0) {
    func_0000C2E4(arg0->unkA3C);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AE1C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AEB4);
#endif

#if FW_VERSION != 100
s32 func_0000AF00(struct Unk_func_0000AF00_0 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = arg0->unkA3C;
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000C3A8(temp_v0), 0);
    }
    return var_v1;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000AF40);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B028);
#endif

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B0FC);

INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B124);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_00009680);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_000096D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B160);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B200);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B34C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B544);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000B75C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000BA18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022488);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_00022490);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000BC50);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000BDD4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/savedata_plugin", D_000224A0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C0F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C2E4);
#endif

#if FW_VERSION != 100
s32 func_0000C304(struct Unk_func_0000C304_0 *arg0, s32 *arg1, s32 *arg2) {
    if (arg2 != NULL) {
        *arg2 = arg0->unk50;
    }
    if (arg1 != NULL) {
        *arg1 = arg0->unk4C;
    }
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C32C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C3A8);
#endif

#if FW_VERSION != 100
void func_0000C3FC(s32 arg0) {
    func_0001851C(arg0 + 0x24, 0, 0);
}
#endif

#if FW_VERSION != 100
s32 func_0000C420(void) {
    return __builtin_allegrex_min(func_00018A60(0x2710, 0x2710, 0x2710, 0x2710), 0);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C450);
#endif

#if FW_VERSION != 100
void func_0000C50C(struct Unk_func_0000C50C_0 *arg0, s32 arg1) {
    arg0->unk0 = &D_000224C8;
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
    arg0->unkC = 0;
}
#endif

#if FW_VERSION != 100
void func_0000C528(M2C_UNK **arg0) {
    *arg0 = &D_000224C8;
}
#endif

#if FW_VERSION != 100
void func_0000C538(M2C_UNK **arg0) {
    *arg0 = &D_000224C8;
}
#endif

#if FW_VERSION != 100
void func_0000C548(M2C_UNK **arg0) {
    *arg0 = &D_000224C8;
    scePaf_4E67BB08();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C570);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C66C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C8C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000C98C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000CA98);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/savedata_plugin", func_0000CC10);
#endif

#if FW_VERSION != 100
s32 func_0000CD88(struct Unk_func_0000CD88_0 *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = arg0->unkC;
    var_a2 = 0;
    if ((temp_v1 != 0) && ((u32) arg0->unk4 >= arg1)) {
        var_a2 = temp_v1 + (arg1 * 0x68);
    }
    return var_a2;
}
#endif

