#include "common.h"
#include "mcore_decls.h"

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", mcore_A8C9C10A);

INCLUDE_ASM("nonmatchings/mcore", mcore_6DCEA43E);

INCLUDE_ASM("nonmatchings/mcore", mcore_48C0D599);

s32 mcore_4D094AD7(void) {
    return (func_0000068C() == 0) ? 0 : 0x80000000;
}

s32 mcore_6264E827(s32 arg0, s32 arg1) {
    void *sp0;
    return (func_0000075C(arg0, arg1, &sp0) == 0) ? sp0 : 0x80000000;
}

s32 mcore_EA2E7E4D(s32 arg0) {
    func_0000095C(arg0 / 3, arg0 % 3);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", mcore_B17B2B4E);

INCLUDE_ASM("nonmatchings/mcore", mcore_FA30975D);

INCLUDE_ASM("nonmatchings/mcore", mcore_56CA3080);

s32 func_00000514(void) {
    sce_paf_private_memset((s32) &D_0002DC50, 0, 0x28);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00000540);

INCLUDE_ASM("nonmatchings/mcore", func_000005B0);

INCLUDE_ASM("nonmatchings/mcore", func_0000068C);

INCLUDE_ASM("nonmatchings/mcore", func_0000075C);

INCLUDE_ASM("nonmatchings/mcore", func_0000095C);

INCLUDE_ASM("nonmatchings/mcore", func_00000A10);

INCLUDE_ASM("nonmatchings/mcore", func_00000A30);

INCLUDE_ASM("nonmatchings/mcore", func_00000A50);

INCLUDE_ASM("nonmatchings/mcore", func_00000A70);

INCLUDE_ASM("nonmatchings/mcore", func_00000AB8);

INCLUDE_ASM("nonmatchings/mcore", func_00000B00);

s32 func_00000C24(void) {
    return 0;
}

s32 func_00000C2C(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00000C34);

INCLUDE_ASM("nonmatchings/mcore", func_00000C60);

s32 func_00000C8C(s32 arg0, M2C_UNK arg1) {
    sce_paf_private_memcpy(arg1, arg0 + 8, 8);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00000CBC);

INCLUDE_ASM("nonmatchings/mcore", func_00000D74);

s32 func_00000EAC(struct Unk_func_00000EAC_0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        sce_paf_private_free(temp_v0);
        arg0->unkC = 0;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00000EEC);

INCLUDE_ASM("nonmatchings/mcore", func_00001108);

INCLUDE_ASM("nonmatchings/mcore", func_000012A0);

INCLUDE_ASM("nonmatchings/mcore", func_00001318);

INCLUDE_ASM("nonmatchings/mcore", func_00001350);

INCLUDE_ASM("nonmatchings/mcore", func_000018CC);

INCLUDE_ASM("nonmatchings/mcore", func_0000190C);

INCLUDE_ASM("nonmatchings/mcore", func_00001994);

s32 func_000019C8(s32 *arg0) {
    void *sp0;
    sceRtcGetCurrentTick(&sp0);
    *arg0 = sp0;
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_000019FC);

INCLUDE_ASM("nonmatchings/mcore", func_00001AF8);

s32 func_00001C0C(void) {
    func_0002785C();
    return 0;
}

s32 func_00001C2C(void) {
    func_00027964();
    func_00027B08();
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00001C54);

INCLUDE_ASM("nonmatchings/mcore", func_00001D04);

s32 func_00001D48(void) {
    func_00002900();
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00001D68);

INCLUDE_ASM("nonmatchings/mcore", func_00001E24);

INCLUDE_ASM("nonmatchings/mcore", func_00001EB0);

s32 func_00001EE4(s32 *arg0) {
    void *sp0;
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        temp_v0 = func_00001E24(&sp0);
        var_v1 = temp_v0;
        if (temp_v0 == 0) {
            *arg0 = sp0;
        }
    }
    return var_v1;
}

void func_00001F2C(void) {
    func_00001D68();
}

INCLUDE_ASM("nonmatchings/mcore", func_00001F48);

INCLUDE_ASM("nonmatchings/mcore", func_00002060);

s32 func_00002230(struct Unk_func_00002230_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 != 0) {
            func_00003748(temp_v0);
        }
        func_00002900(arg0->unk8);
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00002284);

INCLUDE_ASM("nonmatchings/mcore", func_00002320);

INCLUDE_ASM("nonmatchings/mcore", func_00002494);

void func_00002548(void) {
    func_00009424();
}

INCLUDE_ASM("nonmatchings/mcore", func_00002564);

void func_000025DC(void) {
    func_0000946C();
}

INCLUDE_ASM("nonmatchings/mcore", func_000025F8);

void func_00002714(void) {
    sce_paf_private_malloc();
}

void func_00002730(void) {
    sce_paf_private_realloc();
}

INCLUDE_ASM("nonmatchings/mcore", func_0000274C);

INCLUDE_ASM("nonmatchings/mcore", func_0000276C);

INCLUDE_ASM("nonmatchings/mcore", func_000027D8);

INCLUDE_ASM("nonmatchings/mcore", func_00002828);

void *func_000028A4(s32 arg0, s32 arg1) {
    struct Unk_func_000028A4_temp_v0 *temp_v0;

    temp_v0 = func_00002828(arg0, 0);
    if (temp_v0 != NULL) {
        sce_paf_private_memset(temp_v0->unk4, arg1 & 0xFF, arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00002900);

INCLUDE_ASM("nonmatchings/mcore", func_0000291C);

INCLUDE_ASM("nonmatchings/mcore", func_000029B4);

INCLUDE_ASM("nonmatchings/mcore", func_00002ADC);

INCLUDE_ASM("nonmatchings/mcore", func_00002B04);

void func_00002B94(struct Unk_func_00002B94_0 *arg0) {
    if (arg0 != NULL) {
        func_0000274C(arg0->unk4);
        arg0->unk4 = 0;
    }
}

INCLUDE_ASM("nonmatchings/mcore", func_00002BC4);

INCLUDE_ASM("nonmatchings/mcore", func_00002C20);

s32 func_00002D64(struct Unk_func_00002D64_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk4 == 0) {

        } else {
            func_00002C20(arg0->unk4, 0xD);
        }
        if (arg0->unk8 == 0) {

        } else {
            func_00002900(arg0->unk8);
        }
        if (arg0->unkC != 0) {
            func_00002900(arg0->unkC);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002E04(struct Unk_func_00002E04_0 *arg0) {
    if (arg0 != NULL) {
        func_00002900(arg0->unk0);
        func_00002900(arg0->unk8);
        func_00002900(arg0->unkC);
        func_00002900(arg0->unk10);
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002E54(struct Unk_func_00002E54_0 *arg0) {
    if (arg0 != NULL) {
        func_00002900(arg0->unk0);
        func_00002900(arg0->unk8);
        func_00002900(arg0->unkC);
        func_00002900(arg0->unk10);
        func_00002900(arg0->unk18);
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002EAC(struct Unk_func_00002EAC_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk4 == 0) {

        } else {
            func_00002900(arg0->unk4);
        }
        if (arg0->unk8 == 0) {

        } else {
            func_00002900(arg0->unk8);
        }
        if (arg0->unkC == 0) {

        } else {
            func_00002900(arg0->unkC);
        }
        if (arg0->unk10 != 0) {
            func_00002900(arg0->unk10);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002F68(struct Unk_func_00002F68_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk8 == 0) {

        } else {
            func_00002C20(arg0->unk8, 0xD);
        }
        if (arg0->unkC == 0) {

        } else {
            func_00002900(arg0->unkC);
        }
        if (arg0->unk10 == 0) {

        } else {
            func_00002900(arg0->unk10);
        }
        if (arg0->unk14 == 0) {

        } else {
            func_00002900(arg0->unk14);
        }
        if (arg0->unk18 == 0) {

        } else {
            func_00002C20(arg0->unk18, 0xB);
        }
        if (arg0->unk1C == 0) {

        } else {
            func_00002C20(arg0->unk1C, 0xC);
        }
        if (arg0->unk20 != 0) {
            func_00002C20(arg0->unk20, 0xC);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00003078(struct Unk_func_00003078_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk8 == 0) {

        } else {
            func_00002C20(arg0->unk8, 0xD);
        }
        if (arg0->unkC == 0) {

        } else {
            func_00002900(arg0->unkC);
        }
        if (arg0->unk10 == 0) {

        } else {
            func_00002900(arg0->unk10);
        }
        if (arg0->unk14 == 0) {

        } else {
            func_00002900(arg0->unk14);
        }
        if (arg0->unk18 != NULL) {
            func_00002EAC(arg0->unk18);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00003150(struct Unk_func_00003150_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (arg0->unk4 == 1) {
            temp_v0_2 = arg0->unk8;
            if (temp_v0_2 != 0) {
                func_00002900(temp_v0_2);
            }
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_000031C4(struct Unk_func_000031C4_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (arg0->unk4 == NULL) {

        } else {
            func_00002D64(arg0->unk4);
        }
        if (arg0->unk8 != 0) {
            func_00002C20(arg0->unk8, 7);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_0000324C(struct Unk_func_0000324C_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (arg0->unk4 != NULL) {
            func_00002E04(arg0->unk4);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_000032B4(struct Unk_func_000032B4_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (arg0->unk4 == NULL) {

        } else {
            func_00002D64(arg0->unk4);
        }
        if (arg0->unk8 != 0) {
            func_00002C20(arg0->unk8, 7);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_0000333C(struct Unk_func_0000333C_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk4 == 0) {

        } else {
            func_00002900(arg0->unk4);
        }
        if (arg0->unk8 == 0) {

        } else {
            func_00002900(arg0->unk8);
        }
        if (arg0->unkC != 0) {
            func_00002900(arg0->unkC);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_000033DC(struct Unk_func_000033DC_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk4 == 0) {

        } else {
            func_00002900(arg0->unk4);
        }
        if (arg0->unk8 == 0) {

        } else {
            func_00002900(arg0->unk8);
        }
        if (arg0->unkC == NULL) {

        } else {
            func_00002F68(arg0->unkC);
        }
        if (arg0->unk10 != NULL) {
            func_0000333C(arg0->unk10);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00003498(struct Unk_func_00003498_0 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = arg0->unk0;
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (arg0->unk4 == 0) {

        } else {
            func_00002C20(arg0->unk4, 8);
        }
        if (arg0->unk8 == NULL) {

        } else {
            func_00002F68(arg0->unk8);
        }
        if (arg0->unkC == NULL) {

        } else {
            func_00002F68(arg0->unkC);
        }
        if (arg0->unk10 != NULL) {
            func_00003078(arg0->unk10);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00003554);

INCLUDE_ASM("nonmatchings/mcore", func_0000358C);

s32 func_0000362C(struct Unk_func_0000362C_0 *arg0, s32 arg1, s8 arg2, s8 arg3, s8 arg4, s32 arg5, s8 arg6, s32 arg7, s32 arg_sp0) {
    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk5 = arg3;
    arg0->unk6 = arg4;
    arg0->unk8 = arg5;
    arg0->unk7 = arg6;
    arg0->unkC = arg7;
    arg0->unk10 = arg_sp0;
    arg0->unk14 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000365C);

s32 func_0000369C(struct Unk_func_0000369C_0 *arg0, s32 arg1) {
    arg0->unk4 = arg1;
    arg0->unk0 = 0;
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_000036AC);

INCLUDE_ASM("nonmatchings/mcore", func_000036DC);

INCLUDE_ASM("nonmatchings/mcore", func_00003748);

INCLUDE_ASM("nonmatchings/mcore", func_0000376C);

INCLUDE_ASM("nonmatchings/mcore", func_000037DC);

INCLUDE_ASM("nonmatchings/mcore", func_00003B30);

INCLUDE_ASM("nonmatchings/mcore", func_00003B6C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028940);

INCLUDE_RODATA("nonmatchings/mcore", D_00028964);

INCLUDE_ASM("nonmatchings/mcore", func_00004018);

INCLUDE_RODATA("nonmatchings/mcore", D_000289A4);

INCLUDE_RODATA("nonmatchings/mcore", D_000289A8);

INCLUDE_RODATA("nonmatchings/mcore", D_000289B8);

INCLUDE_RODATA("nonmatchings/mcore", D_000289C4);

INCLUDE_RODATA("nonmatchings/mcore", D_000289D0);

INCLUDE_ASM("nonmatchings/mcore", func_0000427C);

INCLUDE_RODATA("nonmatchings/mcore", D_000289E8);

INCLUDE_RODATA("nonmatchings/mcore", D_000289F4);

INCLUDE_ASM("nonmatchings/mcore", func_000043F0);

INCLUDE_RODATA("nonmatchings/mcore", D_00028A04);

INCLUDE_ASM("nonmatchings/mcore", func_00004594);

INCLUDE_RODATA("nonmatchings/mcore", D_00028A20);

INCLUDE_RODATA("nonmatchings/mcore", D_00028A24);

INCLUDE_RODATA("nonmatchings/mcore", D_00028A38);

INCLUDE_RODATA("nonmatchings/mcore", D_00028A60);

INCLUDE_ASM("nonmatchings/mcore", func_00004828);

INCLUDE_ASM("nonmatchings/mcore", func_00004B54);

INCLUDE_RODATA("nonmatchings/mcore", D_00028AE0);

INCLUDE_RODATA("nonmatchings/mcore", D_00028AE8);

INCLUDE_RODATA("nonmatchings/mcore", D_00028AF4);

INCLUDE_RODATA("nonmatchings/mcore", D_00028AFC);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B04);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B20);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B30);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B5C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B88);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B90);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B94);

INCLUDE_RODATA("nonmatchings/mcore", D_00028B9C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028BA4);

INCLUDE_RODATA("nonmatchings/mcore", D_00028BAC);

INCLUDE_RODATA("nonmatchings/mcore", D_00028BB8);

INCLUDE_ASM("nonmatchings/mcore", func_000052B0);

INCLUDE_ASM("nonmatchings/mcore", func_000054D4);

INCLUDE_RODATA("nonmatchings/mcore", D_00028C34);

INCLUDE_RODATA("nonmatchings/mcore", D_00028C40);

INCLUDE_ASM("nonmatchings/mcore", func_00005778);

INCLUDE_RODATA("nonmatchings/mcore", D_00028C88);

INCLUDE_RODATA("nonmatchings/mcore", D_00028C90);

INCLUDE_ASM("nonmatchings/mcore", func_00005B88);

INCLUDE_ASM("nonmatchings/mcore", func_0000607C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028D44);

INCLUDE_ASM("nonmatchings/mcore", func_0000633C);

INCLUDE_ASM("nonmatchings/mcore", func_000066F0);

INCLUDE_ASM("nonmatchings/mcore", func_00006960);

INCLUDE_ASM("nonmatchings/mcore", func_00006A18);

INCLUDE_ASM("nonmatchings/mcore", func_00006D34);

INCLUDE_ASM("nonmatchings/mcore", func_00006EC0);

INCLUDE_ASM("nonmatchings/mcore", func_00007110);

INCLUDE_ASM("nonmatchings/mcore", func_00007380);

INCLUDE_RODATA("nonmatchings/mcore", D_00028DC0);

INCLUDE_RODATA("nonmatchings/mcore", D_00028DC8);

INCLUDE_RODATA("nonmatchings/mcore", D_00028DD4);

INCLUDE_ASM("nonmatchings/mcore", func_000076B0);

INCLUDE_ASM("nonmatchings/mcore", func_00007718);

INCLUDE_RODATA("nonmatchings/mcore", D_00028DE4);

INCLUDE_ASM("nonmatchings/mcore", func_00007794);

INCLUDE_ASM("nonmatchings/mcore", func_00007808);

INCLUDE_ASM("nonmatchings/mcore", func_000078B4);

INCLUDE_ASM("nonmatchings/mcore", func_000079EC);

INCLUDE_ASM("nonmatchings/mcore", func_00007A40);

INCLUDE_ASM("nonmatchings/mcore", func_00007AF0);

INCLUDE_ASM("nonmatchings/mcore", func_00007BC8);

INCLUDE_ASM("nonmatchings/mcore", func_00007DA8);

INCLUDE_ASM("nonmatchings/mcore", func_00007FF4);

INCLUDE_ASM("nonmatchings/mcore", func_000081C8);

INCLUDE_ASM("nonmatchings/mcore", func_00008294);

INCLUDE_ASM("nonmatchings/mcore", func_000085F4);

INCLUDE_ASM("nonmatchings/mcore", func_0000863C);

INCLUDE_ASM("nonmatchings/mcore", func_0000873C);

void func_0000876C(void) {
    func_000081C8();
}

void func_00008788(void) {
    func_00008294();
}

s32 func_000087A4(s32 arg0) {
    s32 temp_a1;
    s32 var_a0;

    var_a0 = arg0;
    temp_a1 = var_a0 & 0xFFFF0000;
    switch (temp_a1) {                              /* irregular */
    case 0x23000000:
        var_a0 = 0x21000007;
        break;
    case 0x32000000:
        var_a0 = 0x21000000;
        break;
    }
    return var_a0;
}

INCLUDE_ASM("nonmatchings/mcore", func_000087D4);

INCLUDE_ASM("nonmatchings/mcore", func_0000882C);

INCLUDE_ASM("nonmatchings/mcore", func_00008B8C);

INCLUDE_ASM("nonmatchings/mcore", func_00008CE4);

INCLUDE_ASM("nonmatchings/mcore", func_00008F48);

INCLUDE_ASM("nonmatchings/mcore", func_00008FDC);

INCLUDE_RODATA("nonmatchings/mcore", D_00028E6C);

INCLUDE_ASM("nonmatchings/mcore", func_000090F4);

INCLUDE_ASM("nonmatchings/mcore", func_000092D0);

INCLUDE_ASM("nonmatchings/mcore", func_00009424);

s32 func_00009448(struct Unk_func_00009448_0 *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk3C;
    var_v0 = 0x2100000C;
    if (temp_v1 != 0) {
        *arg1 = temp_v1;
        var_v0 = 0;
        arg0->unk3C = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000946C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028EC8);

INCLUDE_ASM("nonmatchings/mcore", func_00009490);

s32 func_00009624(struct Unk_func_00009624_0 *arg0) {
    s32 var_v0;

    var_v0 = 4;
    if (arg0 != NULL) {
        sceIoClose(arg0->unk4);
        func_0000274C((s32) arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00009660);

INCLUDE_ASM("nonmatchings/mcore", func_000099E0);

INCLUDE_ASM("nonmatchings/mcore", func_00009A58);

INCLUDE_ASM("nonmatchings/mcore", func_00009B98);

INCLUDE_ASM("nonmatchings/mcore", func_00009C74);

INCLUDE_ASM("nonmatchings/mcore", func_00009D2C);

INCLUDE_ASM("nonmatchings/mcore", func_00009E18);

INCLUDE_ASM("nonmatchings/mcore", func_00009F60);

INCLUDE_ASM("nonmatchings/mcore", func_0000A02C);

INCLUDE_ASM("nonmatchings/mcore", func_0000A0D8);

INCLUDE_ASM("nonmatchings/mcore", func_0000A404);

INCLUDE_ASM("nonmatchings/mcore", func_0000A598);

INCLUDE_ASM("nonmatchings/mcore", func_0000A5C0);

INCLUDE_ASM("nonmatchings/mcore", func_0000A65C);

INCLUDE_ASM("nonmatchings/mcore", func_0000A700);

s32 func_0000A798(struct Unk_func_0000A798_0 *arg0) {
    if (arg0 != NULL) {
        func_0001F6D8(arg0->unk84);
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000A7D0);

INCLUDE_ASM("nonmatchings/mcore", func_0000A8BC);

INCLUDE_ASM("nonmatchings/mcore", func_0000AE80);

INCLUDE_ASM("nonmatchings/mcore", func_0000B01C);

INCLUDE_ASM("nonmatchings/mcore", func_0000B0BC);

INCLUDE_ASM("nonmatchings/mcore", func_0000B128);

INCLUDE_ASM("nonmatchings/mcore", func_0000B218);

INCLUDE_ASM("nonmatchings/mcore", func_0000B298);

INCLUDE_ASM("nonmatchings/mcore", func_0000B318);

INCLUDE_ASM("nonmatchings/mcore", func_0000B4C4);

INCLUDE_ASM("nonmatchings/mcore", func_0000B564);

INCLUDE_ASM("nonmatchings/mcore", func_0000B778);

INCLUDE_ASM("nonmatchings/mcore", func_0000B8C0);

INCLUDE_ASM("nonmatchings/mcore", func_0000B984);

INCLUDE_ASM("nonmatchings/mcore", func_0000BA04);

INCLUDE_ASM("nonmatchings/mcore", func_0000BCFC);

INCLUDE_ASM("nonmatchings/mcore", func_0000BE24);

INCLUDE_ASM("nonmatchings/mcore", func_0000BEFC);

INCLUDE_RODATA("nonmatchings/mcore", D_00028EEC);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F08);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F4C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F50);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F54);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F58);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F5C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F60);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F64);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F6C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F78);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F84);

INCLUDE_RODATA("nonmatchings/mcore", D_00028F8C);

INCLUDE_RODATA("nonmatchings/mcore", D_00028FD8);

INCLUDE_RODATA("nonmatchings/mcore", D_0002905C);

INCLUDE_RODATA("nonmatchings/mcore", D_00029060);

INCLUDE_RODATA("nonmatchings/mcore", D_00029084);

INCLUDE_RODATA("nonmatchings/mcore", D_00029108);

INCLUDE_RODATA("nonmatchings/mcore", D_00029130);

INCLUDE_RODATA("nonmatchings/mcore", D_000291B4);

INCLUDE_RODATA("nonmatchings/mcore", D_000291BC);

INCLUDE_RODATA("nonmatchings/mcore", D_000291C8);

INCLUDE_RODATA("nonmatchings/mcore", D_000291D4);

INCLUDE_RODATA("nonmatchings/mcore", D_000291E0);

INCLUDE_RODATA("nonmatchings/mcore", D_000291E8);

INCLUDE_RODATA("nonmatchings/mcore", D_000291F4);

INCLUDE_RODATA("nonmatchings/mcore", D_000291FC);

INCLUDE_RODATA("nonmatchings/mcore", D_00029208);

INCLUDE_ASM("nonmatchings/mcore", func_0000BFB8);

INCLUDE_ASM("nonmatchings/mcore", func_0000C198);

INCLUDE_ASM("nonmatchings/mcore", func_0000C3DC);

INCLUDE_ASM("nonmatchings/mcore", func_0000C4B8);

s32 func_0000C540(s32 arg0) {
    func_0000274C(arg0);
    return 0;
}

s32 func_0000C560(s32 arg0, s32 arg1, s32 arg2) {
    func_000211B8(arg0, arg1, arg2, 0);
    return 0;
}

s32 func_0000C580(s32 arg0, s32 arg1, s32 arg2) {
    func_000211B8(arg0, arg1, arg2, 1);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000C5A0);

s32 func_0000C6A8(s32 arg0) {
    func_0000274C(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000C6C8);

INCLUDE_ASM("nonmatchings/mcore", func_0000C740);

INCLUDE_ASM("nonmatchings/mcore", func_0000C7B0);

INCLUDE_ASM("nonmatchings/mcore", func_0000C89C);

INCLUDE_ASM("nonmatchings/mcore", func_0000C95C);

INCLUDE_ASM("nonmatchings/mcore", func_0000C9FC);

INCLUDE_ASM("nonmatchings/mcore", func_0000CC04);

INCLUDE_ASM("nonmatchings/mcore", func_0000CE0C);

INCLUDE_ASM("nonmatchings/mcore", func_0000CEB0);

INCLUDE_ASM("nonmatchings/mcore", func_0000CF8C);

INCLUDE_ASM("nonmatchings/mcore", func_0000D0B8);

INCLUDE_ASM("nonmatchings/mcore", func_0000D184);

INCLUDE_ASM("nonmatchings/mcore", func_0000D290);

INCLUDE_ASM("nonmatchings/mcore", func_0000D378);

INCLUDE_ASM("nonmatchings/mcore", func_0000D4DC);

INCLUDE_ASM("nonmatchings/mcore", func_0000D6BC);

INCLUDE_ASM("nonmatchings/mcore", func_0000D878);

INCLUDE_ASM("nonmatchings/mcore", func_0000D9DC);

INCLUDE_ASM("nonmatchings/mcore", func_0000DABC);

INCLUDE_ASM("nonmatchings/mcore", func_0000DBFC);

INCLUDE_ASM("nonmatchings/mcore", func_0000DD58);

s32 func_0000DEF0(struct Unk_func_0000DEF0_0 *arg0) {
    if (arg0 != NULL) {
        func_00023FF8(arg0->unk0);
        func_00023FF8(arg0->unk4);
        func_00023FF8(arg0->unk8);
        func_00023FF8(arg0->unkC);
        func_00023FF8(arg0->unk10);
        func_00023FF8(arg0->unk14);
        func_00023FF8(arg0->unk18);
        func_00023FF8(arg0->unk1C);
        func_0000274C((s32) arg0);
    }
    return 0;
}

void func_0000DF60(void) {
    func_0000CEB0();
}

void func_0000DF7C(void) {
    func_0000CF8C();
}

void func_0000DF98(void) {
    func_0000D0B8();
}

void func_0000DFB4(void) {
    func_0000D184();
}

void func_0000DFD0(void) {
    func_0000D290();
}

void func_0000DFEC(void) {
    func_0000D378();
}

INCLUDE_ASM("nonmatchings/mcore", func_0000E008);

INCLUDE_ASM("nonmatchings/mcore", func_0000E068);

s32 func_0000E1E0(s32 *arg0) {
    func_0000274C(*arg0);
    func_0000274C((s32) arg0);
    return 0;
}

s32 func_0000E214(s32 arg0, s32 arg1, s32 arg2) {
    func_000228C8(arg0, arg2, arg1);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000E23C);

INCLUDE_ASM("nonmatchings/mcore", func_0000E314);

INCLUDE_ASM("nonmatchings/mcore", func_0000E434);

INCLUDE_ASM("nonmatchings/mcore", func_0000E59C);

INCLUDE_ASM("nonmatchings/mcore", func_0000E74C);

INCLUDE_ASM("nonmatchings/mcore", func_0000E94C);

INCLUDE_ASM("nonmatchings/mcore", func_0000EB78);

INCLUDE_ASM("nonmatchings/mcore", func_0000EC48);

INCLUDE_ASM("nonmatchings/mcore", func_0000ECEC);

INCLUDE_ASM("nonmatchings/mcore", func_0000F0E4);

INCLUDE_ASM("nonmatchings/mcore", func_0000F39C);

s32 func_0000F538(s32 arg0) {
    func_0000274C(arg0);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000F558);

INCLUDE_ASM("nonmatchings/mcore", func_0000F61C);

s32 func_0000F6B8(struct Unk_func_0000F6B8_0 *arg0) {
    s32 var_v1;

    var_v1 = 0x13010000;
    if (((u32) (arg0->unk0 - 1) < 2U) && ((u32) (arg0->unk4 - 1) < 3U)) {
        var_v1 = ((u32) (arg0->unk8 - 1) < 4U) ? 0 : 0x13010000;
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000F6F8);

s32 func_0000F7A8(void) {
    func_00027BB4();
    return 0;
}

s32 func_0000F7C8(void) {
    func_000281D0();
    return 0;
}

s32 *func_0000F7E8(s32 *arg0) {
    *arg0 += 1;
    return arg0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000F7FC);

INCLUDE_ASM("nonmatchings/mcore", func_0000F820);

INCLUDE_ASM("nonmatchings/mcore", func_0000F840);

INCLUDE_RODATA("nonmatchings/mcore", D_00029234);

INCLUDE_ASM("nonmatchings/mcore", func_0000F954);

INCLUDE_ASM("nonmatchings/mcore", func_0000FE34);

s32 func_0000FF3C(void) {
    return 0x16000002;
}

s32 func_0000FF48(void) {
    return 0x16000002;
}

s32 func_0000FF54(void) {
    return 0x16000002;
}

INCLUDE_ASM("nonmatchings/mcore", func_0000FF60);

INCLUDE_ASM("nonmatchings/mcore", func_000100B0);

INCLUDE_ASM("nonmatchings/mcore", func_00010708);

INCLUDE_ASM("nonmatchings/mcore", func_00010818);

INCLUDE_ASM("nonmatchings/mcore", func_00010938);

INCLUDE_ASM("nonmatchings/mcore", func_00010A68);

INCLUDE_ASM("nonmatchings/mcore", func_00010C78);

INCLUDE_ASM("nonmatchings/mcore", func_00010E18);

INCLUDE_ASM("nonmatchings/mcore", func_00010EEC);

INCLUDE_ASM("nonmatchings/mcore", func_000110D0);

INCLUDE_RODATA("nonmatchings/mcore", D_0002929C);

INCLUDE_ASM("nonmatchings/mcore", func_00011204);

INCLUDE_ASM("nonmatchings/mcore", func_000117E4);

INCLUDE_ASM("nonmatchings/mcore", func_00011B38);

INCLUDE_ASM("nonmatchings/mcore", func_00011D9C);

INCLUDE_ASM("nonmatchings/mcore", func_00011EA0);

INCLUDE_ASM("nonmatchings/mcore", func_00011F44);

INCLUDE_ASM("nonmatchings/mcore", func_00011FB4);

INCLUDE_ASM("nonmatchings/mcore", func_0001293C);

INCLUDE_ASM("nonmatchings/mcore", func_00012D74);

INCLUDE_ASM("nonmatchings/mcore", func_00012EA4);

INCLUDE_ASM("nonmatchings/mcore", func_000130FC);

INCLUDE_ASM("nonmatchings/mcore", func_00013194);

INCLUDE_ASM("nonmatchings/mcore", func_000131E4);

INCLUDE_ASM("nonmatchings/mcore", func_00013318);

INCLUDE_ASM("nonmatchings/mcore", func_00013558);

INCLUDE_ASM("nonmatchings/mcore", func_000136F0);

INCLUDE_ASM("nonmatchings/mcore", func_000137EC);

INCLUDE_ASM("nonmatchings/mcore", func_00013984);

INCLUDE_ASM("nonmatchings/mcore", func_00013BEC);

INCLUDE_ASM("nonmatchings/mcore", func_00013E20);

INCLUDE_ASM("nonmatchings/mcore", func_00013E88);

INCLUDE_RODATA("nonmatchings/mcore", D_000292E4);

INCLUDE_RODATA("nonmatchings/mcore", D_000292EC);

INCLUDE_ASM("nonmatchings/mcore", func_00013EF0);

INCLUDE_ASM("nonmatchings/mcore", func_000141F8);

INCLUDE_ASM("nonmatchings/mcore", func_000143AC);

INCLUDE_ASM("nonmatchings/mcore", func_000144B0);

INCLUDE_RODATA("nonmatchings/mcore", D_00029354);

INCLUDE_RODATA("nonmatchings/mcore", D_00029368);

INCLUDE_ASM("nonmatchings/mcore", func_000145E4);

INCLUDE_RODATA("nonmatchings/mcore", D_00029378);

INCLUDE_ASM("nonmatchings/mcore", func_00014750);

INCLUDE_ASM("nonmatchings/mcore", func_000148A8);

INCLUDE_RODATA("nonmatchings/mcore", D_00029394);

INCLUDE_RODATA("nonmatchings/mcore", D_00029398);

INCLUDE_ASM("nonmatchings/mcore", func_00014BC8);

INCLUDE_ASM("nonmatchings/mcore", func_00014E18);

void func_0001503C(s32 arg0, struct Unk_func_0001503C_1 *arg1, s32 arg2, s32 arg3) {
    func_00014E18(arg0, arg1->unk8, arg2, arg3);
}

INCLUDE_ASM("nonmatchings/mcore", func_00015058);

INCLUDE_ASM("nonmatchings/mcore", func_0001514C);

INCLUDE_ASM("nonmatchings/mcore", func_000151A4);

INCLUDE_ASM("nonmatchings/mcore", func_00015208);

INCLUDE_RODATA("nonmatchings/mcore", D_000293B4);

INCLUDE_RODATA("nonmatchings/mcore", D_000293D8);

INCLUDE_RODATA("nonmatchings/mcore", D_000293E4);

INCLUDE_RODATA("nonmatchings/mcore", D_000293FC);

INCLUDE_RODATA("nonmatchings/mcore", D_00029408);

INCLUDE_RODATA("nonmatchings/mcore", D_00029418);

INCLUDE_RODATA("nonmatchings/mcore", D_00029424);

INCLUDE_RODATA("nonmatchings/mcore", D_00029428);

INCLUDE_RODATA("nonmatchings/mcore", D_00029440);

INCLUDE_RODATA("nonmatchings/mcore", D_00029450);

INCLUDE_RODATA("nonmatchings/mcore", D_0002945C);

INCLUDE_RODATA("nonmatchings/mcore", D_0002946C);

INCLUDE_RODATA("nonmatchings/mcore", D_00029474);

INCLUDE_RODATA("nonmatchings/mcore", D_0002947C);

INCLUDE_RODATA("nonmatchings/mcore", D_00029498);

INCLUDE_RODATA("nonmatchings/mcore", D_000294AC);

INCLUDE_RODATA("nonmatchings/mcore", D_000294C4);

INCLUDE_ASM("nonmatchings/mcore", func_00015AF4);

INCLUDE_RODATA("nonmatchings/mcore", D_00029528);

INCLUDE_ASM("nonmatchings/mcore", func_00015C50);

INCLUDE_RODATA("nonmatchings/mcore", D_0002957C);

INCLUDE_RODATA("nonmatchings/mcore", D_000295A8);

INCLUDE_ASM("nonmatchings/mcore", func_00015D30);

INCLUDE_ASM("nonmatchings/mcore", func_00015EC8);

s32 func_00016A90(void **arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00002828(arg2, arg1);
    var_v0 = 2;
    if (temp_v0 != NULL) {
        func_00002900(*arg0);
        *arg0 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00016ADC(struct Unk_vt_func_00016ADC_arg0 **arg0, M2C_UNK arg1) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00002828(arg1, (*arg0)->unk4);
    var_v0 = 2;
    if (temp_v0 != NULL) {
        func_00002900(*arg0);
        *arg0 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00016B30);

INCLUDE_ASM("nonmatchings/mcore", func_00016B74);

INCLUDE_ASM("nonmatchings/mcore", func_00016C2C);

INCLUDE_ASM("nonmatchings/mcore", func_00016C84);

INCLUDE_ASM("nonmatchings/mcore", func_00016CF4);

INCLUDE_ASM("nonmatchings/mcore", func_00016DA4);

INCLUDE_ASM("nonmatchings/mcore", func_00016DE8);

INCLUDE_ASM("nonmatchings/mcore", func_00016F60);

INCLUDE_ASM("nonmatchings/mcore", func_0001700C);

INCLUDE_ASM("nonmatchings/mcore", func_000170B0);

INCLUDE_ASM("nonmatchings/mcore", func_000170D0);

INCLUDE_ASM("nonmatchings/mcore", func_00017114);

INCLUDE_ASM("nonmatchings/mcore", func_0001715C);

void func_0001726C(void) {
}

INCLUDE_ASM("nonmatchings/mcore", func_00017274);

INCLUDE_ASM("nonmatchings/mcore", func_000172BC);

INCLUDE_ASM("nonmatchings/mcore", func_00017360);

INCLUDE_ASM("nonmatchings/mcore", func_000173D8);

INCLUDE_ASM("nonmatchings/mcore", func_00017484);

s32 func_000174CC(void **arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_func_000174CC_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = temp_s0->unk0;
        temp_v1 = temp_v0 - 1;
        if (temp_v0 >= 0) {
            temp_s0->unk0 = temp_v1;
            if (temp_v1 != -1) {
                *arg0 = NULL;
            } else {
                func_00002900(temp_s0->unk4);
                func_00002900(temp_s0->unk8);
                func_0000274C((s32) temp_s0);
                *arg0 = NULL;
            }
        } else {
            func_0001726C();
            *arg0 = NULL;
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0001754C);

INCLUDE_ASM("nonmatchings/mcore", func_000175C0);

INCLUDE_ASM("nonmatchings/mcore", func_0001763C);

s32 func_0001768C(void **arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_func_0001768C_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = temp_s0->unk0;
        temp_v1 = temp_v0 - 1;
        if (temp_v0 >= 0) {
            temp_s0->unk0 = temp_v1;
            if (temp_v1 != -1) {
                *arg0 = NULL;
            } else {
                func_00002900(temp_s0->unk4);
                func_000175C0((u8 *)temp_s0 + 8);
                func_000175C0((u8 *)temp_s0 + 0xC);
                func_000173D8((u8 *)temp_s0 + 0x10);
                func_0000274C((s32) temp_s0);
                *arg0 = NULL;
            }
        } else {
            func_0001726C();
            *arg0 = NULL;
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_0001771C);

s32 func_00017764(void **arg0) {
    s32 temp_v0;
    s32 temp_v1;
    struct Unk_func_00017764_temp_s0 *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = temp_s0->unk0;
        temp_v1 = temp_v0 - 1;
        if (temp_v0 >= 0) {
            temp_s0->unk0 = temp_v1;
            if (temp_v1 != -1) {
                *arg0 = NULL;
            } else {
                func_00002900(temp_s0->unk4);
                func_00002900(temp_s0->unk8);
                func_0000274C((s32) temp_s0);
                *arg0 = NULL;
            }
        } else {
            func_0001726C();
            *arg0 = NULL;
        }
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_000177E4);

INCLUDE_ASM("nonmatchings/mcore", func_0001782C);

INCLUDE_ASM("nonmatchings/mcore", func_000178B0);

INCLUDE_ASM("nonmatchings/mcore", func_000178F8);

INCLUDE_ASM("nonmatchings/mcore", func_0001795C);

INCLUDE_ASM("nonmatchings/mcore", func_000179C4);

INCLUDE_ASM("nonmatchings/mcore", func_00017A2C);

INCLUDE_ASM("nonmatchings/mcore", func_00017A94);

INCLUDE_ASM("nonmatchings/mcore", func_00017B00);

INCLUDE_ASM("nonmatchings/mcore", func_00017BD0);

INCLUDE_ASM("nonmatchings/mcore", func_00017C48);

s32 func_00017CF4(s32 arg0) {
    sce_paf_private_memset(arg0, 0, 0x18);
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_00017D18);

INCLUDE_ASM("nonmatchings/mcore", func_00017DE8);

INCLUDE_ASM("nonmatchings/mcore", func_00017F98);

s32 func_00018250(struct Unk_func_00018250_0 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk4;
        if (temp_v0 != 0) {
            func_00002C20(temp_v0, 0xD);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mcore", func_000182A0);

INCLUDE_ASM("nonmatchings/mcore", func_00018340);

INCLUDE_RODATA("nonmatchings/mcore", D_000296D4);

INCLUDE_RODATA("nonmatchings/mcore", D_000296D8);

INCLUDE_RODATA("nonmatchings/mcore", D_000296E0);

INCLUDE_RODATA("nonmatchings/mcore", D_000296E8);

INCLUDE_RODATA("nonmatchings/mcore", D_000296F4);

INCLUDE_RODATA("nonmatchings/mcore", D_000296FC);

INCLUDE_RODATA("nonmatchings/mcore", D_00029708);

INCLUDE_RODATA("nonmatchings/mcore", D_0002972C);

INCLUDE_RODATA("nonmatchings/mcore", D_00029734);

INCLUDE_RODATA("nonmatchings/mcore", D_00029740);

INCLUDE_RODATA("nonmatchings/mcore", D_0002974C);

INCLUDE_RODATA("nonmatchings/mcore", D_00029754);

INCLUDE_RODATA("nonmatchings/mcore", D_00029758);

INCLUDE_ASM("nonmatchings/mcore", func_00018360);

INCLUDE_ASM("nonmatchings/mcore", func_000183DC);

INCLUDE_ASM("nonmatchings/mcore", func_00018674);

INCLUDE_ASM("nonmatchings/mcore", func_00018A4C);

s32 func_00018AA4(s32 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 4;
    if (arg0 != NULL) {
        *arg0 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00018ABC(struct Unk_func_00018ABC_0 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 4;
    if (arg0 != NULL) {
        arg0->unk4 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00018AD4(struct Unk_func_00018AD4_0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        temp_v0 = arg0->unk0;
        if (temp_v0 != 0) {
            temp_v0_2 = func_00017F98(temp_v0);
            arg0->unk8 = temp_v0_2;
            var_v1 = (temp_v0_2 != 0) ? 0 : 2;
        }
    }
    return var_v1;
}

INCLUDE_ASM("nonmatchings/mcore", func_00018B24);

INCLUDE_ASM("nonmatchings/mcore", func_00018B70);

INCLUDE_ASM("nonmatchings/mcore", func_00018BEC);

INCLUDE_ASM("nonmatchings/mcore", func_00018C58);

INCLUDE_ASM("nonmatchings/mcore", func_00018CA0);

void func_00018D74(void) {
    func_00018674();
}

s32 func_00018D90(void) {
    return 0x30000000;
}
