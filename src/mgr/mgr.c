/* cflags: -Os */
#include "common.h"
#include "mgr_decls.h"

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_BB36AD19);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_62BF32DD);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_DBEDF631);

INCLUDE_ASM("nonmatchings/mgr", func_0000011C);

INCLUDE_ASM("nonmatchings/mgr", func_0000015C);

INCLUDE_ASM("nonmatchings/mgr", func_00000170);

INCLUDE_ASM("nonmatchings/mgr", func_000001C8);

INCLUDE_ASM("nonmatchings/mgr", func_000001E4);

INCLUDE_ASM("nonmatchings/mgr", func_00000234);

INCLUDE_ASM("nonmatchings/mgr", func_0000026C);

INCLUDE_ASM("nonmatchings/mgr", func_0000027C);

INCLUDE_ASM("nonmatchings/mgr", func_000002A4);

INCLUDE_ASM("nonmatchings/mgr", func_000002C8);

INCLUDE_ASM("nonmatchings/mgr", func_000002EC);

INCLUDE_ASM("nonmatchings/mgr", func_00000310);

INCLUDE_ASM("nonmatchings/mgr", func_00000334);

INCLUDE_ASM("nonmatchings/mgr", func_00000378);

INCLUDE_ASM("nonmatchings/mgr", func_000003BC);

INCLUDE_ASM("nonmatchings/mgr", func_00000400);

INCLUDE_ASM("nonmatchings/mgr", func_00000424);

INCLUDE_ASM("nonmatchings/mgr", func_000004CC);

INCLUDE_ASM("nonmatchings/mgr", func_0000052C);

INCLUDE_ASM("nonmatchings/mgr", func_0000058C);

INCLUDE_ASM("nonmatchings/mgr", func_000005EC);

INCLUDE_ASM("nonmatchings/mgr", func_0000064C);

INCLUDE_ASM("nonmatchings/mgr", func_000006CC);

INCLUDE_ASM("nonmatchings/mgr", func_00000708);

INCLUDE_ASM("nonmatchings/mgr", func_00000754);

INCLUDE_ASM("nonmatchings/mgr", func_000007DC);

void func_00000840(s32 arg0, s32 arg1, s32 arg2) {
    func_000002EC(arg0);
    func_000007DC(arg1, arg2);
}

void sceMgr_driver_604EF590(void) {
    func_00002588();
}

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/mgr", func_00000898);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_ECBC76EF);

#if FW_VERSION == 340
s32 sceMgr_driver_D7293451(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00000898();
    var_v0 = 0;
    if (temp_v0 < 0) {
        func_00000AC4();
        var_v0 = temp_v0;
    }
    return var_v0;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00000AC4);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_DB1160A2);

#if FW_VERSION == 340
void sceMgr_driver_8429C9F3(void) {
    sceMgr_driver_DB1160A2();
}
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_194C594A);

#if FW_VERSION == 100
s32 func_00000B7C(void) {
    return 0;
}
#else
s32 func_00000BF8(void) {
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00000C00);

INCLUDE_ASM("nonmatchings/mgr", func_00000DBC);

INCLUDE_ASM("nonmatchings/mgr", func_00000DFC);

INCLUDE_ASM("nonmatchings/mgr", func_00000EC0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AE68);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AE6C);

INCLUDE_ASM("nonmatchings/mgr", func_00000EE8);

INCLUDE_ASM("nonmatchings/mgr", func_00000FE8);

INCLUDE_ASM("nonmatchings/mgr", func_00001308);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_000013C8);

INCLUDE_ASM("nonmatchings/mgr", func_000013E8);

M2C_UNK *func_00001394(void) {
    return &D_00009C58;
}

INCLUDE_ASM("nonmatchings/mgr", func_00001414);

INCLUDE_ASM("nonmatchings/mgr", func_00001420);

s32 func_000013B8(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80501004;
    if ((u32) (arg1 - 8) < 0x28U) {
        var_v1 = func_00000DBC(0x1C8 - (arg1 * 8), arg0, 0x10);
    }
    return var_v1;
}
#else
M2C_UNK *func_000013C8(void) {
    M2C_UNK *var_v1;

    var_v1 = NULL;
    if (D_0000B6AC != 0) {
        var_v1 = &D_0000B6C8;
    }
    return var_v1;
}

M2C_UNK *func_000013E8(void) {
    M2C_UNK *var_v1;

    var_v1 = NULL;
    if (D_0000B6AC != 0) {
        var_v1 = &D_0000B6E8;
    }
    return var_v1;
}

M2C_UNK *func_00001408(void) {
    return &D_0000B6F8;
}

M2C_UNK *func_00001414(void) {
    return &D_0000B6D8;
}

M2C_UNK *func_00001420(void) {
    return &D_0000B6E0;
}

s32 func_0000142C(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0x80501004;
    if ((u32) (arg1 - 8) < 0x28U) {
        var_v1 = func_00000DBC(0x1C8 - (arg1 * 8), arg0, 0x10);
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_896EEE57);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_733917D9);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_4B166A14);

INCLUDE_ASM("nonmatchings/mgr", func_000015A4);

#if FW_VERSION == 100
s32 func_00001868(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4, s32 arg5) {
    s32 var_t4;
    void *temp_a4;
    void *temp_v0;
    void *temp_v1;

    temp_a4 = arg4 + 0x20;
    temp_v1 = arg4 + 0x2C;
    temp_v0 = temp_v1 + ((M2C_FIELD(arg4, u8 *, 0x20) << 0x18) | (M2C_FIELD(temp_a4, u8 *, 1) << 0x10) | (M2C_FIELD(temp_a4, u8 *, 2) << 8) | M2C_FIELD(temp_a4, u8 *, 3));
    var_t4 = 0x80501002;
    if ((u32) (arg4 + arg5) >= (u32) temp_v0) {
        var_t4 = func_000015A4(arg3, (s32) temp_v1, (s32) temp_v0, arg0, arg1, arg2);
    }
    return var_t4;
}
#else
s32 func_000018F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, struct Unk_func_000018F4_4 *arg4, s32 arg5) {
    s32 var_t4;
    struct Unk_func_000018F4_temp_a4 *temp_a4;
    void *temp_v0;
    void *temp_v1;

    temp_a4 = &arg4->unk20;
    temp_v1 = (u8 *)arg4 + 0x2C;
    temp_v0 = temp_v1 + ((arg4->unk20 << 0x18) | (temp_a4->unk1 << 0x10) | (temp_a4->unk2 << 8) | temp_a4->unk3);
    var_t4 = 0x80501002;
    if ((u32) ((u8 *)arg4 + arg5) >= (u32) temp_v0) {
        var_t4 = func_000015A4(arg3, (s32) temp_v1, (s32) temp_v0, arg0, arg1, arg2);
    }
    return var_t4;
}
#endif

void func_00001980(void) {
    InterruptManagerForKernel_FE28C6D9();
}

INCLUDE_ASM("nonmatchings/mgr", func_0000199C);

#if FW_VERSION == 100
void func_00001A44(void) {
    func_0000015C(0, 0);
    if (M2C_FIELD(&D_00009C68, s32 *, 0) != 0) {
        sceKernelDeleteSema(M2C_FIELD(&D_00009C68, s32 *, 0));
        M2C_FIELD(&D_00009C68, s32 *, 0) = 0;
    }
    if (M2C_FIELD(&D_00009C68, s32 *, 4) != 0) {
        sceKernelDeleteEventFlag(M2C_FIELD(&D_00009C68, s32 *, 4));
        M2C_FIELD(&D_00009C68, s32 *, 4) = 0;
    }
}
#else
void func_00001A44(void) {
    func_0000015C(0, 0);
    if (D_0000B708.unk0 != 0) {
        sceKernelDeleteSema(D_0000B708.unk0);
        D_0000B708.unk0 = 0;
    }
    if (D_0000B708.unk4 != 0) {
        sceKernelDeleteEventFlag(D_0000B708.unk4);
        D_0000B708.unk4 = 0;
    }
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00001AAC);

INCLUDE_ASM("nonmatchings/mgr", func_00001AC8);

INCLUDE_ASM("nonmatchings/mgr", func_00001B24);

INCLUDE_ASM("nonmatchings/mgr", func_00001B90);

INCLUDE_ASM("nonmatchings/mgr", func_00001BD8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00001BE8);

void func_00001CB4(s32 arg0, s32 arg1, s32 arg2) {
    func_00001BE8(arg0, arg1, arg2);
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00001C64);

s32 func_00001D2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    func_00001BD8(arg0, arg3);
    temp_s0 = func_00001C64(arg1, arg2, arg3);
    func_00001B90();
    return temp_s0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00001D88);
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00001E3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00001E14);
#else
INCLUDE_ASM("nonmatchings/mgr", func_00001F80);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F5DFD97B);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_2DAD213D);

s32 sceMgr_driver_3583068E(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    var_v0 = 0x80501000;
    if (arg4 != 0) {
        var_v0 = 0x80501006;
        if (arg3 >= 0) {
            var_v0 = func_00001E3C(0x30, arg0, arg1, arg2, 0, arg4, arg3);
        }
    }
    return var_v0;
}

s32 sceMgr_driver_C507A285(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    var_v0 = 0x80501000;
    if (arg4 != 0) {
        var_v0 = 0x80501006;
        if (arg3 >= 0) {
            var_v0 = func_00001E3C(0x31, arg0, arg1, arg2, 0, arg4, arg3);
        }
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_3054F8F1);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_8A916574);

INCLUDE_ASM("nonmatchings/mgr", func_000023F4);

INCLUDE_ASM("nonmatchings/mgr", func_00002588);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F30E22CF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_1B8F3192);

INCLUDE_ASM("nonmatchings/mgr", func_00002748);

INCLUDE_ASM("nonmatchings/mgr", func_00002788);

#if FW_VERSION == 100
s32 func_00002498(void) {
    return 0x80500001;
}

void func_000024A4(void) {

}
#else
s32 func_000027E0(void) {
    return 0x80500001;
}

void func_000027EC(void) {
}
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_782EB996);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_9ACFEAF6);
#else
s32 sceMgr_driver_9ACFEAF6(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = func_00002934(arg0, arg1);
        sceMgr_driver_DBEDF631();
    }
    return var_s2;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00002934);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_4985A5A8);
#else
s32 sceMgr_driver_4985A5A8(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            temp_v0_3 = func_000006CC(0x1210);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x1202);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000310(arg1);
                }
            }
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s1;
}
#endif

s32 sceMgr_driver_62F480BF(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg1, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000006CC(0x2401);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_00000310(arg0);
            }
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s1;
}

s32 sceMgr_driver_DC515D30(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            var_s1 = func_000006CC(0x2400);
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s1;
}

s32 sceMgr_driver_26EAC6A5(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg1, arg2, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000007DC(0x1460, 3);
            var_s2 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_00000310(arg0);
            }
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s2;
}

s32 sceMgr_driver_02F7AB01(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg2, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            var_s2 = func_000007DC(0x1450, 3);
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s2;
}

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_5576E156);

s32 sceMgr_driver_E22F96A0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg2, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000004CC(arg0);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_000002EC(arg1);
                temp_v0_4 = func_000007DC(0x1470, 3);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_000002EC(arg1 + 8);
                    var_s1 = func_000007DC(0x1480, 3);
                }
            }
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s1;
}

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_C408E3C0);
#else
s32 sceMgr_driver_C408E3C0(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg3, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002A4(arg1);
            func_000002EC(arg2);
            var_s2 = func_000006CC(0x1102);
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s2;
}
#endif

s32 sceMgr_driver_59894938(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 var_s5;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s5 = temp_v0;
    if (temp_v0 >= 0) {
        var_s5 = func_00002F84(arg0, arg1, arg2, arg3, arg4);
        sceMgr_driver_DBEDF631();
    }
    return var_s5;
}

INCLUDE_ASM("nonmatchings/mgr", func_00002F84);

INCLUDE_ASM("nonmatchings/mgr", func_0000310C);

INCLUDE_ASM("nonmatchings/mgr", func_000031C8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_34235E6B);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_0846B97A);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_6B908200);

void sceMgr_driver_2DA3D191(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 1);
}

void sceMgr_driver_4AC11456(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 0);
}

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_2BC130E3);
#else
s32 sceMgr_driver_34235E6B(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 1);
        }
    } else {
        var_a7 = sceMgr_driver_3583068E(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgr_driver_0846B97A(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 0);
        }
    } else {
        var_a7 = sceMgr_driver_C507A285(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgr_driver_6B908200(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4) {
    M2C_UNK *var_a2;
    s32 var_v1;

    var_a2 = arg2;
    var_v1 = 0x80501006;
    if (arg4 >= 0) {
        if (var_a2 == NULL) {
            var_a2 = &D_0000AEE0;
        }
        var_v1 = func_0000341C(arg0, arg1, (s32) var_a2, arg3, arg4, 0, 2);
    }
    return var_v1;
}

void sceMgr_driver_2DA3D191(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 1);
}

void sceMgr_driver_4AC11456(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 0);
}

void sceMgr_driver_2BC130E3(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3) {
    M2C_UNK *var_a2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_0000AEE0;
    }
    func_0000341C(arg0, arg1, (s32) var_a2, arg3, -2, 0, 2);
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_0000341C);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_BDE09225);

s32 sceMgr_driver_54166582(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_000038D0(arg1, arg2);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg0);
            func_0000027C(0x4010);
            temp_v0_3 = func_000001E4();
            var_s2 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                var_s2 = func_000038D0(arg4, arg3);
            }
        }
        sceMgr_driver_DBEDF631();
    }
    return var_s2;
}

INCLUDE_ASM("nonmatchings/mgr", func_000038D0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00003578);
#else
INCLUDE_ASM("nonmatchings/mgr", func_0000391C);
#endif

s32 sceMgr_driver_5A260472(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s3;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s3 = temp_v0;
    if (temp_v0 >= 0) {
        var_s3 = func_00002F84(0, arg0, 0, arg1, arg2);
        sceMgr_driver_DBEDF631();
    }
    return var_s3;
}

#if FW_VERSION == 340
INCLUDE_ASM("nonmatchings/mgr", func_00003B90);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_C3677CF4);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_B434A376);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_8407D6DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00003BFC);
#else
INCLUDE_ASM("nonmatchings/mgr", func_00004070);

INCLUDE_ASM("nonmatchings/mgr", func_00004224);
#endif

INCLUDE_ASM("nonmatchings/mgr", func_0000439C);

#if FW_VERSION == 100
void func_00003E08(s32 arg0) {
    func_000002EC(arg0);
    if (func_000007DC(0x1400, 3) >= 0) {
        func_000002EC(arg0 + 8);
        func_000007DC(0x1410, 3);
    }
}
#else
void func_00004410(s32 arg0) {
    func_000002EC(arg0);
    if (func_000007DC(0x1400, 3) >= 0) {
        func_000002EC(arg0 + 8);
        func_000007DC(0x1410, 3);
    }
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00004460);

INCLUDE_ASM("nonmatchings/mgr", func_000044DC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_000057CC);

INCLUDE_ASM("nonmatchings/mgr", func_00005834);

INCLUDE_ASM("nonmatchings/mgr", func_000059BC);

INCLUDE_ASM("nonmatchings/mgr", func_00004180);

s32 func_00005B88(void) {
    if (D_0000AFF8.unk0 >= 0) {
        sceIoClose(D_0000AFF8.unk0);
        D_0000AFF8.unk0 = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00004358);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_843ECFA2);

s32 func_000045DC(void) {
    void *sp0;
    return sceIoDevctl(&D_0000AFA0, 0x02125802, NULL, 0U, &sp0, 4U) == 0x80020321;
}
#else
INCLUDE_ASM("nonmatchings/mgr", func_00004558);
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEE0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF0);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF4);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEF8);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AEFC);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF00);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF04);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AF10);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF30);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF40);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF50);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF60);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AF70);

INCLUDE_ASM("nonmatchings/mgr", func_00004664);

INCLUDE_ASM("nonmatchings/mgr", func_00004808);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F817405C);

s32 sceMgr_driver_BB1E3C1A(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, 2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg2, -1, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8010);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000004CC(arg0);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_00000378(arg1);
                        var_s0 = func_000006CC(0x9060);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgr_driver_DBEDF631();
    }
    return var_s0;
}

s32 sceMgr_driver_F98874E9(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, 2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg1, arg2, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8011);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000006CC(0x9041);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_000003BC(arg0);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgr_driver_DBEDF631();
    }
    return var_s0;
}

s32 func_00004CBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgr_driver_BB36AD19();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, arg3);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg0, arg2, -1);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8010);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000378(arg1);
                    var_s1 = func_000006CC(0x9040);
                }
            }
        }
        func_000006CC(0x8030);
        sceMgr_driver_DBEDF631();
    }
    return var_s1;
}

void sceMgr_driver_4A14DD18(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 2);
}

void sceMgr_driver_DBB5C63E(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 5);
}

void sceMgr_driver_DB12BB23(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 6);
}

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FC627EBF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_566D33D3);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_76CD10BF);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FCA741DE);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F1ADC4B9);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_6B82D542);

INCLUDE_ASM("nonmatchings/mgr", func_00005328);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_A1F6D85A);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_A44A5538);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_19B8F2D0);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_A45A63B6);

INCLUDE_ASM("nonmatchings/mgr", func_000057CC);

INCLUDE_ASM("nonmatchings/mgr", func_00005834);

INCLUDE_ASM("nonmatchings/mgr", func_000059BC);

INCLUDE_ASM("nonmatchings/mgr", func_000059F8);

s32 func_00005B88(void) {
    if (D_0000AFF8.unk0 >= 0) {
        sceIoClose(D_0000AFF8.unk0);
        D_0000AFF8.unk0 = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr", func_00005BC8);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_843ECFA2);

s32 func_00005E30(void) {
    void *sp0;
    return sceIoDevctl(&D_0000AFA0, 0x02125802, NULL, 0U, &sp0, 4U) == 0x80020321;
}
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFA0);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_D46CF098);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_9C886B02);

INCLUDE_ASM("nonmatchings/mgr", func_00005F7C);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_C9B02F91);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00006030);

s32 func_0000608C(void) {
    sceKernelSignalSema(D_0000955C, 1);
    return 0;
}

void func_000060B4(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = sceIoIoctl(arg0, 0x0211D817, NULL, 0U, arg1, 4U);
    if (temp_v0 < 0) {
        func_00005834(temp_v0);
        *arg1 = 0;
    }
}

INCLUDE_ASM("nonmatchings/mgr", func_00006104);
#else
s32 func_00006030(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = sceKernelWaitSema(D_0000AFFC, 1, NULL);
    var_a0 = 0x80501001;
    if (temp_v0 != 0x80020199) {
        var_a0 = ((temp_v0 ^ 0x800201B5) != 0) ? temp_v0 : 0x80500002;
    }
    return var_a0;
}

s32 func_0000608C(void) {
    sceKernelSignalSema(D_0000AFFC, 1);
    return 0;
}

void func_000060B4(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = sceIoIoctl(arg0, 0x0211D817, NULL, 0U, arg1, 4U);
    if (temp_v0 < 0) {
        func_00005834(temp_v0);
        *arg1 = 0;
    }
}

s32 func_00006104(void) {
    return !(sceMScm_driver_0A054CDA() & 0x300) ? 0 : 0x80502000;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00006134);

INCLUDE_ASM("nonmatchings/mgr", func_00006288);

INCLUDE_ASM("nonmatchings/mgr", func_00006300);

INCLUDE_ASM("nonmatchings/mgr", func_00006340);

INCLUDE_ASM("nonmatchings/mgr", func_00006408);

INCLUDE_ASM("nonmatchings/mgr", func_000064EC);

INCLUDE_ASM("nonmatchings/mgr", func_00006528);

INCLUDE_ASM("nonmatchings/mgr", func_000065FC);

INCLUDE_ASM("nonmatchings/mgr", func_00006678);

INCLUDE_ASM("nonmatchings/mgr", func_000067CC);

INCLUDE_ASM("nonmatchings/mgr", func_0000684C);

INCLUDE_ASM("nonmatchings/mgr", func_00006884);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00005194);
#else
s32 func_000069E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00006884(arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 >= 0) {
        var_v1 = !(D_0000B004 & 0x80) ? 0 : 0x80505008;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00006A20);

INCLUDE_ASM("nonmatchings/mgr", func_00006B3C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_000053B0);
#else
INCLUDE_ASM("nonmatchings/mgr", func_00006BF0);
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00006C40);

INCLUDE_ASM("nonmatchings/mgr", func_00006D70);

INCLUDE_ASM("nonmatchings/mgr", func_00006EAC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00005768);
#else
INCLUDE_ASM("nonmatchings/mgr", func_00006F90);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_91C76957);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_C8380898);

INCLUDE_ASM("nonmatchings/mgr", func_00007364);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_D3A061BE);

#if FW_VERSION == 100
s32 sceMgr_driver_4F4AE686(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            D_0000AFF8.unkC &= ~8;
        }
        func_0000608C();
    }
    return var_s1;
}
#else
s32 sceMgr_driver_4F4AE686(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            D_0000AFF8.unkC = (s32) (D_0000AFF8.unkC & ~0x208);
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00007644);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_839F4A67);

INCLUDE_ASM("nonmatchings/mgr", func_000077A0);

INCLUDE_ASM("nonmatchings/mgr", func_00007844);

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mgr", D_0000AFB8);
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFBC);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFC0);

INCLUDE_ASM("nonmatchings/mgr", func_000078F8);

#if FW_VERSION == 100
void func_00006100(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFCC, 4);
}
#else
void func_0000798C(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFCC, 4);
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_000079B0);

INCLUDE_ASM("nonmatchings/mgr", func_00007AD8);

INCLUDE_ASM("nonmatchings/mgr", func_00007BAC);

INCLUDE_ASM("nonmatchings/mgr", func_00007C84);

INCLUDE_ASM("nonmatchings/mgr", func_00007F24);

INCLUDE_ASM("nonmatchings/mgr", func_000080F8);

INCLUDE_ASM("nonmatchings/mgr", func_00008204);

INCLUDE_ASM("nonmatchings/mgr", func_00008374);

INCLUDE_ASM("nonmatchings/mgr", func_00008460);

INCLUDE_ASM("nonmatchings/mgr", func_00008504);

#if FW_VERSION == 100
s32 func_00006D2C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_00006C40(arg0, arg1, arg2, (s32) &D_0000B050, 0);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        *arg3 = (D_0000B050.unk0 << 0x18) | (D_0000B050.unk1 << 0x10) | (D_0000B050.unk2 << 8) | D_0000B050.unk3;
        var_a2 = 0;
    }
    return var_a2;
}
#else
s32 func_00008584(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_00006C40(arg0, arg1, arg2, (s32) &D_0000B050, 0);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        *arg3 = (D_0000B050.unk0 << 0x18) | (D_0000B050.unk1 << 0x10) | (D_0000B050.unk2 << 8) | D_0000B050.unk3;
        var_a2 = 0;
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", func_00008604);

INCLUDE_ASM("nonmatchings/mgr", func_000086AC);

INCLUDE_ASM("nonmatchings/mgr", func_00008754);

INCLUDE_ASM("nonmatchings/mgr", func_00008B04);

INCLUDE_ASM("nonmatchings/mgr", func_00008EB0);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_C655D92B);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_F26C410A);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_A9F72903);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_6CCA97DB);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_A85906FC);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_00008300);
#else
INCLUDE_ASM("nonmatchings/mgr", func_00009B34);

void func_00009BAC(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFD0, 2);
}
#endif

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFCC);

#if FW_VERSION == 100
void func_00008388(s32 arg0) {
    func_000065FC(arg0, (s32) "x~", 2);
}
#else
INCLUDE_RODATA("nonmatchings/mgr", D_0000AFD0);
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_AC136724);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_656D8FB1);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_0ED46FF9);

INCLUDE_RODATA("nonmatchings/mgr", D_0000AFD8);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_016A843B);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_3EE1140B);

INCLUDE_ASM("nonmatchings/mgr", func_0000A070);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_B7F69809);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/mgr", func_0000A1C8);
#else
s32 func_0000A1C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a5;

    temp_v0 = func_00006528(arg0, 0x42);
    var_a5 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00006340(arg0, arg1, arg2, 3, (s32) &D_0000B050);
        var_a5 = (temp_v0_2 >= 0) ? 0x428 : temp_v0_2;
    }
    return var_a5;
}
#endif

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_A01FF50C);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_7D2AC9FE);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_D1023CC2);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_FD2D2952);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_E1C0DAFE);

INCLUDE_ASM("nonmatchings/mgr", sceMgr_driver_31B4BD28);

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    func_00005F7C();
    func_00000AC4();
    return 0;
}
