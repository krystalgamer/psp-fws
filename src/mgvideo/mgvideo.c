/* cflags: -Os */
#include "common.h"
#include "k1.h"
#include "mgvideo_decls.h"

INCLUDE_ASM("nonmatchings/mgvideo", func_00000000);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00000018);

s32 func_00000028(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) | (M2C_FIELD(arg0, u8 *, 1) << 0x10) | (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00000054);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000080);

INCLUDE_ASM("nonmatchings/mgvideo", func_000000D8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000108);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000016C);

INCLUDE_ASM("nonmatchings/mgvideo", func_000001D8);

s32 sceMgVideo_driver_F5E39E17(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00000218);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000028C);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000308);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000360);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000374);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000041C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000090D8);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000090DC);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000090F0);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009108);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009128);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009140);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009158);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000916C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009188);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000091A0);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000091B4);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000092AC);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000092B4);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000092C4);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000092C8);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009344);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009348);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009364);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009370);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000458);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000634);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000810);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000924);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000B40);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000D08);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000E10);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000EE8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000FA0);

INCLUDE_ASM("nonmatchings/mgvideo", func_000011F8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00001464);

INCLUDE_ASM("nonmatchings/mgvideo", func_00001510);

INCLUDE_ASM("nonmatchings/mgvideo", func_000016E4);

INCLUDE_ASM("nonmatchings/mgvideo", func_000019F0);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_14186E4D);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_ADA3D270);

s32 sceMgVideo_driver_3B0F6095(void) {
    sceMgVideo_driver_ADA3D270();
    return 0;
}

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_63372201);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_2BF31464);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00007B60);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00005D30);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00007EC0);
#endif

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/mgvideo", func_00000108_v340);
#endif

#if FW_VERSION == 303
INCLUDE_ASM("nonmatchings/mgvideo", func_00000108_v303);
#endif

#if FW_VERSION < 352
s32 func_00000108(void) {
    return 0;
}
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_000001C4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000180);

s32 func_000002AC(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = __builtin_allegrex_ins(arg0, 0, 0x1D, 2);
    return (((u32) ~(-(k1IsUserMode()) & ((temp_a0 + arg1) | temp_a0 | arg1)) >> 0x1F) != 0) ? 0 : 0x80000023;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_000002E0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000350);

s32 func_000003C0(s32 arg0, s32 arg1) {
    return (((u32) ~(-(k1IsUserMode()) & ((arg0 + arg1) | arg0 | arg1)) >> 0x1F) != 0) ? 0 : 0x80000023;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_000003F0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000460);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mgvideo", func_00000110);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000180);

INCLUDE_ASM("nonmatchings/mgvideo", func_000001E8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000224);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000028C);

INCLUDE_ASM("nonmatchings/mgvideo", func_000002F4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000324);

s32 func_0000038C(struct Unk_func_0000038C_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (arg0->unk0 != 0) {
        var_v1 = ((u32) arg0->unk4 >= 0x50U) ? 0 : 0x8050C031;
    }
    return var_v1;
}
#endif

#if FW_VERSION < 352
s32 func_000003B8(struct Unk_func_000003B8_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (arg0->unk0 != 0) {
        var_v1 = ((arg0->unk4 ^ 0x3EB0) == 0) ? 0 : 0x8050C003;
    }
    return var_v1;
}

s32 func_000003E4(struct Unk_func_000003E4_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (arg0->unk0 != 0) {
        var_v1 = ((u32) arg0->unk4 >= 0x50U) ? 0 : 0x8050C003;
    }
    return var_v1;
}

s32 func_00000410(struct Unk_func_00000410_0 *arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (arg0->unk0 != 0) {
        var_v1 = ((u32) arg0->unk4 >= arg1) ? 0 : 0x8050C003;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_0000043C);

s32 func_000004DC(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = -1;
    var_v0 = func_0000043C(arg1);
    if (var_v0 >= 0) {
        temp_v0 = sceMgr_driver_F30E22CF(3);
        var_s0 = temp_v0;
        if (temp_v0 >= 0) {
            var_s2 = temp_v0;
            temp_v0_2 = sceMgr_driver_4A14DD18(temp_v0, arg0, var_v0);
            var_s0 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                sceMgr_driver_1B8F3192(var_v0);
                return temp_v0;
            }
        }
        if (var_v0 >= 0) {
            sceMgr_driver_1B8F3192(var_v0);
        }
        if (var_s2 >= 0) {
            sceMgr_driver_1B8F3192(var_s2);
        }
        var_v0 = func_00000000(var_s0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
s32 func_000006A0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = -1;
    var_v0 = func_0000043C(arg1);
    if (var_v0 >= 0) {
        temp_v0 = sceMgr_driver_F30E22CF(3);
        var_s0 = temp_v0;
        if (temp_v0 >= 0) {
            var_s2 = temp_v0;
            temp_v0_2 = sceMgr_driver_DBB5C63E(temp_v0, arg0, var_v0);
            var_s0 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                sceMgr_driver_1B8F3192(var_v0);
                return temp_v0;
            }
        }
        if (var_v0 >= 0) {
            sceMgr_driver_1B8F3192(var_v0);
        }
        if (var_s2 >= 0) {
            sceMgr_driver_1B8F3192(var_s2);
        }
        var_v0 = func_00000000(var_s0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 352
s32 func_000005A0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = -1;
    var_v0 = func_0000043C(arg1);
    if (var_v0 >= 0) {
        temp_v0 = sceMgr_driver_F30E22CF(3);
        var_s0 = temp_v0;
        if (temp_v0 >= 0) {
            var_s2 = temp_v0;
            temp_v0_2 = sceMgr_driver_DB12BB23(temp_v0, arg0, var_v0);
            var_s0 = temp_v0_2;
            if (temp_v0_2 >= 0) {
                sceMgr_driver_1B8F3192(var_v0);
                return temp_v0;
            }
        }
        if (var_v0 >= 0) {
            sceMgr_driver_1B8F3192(var_v0);
        }
        if (var_s2 >= 0) {
            sceMgr_driver_1B8F3192(var_s2);
        }
        var_v0 = func_00000000(var_s0);
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00000664);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000754);

INCLUDE_ASM("nonmatchings/mgvideo", func_000007E8);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000087C);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000994);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000B08);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000B5C);
#endif

#if FW_VERSION < 303
INCLUDE_RODATA("nonmatchings/mgvideo", D_00005D10);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00005D30);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006070);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000608C);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00000CCC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000F24);

INCLUDE_ASM("nonmatchings/mgvideo", func_00000F74);

s32 func_00001084(void) {
    s32 var_v1;

    var_v1 = 0x8050C026;
    if (!(D_0000BE84 & 1)) {
        var_v1 = !(D_0000BE84 & 2) ? 0 : 0x8050C025;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_000010B4);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00001338);

INCLUDE_ASM("nonmatchings/mgvideo", func_000014A0);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mgvideo", func_0000112C);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000123C);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00001354);

INCLUDE_ASM("nonmatchings/mgvideo", func_000013EC);
#endif

#if FW_VERSION >= 303
INCLUDE_ASM("nonmatchings/mgvideo", func_000017B8);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_CE2006D8);

INCLUDE_ASM("nonmatchings/mgvideo", func_000021C0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00002328);

INCLUDE_ASM("nonmatchings/mgvideo", func_00002688);

INCLUDE_ASM("nonmatchings/mgvideo", func_000027F4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00002A58);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000093A0);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_000018BC);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mgvideo", func_00001504);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_000015E8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00001664);

INCLUDE_ASM("nonmatchings/mgvideo", func_000016CC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00001744);

INCLUDE_ASM("nonmatchings/mgvideo", func_00001794);

s32 sceMgVideo_driver_5CFE1758(void) {
    return 0;
}

s32 sceMgVideo_driver_585F5755(void) {
    sceMgVideo_driver_02CD7137();
    return 0;
}

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_04B36B8F);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_02CD7137);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_2E94A4B6);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_76F716B2);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00002178);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_6297802E);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_6F13A2F9);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000206C);

INCLUDE_ASM("nonmatchings/mgvideo", func_000020D0);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mgvideo", D_0000608C);
#endif

INCLUDE_RODATA("nonmatchings/mgvideo", D_000060B0);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_000096EC);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_8DDA1A10);

INCLUDE_ASM("nonmatchings/mgvideo", func_00003200);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_EF33F67A);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_31E2889D);

INCLUDE_ASM("nonmatchings/mgvideo", func_00003650);

INCLUDE_ASM("nonmatchings/mgvideo", func_000039B8);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_281D7964);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_C58C569F);

u32 func_000041E0(s32 arg0, s32 arg1) {
    return (u32) ~(-(k1IsUserMode()) & ((arg0 + arg1) | arg0 | arg1)) >> 0x1F;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00004204);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_E5F5AB03);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_8BF2C963);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_0B34992C);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_C672B777);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_F5579FA8);

INCLUDE_ASM("nonmatchings/mgvideo", func_000050D0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005168);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_3A7EC1CD);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_802B9A79);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_B60EB3F6);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005FF0);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_09FE4FDF);
#else
INCLUDE_ASM("nonmatchings/mgvideo", func_00002158);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000241C);

INCLUDE_ASM("nonmatchings/mgvideo", func_000025AC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00002620);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_A5F216CC);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_57ADD7DA);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_63577C7E);

INCLUDE_ASM("nonmatchings/mgvideo", func_00002BB8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00002D8C);
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00002F54);
#else
void func_00002F54(s32 arg0) {
    ThreadManForKernel_BC31C1B9(0x1400, &func_00002D8C, arg0);
}
#endif

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_E9BE3764);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_9A9CB86C);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_0AE03125);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_1CEB8922);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000097D0);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000097D4);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_38A97269);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_6C73EF37);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007AF0);
#else
INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_10DA1B19);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_1B82B327);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_A4AC9163);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_F27A69C2);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_37CD3829);

INCLUDE_ASM("nonmatchings/mgvideo", func_000036EC);

INCLUDE_ASM("nonmatchings/mgvideo", func_000037C8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00003858);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_0000407C);

INCLUDE_ASM("nonmatchings/mgvideo", func_00004134);

INCLUDE_ASM("nonmatchings/mgvideo", func_000042B8);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00003A30);

INCLUDE_ASM("nonmatchings/mgvideo", func_00003AD8);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_F80FED94);

INCLUDE_ASM("nonmatchings/mgvideo", func_00003D84);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_000047E4);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mgvideo", func_00003EBC);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00003F80);

INCLUDE_ASM("nonmatchings/mgvideo", func_00004098);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_F3E7EE9B);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00005088);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_26AA0AF7);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_1A30EF4B);

INCLUDE_ASM("nonmatchings/mgvideo", func_000053E0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005770);

INCLUDE_ASM("nonmatchings/mgvideo", func_000058B0);

s32 func_0000595C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0) = 1;
    M2C_FIELD(arg0, s8 *, 1) = 1;
    M2C_FIELD(arg0, s8 *, 2) = 1;
    memset(arg0 + 3, 0, 0xD);
    return 0;
}

s32 func_00005998(s32 arg0) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_0000595C(&sp0);
    var_v1 = temp_v0;
    if (temp_v0 >= 0) {
        var_v1 = (memcmp(&sp0, arg0, 0x10) == 0) ? 0 : 0x8050C003;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_2C3149A3);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_46AF872B);

INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_F56A60EC);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000607C);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", sceMgVideo_driver_F7F9279A);
#endif

INCLUDE_ASM("nonmatchings/mgvideo", func_00004834);

INCLUDE_ASM("nonmatchings/mgvideo", func_000048B0);

#if FW_VERSION == 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00007CBC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007DF8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007EB0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007F74);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000980C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009814);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000981C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000982C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000983C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000984C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000985C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000986C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000987C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000988C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000989C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000098AC);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000098BC);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000098CC);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000098D4);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000098E0);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000098EC);

INCLUDE_ASM("nonmatchings/mgvideo", func_000080B8);

INCLUDE_ASM("nonmatchings/mgvideo", func_000081F4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00008380);

INCLUDE_ASM("nonmatchings/mgvideo", func_000083D0);

INCLUDE_ASM("nonmatchings/mgvideo", func_000084B0);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000858C);

INCLUDE_ASM("nonmatchings/mgvideo", func_000085FC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00008858);

INCLUDE_ASM("nonmatchings/mgvideo", func_00008A08);

void func_00008AE8(s32 arg0) {
    D_0000FAE0 = arg0;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00008AF4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00008B28);

INCLUDE_ASM("nonmatchings/mgvideo", func_00008CBC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00008CF4);

s32 func_00008E14(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -2;
    if (func_00008B28(&sp0, arg0) >= 0) {
        var_v1 = (sceRtc_driver_17C26C00(&sp0) >= 0) ? 0 : -1;
    }
    return var_v1;
}

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009908);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009910);
#else
s32 func_000049D0(struct Unk_func_000049D0_0 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 var_s0;
    void *var_s1;

    var_s1 = NULL;
    var_s0 = 0;
    if (arg0 != NULL) {
        var_s1 = (u8 *)arg0 + 0x10;
        var_s0 = ((arg0->unkE << 8) | arg0->unkF) * 0x10;
    }
    *arg1 = func_00004834((s32) var_s1, var_s0, (s32) &D_000060F0);
    *arg2 = func_00004834((s32) var_s1, var_s0, (s32) &D_000060F8);
    *arg3 = func_00004834((s32) var_s1, var_s0, (s32) &D_00006100);
    return 0;
}
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_000064D8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006560);
#endif

#if FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00004A88);

s32 func_00004BEC(struct Unk_func_00004BEC_0 *arg0) {
    return (arg0->unk1 == 0) ? 0 : -2;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00004BFC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00004C44);

INCLUDE_ASM("nonmatchings/mgvideo", func_00004CD8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00004D8C);
#endif

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mgvideo", func_00004E4C);

INCLUDE_ASM("nonmatchings/mgvideo", func_00004ECC);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005078);

INCLUDE_ASM("nonmatchings/mgvideo", func_000050F8);

INCLUDE_ASM("nonmatchings/mgvideo", func_000051D4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005254);

INCLUDE_ASM("nonmatchings/mgvideo", func_000052A4);

INCLUDE_ASM("nonmatchings/mgvideo", func_000052F0);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005380);

INCLUDE_ASM("nonmatchings/mgvideo", func_000053F8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005508);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005540);

INCLUDE_ASM("nonmatchings/mgvideo", func_000055A8);

INCLUDE_ASM("nonmatchings/mgvideo", func_000056F4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00005730);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 303
s32 func_00005850(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -2;
    if (func_000055A8(&sp0, arg0) >= 0) {
        var_v1 = (sceRtc_driver_17C26C00(&sp0) >= 0) ? 0 : -1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 250
s32 func_00005850(s32 arg0) {
    void *sp0;
    s32 var_v1;

    if ((sceRtc_driver_B44BDAED(&sp0) >= 0) || ((var_v1 = -2, (func_000055A8(&sp0, arg0) >= 0)) && (var_v1 = -3, (sceRtc_driver_17C26C00(&sp0) >= 0)))) {
        var_v1 = 0;
    }
    return var_v1;
}
#endif

INCLUDE_RODATA("nonmatchings/mgvideo", D_000060F0);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000060F8);

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_0000992C);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00009938);
#endif

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006100);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006108);

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00006110);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mgvideo", D_00008068);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00006118);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006124);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006130);

INCLUDE_RODATA("nonmatchings/mgvideo", D_0000613C);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00007FB8);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00007FC4);
#endif

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006148);

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_ASM("nonmatchings/mgvideo", func_00006A7C);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006B88);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006D14);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006D94);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006E74);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006EE8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006F68);

INCLUDE_ASM("nonmatchings/mgvideo", func_00006FC4);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007018);

INCLUDE_ASM("nonmatchings/mgvideo", func_0000709C);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007160);

INCLUDE_ASM("nonmatchings/mgvideo", func_000071DC);

s32 func_000072E4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a4;

    var_a4 = -1;
    if (arg0 == 1) {
        var_a4 = func_000071DC((s32) &D_0000807C, arg1, arg2, arg3);
    }
    return var_a4;
}

INCLUDE_ASM("nonmatchings/mgvideo", func_00007320);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007354);

INCLUDE_ASM("nonmatchings/mgvideo", func_000073B8);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007504);

INCLUDE_ASM("nonmatchings/mgvideo", func_00007540);

s32 func_00007660(s32 arg0) {
    void *sp0;
    s32 var_v1;

    var_v1 = -2;
    if (func_000073B8(&sp0, arg0) >= 0) {
        var_v1 = (sceRtc_driver_17C26C00(&sp0) >= 0) ? 0 : -1;
    }
    return var_v1;
}
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mgvideo", D_000080D4);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00006154);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00007FFC);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00006164);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006174);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_0000802C);
#endif

#if FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00006184);

INCLUDE_RODATA("nonmatchings/mgvideo", D_00006194);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000061A4);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000061B4);
#endif

#if FW_VERSION >= 303 && FW_VERSION < 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_0000807C);
#endif

#if FW_VERSION >= 303
INCLUDE_RODATA("nonmatchings/mgvideo", D_0000808C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/mgvideo", D_00009968);

INCLUDE_RODATA("nonmatchings/mgvideo", D_000099AC);
#endif
