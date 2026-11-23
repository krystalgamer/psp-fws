#include "common.h"
#include "savedata_plugin_decls.h"

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000024);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000000AC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", module_start);

s32 module_stop(void) {
    func_00020B3C();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000015C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000001B0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021778);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002178C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000217A4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000217BC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000217C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000217D8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000217E8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000217FC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021810);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021820);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021834);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021848);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021858);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021870);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021880);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021894);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000218A8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000218B8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000218C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000218DC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000218E8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000218F8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021908);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021918);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000280);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000030C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000348);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000036C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000003A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000003E4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000508);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000062C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000758);

s32 func_000008C8(void *arg0) {
    s32 temp_v0;

    func_00013C90(arg0, 0);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s8 *, 0x4E) = 0;
    M2C_FIELD(arg0, s8 *, 0x60) = 0;
    if (temp_v0 != 0) {
        func_00006DCC(temp_v0, 0);
    }
    return func_00013C5C(arg0) != 0;
}

void func_00000924(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x58) != 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = func_00000960();
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000960);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000009B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000A14);

s32 func_00000A58(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000A60);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021938);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021950);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000B00);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002197C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000BE4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000CC8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000D10);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A1C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A2C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A30);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A48);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A60);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A70);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A80);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021A90);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021AA4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021AB4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021ABC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00000F20);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001060);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000011A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000011D4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001288);

s32 func_00001478(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = -1;
    if (arg0 != NULL) {
        var_v1 = 0x8010300B;
        if (M2C_FIELD(arg0, u8 *, 0x60) == 0) {
            var_v1 = -1;
            if (scePaf_75062BCF(arg1) == 0) {
                var_v1 = func_0000D3D4(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x10)(arg0), 0, 0x800, (s32) &func_000011A8, arg1);
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000150C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000015E0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001964);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001B90);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001C50);

void func_00001E88(void) {
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001E90);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00001F70);

void func_0000206C(s32 arg0, void *arg1) {
    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        func_00000B00(arg0, (s32) arg1);
    }
}

void func_000020A4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00002144();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000020C4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000020F4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002144);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002164);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002218);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000022C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021AE8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021AF8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B08);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B18);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B2C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B3C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000231C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002384);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000023B8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000024A4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000025D8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002600);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002638);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B5C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B70);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B80);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021B8C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000026A0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000273C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000283C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000028C8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002928);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002AC4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002BD8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002C00);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002C38);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002D74);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002EB0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021C00);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021C0C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00002F24);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003224);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021CE8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021CEC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021CF0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021CF4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021CF8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021CFC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D00);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D04);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000038D8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003934);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000039E4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003A80);

void func_00003B18(s32 arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(D_00022EE0, void **, 0x58), s32 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 1:
        func_00009D4C(arg0, arg1, (s32) D_00022EE0);
        break;
    case 0:
        func_000072FC(arg0, arg1, (s32) D_00022EE0);
        break;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003B70);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D0C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003C08);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003D14);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003D70);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003E60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00003F50);

void func_00004048(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00005A64(arg0 + 0x20, 0);
    func_00005ADC(arg0 + 0x24, 0);
    func_00005B38(arg0 + 0x28, 0);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s8 *, 0x38) = 0;
    func_000040D0(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000040AC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000040D0);

void func_000041D4(void *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = scePaf_B7E6052B(0x50);
    vsh_DE027583(temp_s1, arg1, 0, 0, scePaf_72514A05(arg1, "savedata_list", 0));
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_s1;
}

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D50);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D60);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D6C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D78);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021D80);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00004244);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000042A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000043C4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000044DC);

void func_0000463C(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    if (arg2 != 0) {
        if (M2C_FIELD(arg0, s32 *, 8) & 0x80) {
            if (M2C_FIELD(arg0, s32 *, 0x34) != 3) {

            } else {
                func_0000468C(arg1, arg2, arg3);
            }
        }
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000468C);

void func_00004A94(void *arg0) {
    vsh_FA1DE461(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), void **, 0x24), s32 *, 0x1C), &func_00004AC4, arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00004AC4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00004B30);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00004DE4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005190);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005550);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005954);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005A04);

void func_00005A24(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B94();
}

void func_00005A44(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005BC4();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005A64);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005ADC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005B38);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005B94);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005BC4);

void func_00005CBC(M2C_UNK **arg0) {
    *arg0 = &D_00021DD0;
    scePaf_4E67BB08();
}

void func_00005CE4(s32 arg0, s32 arg1) {
    func_0000FB58(arg0, arg1);
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00021E38;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_00005D20(s32 arg0, s32 arg1) {
    func_0000FB58(arg0, arg1);
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00021E38;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}

void func_00005D5C(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
}

void func_00005D84(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
}

void func_00005DAC(M2C_UNK **arg0) {
    *arg0 = &D_00021E38;
    func_0000FBB0();
    scePaf_4E67BB08(arg0);
}

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021DA8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021DC0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021DD0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00005DE4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006080);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006114);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000061D8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006630);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000066F4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006854);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006920);

void func_00006950(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
}

void func_00006978(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
}

void func_000069A0(M2C_UNK **arg0) {
    *arg0 = &D_00022070;
    func_0000D8E8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000069D8);

void func_00006B04(void) {
}

void func_00006B0C(void) {
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006B14);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006B74);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006BD4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006C50);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006CCC);

void func_00006D50(void *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000126B0();
    temp_v0 = scePaf_B7E6052B(0x3C);
    func_00003D14(temp_v0, arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = scePaf_B7E6052B(0x20);
        func_0000F44C(temp_v0_2, arg1);
        M2C_FIELD(arg0, s32 *, 0x20) = temp_v0_2;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006DCC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006E5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006EF4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006F60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00006FF0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021DF0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021DF8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E0C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E24);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E38);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E48);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E4C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E6C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021E90);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021EB0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021ED8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021EFC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021F1C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021F3C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021F60);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021F80);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021F98);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021FAC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00021FCC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022070);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022088);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000703C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007114);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007164);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000220B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007290);

void func_000072F4(void) {
}

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000220F4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022150);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000221AC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000221BC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000221D4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022200);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002221C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002223C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022254);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022270);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022294);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000222B4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000222D4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000222F4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002230C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022320);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022330);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022348);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000072FC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000073E4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000075D8);

void func_0000763C(void *arg0) {
    func_00010260(M2C_FIELD(arg0, s32 *, 0x1C));
    func_00010104(3, 0);
    func_0000947C(arg0, 0);
}

void func_0000767C(s32 arg0) {
    D_00022EF0 = arg0;
}

s32 func_00007688(void) {
    return D_00022EF0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007694);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000780C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000789C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007AE0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007B18);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007CB4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007D34);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007EC0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00007FB0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008078);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000083C0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008618);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000864C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000086EC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000088AC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000089F4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008A28);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008AC8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008C2C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008C48);

void func_00008D14(void *arg0, void *arg1) {
    M2C_UNK sp10;

    func_00010104(3, 1);
    func_0000767C(3);
    scePaf_533F3856(&sp10, scePaf_4842A808(M2C_FIELD(arg1, s32 *, 4), &D_00022270), 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_00010184(M2C_FIELD(arg1, void **, 0x1C), M2C_FIELD(arg0, s32 *, 0x1D0), (s32) &sp10, 5, (s32) &func_00008F6C, 5, 0, (s32) arg1);
    func_000020C4((s32) &sp10);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008DC4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008E98);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008F6C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00008FF8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000902C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009234);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000092F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009438);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000947C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000095A4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009624);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009658);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000097D4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009868);

void func_0000992C(void *arg0) {
    if (arg0 != NULL) {
        func_0000763C(arg0);
        func_0000283C(arg0, 0x80101003);
        func_00000D10(arg0, 0x80101003);
    }
}

void func_00009978(void *arg0) {
    if (arg0 != NULL) {
        func_00010260(M2C_FIELD(arg0, s32 *, 0x1C));
        func_0000231C(arg0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000099B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009A08);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009A60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009AB8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009B10);

void func_00009B68(void) {
    func_00009B10();
}

void func_00009B84(void) {
    func_00009C30();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009BA0);

void func_00009BF8(void) {
    func_00009BA0();
}

void func_00009C14(void) {
    func_00009BA0();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009C30);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022378);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009CC8);

void func_00009D44(void) {
}

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000223B4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000223C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000223D8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000223E8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022408);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022420);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022434);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009D4C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009E30);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009F20);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00009FA8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000A154);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000A304);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000A500);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000A878);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AA0C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AAD4);

void func_0000AB0C(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
}

void func_0000AB44(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
}

void func_0000AB7C(M2C_UNK **arg0) {
    *arg0 = &D_00022488;
    func_0000ABCC((s32) arg0);
    func_000117A8((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000ABBC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000ABCC);

s32 func_0000AC3C(void *arg0, s32 arg1) {
    return (func_00017FD4(M2C_FIELD(arg0, s32 *, 4), arg1, 2) > 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AC68);

s32 func_0000ACE0(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA3C);
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000B34C(temp_v0), 0);
    }
    return var_v1;
}

s32 func_0000AD20(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA3C);
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000B75C(temp_v0, arg1), 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AD60);

void func_0000AE00(void *arg0) {
    func_0000C2E4(M2C_FIELD(arg0, s32 *, 0xA3C));
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AE1C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AEB4);

s32 func_0000AF00(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0x80103002;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xA3C);
    if (temp_v0 != 0) {
        var_v1 = __builtin_allegrex_min(func_0000C3A8(temp_v0), 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000AF40);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B028);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B0FC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B124);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B160);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B200);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B34C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B544);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000B75C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000BA18);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022488);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022490);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000BC50);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000BDD4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000224A0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C0F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C2E4);

s32 func_0000C304(void *arg0, s32 *arg1, s32 *arg2) {
    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x50);
    }
    if (arg1 != NULL) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x4C);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C32C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C3A8);

void func_0000C3FC(s32 arg0) {
    func_0001851C(arg0 + 0x24, 0, 0);
}

s32 func_0000C420(void) {
    return __builtin_allegrex_min(func_00018A60(0x2710, 0x2710, 0x2710, 0x2710), 0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C450);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C50C);

void func_0000C528(M2C_UNK **arg0) {
    *arg0 = &D_000224C8;
}

void func_0000C538(M2C_UNK **arg0) {
    *arg0 = &D_000224C8;
}

void func_0000C548(M2C_UNK **arg0) {
    *arg0 = &D_000224C8;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C570);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C66C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C8C4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000C98C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CA98);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CC10);

s32 func_0000CD88(void *arg0, u32 arg1) {
    s32 temp_v1;
    s32 var_a2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
    var_a2 = 0;
    if ((temp_v1 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 4) >= arg1)) {
        var_a2 = temp_v1 + (arg1 * 0x68);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CDBC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CDEC);

void func_0000CE1C(M2C_UNK **arg0) {
    *arg0 = &D_00022508;
}

void func_0000CE2C(M2C_UNK **arg0) {
    *arg0 = &D_00022508;
}

void func_0000CE3C(M2C_UNK **arg0) {
    *arg0 = &D_00022508;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CE64);

s32 func_0000CE94(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CE9C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CEB8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000224C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000224D8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CF50);

void func_0000CFA0(s32 arg0) {
    func_000159A4(arg0 + 8, arg0 + 0x14, arg0 + 0xC, arg0 + 0x10);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000CFCC);

void func_0000D14C(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D1FC((s32) arg0);
}

void func_0000D174(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
}

void func_0000D19C(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
}

void func_0000D1C4(M2C_UNK **arg0) {
    *arg0 = &D_000224F8;
    func_0000D214((s32) arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D1FC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D214);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D274);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D2FC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D33C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D3D4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D530);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D588);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D5E4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D630);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D6E8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D718);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D754);

void func_0000D7B8(M2C_UNK **arg0) {
    *arg0 = &D_00022518;
}

void func_0000D7C8(M2C_UNK **arg0) {
    *arg0 = &D_00022518;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D7F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D86C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D8E8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D924);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D960);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D9B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000D9C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000224F8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022508);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022518);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DA2C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DAA8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DB00);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DC24);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DC30);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DCAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DD2C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DDAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DDBC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DDFC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DE50);

void func_0000DEF4(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_0000DF38((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000DF38);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E0A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E120);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E190);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E200);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E274);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E28C);

void func_0000E2DC(s32 arg0) {
    func_0000EB30(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E2F8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E34C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E500);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E554);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E688);

void func_0000E768(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x38) = scePaf_A0ED77C4(0, &func_0000E2F8, arg0, -1, -1, &func_0000E34C);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E7B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E7C0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E83C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E84C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E88C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E89C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E8DC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E930);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000E9B8);

void func_0000E9F4(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

void func_0000EA4C(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000EAA8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000EB30);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000EBA4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000ECAC);

void ***func_0000ED50(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000EDB8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000EE4C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000EF5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F054);

void func_0000F130(void) {
    scePaf_5FAC9869();
}

void func_0000F14C(void) {
    scePaf_3586BE05();
}

void func_0000F168(void) {
    scePaf_545FE2DA();
}

void func_0000F184(void) {
    scePaf_10B901E7();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F1A0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F1EC);

void func_0000F238(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
}

void func_0000F248(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
}

void func_0000F258(M2C_UNK **arg0) {
    *arg0 = &D_00022578;
    scePaf_4E67BB08();
}

void func_0000F280(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}

void func_0000F290(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F298);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F2F8);

s32 func_0000F364(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (!(M2C_FIELD(arg0, s32 *, 8) & 0xD8) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0000F38C(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 8), 4, 1);
}

s32 func_0000F398(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 8) & 0xD8) != 0;
}

s32 func_0000F3A8(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 1;
    if (!((M2C_FIELD(arg0, u8 *, 8) ^ 1) & 1) || (arg1 != M2C_FIELD(arg0, s32 *, 0x10))) {
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F3D4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F44C);

void func_0000F484(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000F238(arg0);
}

void func_0000F4AC(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000F238(arg0);
}

void func_0000F4D4(s32 **arg0) {
    *arg0 = &D_00022560;
    func_0000F238(arg0);
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F50C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F518);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F544);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F564);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F5F8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F68C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F7A0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F88C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F968);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F9A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000F9E4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FA20);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FA70);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FB1C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FB58);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FB84);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FBB0);

void func_0000FBC0(M2C_UNK **arg0) {
    *arg0 = &D_000226A0;
}

void func_0000FBD0(M2C_UNK **arg0) {
    *arg0 = &D_000226A0;
    scePaf_4E67BB08();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FBF8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FC10);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FD8C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FE74);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0000FFF8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001009C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010104);

void func_00010184(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_00010224(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = sceVshCommonGui_10906D79(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void func_00010224(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 != 0) {
        sceVshCommonGui_72E652AA(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010260);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010268);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000102EC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022530);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022550);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022560);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022578);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022588);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002258C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010414);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000225AC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000225B4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010664);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010818);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000109CC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010C10);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010C74);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010D2C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00010DE8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011150);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011180);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011190);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000111F8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011274);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001130C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001135C);

void func_00011428(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00011718();
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011448);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000114C0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011554);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001166C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011718);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011738);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011770);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000117A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000117D0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000117F8);

void func_00011834(s32 arg0) {
    scePaf_6829D7AF(arg0 + 0xA20, 0, 0x10);
    func_0001186C(arg0);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001186C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000118BC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001196C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000119D4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000119F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011AA0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011AE4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011BB4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011C24);

void func_00011C4C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011C54);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011CAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011D04);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011D9C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011E34);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000226A0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000226B8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000226C0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000226D0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011ED4);

void func_00011F54(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00011F5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012008);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001209C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012170);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001220C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000123C8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012418);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012484);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000124F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012580);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012610);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000126B0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000126DC);

void func_00012764(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001276C);

s32 func_00012860(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012868);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012A24);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012A7C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012AB0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012BF4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012CB4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012D18);

s32 func_00012D8C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012D94);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012ECC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012EF8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00012F84);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001300C);

void func_00013048(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_7EC15225(var_a0);
}

void func_000130A0(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_7EC15225(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000130FC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001317C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000131FC);

void ***func_000132BC(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    *temp_s0 = M2C_FIELD(temp_v1, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013324);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013360);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001339C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000133C4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000133EC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013428);

s32 func_0001346C(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}

s32 func_0001348C(void) {
    func_00018D78();
    return 0;
}

void func_000134AC(void *arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (M2C_FIELD(temp_s1, s32 *, 4) == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_00013680(temp_s1);
}

void func_000134FC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    func_00018DC4((s32) arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001351C);

void func_00013540(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    sceVshCommonGui_F4D1E387(arg1, arg2, arg3, arg4, arg5, arg6, 0);
    M2C_FIELD(arg0, s8 *, 0x34) = 1;
}

void func_0001358C(void) {
    sceVshCommonGui_C5B53362();
}

void func_000135A8(void) {
    sceVshCommonGui_A1C3DDD6();
}

void func_000135C4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    sceVshCommonGui_607D5C82(arg1, arg2, arg3);
    M2C_FIELD(arg0, s8 *, 0x34) = 0;
}

u8 func_000135FC(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x34);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013604);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013680);

s32 func_00013708(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00013710(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_00013718(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC);
}

s32 func_00013720(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_00013728(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14);
}

s32 func_00013730(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 func_00013738(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1C);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013740);

void func_00013764(void *arg0) {
    scePaf_CAF05F1D(M2C_FIELD(arg0, s32 *, 4));
}

void func_00013780(void *arg0) {
    scePaf_3481F595(M2C_FIELD(arg0, s32 *, 4));
}

void func_0001379C(void *arg0) {
    scePaf_DAB59652(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000137B8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013800);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013848);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000138C0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013938);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000139B8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013A3C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000226F8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022718);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022738);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013ABC);

s32 func_00013C24(void *arg0, void *arg1) {
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v0;

    var_v1 = 0;
    if (arg1 != NULL) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0x4C);
        if ((temp_a0 != 0) && ((temp_v0 = M2C_FIELD(arg1, u8 *, 0xA30), var_v1 = 1, (temp_v0 == 0)) || (temp_a0 >= temp_v0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013C5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013C6C);

void func_00013C88(void) {
}

void func_00013C90(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x4D) = arg1;
}

s32 func_00013C98(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

M2C_UNK *func_00013CA0(void) {
    return &D_00022F1C;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013CAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013CD8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013D04);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000227B8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013D38);

s32 func_00013D78(void *arg0) {
    scePaf_6829D7AF((s32) &D_00022F0C, 0, 0x10);
    scePaf_F95EA3F1(&D_00022F0C, arg0, 0x10);
    func_0001FA38(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8));
    scePaf_6829D7AF((s32) &D_00023028, 0, 0xC);
    return 0;
}

s32 func_00013DEC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00013DF4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000227E0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000227EC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022800);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014038);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014358);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000143D4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022838);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001445C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014548);

s32 func_000145E0(s32 arg0, u32 arg1) {
    return ((s32) (arg0 + 1) / (s32) (arg1 >> 5)) + 1;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014600);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000146CC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022870);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002287C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014B24);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014D58);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014E54);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00014FB0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015068);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015094);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000150F8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015180);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000151EC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015280);

s32 func_000152B4(void) {
    return 0x1330;
}

void func_000152BC(s32 arg0, s32 arg1) {
    func_0001445C(arg0, (s32) &D_000228C8, arg1);
}

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000228C8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000228D4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000228DC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000152E0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000154C8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015574);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000155F4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015650);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000156D4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000157E0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000159A4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015A60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015B18);

void func_00015CB8(s32 arg0, s32 arg1) {
    func_00015B18(arg0, arg1, 1);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015CD4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022908);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022914);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015EAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00015FBC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000160E0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001612C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016188);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016294);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022934);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000162E8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022954);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_0002295C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001646C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001656C);

void func_00016944(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;

    temp_a1 = arg1 * 2;
    *arg0 = (*arg0 & ~(3 << temp_a1)) | (arg2 << temp_a1);
}

void func_0001696C(s32 *arg0, s32 arg1) {
    *arg0 &= ~(3 << arg1);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016988);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016998);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000169AC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000169C4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016C28);

void func_00016C4C(void *arg0) {
    s32 temp_v1;

    if (arg0 != NULL) {
        func_0001C2A0(M2C_FIELD(arg0, s32 *, 8));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 != 0) {
            func_00013D04(temp_v1);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        scePaf_6829D7AF((s32) arg0, 0, 0x10C);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016CA4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016D6C);

s32 func_00016ED4(void *arg0) {
    s32 var_v0;

    var_v0 = 0x80084002;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x100);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016EEC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016F60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016F9C);

s32 func_00016FA8(void) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(&D_00023028, s32 *, 0) != 0) {
        var_a0 = M2C_FIELD(&D_00023028, s32 *, 4);
    }
    return var_a0;
}

void func_00016FC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg4 != 1) {
        func_00016FFC(arg0, arg1, arg2, arg3);
    } else {
        func_000171DC(arg0, arg1, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00016FFC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000171DC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000174DC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001767C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000177B4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000229A0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00017A60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00017C5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00017D40);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00017E70);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00017FD4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000180FC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000181BC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001836C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000229D0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000229DC);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_000229F0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A08);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A18);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001842C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A38);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A4C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001851C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001867C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000186E8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001896C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000189EC);

M2C_UNK *func_00018A44(s32 arg0) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (!(arg0 & 0xFF)) {
        var_v0 = &D_00022B18;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018A60);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018AE0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018BAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018C1C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A6C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A74);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A84);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022A94);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022AA4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022AB0);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022AC4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022AD8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022AE8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022AF4);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022B00);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022B0C);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022B18);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022B24);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018C8C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018D20);

void func_00018D40(void *arg0) {
    scePaf_27F64616(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_00013680(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018D78);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018DC4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018ED0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018F94);

void func_00018FA4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000190E0((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00018FD8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001906C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000190E0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019204);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001922C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019268);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000192AC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019734);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019914);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000199C0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019B74);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019CFC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00019E6C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001A0E8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001A8DC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001AF5C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001B23C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001B3A8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001B6EC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001B984);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001BE28);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001BF30);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001C2A0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001C38C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001C50C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001C8C4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001C90C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001C9F0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001CB40);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D2A4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D30C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D364);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D4F4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D58C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D754);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D7AC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D824);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D894);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001D920);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001DAA8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001DC3C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001DDBC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001DFB4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001E0CC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001E1E0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001E6A4);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001EA68);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001EB3C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001EEE0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001EFA8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001F100);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001F204);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022B58);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022BA8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022BB0);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001F3CC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001F684);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001F754);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001F830);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FA38);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FAAC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FB00);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FB3C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FBF8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FC8C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FD20);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FD98);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FE68);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FEDC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FF3C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0001FFD8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000200C8);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_000201CC);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_0002033C);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00020510);

INCLUDE_ASM("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", func_00020568);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022BD8);

INCLUDE_RODATA("tmp/asm/282/savedata_plugin/nonmatchings/savedata_plugin", D_00022BE0);
