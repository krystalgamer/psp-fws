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

