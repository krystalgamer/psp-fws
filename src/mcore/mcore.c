#include "common.h"
#include "mcore_decls.h"

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_A8C9C10A);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_6DCEA43E);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_48C0D599);

s32 mcore_4D094AD7(void) {
    return (func_0000068C() == 0) ? 0 : 0x80000000;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_6264E827);

s32 mcore_EA2E7E4D(s32 arg0) {
    func_0000095C(arg0 / 3, arg0 % 3);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_B17B2B4E);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_FA30975D);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", mcore_56CA3080);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000514);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000540);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000005B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000068C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000075C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000095C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000A10);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000A30);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000A50);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000A70);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000AB8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000B00);

s32 func_00000C24(void) {
    return 0;
}

s32 func_00000C2C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000C34);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000C60);

s32 func_00000C8C(s32 arg0, M2C_UNK arg1) {
    scePaf_F95EA3F1(arg1, arg0 + 8, 8);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000CBC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000D74);

s32 func_00000EAC(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 != 0) {
        scePaf_545FE2DA(temp_v0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00000EEC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001108);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000012A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001318);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001350);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000018CC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000190C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001994);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000019C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000019FC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001AF8);

s32 func_00001C0C(void) {
    func_0002785C();
    return 0;
}

s32 func_00001C2C(void) {
    func_00027964();
    func_00027B08();
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001C54);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001D04);

s32 func_00001D48(void) {
    func_00002900();
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001D68);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001E24);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001EB0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001EE4);

void func_00001F2C(void) {
    func_00001D68();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00001F48);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002060);

s32 func_00002230(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 != 0) {
            func_00003748(temp_v0);
        }
        func_00002900(M2C_FIELD(arg0, s32 *, 8));
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002284);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002320);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002494);

void func_00002548(void) {
    func_00009424();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002564);

void func_000025DC(void) {
    func_0000946C();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000025F8);

void func_00002714(void) {
    scePaf_5FAC9869();
}

void func_00002730(void) {
    scePaf_8FC65EB0();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000274C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000276C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000027D8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002828);

void *func_000028A4(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00002828(arg0, 0);
    if (temp_v0 != NULL) {
        scePaf_6829D7AF(M2C_FIELD(temp_v0, s32 *, 4), arg1 & 0xFF, arg0);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002900);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000291C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000029B4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002ADC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002B04);

void func_00002B94(void *arg0) {
    if (arg0 != NULL) {
        func_0000274C(M2C_FIELD(arg0, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002BC4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00002C20);

s32 func_00002D64(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {

        } else {
            func_00002C20(M2C_FIELD(arg0, s32 *, 4), 0xD);
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 8));
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002E04(void *arg0) {
    if (arg0 != NULL) {
        func_00002900(M2C_FIELD(arg0, s32 *, 0));
        func_00002900(M2C_FIELD(arg0, s32 *, 8));
        func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        func_00002900(M2C_FIELD(arg0, s32 *, 0x10));
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002E54(void *arg0) {
    if (arg0 != NULL) {
        func_00002900(M2C_FIELD(arg0, s32 *, 0));
        func_00002900(M2C_FIELD(arg0, s32 *, 8));
        func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        func_00002900(M2C_FIELD(arg0, s32 *, 0x10));
        func_00002900(M2C_FIELD(arg0, s32 *, 0x18));
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002EAC(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 8));
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            func_00002900(M2C_FIELD(arg0, s32 *, 0x10));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00002F68(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {

        } else {
            func_00002C20(M2C_FIELD(arg0, s32 *, 8), 0xD);
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0x10));
        }
        if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0x14));
        }
        if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {

        } else {
            func_00002C20(M2C_FIELD(arg0, s32 *, 0x18), 0xB);
        }
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {

        } else {
            func_00002C20(M2C_FIELD(arg0, s32 *, 0x1C), 0xC);
        }
        if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
            func_00002C20(M2C_FIELD(arg0, s32 *, 0x20), 0xC);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00003078(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {

        } else {
            func_00002C20(M2C_FIELD(arg0, s32 *, 8), 0xD);
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0x10));
        }
        if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 0x14));
        }
        if (M2C_FIELD(arg0, void **, 0x18) != NULL) {
            func_00002EAC(M2C_FIELD(arg0, void **, 0x18));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00003150(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 1) {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_v0_2 != 0) {
                func_00002900(temp_v0_2);
            }
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_000031C4(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (M2C_FIELD(arg0, void **, 4) == NULL) {

        } else {
            func_00002D64(M2C_FIELD(arg0, void **, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            func_00002C20(M2C_FIELD(arg0, s32 *, 8), 7);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_0000324C(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (M2C_FIELD(arg0, void **, 4) != NULL) {
            func_00002E04(M2C_FIELD(arg0, void **, 4));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_000032B4(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (M2C_FIELD(arg0, void **, 4) == NULL) {

        } else {
            func_00002D64(M2C_FIELD(arg0, void **, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            func_00002C20(M2C_FIELD(arg0, s32 *, 8), 7);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_0000333C(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 8));
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            func_00002900(M2C_FIELD(arg0, s32 *, 0xC));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_000033DC(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 4));
        }
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {

        } else {
            func_00002900(M2C_FIELD(arg0, s32 *, 8));
        }
        if (M2C_FIELD(arg0, void **, 0xC) == NULL) {

        } else {
            func_00002F68(M2C_FIELD(arg0, void **, 0xC));
        }
        if (M2C_FIELD(arg0, void **, 0x10) != NULL) {
            func_0000333C(M2C_FIELD(arg0, void **, 0x10));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_00003498(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_a0 == 0) {

        } else {
            func_00002900(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {

        } else {
            func_00002C20(M2C_FIELD(arg0, s32 *, 4), 8);
        }
        if (M2C_FIELD(arg0, void **, 8) == NULL) {

        } else {
            func_00002F68(M2C_FIELD(arg0, void **, 8));
        }
        if (M2C_FIELD(arg0, void **, 0xC) == NULL) {

        } else {
            func_00002F68(M2C_FIELD(arg0, void **, 0xC));
        }
        if (M2C_FIELD(arg0, void **, 0x10) != NULL) {
            func_00003078(M2C_FIELD(arg0, void **, 0x10));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00003554);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000358C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000362C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000365C);

s32 func_0000369C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000036AC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000036DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00003748);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000376C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000037DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00003B30);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00003B6C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028940);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028964);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00004018);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289A4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289A8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289B8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289C4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000427C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289E8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000289F4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000043F0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028A04);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00004594);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028A20);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028A24);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028A38);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028A60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00004828);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00004B54);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028AE0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028AE8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028AF4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028AFC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B04);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B20);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B30);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B5C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B88);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B90);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B94);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028B9C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028BA4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028BAC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028BB8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000052B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000054D4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028C34);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028C40);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00005778);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028C88);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028C90);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00005B88);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000607C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028D44);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000633C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000066F0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00006960);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00006A18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00006D34);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00006EC0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007110);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007380);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028DC0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028DC8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028DD4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000076B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007718);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028DE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007794);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007808);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000078B4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000079EC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007A40);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007AF0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007BC8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007DA8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00007FF4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000081C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00008294);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000085F4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000863C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000873C);

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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000087D4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000882C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00008B8C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00008CE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00008F48);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00008FDC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028E6C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000090F4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000092D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009424);

s32 func_00009448(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x3C);
    var_v0 = 0x2100000C;
    if (temp_v1 != 0) {
        *arg1 = temp_v1;
        var_v0 = 0;
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000946C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028EC8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009490);

s32 func_00009624(void *arg0) {
    s32 var_v0;

    var_v0 = 4;
    if (arg0 != NULL) {
        sceIoClose(M2C_FIELD(arg0, s32 *, 4));
        func_0000274C((s32) arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009660);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000099E0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009A58);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009B98);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009C74);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009D2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009E18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00009F60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A02C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A0D8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A404);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A598);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A5C0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A65C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A700);

s32 func_0000A798(void *arg0) {
    if (arg0 != NULL) {
        func_0001F6D8(M2C_FIELD(arg0, s32 *, 0x84));
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A7D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000A8BC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000AE80);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B01C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B0BC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B128);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B218);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B298);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B318);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B4C4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B564);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B778);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B8C0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000B984);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000BA04);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000BCFC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000BE24);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000BEFC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028EEC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F08);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F4C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F50);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F54);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F58);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F5C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F60);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F64);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F6C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F78);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F84);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028F8C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00028FD8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002905C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029060);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029084);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029108);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029130);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291B4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291BC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291C8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291D4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291E0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291E8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291F4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000291FC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029208);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000BFB8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C198);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C3DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C4B8);

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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C5A0);

s32 func_0000C6A8(s32 arg0) {
    func_0000274C(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C6C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C740);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C7B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C89C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C95C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000C9FC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000CC04);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000CE0C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000CEB0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000CF8C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D0B8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D184);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D290);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D378);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D4DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D6BC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D878);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000D9DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000DABC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000DBFC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000DD58);

s32 func_0000DEF0(void *arg0) {
    if (arg0 != NULL) {
        func_00023FF8(M2C_FIELD(arg0, s32 *, 0));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 4));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 8));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 0xC));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 0x10));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 0x14));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 0x18));
        func_00023FF8(M2C_FIELD(arg0, s32 *, 0x1C));
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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E008);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E068);

s32 func_0000E1E0(s32 *arg0) {
    func_0000274C(*arg0);
    func_0000274C((s32) arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E214);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E23C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E314);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E434);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E59C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E74C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000E94C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000EB78);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000EC48);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000ECEC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F0E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F39C);

s32 func_0000F538(s32 arg0) {
    func_0000274C(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F558);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F61C);

s32 func_0000F6B8(void *arg0) {
    s32 var_v1;

    var_v1 = 0x13010000;
    if (((u32) (M2C_FIELD(arg0, s32 *, 0) - 1) < 2U) && ((u32) (M2C_FIELD(arg0, s32 *, 4) - 1) < 3U)) {
        var_v1 = ((u32) (M2C_FIELD(arg0, s32 *, 8) - 1) < 4U) ? 0 : 0x13010000;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F6F8);

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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F7FC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F820);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F840);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029234);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000F954);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000FE34);

s32 func_0000FF3C(void) {
    return 0x16000002;
}

s32 func_0000FF48(void) {
    return 0x16000002;
}

s32 func_0000FF54(void) {
    return 0x16000002;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0000FF60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000100B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010708);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010818);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010938);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010A68);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010C78);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010E18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00010EEC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000110D0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002929C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00011204);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000117E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00011B38);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00011D9C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00011EA0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00011F44);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00011FB4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001293C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00012D74);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00012EA4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000130FC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013194);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000131E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013318);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013558);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000136F0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000137EC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013984);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013BEC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013E20);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013E88);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000292E4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000292EC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00013EF0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000141F8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000143AC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000144B0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029354);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029368);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000145E4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029378);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00014750);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000148A8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029394);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029398);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00014BC8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00014E18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001503C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00015058);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001514C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000151A4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00015208);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000293B4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000293D8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000293E4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000293FC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029408);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029418);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029424);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029428);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029440);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029450);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002945C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002946C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029474);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002947C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029498);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000294AC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000294C4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00015AF4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029528);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00015C50);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002957C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000295A8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00015D30);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00015EC8);

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

s32 func_00016ADC(void **arg0, M2C_UNK arg1) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_00002828(arg1, M2C_FIELD(*arg0, s32 *, 4));
    var_v0 = 2;
    if (temp_v0 != NULL) {
        func_00002900(*arg0);
        *arg0 = temp_v0;
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016B30);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016B74);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016C2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016C84);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016CF4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016DA4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016DE8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00016F60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001700C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000170B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000170D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017114);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001715C);

void func_0001726C(void) {
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017274);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000172BC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017360);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000173D8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017484);

s32 func_000174CC(void **arg0) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0);
        temp_v1 = temp_v0 - 1;
        if (temp_v0 >= 0) {
            M2C_FIELD(temp_s0, s32 *, 0) = temp_v1;
            if (temp_v1 != -1) {
                *arg0 = NULL;
            } else {
                func_00002900(M2C_FIELD(temp_s0, s32 *, 4));
                func_00002900(M2C_FIELD(temp_s0, s32 *, 8));
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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001754C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000175C0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001763C);

s32 func_0001768C(void **arg0) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0);
        temp_v1 = temp_v0 - 1;
        if (temp_v0 >= 0) {
            M2C_FIELD(temp_s0, s32 *, 0) = temp_v1;
            if (temp_v1 != -1) {
                *arg0 = NULL;
            } else {
                func_00002900(M2C_FIELD(temp_s0, s32 *, 4));
                func_000175C0(temp_s0 + 8);
                func_000175C0(temp_s0 + 0xC);
                func_000173D8(temp_s0 + 0x10);
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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001771C);

s32 func_00017764(void **arg0) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0);
        temp_v1 = temp_v0 - 1;
        if (temp_v0 >= 0) {
            M2C_FIELD(temp_s0, s32 *, 0) = temp_v1;
            if (temp_v1 != -1) {
                *arg0 = NULL;
            } else {
                func_00002900(M2C_FIELD(temp_s0, s32 *, 4));
                func_00002900(M2C_FIELD(temp_s0, s32 *, 8));
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

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000177E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001782C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000178B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000178F8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001795C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000179C4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017A2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017A94);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017B00);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017BD0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017C48);

s32 func_00017CF4(s32 arg0) {
    scePaf_6829D7AF(arg0, 0, 0x18);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017D18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017DE8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00017F98);

s32 func_00018250(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 != 0) {
            func_00002C20(temp_v0, 0xD);
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000182A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018340);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000296D4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000296D8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000296E0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000296E8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000296F4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_000296FC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029708);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002972C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029734);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029740);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002974C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029754);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029758);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018360);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000183DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018674);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018A4C);

s32 func_00018AA4(s32 *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 4;
    if (arg0 != NULL) {
        *arg0 = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00018ABC(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 4;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        var_v0 = 0;
    }
    return var_v0;
}

s32 func_00018AD4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 4;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 != 0) {
            temp_v0_2 = func_00017F98(temp_v0);
            M2C_FIELD(arg0, s32 *, 8) = temp_v0_2;
            var_v1 = (temp_v0_2 != 0) ? 0 : 2;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018B24);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018B70);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018BEC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018C58);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018CA0);

void func_00018D74(void) {
    func_00018674();
}

s32 func_00018D90(void) {
    return 0x30000000;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018D98);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018DE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018E28);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018E58);

void func_00018EA0(void) {
    func_00018E58();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018EBC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018F14);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018F5C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00018FF8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000191E4);

void func_000192A4(void) {
    func_000191E4();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000192C0);

void func_00019400(void) {
    func_000192C0();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001941C);

void func_0001945C(void) {
    func_0001941C();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019478);

void func_0001950C(void) {
    func_00019478();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019528);

void func_000195FC(void **arg0, void **arg1) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = *arg1;
    temp_v0 = *arg0;
    func_000029B4(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4), M2C_FIELD(temp_v1, s32 *, 0), M2C_FIELD(temp_v1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001962C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019750);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019834);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019934);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000199D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019A60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019B50);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019C70);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019D18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00019DC0);

s32 func_00019FBC(s32 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = *arg0;
        if (temp_v0 != 0) {
            func_0000274C(temp_v0);
            *arg0 = 0;
        }
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A000);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A088);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A134);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A270);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A850);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A93C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A988);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001A9E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001AE68);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001BD74);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001BDEC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001BE08);

void func_0001BE48(void) {
    func_0001A93C();
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001BE64);

void func_0001BE84(void) {
    func_0001A9E4();
}

void func_0001BEA0(void) {
    func_0001AE68();
}

void func_0001BEBC(void) {
    func_0001BD74();
}

void func_0001BED8(void) {
    func_0001BDEC();
}

s32 func_0001BEF4(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_0001C040(M2C_FIELD(arg0, s32 *, 4));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

s32 func_0001BF5C(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v0 == 0) {

        } else {
            func_00002900(temp_v0);
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            func_0001C040(M2C_FIELD(arg0, s32 *, 4));
        }
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001BFC4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C040);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C108);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C1E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C2F0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C400);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C5E0);

s32 func_0001C7B0(void *arg0) {
    if (arg0 != NULL) {
        func_0001BFC4(M2C_FIELD(arg0, s32 *, 0x18));
        func_0000274C((s32) arg0);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C7E8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C968);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001C9CC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CBC4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CE00);

void func_0001CE68(s32 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = *arg0;
        if (temp_v0 != 0) {
            func_0001C968(temp_v0);
        }
        func_0000274C((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CEB0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CEE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CF14);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CF48);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001CFD4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D1D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D290);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D3E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D4CC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D594);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D63C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D778);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001D8DC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001DF2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E0D8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E20C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E2E0);

s32 func_0001E314(void *arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 == NULL) | (arg1 == NULL)) == 0) {
        var_v1 = func_000029B4(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4));
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E360);

void func_0001E4A8(void *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 != 0) {
            func_0000274C(temp_v0);
        }
        func_0000274C((s32) arg0);
    }
}

s32 func_0001E4F0(s32 arg0) {
    u32 temp_v0;

    temp_v0 = arg0 & 0xFFFF;
    return ((temp_v0 << 8) + (temp_v0 >> 8)) & 0xFFFF;
}

s32 func_0001E508(u32 arg0) {
    return (arg0 << 0x18) + ((arg0 & 0xFF00) << 8) + ((arg0 >> 8) & 0xFF00) + (arg0 >> 0x18);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E530);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E54C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E568);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E584);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E5A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E628);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E67C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E6FC);

s32 func_0001E720(s32 arg0) {
    if (!(arg0 & 3)) {
        return M2C_FIELD(arg0, s32 *, 0);
    }
    return (u8) M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, u8 *, 1) << 8) + (M2C_FIELD(arg0, u8 *, 2) << 0x10) + (M2C_FIELD(arg0, u8 *, 3) << 0x18);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E760);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E790);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E7D8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E908);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001E9A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001EC84);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001ED0C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001EFBC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F068);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F174);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F220);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F29C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F32C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F36C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F3A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F3D4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F404);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F450);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F640);

void func_0001F680(s32 arg0, s32 arg1, s32 arg2) {
    func_0001EFBC(arg0, 1, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F6A4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F6D8);

s32 func_0001F6FC(s32 arg0) {
    func_0000274C(arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F71C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F7D4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F810);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F8D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F97C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001F9E4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FBA8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FBDC);

void func_0001FC10(s32 arg0) {
    func_0001EFBC(0, 1, 0x10, arg0);
}

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029F18);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029F2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FC38);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FD08);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FD6C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FDA8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FDE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FF28);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0001FF64);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000202B4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020318);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020354);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020398);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000203D4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020418);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0002042C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000204AC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000204F0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029F80);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029F8C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029F98);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FA0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FA8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FB4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FBC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FC4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FD0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FE0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FE8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_00029FFC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A010);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A01C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A024);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A030);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A034);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A040);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A04C);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A050);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A060);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A074);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A084);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A094);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A0A0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A0AC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A0C0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A0D0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A0E0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A0F0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000205D4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020744);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020A00);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020BB8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020C70);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020CA0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020D3C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020DCC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00020E34);

void func_00021194(s32 arg0, M2C_UNK arg1) {
    func_00020A00(arg1, arg0);
}

void func_000211B8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s16 arg3) {
    func_00020CA0(arg1, arg2, arg0, arg3);
}

void func_000211E4(s32 arg0, s32 arg1, s16 arg2) {
    func_00020CA0(arg1, arg1, arg0, arg2);
}

void func_0002120C(s32 arg0, s32 arg1) {
    func_00021194(arg0, arg1);
    func_00021194(arg0 + 0x80, arg1 + 8);
}

void func_00021250(s32 arg0, s32 arg1) {
    func_000211E4(arg0, arg1, 0);
    func_000211E4(arg0 + 0x80, arg1, 1);
    func_000211E4(arg0, arg1, 0);
}

void func_000212A4(s32 arg0, s32 arg1, s32 arg2) {
    func_000211B8(arg0, arg1, arg2, 0);
    func_000211E4(arg0 + 0x80, arg2, 1);
    func_000211E4(arg0, arg2, 0);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000212F8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000217A8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00021AE0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022114);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022748);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000227B8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022824);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000228C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0002292C);

s32 func_00022998(s32 *arg0, u32 arg1, u32 arg2) {
    s32 temp_a3;
    s32 temp_v0_2;
    s32 var_a1;
    u32 temp_a1;
    u32 temp_a2;
    u32 temp_lo;
    u32 temp_lo_2;
    u32 temp_v0;

    temp_v0_2 = arg1 & 0xFFFF;
    temp_a3 = arg2 & 0xFFFF;
    temp_lo = temp_v0_2 * temp_a3;
    temp_a2 = arg2 >> 0x10;
    temp_a1 = arg1 >> 0x10;
    temp_lo_2 = temp_a1 * temp_a3;
    temp_v0 = (temp_v0_2 * temp_a2) + (temp_lo >> 0x10) + temp_lo_2;
    var_a1 = temp_a1 * temp_a2;
    if (temp_v0 < temp_lo_2) {
        var_a1 += 0x10000;
    }
    *arg0 = (temp_v0 << 0x10) + (temp_lo & 0xFFFF);
    return var_a1 + (temp_v0 >> 0x10);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022A00);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022A8C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022B28);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A154);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A554);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002A954);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002AD54);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002B154);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002B554);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002B954);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002BD54);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002C154);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002C554);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002C954);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002C97C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022BC4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022D24);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022DF4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00022F9C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000231B8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00023790);

void func_00023810(void **arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00025214(8);
    *arg0 = temp_v0;
    M2C_FIELD(temp_v0, s8 *, 1) = 0;
    M2C_FIELD(*arg0, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0, s16 *, 2) = 1;
}

s32 func_0002385C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 2) << 5;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00023868);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CA28);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CA34);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00023A0C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00023EBC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00023F18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00023FF8);

void func_00024014(void *arg0) {
    if (func_00024994() == 0) {
        M2C_FIELD(arg0, u8 *, 1) = (u8) (1 - M2C_FIELD(arg0, u8 *, 1));
    }
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0002404C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000240C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024140);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000244C8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CBB0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024540);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024680);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024764);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000248B0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0002490C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024994);

s32 func_00024A24(void *arg0, u32 arg1) {
    s32 var_v0;
    u32 temp_a1;

    temp_a1 = arg1 >> 5;
    var_v0 = 0;
    if (temp_a1 < (u16) M2C_FIELD(arg0, u16 *, 2)) {
        var_v0 = ((u32) M2C_FIELD(((temp_a1 * 4) + arg0), u32 *, 4) >> (arg1 & 0x1F)) & 1;
    }
    return var_v0;
}

s32 func_00024A58(void *arg0, u32 arg1) {
    s32 var_v0;
    u32 temp_a1;

    temp_a1 = arg1 >> 2;
    var_v0 = 0;
    if (temp_a1 < (u16) M2C_FIELD(arg0, u16 *, 2)) {
        var_v0 = ((u32) M2C_FIELD(((temp_a1 * 4) + arg0), u32 *, 4) >> ((arg1 & 3) * 8)) & 0xFF;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024A90);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024AD4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024B38);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024B9C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024C60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024CB8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CBF0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024D80);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024E4C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024EA8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024ECC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024F0C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024F2C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024F60);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00024FC8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000251A0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00025214);

void func_00025230(s32 arg0) {
    func_0000274C(arg0);
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0002524C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00025288);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000255B4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000255D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000256F0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CC74);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000257C8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000258E8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000259FC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00025AF0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CCE4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00025D04);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00025F30);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00025FDC);

void func_000260C0(void *arg0) {
    func_00023FF8(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000260DC);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CD48);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026170);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026278);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000262D0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000266F8);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026810);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026B3C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026BE0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026E04);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026E24);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026E44);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026EC8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CD94);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CD98);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CDA4);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CDB8);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CDCC);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00026F18);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_0002785C);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00027964);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00027B08);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00027BB4);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00027D84);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00027F80);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00027FF0);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_00028068);

INCLUDE_ASM("tmp/asm/340/mcore/nonmatchings/mcore", func_000281D0);

INCLUDE_RODATA("tmp/asm/340/mcore/nonmatchings/mcore", D_0002CED8);
