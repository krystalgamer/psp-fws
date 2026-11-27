/* cflags: -O2 */
#include "common.h"
#include "dialogmain_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dialogmain", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00000024);

INCLUDE_ASM("nonmatchings/dialogmain", func_000000AC);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000010C);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_000063CC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000063D0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000063E8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006400);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000640C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000641C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006428);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006438);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006450);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006464);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000648C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006494);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000064B4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000064B8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000064C0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006604);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006610);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006650);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006684);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000669C);
#endif

#if FW_VERSION == 352
INCLUDE_RODATA("nonmatchings/dialogmain", D_000066A4_v352);
#endif

#if FW_VERSION == 351
INCLUDE_RODATA("nonmatchings/dialogmain", D_000066A4_v351);
#endif

#if FW_VERSION == 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_000066A4_v350);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_000066D4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006714);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006784);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008488);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000067C4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008498);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000849C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00000130(void) {
    void *sp0;
    s32 sp4;

    if (D_00008918 == 0) {
        D_00008918 = File_AllocLoad("flash0:/vsh/etc/jis2ucs.cbin", 0, 0, &sp0, 0);
    }
    if (D_0000891C == 0) {
        D_0000891C = File_AllocLoad("flash0:/vsh/etc/ucs2jis.cbin", 0, 0, &sp4, 0);
    }
    if ((D_00008918 != 0) || (D_0000891C != 0)) {
        sceCccSetCTable(D_00008918, D_0000891C);
    }
}
#endif

#if FW_VERSION == 100
void func_00000130(void) {
    void *sp0;
    M2C_UNK sp4;

    if (D_00008918 == 0) {
        D_00008918 = File_AllocLoad("flash0:/vsh/etc/jis2ucs.cbin", 0, 0, &sp0, 0);
    }
    if (D_0000891C == 0) {
        D_0000891C = File_AllocLoad("flash0:/vsh/etc/ucs2jis.cbin", 0, 0, &sp4, 0);
    }
    if ((D_00008918 != 0) || (D_0000891C != 0)) {
        sceCccSetCTable(D_00008918, D_0000891C);
    }
}
#endif

#if FW_VERSION < 201
void func_000001DC(void) {
    if (D_00008918 != 0) {
        sce_paf_private_free(D_00008918);
        D_00008918 = 0;
    }
    if (D_0000891C != 0) {
        sce_paf_private_free(D_0000891C);
        D_0000891C = 0;
    }
    sceCccSetCTable(0, 0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007F2C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007F44);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007F58);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007F68);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007F7C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007D70);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007D7C);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/dialogmain", D_000081B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00000130);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/dialogmain", func_0000024C_v152);
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/dialogmain", func_0000024C_v150);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000024C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000004B4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dialogmain", func_00000414);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084A0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000084B8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000084CC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000084DC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000084F0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000084FC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008508);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008514);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008528);

INCLUDE_ASM("nonmatchings/dialogmain", func_00000134);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000001F0);

INCLUDE_ASM("nonmatchings/dialogmain", func_000004C8);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_00006574);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006588);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_0000050C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008604);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008610);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008638);

#if FW_VERSION >= 350
void func_000005A8(s32 arg0) {
    if (M2C_FIELD(D_00008204, s32 *, 0) == 0x64) {
        if (M2C_FIELD(D_00008204, s32 *, 0x54) == 2) {
            func_000011EC(arg0 + 0x50, (s32) "netplay_server_plus_utility");
        }
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_000005A8(s32 arg0) {
    if (M2C_FIELD(D_00007EC4, s32 *, 0) == 0x64) {
        if (M2C_FIELD(D_00007EC4, s32 *, 0x54) == 2) {
            func_000011EC(arg0 + 0x50, (s32) "netplay_server_plus_utility");
        }
    }
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dialogmain", func_000005F8);

INCLUDE_ASM("nonmatchings/dialogmain", func_00000788);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00000674);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dialogmain", func_000006D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00006FF0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007004);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000701C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007048);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007060);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007074);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007084);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007098);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000070A8);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070DC);
#endif

#if FW_VERSION < 152
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070F0);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007108);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007134);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/dialogmain", D_000081B4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/dialogmain", D_000081F4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000715C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00000D68);

void func_00000E78(void) {
    func_00006BC4();
}

void func_00000E94(void) {
    func_0000024C();
    func_0000050C();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00000694);

INCLUDE_ASM("nonmatchings/dialogmain", func_00000CC8);
#endif

#if FW_VERSION >= 282
void func_00000DC4(void) {
    func_00006BC4();
}

void func_00000DE0(void) {
    func_000001F0();
    func_0000050C();
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00000E04);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00000F4C(void) {
    sceVshCommonUtil_29B75E11();
    func_00000E78();
    func_000004B4();
}
#endif

#if FW_VERSION < 201
void func_00000F4C(void) {
    func_000001DC();
    func_00000E78();
    func_00000414();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000010D0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000F78);
#endif

#if FW_VERSION >= 350
void func_00000E6C(void) {
    sceVshCommonUtil_7A17D5B8();
    func_00000DC4();
    func_000004C8();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00000E6C(void) {
    sceVshCommonUtil_29B75E11();
    func_00000DC4();
    func_000004C8();
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00000E98);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00001024);

#if FW_VERSION < 201
void func_00001158(void) {
    sce_paf_private_cosf();
}

void func_00001174(void) {
    sce_paf_private_sqrtf();
}

void func_00001190(void) {
    sce_paf_private_malloc();
}

void func_000011AC(void) {
    sce_paf_private_memalign();
}

void func_000011C8(s32 arg0) {
    sce_paf_private_free(arg0);
}

void func_000011E4(void) {
    sce_paf_private_memcpy();
}

void func_00001200(void) {
    sce_paf_private_memset();
}

void func_0000121C(void) {
    sce_paf_private_floorf();
}

void func_00001238(void) {
    sce_paf_private_acosf();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00001254);

void func_00001280(void) {
    sce_paf_private_strcpy();
}

void func_0000129C(void) {
    sce_paf_private_memcmp();
}

void func_000012B8(void) {
    sce_paf_private_strlen();
}

void func_000012D4(void) {
    sce_paf_private_strcmp();
}

void func_000012F0(void) {
    sce_paf_private_qsort();
}

void func_0000130C(void) {
    sce_paf_private_bsearch();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00001328);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000010D4);

#if FW_VERSION < 282
void func_0000138C(void) {
    func_00001544();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000013A8);
#else
void func_00001104(void) {
    func_000012D0();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00001120);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000011EC);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000123C);

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00001544);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00001234);
#else
INCLUDE_ASM("nonmatchings/dialogmain", func_000012D0);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/dialogmain", func_00001598);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000012FC);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_0000150C);

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00001500);

INCLUDE_ASM("nonmatchings/dialogmain", func_000015DC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001714);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001768);
#endif

#if FW_VERSION < 260
INCLUDE_ASM("nonmatchings/dialogmain", func_00001688);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/dialogmain", func_00001590);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/dialogmain", func_00001734);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001804);
#endif

#if FW_VERSION < 260
void *func_00001A3C(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/dialogmain", func_00001A74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000015B8);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001694);

INCLUDE_ASM("nonmatchings/dialogmain", func_000017CC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001820);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", module_start);

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 module_stop(void) {
    func_000073DC();
    sceVshCommonUtil_0713D516();
    return 0;
}
#endif

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00006484();
    return 0;
}
#endif

#if FW_VERSION >= 350
s32 module_stop(void) {
    func_00005EC0();
    sceVshCommonUtil_92DFBA5B();
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 module_stop(void) {
    func_00007940();
    sceVshCommonUtil_0713D516();
    return 0;
}
#endif

#if FW_VERSION >= 350
s32 module_reboot_before(void) {
    sceVshCommonUtil_A2A69900();
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 350
s32 module_reboot_before(void) {
    sceVshCommonUtil_3FAF35EC();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000018F0);

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_00001888(void) {
    void **temp_v0;
    void **temp_v0_2;

    temp_v0 = scePaf_4708AED4(D_00008944, &D_000088A8);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0x19, 3);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 7, 0x10);
    }
    temp_v0_2 = scePaf_4708AED4(D_00008944, &D_00008034);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0_2, 0x19, 9);
        M2C_FIELD(temp_v0_2, s8 *, 0x1FD) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
        scePaf_86B41BA3(temp_v0_2);
    }
}
#endif

#if FW_VERSION >= 350
void func_00001950(void) {
    void **temp_v0;
    void **temp_v0_2;

    temp_v0 = scePaf_4F20E8B0(D_00008244, &D_00008858);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0x19, 3);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 7, 0x10);
    }
    temp_v0_2 = scePaf_4F20E8B0(D_00008244, &D_00008870);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0_2, 0x19, 9);
        M2C_FIELD(temp_v0_2, s8 *, 0x1FD) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
        scePaf_BE0D7212(temp_v0_2);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00001950(void) {
    struct Unk_vt_func_00001950_temp_v0 **temp_v0;
    void **temp_v0_2;

    temp_v0 = scePaf_4708AED4(D_0000A284, &D_00008858);
    if (temp_v0 != NULL) {
        (*temp_v0)->unk70(temp_v0, 0x19, 3);
        (*temp_v0)->unk70(temp_v0, 7, 0x10);
    }
    temp_v0_2 = scePaf_4708AED4(D_0000A284, &D_00008870);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0_2, 0x19, 9);
        M2C_FIELD(temp_v0_2, s8 *, 0x1FD) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
        scePaf_86B41BA3(temp_v0_2);
    }
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00001A08);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00001EC4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001CBC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00001A30);
#endif

#if FW_VERSION >= 330
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000662C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006644);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000666C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000667C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000066A4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000066B8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000066E4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000066F8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006724);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006730);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006758);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006764);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000678C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006798);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000067C0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000067D4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006804);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006810);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00006834);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008858);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008870);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008888);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088A8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008034);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000804C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000806C);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088C4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088D4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088EC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088F0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008908);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008928);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008940);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008960);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008970);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007288);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007290);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008980);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008998);

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_00006E54);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000089B4);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008198);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_000089D4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000089FC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A14);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A28);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A40);

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000734C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007374);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00007394);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000073A8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000073B4);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A54);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A74);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000740C);
#else
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A94);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008AB0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008AC0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008AE0);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008B7C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008C18);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008C30);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008C4C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008C70);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008C8C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008CA4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008CC4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008CE0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008CFC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D20);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D3C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D60);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D6C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D78);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D84);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008D98);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DAC);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DBC);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000076E8);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DBC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DC8);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DD4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DE0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DE8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000878C);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DFC);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E1C);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008954);
#endif

#if FW_VERSION == 100 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E30);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008314);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008324);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008338);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E3C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E48);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E58);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E68);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E78);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E8C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EA0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EB0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EC4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008ED8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000886C);
#endif

#if FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000077F4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EE8);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000889C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088AC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088BC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088CC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088DC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008720);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008BD4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008BE4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008BF8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008C0C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008730);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/dialogmain", D_000088AC_v152);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088BC_v152);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/dialogmain", D_000088EC_v150);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088FC);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EF8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F08);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F18);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F28);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F38);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F48);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F58);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F68);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F78);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F88);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F9C);
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_000071E0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FB0);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FE0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FF4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009004);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009014);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009028);

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008550);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008560);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000856C);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000087C0);
#endif

#if FW_VERSION == 152
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000894C_v152);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008958);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000898C_v150);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008998_v150);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000904C);
#endif

#if FW_VERSION >= 310
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000859C);
#endif

#if FW_VERSION < 350
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009060);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009070);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009080);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000089DC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000089E4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009090);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009098);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090A8);

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000089BC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000089C4);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/dialogmain", D_000089FC_v150);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A04_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A10);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A18);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000090B0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090B8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090C4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090CC);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090D8);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/dialogmain", D_000078C4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090E4);

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/dialogmain", D_000078E8);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090F4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009108);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009134);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_000088C0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088D0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088E4);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009140);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009150);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009164);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00001BF4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000021A0);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002274);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002354);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002400);

void func_00002440(void) {
    func_00002400();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_0000245C);

INCLUDE_ASM("nonmatchings/dialogmain", func_000026F0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001EDC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00001D08);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001DDC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001EBC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00001F68);

void func_00001FA8(void) {
    func_00001F68();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00001FC4);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002258);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_0000230C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dialogmain", func_00001DA8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00002270);

void func_0000243C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_0000991C = arg0;
    D_00009920 = arg1;
    D_00009924 = arg2;
    D_00009928 = arg3;
    D_0000992C = arg4;
}

void func_00002468(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg0 != NULL) {
        *arg0 = D_0000991C;
    }
    if (arg1 != NULL) {
        *arg1 = D_00009920;
    }
    if (arg2 != NULL) {
        *arg2 = D_00009924;
    }
    if (arg3 != NULL) {
        *arg3 = D_00009928;
    }
    if (arg4 != NULL) {
        *arg4 = D_0000992C;
    }
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000024C0);

void func_000026E8(void) {
    D_00008950 = 0;
    func_0000230C();
    func_000024C0(1);
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00002710);

void func_00002744(void) {
    s32 temp_v0;

    if (D_00009924 == 0) {

    } else if (((s32 (*)()) D_0000992C)() != 0) {
        if (D_00009934 == 0) {
            D_00009934 = ((s32 (*)(s32)) D_00009924)(D_00009930);
        }
        if (D_00009938 == 0) {
            temp_v0 = scePaf_B7E6052B(0x1C);
            scePaf_93538664(temp_v0, D_00009934, 0x81400, 0);
            D_00009938 = temp_v0;
        }
    }
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000027F4);

void func_00002910(void) {
    func_000027F4();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_0000292C);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00002970);
#endif

#if FW_VERSION == 201
void func_00002970(void) {
    if ((D_0000991C != 0) && (D_00009930 == 0)) {
        D_00009930 = ((s32 (*)(M2C_UNK, void (*)(), M2C_UNK *)) D_0000991C)(0x81400, func_00002910, &func_0000292C);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_000029CC(void) {
    if (D_00009920 != 0) {
        ((M2C_UNK (*)(s32)) D_00009920)(D_00009930);
        D_00009930 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/dialogmain", func_00002A08);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00002AF8);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002DE0);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002EE4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dialogmain", func_000020AC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002170);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007974);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dialogmain", func_000024B0);

INCLUDE_ASM("nonmatchings/dialogmain", func_000026A4);

INCLUDE_ASM("nonmatchings/dialogmain", func_000029BC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002AA0);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002B90);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002C84);
#endif

#if FW_VERSION < 282
s32 func_00002D78(void) {
    return D_00008950;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
u8 func_00003004(void) {
    return D_00009918;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/dialogmain", func_0000300C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/dialogmain", func_00003010);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000303C);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003108);

INCLUDE_ASM("nonmatchings/dialogmain", func_000031D4);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dialogmain", func_00002334);
#endif

#if FW_VERSION >= 282
void func_00002500(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_0000A29C = arg0;
    D_0000A2A0 = arg1;
    D_0000A2A4 = arg2;
    D_0000A2A8 = arg3;
    D_0000A2AC = arg4;
}

void func_0000252C(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg0 != NULL) {
        *arg0 = D_0000A29C;
    }
    if (arg1 != NULL) {
        *arg1 = D_0000A2A0;
    }
    if (arg2 != NULL) {
        *arg2 = D_0000A2A4;
    }
    if (arg3 != NULL) {
        *arg3 = D_0000A2A8;
    }
    if (arg4 != NULL) {
        *arg4 = D_0000A2AC;
    }
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00002584);

void func_000027AC(void) {
    D_0000A290 = 0;
    func_0000230C();
    func_00002584(1);
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000027D4);
#endif

#if FW_VERSION >= 350
void func_00002808(void) {
    s32 temp_v0;

    if (D_0000A2A4 == 0) {

    } else if (((s32 (*)()) D_0000A2AC)() != 0) {
        if (D_00008278 == 0) {
            D_00008278 = ((s32 (*)(s32)) D_0000A2A4)(D_0000A2B0);
        }
        if (D_0000827C == 0) {
            temp_v0 = scePaf_61A8E8EC(0x1C);
            scePaf_D539C351(temp_v0, D_00008278, 0x84800, 0);
            D_0000827C = temp_v0;
        }
    }
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
void func_00002808(void) {
    s32 temp_v0;

    if (D_0000A2A4 == 0) {

    } else if (((s32 (*)()) D_0000A2AC)() != 0) {
        if (D_0000A2B8 == 0) {
            D_0000A2B8 = ((s32 (*)(s32)) D_0000A2A4)(D_0000A2B0);
        }
        if (D_0000A2BC == 0) {
            temp_v0 = scePaf_B7E6052B(0x1C);
            scePaf_93538664(temp_v0, D_0000A2B8, 0x84800, 0);
            D_0000A2BC = temp_v0;
        }
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
void func_00002808(void) {
    s32 temp_v0;

    if (D_0000A2A4 == 0) {

    } else if (((s32 (*)()) D_0000A2AC)() != 0) {
        if (D_0000A2B8 == 0) {
            D_0000A2B8 = ((s32 (*)(s32)) D_0000A2A4)(D_0000A2B0);
        }
        if (D_0000A2BC == 0) {
            temp_v0 = scePaf_B7E6052B(0x1C);
            scePaf_93538664(temp_v0, D_0000A2B8, 0x81400, 0);
            D_0000A2BC = temp_v0;
        }
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000028B8);

void func_000029D4(void) {
    func_000028B8();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000029F0);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002A34);

void func_00002A98(void) {
    if (D_0000A2A0 != 0) {
        ((M2C_UNK (*)(s32)) D_0000A2A0)(D_0000A2B0);
        D_0000A2B0 = 0;
    }
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00002AD4);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002E88);

INCLUDE_ASM("nonmatchings/dialogmain", func_00002F8C);

s32 func_0000304C(void) {
    return D_0000A290;
}

u8 func_00003058(void) {
    return D_0000A298;
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00003064);

INCLUDE_ASM("nonmatchings/dialogmain", func_000030C0);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000318C);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003258);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003294);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00003150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00003150(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x94) = scePaf_D7215544(D_00009B80, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0x98) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0x9C) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xA0) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xA4) = scePaf_D7215544(D_00009B80, &D_00008D84);
        M2C_FIELD(arg0, s32 *, 0xA8) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xAC) = scePaf_D7215544(D_00009B80, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xB0) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xB4) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xB8) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xBC) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xC0) = scePaf_D7215544(D_00009B80, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xC4) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xC8) = scePaf_D7215544(D_00009B80, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xCC) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xD0) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xD4) = scePaf_D7215544(D_00009B80, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xD8) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xDC) = scePaf_D7215544(D_00009B80, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xE0) = scePaf_D7215544(D_00009B80, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xE4) = scePaf_D7215544(D_00009B80, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xE8) = scePaf_D7215544(D_00009B80, &D_00008D78);
    }
}
#endif

#if FW_VERSION == 100
void func_00003150(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x90) = scePaf_D7215544(D_00008940_v100, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0x94) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0x98) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0x9C) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xA0) = scePaf_D7215544(D_00008940_v100, &D_00008D84);
        M2C_FIELD(arg0, s32 *, 0xA4) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xA8) = scePaf_D7215544(D_00008940_v100, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xAC) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xB0) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xB4) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xB8) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xBC) = scePaf_D7215544(D_00008940_v100, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xC0) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xC4) = scePaf_D7215544(D_00008940_v100, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xC8) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xCC) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xD0) = scePaf_D7215544(D_00008940_v100, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xD4) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xD8) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xDC) = scePaf_D7215544(D_00008940_v100, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xE0) = scePaf_D7215544(D_00008940_v100, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xE4) = scePaf_D7215544(D_00008940_v100, &D_00008D78);
    }
}
#endif

#if FW_VERSION >= 350
void func_00003660(struct Unk_func_00003660_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk98 = scePaf_AD66D039(D_00008240, &D_00008D60);
        arg0->unk9C = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkA0 = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkA4 = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkA8 = scePaf_AD66D039(D_00008240, &D_00008D84);
        arg0->unkAC = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkB0 = scePaf_AD66D039(D_00008240, &D_00008D60);
        arg0->unkB4 = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkB8 = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkBC = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkC0 = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkC4 = scePaf_AD66D039(D_00008240, &D_00008D60);
        arg0->unkC8 = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkCC = scePaf_AD66D039(D_00008240, &D_00008D60);
        arg0->unkD0 = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkD4 = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkD8 = scePaf_AD66D039(D_00008240, &D_00008D60);
        arg0->unkDC = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkE0 = scePaf_AD66D039(D_00008240, &D_00008D78);
        arg0->unkE4 = scePaf_AD66D039(D_00008240, &D_00008D60);
        arg0->unkE8 = scePaf_AD66D039(D_00008240, &D_00008D6C);
        arg0->unkEC = scePaf_AD66D039(D_00008240, &D_00008D78);
    }
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_00003660(struct Unk_func_00003660_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk98 = scePaf_D7215544(D_0000A280, &D_00008D60);
        arg0->unk9C = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkA0 = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkA4 = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkA8 = scePaf_D7215544(D_0000A280, &D_00008D84);
        arg0->unkAC = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkB0 = scePaf_D7215544(D_0000A280, &D_00008D60);
        arg0->unkB4 = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkB8 = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkBC = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkC0 = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkC4 = scePaf_D7215544(D_0000A280, &D_00008D60);
        arg0->unkC8 = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkCC = scePaf_D7215544(D_0000A280, &D_00008D60);
        arg0->unkD0 = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkD4 = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkD8 = scePaf_D7215544(D_0000A280, &D_00008D60);
        arg0->unkDC = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkE0 = scePaf_D7215544(D_0000A280, &D_00008D78);
        arg0->unkE4 = scePaf_D7215544(D_0000A280, &D_00008D60);
        arg0->unkE8 = scePaf_D7215544(D_0000A280, &D_00008D6C);
        arg0->unkEC = scePaf_D7215544(D_0000A280, &D_00008D78);
    }
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003824);

INCLUDE_ASM("nonmatchings/dialogmain", func_000038C4);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003998);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00003934);

INCLUDE_ASM("nonmatchings/dialogmain", func_000039BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000039D8);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003A60);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003AFC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003B68);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00003D30);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00003C30);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003D00);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000402C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000037D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
u8 func_00003850(void) {
    return D_00009BA0;
}
#endif

#if FW_VERSION == 100
u8 func_00003850(void) {
    return D_00008960_v100;
}
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/dialogmain", func_0000385C);
#endif

#if FW_VERSION < 201
s32 *func_0000385C(s32 *arg0) {
    void **temp_v0;

    func_00004DD4(arg0, 0);
    temp_v0 = scePaf_4708AED4(D_0000A288, &D_000076E8);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32 *, M2C_UNK), 0xAC)(temp_v0, arg0, 0);
    }
    return arg0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 *func_0000385C(s32 *arg0) {
    void **temp_v0;

    func_0000585C(arg0, 0);
    temp_v0 = scePaf_4708AED4(D_0000A288, &D_000076E8);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32 *, M2C_UNK), 0xB0)(temp_v0, arg0, 0);
    }
    return arg0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00003F24);

u8 func_00003FC8(void) {
    return D_0000A2C8;
}
#endif

#if FW_VERSION >= 350
s32 *func_00003FD4(s32 *arg0) {
    void **temp_v0;

    func_000059A0(arg0, 0);
    temp_v0 = scePaf_4F20E8B0(D_00008248, &D_00008DC8);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32 *, M2C_UNK), 0xB0)(temp_v0, arg0, 0);
    }
    return arg0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
s32 *func_00003FD4(s32 *arg0) {
    struct Unk_vt_func_00003FD4_temp_v0 **temp_v0;

    func_000059A0(arg0, 0);
    temp_v0 = scePaf_4708AED4(D_0000A288, &D_00008DC8);
    if (temp_v0 != NULL) {
        (*temp_v0)->unkB0(temp_v0, arg0, 0);
    }
    return arg0;
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00004034);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000409C);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000420C);

INCLUDE_ASM("nonmatchings/dialogmain", func_000042CC);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004144);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_0000398C);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003A6C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004104);

INCLUDE_ASM("nonmatchings/dialogmain", func_000041C4);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004250);
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/dialogmain", func_00004300);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000042B4);

INCLUDE_ASM("nonmatchings/dialogmain", func_000043A8);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000449C);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dialogmain", func_00004084);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00004080);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004218);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004264);

INCLUDE_ASM("nonmatchings/dialogmain", func_000042E8);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000436C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dialogmain", func_0000472C);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00004610);
#endif

#if FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_0000452C);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000475C);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000498C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004B98);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004358);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/dialogmain", func_00004ACC);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00004BFC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004C98);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004CE4);

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004EAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00004F38(s32 arg0) {
    if (D_00009BD8 == NULL) {

    } else {
        M2C_FIELD(*D_00009BD8, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009BD8, 6, arg0);
    }
    if (D_00009BE4 != NULL) {
        M2C_FIELD(*D_00009BE4, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009BE4, 6, arg0);
    }
    if (D_00009BEC != NULL) {
        M2C_FIELD(*D_00009BEC, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009BEC, 6, arg0);
    }
    if (D_00009BF4 != NULL) {
        M2C_FIELD(*D_00009BF4, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009BF4, 6, arg0);
    }
    if (D_00009BF8 != NULL) {
        M2C_FIELD(*D_00009BF8, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009BF8, 6, arg0);
    }
    if (D_00009BFC != NULL) {
        M2C_FIELD(*D_00009BFC, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009BFC, 6, arg0);
    }
    if (D_00009C00 != NULL) {
        M2C_FIELD(*D_00009C00, M2C_UNK (**)(void **, M2C_UNK, s32), 0x6C)(D_00009C00, 6, arg0);
    }
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004E04);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_000050B4);

u8 func_00005204(void) {
    return D_000094FC;
}
#endif

#if FW_VERSION >= 300
s32 func_00004E7C(void) {
    return 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004E90);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004ED4);

void func_00004F1C(void) {
    func_000028B8();
    func_00002A98();
}

void func_00004F40(void) {
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00004F48);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004D90);

void func_00004DD8(void) {
    func_000027F4();
    func_000029CC();
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dialogmain", func_0000509C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004604);
#endif

#if FW_VERSION < 282
void func_00004650(void) {

}

INCLUDE_ASM("nonmatchings/dialogmain", func_00004658);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000512C);

INCLUDE_ASM("nonmatchings/dialogmain", func_000051AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004680);
#endif

#if FW_VERSION < 282
void func_000049BC(void) {

}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000539C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/dialogmain", func_000049C4);
#endif

#if FW_VERSION < 282
void func_00004C64(void) {

}

INCLUDE_ASM("nonmatchings/dialogmain", func_00004C6C);

void func_00004D14(void) {
    func_00004C6C(1, 0xFFFF);
}

void func_00004D34(void) {
    func_00004C6C(0, 0xFFFF);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
void func_0000585C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B74((s32) arg0);
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004F70);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004FF0);

void func_000054D8(void) {
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000054E0);

void func_000057C8(void) {
}

INCLUDE_ASM("nonmatchings/dialogmain", func_000057D0);

void func_00005960(void) {
    func_000057D0(1, 0xFFFF);
}

void func_00005980(void) {
    func_000057D0(0, 0xFFFF);
}

void func_000059A0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B74((s32) arg0);
}
#endif

#if FW_VERSION >= 310
INCLUDE_ASM("nonmatchings/dialogmain", func_00005A40);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000059C0);

INCLUDE_ASM("nonmatchings/dialogmain", func_000059F0);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00004DD4);
#endif

#if FW_VERSION < 201
void func_00004DD4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B74((s32) arg0);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
void func_00005A40(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00005B74((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00005A60);

INCLUDE_ASM("nonmatchings/dialogmain", func_00005AD8);

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B74);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B94);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B74);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B94);
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dialogmain", func_00005C48);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005C38);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00005D70(void) {
    return D_00009DDC != 0;
}
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007A6C);

INCLUDE_ASM("nonmatchings/dialogmain", func_00005130);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005D80);

s32 func_00005EA0(void) {
    return D_0000A35C != 0;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dialogmain", func_00005EB0);
#endif

#if FW_VERSION == 271
s32 func_00005420(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_00009DE0 == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_00009F88;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_00009F94;
        D_00009F88 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_00009F90;
        D_00009F94 = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_00009F8C;
        D_00009F90 = 0;
        if (temp_s0_4 == 0) {
            D_00009F8C = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_00009F8C = 0;
        }
    }
    D_00009DE0 -= 1;
    return var_s2;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 271
s32 func_00005420(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_00009DE0 == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_00009E08;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_00009E14;
        D_00009E08 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_00009E10;
        D_00009E14 = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_00009E0C;
        D_00009E10 = 0;
        if (temp_s0_4 == 0) {
            D_00009E0C = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_00009E0C = 0;
        }
    }
    D_00009DE0 -= 1;
    return var_s2;
}
#endif

#if FW_VERSION == 201
s32 func_00005420(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_000099DC == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_00009A04;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_00009A10;
        D_00009A04 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_00009A0C;
        D_00009A10 = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_00009A08;
        D_00009A0C = 0;
        if (temp_s0_4 == 0) {
            D_00009A08 = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_00009A08 = 0;
        }
    }
    D_000099DC -= 1;
    return var_s2;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
s32 func_00006034(void) {
    return D_00009DE0 != 0;
}
#endif

#if FW_VERSION == 152
s32 func_00005420(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_00009BFC_v152 == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_00009C24;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_00009C30;
        D_00009C24 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_00009C2C_v152;
        D_00009C30 = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_00009C28;
        D_00009C2C_v152 = 0;
        if (temp_s0_4 == 0) {
            D_00009C28 = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_00009C28 = 0;
        }
    }
    D_00009BFC_v152 -= 1;
    return var_s2;
}
#endif

#if FW_VERSION == 150
s32 func_00005420(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_00009C3C == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_00009C64;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_00009C70;
        D_00009C64 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_00009C6C;
        D_00009C70 = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_00009C68;
        D_00009C6C = 0;
        if (temp_s0_4 == 0) {
            D_00009C68 = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_00009C68 = 0;
        }
    }
    D_00009C3C -= 1;
    return var_s2;
}
#endif

#if FW_VERSION == 100
s32 func_00005420(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_000089A8 == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_000089D0;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_000089DC;
        D_000089D0 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_000089D8;
        D_000089DC = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_000089D4;
        D_000089D8 = 0;
        if (temp_s0_4 == 0) {
            D_000089D4 = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_000089D4 = 0;
        }
    }
    D_000089A8 -= 1;
    return var_s2;
}
#endif

#if FW_VERSION == 282
s32 func_0000602C(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_v0;
    s32 var_s2;

    var_s2 = 0;
    if (D_0000A360 == 1) {
        temp_v0 = sceNetAdhocctlTerm();
        var_s2 = temp_v0;
        if (temp_v0 == 0) {

        } else {
            sce_paf_private_printf("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
        }
        temp_s0 = D_0000A388;
        if (temp_s0 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
        temp_s0_2 = D_0000A394;
        D_0000A388 = 0;
        if (temp_s0_2 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_2);
            scePaf_4E67BB08(temp_s0_2);
        }
        temp_s0_3 = D_0000A390;
        D_0000A394 = 0;
        if (temp_s0_3 == 0) {

        } else {
            scePaf_4612DB4B(temp_s0_3);
            scePaf_4E67BB08(temp_s0_3);
        }
        temp_s0_4 = D_0000A38C;
        D_0000A390 = 0;
        if (temp_s0_4 == 0) {
            D_0000A38C = 0;
        } else {
            scePaf_4612DB4B(temp_s0_4);
            scePaf_4E67BB08(temp_s0_4);
            D_0000A38C = 0;
        }
    }
    D_0000A360 -= 1;
    return var_s2;
}

s32 func_00006164(void) {
    return D_0000A360 != 0;
}
#endif

#if FW_VERSION < 300
INCLUDE_ASM("nonmatchings/dialogmain", func_00006174);

INCLUDE_ASM("nonmatchings/dialogmain", func_000062D8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
s32 func_000062FC(void) {
    return D_00009DE4 != 0;
}
#endif

#if FW_VERSION == 250
s32 func_00006300_v250(void) {
    return D_00009DE4 != 0;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00006310);

INCLUDE_ASM("nonmatchings/dialogmain", func_00006474);

s32 func_000065CC(void) {
    return D_00009DE8 != 0;
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/dialogmain", func_000066B4);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/dialogmain", func_00005838);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005874);
#endif

#if FW_VERSION == 282
s32 func_00006430(void) {
    return D_0000A364 != 0;
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00006440);

INCLUDE_ASM("nonmatchings/dialogmain", func_000065A4);

s32 func_000066FC(void) {
    return D_0000A368 != 0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_0000670C);

INCLUDE_ASM("nonmatchings/dialogmain", func_00006744);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000069E0);

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B4C);
#endif

#if FW_VERSION < 250
void func_00005B4C(s32 arg0) {
    func_00005874(arg0, 0x200, 0x110, 0x04000000);
}
#endif

#if FW_VERSION >= 282
void func_00006A44(s32 arg0) {
    func_00006744(arg0, 0x200, 0x1E0, 0x110, 0x04000000);
}
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dialogmain", func_000058EC);

s32 func_00006BC4(void) {
    if (!(D_00007FEC & 1)) {

    } else {
        func_00005A14();
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00005970);
#else
INCLUDE_ASM("nonmatchings/dialogmain", func_00006A6C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007D28);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000095A0);

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00005A14);
#else
INCLUDE_ASM("nonmatchings/dialogmain", func_00006BC4);
#endif

#if FW_VERSION < 282
s32 func_00005DD8(void) {
    return D_00008A04;
}

s32 func_00005DE4(void) {
    return D_00008A00;
}

s32 func_00005DF0(void) {
    return D_00008A08;
}

s32 func_00005DFC(void) {
    return D_00008A0C;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
s32 func_00005E08(s32 arg0) {
    if (arg0 != D_00008A00) {
        scePaf_A69BABE3(0x401, arg0, D_00008A00);
        D_00008A00 = arg0;
        D_00008A08 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005E08(s32 arg0) {
    if (arg0 != D_00008A00) {
        sce_paf_private_printf("ms status changed - %d\n", arg0);
        scePaf_A69BABE3(0x401, arg0, D_00008A00);
        D_00008A00 = arg0;
        D_00008A08 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00006AA4);

s32 func_00006B38(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00006B40);

s32 func_00006B78(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005E78(s32 arg0) {
    if (arg0 != D_00008A04) {
        sce_paf_private_printf("umd status changed - %d\n", arg0);
        scePaf_A69BABE3(0x400, arg0, D_00008A04);
        D_00008A04 = arg0;
        D_00008A0C += 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00006CCC(void) {
    return D_0000A3D0;
}

s32 func_00006CD8(void) {
    return D_0000A3CC;
}
#endif

#if FW_VERSION >= 282
s32 func_00006CE4(void) {
    return D_0000A3D4;
}

s32 func_00006CF0(void) {
    return D_0000A3D8;
}
#endif

#if FW_VERSION >= 350
s32 func_00006CFC(s32 arg0) {
    if (arg0 != D_0000A3D4) {
        scePaf_2F94EF32(0x409, arg0, D_0000A3D4);
        D_0000A3D4 = arg0;
        D_0000A3D8 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 330 && FW_VERSION < 350
s32 func_00006CFC(s32 arg0) {
    if (arg0 != D_0000A3D4) {
        scePaf_A69BABE3(0x409, arg0, D_0000A3D4);
        D_0000A3D4 = arg0;
        D_0000A3D8 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 330
s32 func_00006CFC(s32 arg0) {
    if (arg0 != D_0000A3CC) {
        scePaf_A69BABE3(0x409, arg0, D_0000A3CC);
        D_0000A3CC = arg0;
        D_0000A3D4 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 310
s32 func_00006CFC(s32 arg0) {
    if (arg0 != D_0000A3CC) {
        scePaf_A69BABE3(0x401, arg0, D_0000A3CC);
        D_0000A3CC = arg0;
        D_0000A3D4 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00006D5C);

s32 func_00006DF0(void) {
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00006DF8(void) {
    func_00006AA4(0);
}
#endif

#if FW_VERSION == 100
void func_00006DF8(void) {
    func_00005E78(1);
    sceUmdActivate(1, &D_00007D28);
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00006DF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00005F14(void) {
    func_00006E40();
}
#endif

#if FW_VERSION == 100
void func_00005F14(void) {
    func_00005E78(0);
    sceUmdDeactivate(2, &D_00007D28);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00006BB8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005F40);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_00005F40(void) {
    func_00006E40();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00006C48);

INCLUDE_ASM("nonmatchings/dialogmain", func_00006C94);

INCLUDE_ASM("nonmatchings/dialogmain", func_00006D40);

void func_00006E24(s32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F28);

INCLUDE_ASM("nonmatchings/dialogmain", func_00006E40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005F74);

INCLUDE_ASM("nonmatchings/dialogmain", func_00005FF8);

INCLUDE_ASM("nonmatchings/dialogmain", func_000060FC);
#endif

#if FW_VERSION < 282
void func_000062E4(void) {
    sceSystemFileFree();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
s32 func_00006E30(void) {
    return 0;
}

void func_00006E38(void) {
    func_00006D5C(0);
}

void func_00006E54(void) {
    func_000070F8();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00006E70);

void func_00006EE4(void) {
    func_000070F8();
}

INCLUDE_ASM("nonmatchings/dialogmain", func_00006F00);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00006F4C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/dialogmain", func_00006FF8);

void func_000070DC(s32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_RODATA("nonmatchings/dialogmain", D_000095E8);

INCLUDE_ASM("nonmatchings/dialogmain", func_000070F8);

void func_00007468(void) {
    sceSystemFileFree();
}
#endif

#if FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009674);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009690);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FF0);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FE8);
#endif

#if FW_VERSION == 150
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009028_v150);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000904C);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/dialogmain", func_00006300);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_RODATA("nonmatchings/dialogmain", D_000096B0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000096E8);

INCLUDE_RODATA("nonmatchings/dialogmain", D_0000970C);

INCLUDE_ASM("nonmatchings/dialogmain", func_00007484);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/dialogmain", func_000076E8);

INCLUDE_ASM("nonmatchings/dialogmain", func_00007798);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000078E8);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/dialogmain", func_00005EC0);
#endif
