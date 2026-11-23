/* cflags: -Os */
#include "common.h"
#include "mgvideo_decls.h"

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000000);

s32 func_00000108(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000110);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000180);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000001E8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000224);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000028C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000002F4);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000324);

s32 func_0000038C(void *arg0) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_v1 = ((u32) M2C_FIELD(arg0, u32 *, 4) >= 0x50U) ? 0 : 0x8050C031;
    }
    return var_v1;
}

s32 func_000003B8(void *arg0) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_v1 = ((M2C_FIELD(arg0, s32 *, 4) ^ 0x3EB0) == 0) ? 0 : 0x8050C003;
    }
    return var_v1;
}

s32 func_000003E4(void *arg0) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_v1 = ((u32) M2C_FIELD(arg0, u32 *, 4) >= 0x50U) ? 0 : 0x8050C003;
    }
    return var_v1;
}

s32 func_00000410(void *arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0x8050C002;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        var_v1 = ((u32) M2C_FIELD(arg0, u32 *, 4) >= arg1) ? 0 : 0x8050C003;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000043C);

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

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000664);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000754);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000007E8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000087C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000994);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000B08);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000B5C);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00005D10);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00005D30);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006070);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_0000608C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000CCC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000F24);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00000F74);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00001084);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000010B4);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000112C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000123C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00001354);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000013EC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00001504);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000015E8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00001664);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000016CC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00001744);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00001794);

s32 sceMgVideo_driver_5CFE1758(void) {
    return 0;
}

s32 sceMgVideo_driver_585F5755(void) {
    sceMgVideo_driver_02CD7137();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_04B36B8F);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_02CD7137);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_2E94A4B6);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_76F716B2);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_6297802E);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_6F13A2F9);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000206C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000020D0);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_000060B0);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00002158);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_0000241C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000025AC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00002620);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_A5F216CC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_57ADD7DA);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_63577C7E);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00002BB8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00002D8C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00002F54);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_10DA1B19);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_1B82B327);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_A4AC9163);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_F27A69C2);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_37CD3829);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000036EC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000037C8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00003858);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00003A30);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00003AD8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_F80FED94);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00003D84);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00003EBC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00003F80);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004098);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_F3E7EE9B);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", sceMgVideo_driver_F7F9279A);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004834);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000048B0);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000049D0);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004A88);

s32 func_00004BEC(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) == 0) ? 0 : -2;
}

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004BFC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004C44);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004CD8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004D8C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004E4C);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00004ECC);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005078);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000050F8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000051D4);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005254);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000052A4);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000052F0);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005380);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000053F8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005508);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005540);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000055A8);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_000056F4);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005730);

INCLUDE_ASM("tmp/asm/282/mgvideo/nonmatchings/mgvideo", func_00005850);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_000060F0);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_000060F8);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006100);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006108);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006110);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006118);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006124);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006130);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_0000613C);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006148);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006154);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006164);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006174);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006184);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_00006194);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_000061A4);

INCLUDE_RODATA("tmp/asm/282/mgvideo/nonmatchings/mgvideo", D_000061B4);
