/* cflags: -O2 */
#include "common.h"
#include "dialogmain_decls.h"

INCLUDE_ASM("nonmatchings/dialogmain", func_00000024);

INCLUDE_ASM("nonmatchings/dialogmain", func_000000AC);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000010C);

#if FW_VERSION == 100
void func_00000130(void) {
    void *sp0;
    M2C_UNK sp4;

    if (D_00008918 == 0) {
        D_00008918 = scePaf_27760582("flash0:/vsh/etc/jis2ucs.cbin", 0, 0, &sp0, 0);
    }
    if (D_0000891C == 0) {
        D_0000891C = scePaf_27760582("flash0:/vsh/etc/ucs2jis.cbin", 0, 0, &sp4, 0);
    }
    if ((D_00008918 != 0) || (D_0000891C != 0)) {
        scePaf_D4DAB044(D_00008918, D_0000891C);
    }
}
#endif

#if FW_VERSION == 100
void func_000001DC(void) {
    if (D_00008918 != 0) {
        scePaf_545FE2DA(D_00008918);
        D_00008918 = 0;
    }
    if (D_0000891C != 0) {
        scePaf_545FE2DA(D_0000891C);
        D_0000891C = 0;
    }
    scePaf_D4DAB044(0, 0);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_0000024C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000414);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084A0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084B8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084CC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084DC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084F0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000084FC);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008508);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008514);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008528);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000134);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000001F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000004C8);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_0000050C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008604);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008610);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008638);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000006D4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00006FF0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007004);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000701C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007048);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007060);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007074);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007084);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007098);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070B4);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070DC);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000070F0);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007108);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007134);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000715C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000D68);
#endif

#if FW_VERSION == 100
void func_00000E78(void) {
    func_00006BC4();
}
#endif

#if FW_VERSION == 100
void func_00000E94(void) {
    func_0000024C();
    func_0000050C();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000694);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000CC8);
#endif

#if FW_VERSION != 100
void func_00000DC4(void) {
    func_00006BC4();
}
#endif

#if FW_VERSION != 100
void func_00000DE0(void) {
    func_000001F0();
    func_0000050C();
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00000E04);

#if FW_VERSION == 100
void func_00000F4C(void) {
    func_000001DC();
    func_00000E78();
    func_00000414();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000F78);
#endif

#if FW_VERSION != 100
void func_00000E6C(void) {
    sceVshCommonUtil_29B75E11();
    func_00000DC4();
    func_000004C8();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00000E98);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00001024);

#if FW_VERSION == 100
void func_00001158(void) {
    scePaf_DEDF238F();
}
#endif

#if FW_VERSION == 100
void func_00001174(void) {
    scePaf_7BED034E();
}
#endif

#if FW_VERSION == 100
void func_00001190(void) {
    scePaf_5FAC9869();
}
#endif

#if FW_VERSION == 100
void func_000011AC(void) {
    scePaf_3586BE05();
}
#endif

#if FW_VERSION == 100
void func_000011C8(s32 arg0) {
    scePaf_545FE2DA(arg0);
}
#endif

#if FW_VERSION == 100
void func_000011E4(void) {
    scePaf_F95EA3F1();
}
#endif

#if FW_VERSION == 100
void func_00001200(void) {
    scePaf_6829D7AF();
}
#endif

#if FW_VERSION == 100
void func_0000121C(void) {
    scePaf_B3D58D25();
}
#endif

#if FW_VERSION == 100
void func_00001238(void) {
    scePaf_44AAF96C();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001254);
#endif

#if FW_VERSION == 100
void func_00001280(void) {
    scePaf_980228BA();
}
#endif

#if FW_VERSION == 100
void func_0000129C(void) {
    scePaf_3FBD9639();
}
#endif

#if FW_VERSION == 100
void func_000012B8(void) {
    scePaf_CA79D58B();
}
#endif

#if FW_VERSION == 100
void func_000012D4(void) {
    scePaf_66FE90D7();
}
#endif

#if FW_VERSION == 100
void func_000012F0(void) {
    scePaf_10B901E7();
}
#endif

#if FW_VERSION == 100
void func_0000130C(void) {
    scePaf_3DD2A27B();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001328);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000010D4);

#if FW_VERSION == 100
void func_0000138C(void) {
    func_00001544();
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000013A8);
#endif

#if FW_VERSION != 100
void func_00001104(void) {
    func_000012D0();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001120);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000011EC);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000123C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001544);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000012D0);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001598);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000012FC);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_0000150C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001688);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001734);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001804);
#endif

#if FW_VERSION == 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001A74);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000015B8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001694);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000017CC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001820);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", module_start);

#if FW_VERSION == 100
s32 module_stop(void) {
    func_00006484();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_stop(void) {
    func_00007940();
    sceVshCommonUtil_0713D516();
    return 0;
}
#endif

#if FW_VERSION != 100
s32 module_reboot_before(void) {
    sceVshCommonUtil_3FAF35EC();
    return 0;
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000018F0);

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001CBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001A30);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008858);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008870);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008888);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000088A8);

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
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007290);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008980);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008998);

INCLUDE_RODATA("nonmatchings/dialogmain", D_000089B4);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000089D4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000089FC);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A14);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A28);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A40);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000734C);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007374);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007394);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000073A8);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000073B4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A54);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A74);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000740C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008A94);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008AB0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008AC0);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000076E8);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DBC);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DC8);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DD4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DE0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DE8);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008DFC);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E1C);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008E30);

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

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000077F4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EE8);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008EF8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F08);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F18);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F28);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F38);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F48);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F58);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F68);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F78);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F88);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008F9C);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FB0);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FE0);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00008FF4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009004);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009014);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009028);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009040);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000904C);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009060);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009070);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009080);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009090);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009098);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090A8);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000090B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000090B8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000090C4);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000090CC);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090D8);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000078C4);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090E4);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000078E8);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000090F4);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009108);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009134);

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009140);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009150);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00009164);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00001BF4);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001EDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001D08);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001DDC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001EBC);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001F68);
#endif

#if FW_VERSION != 100
void func_00001FA8(void) {
    func_00001F68();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00001FC4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002258);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_0000230C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000020AC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002170);
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007974);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000024B0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000026A4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000029BC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002AA0);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002B90);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002C84);
#endif

#if FW_VERSION == 100
s32 func_00002D78(void) {
    return D_00008950;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002334);
#endif

#if FW_VERSION != 100
void func_00002500(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_0000A29C = arg0;
    D_0000A2A0 = arg1;
    D_0000A2A4 = arg2;
    D_0000A2A8 = arg3;
    D_0000A2AC = arg4;
}
#endif

#if FW_VERSION != 100
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
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002584);
#endif

#if FW_VERSION != 100
void func_000027AC(void) {
    D_0000A290 = 0;
    func_0000230C();
    func_00002584(1);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000027D4);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000028B8);
#endif

#if FW_VERSION != 100
void func_000029D4(void) {
    func_000028B8();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000029F0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002A34);
#endif

#if FW_VERSION != 100
void func_00002A98(void) {
    if (D_0000A2A0 != 0) {
        ((M2C_UNK (*)(s32)) D_0000A2A0)(D_0000A2B0);
        D_0000A2B0 = 0;
    }
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002AD4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002E88);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00002F8C);
#endif

#if FW_VERSION != 100
s32 func_0000304C(void) {
    return D_0000A290;
}
#endif

#if FW_VERSION != 100
u8 func_00003058(void) {
    return D_0000A298;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003064);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000030C0);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_0000318C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003258);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003294);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003150);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003824);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000038C4);
#endif

#if FW_VERSION != 100
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

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003824);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000038C4);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003998);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000039D8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003A60);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003AFC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00003B68);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003C30);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00003D00);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000037D8);
#endif

#if FW_VERSION == 100
u8 func_00003850(void) {
    return D_00008960_v100;
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_0000385C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003F24);
#endif

#if FW_VERSION != 100
u8 func_00003FC8(void) {
    return D_0000A2C8;
}
#endif

#if FW_VERSION != 100
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

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_0000398C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00003A6C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004104);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000041C4);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004250);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000042B4);

INCLUDE_ASM("nonmatchings/dialogmain", func_000043A8);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000449C);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000452C);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000475C);

INCLUDE_ASM("nonmatchings/dialogmain", func_0000498C);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004358);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004ACC);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00004BFC);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004C98);

INCLUDE_ASM("nonmatchings/dialogmain", func_00004CE4);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004E04);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004E90);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004ED4);
#endif

#if FW_VERSION != 100
void func_00004F1C(void) {
    func_000028B8();
    func_00002A98();
}
#endif

#if FW_VERSION != 100
void func_00004F40(void) {
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00004F48);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004604);
#endif

#if FW_VERSION == 100
void func_00004650(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004658);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004680);
#endif

#if FW_VERSION == 100
void func_000049BC(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000049C4);
#endif

#if FW_VERSION == 100
void func_00004C64(void) {

}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004C6C);
#endif

#if FW_VERSION == 100
void func_00004D14(void) {
    func_00004C6C(1, 0xFFFF);
}
#endif

#if FW_VERSION == 100
void func_00004D34(void) {
    func_00004C6C(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004F70);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00004FF0);
#endif

#if FW_VERSION != 100
void func_000054D8(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000054E0);
#endif

#if FW_VERSION != 100
void func_000057C8(void) {
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000057D0);
#endif

#if FW_VERSION != 100
void func_00005960(void) {
    func_000057D0(1, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_00005980(void) {
    func_000057D0(0, 0xFFFF);
}
#endif

#if FW_VERSION != 100
void func_000059A0(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B74((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000059C0);

INCLUDE_ASM("nonmatchings/dialogmain", func_000059F0);

#if FW_VERSION == 100
void func_00004DD4(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_00005B74((s32) arg0);
}
#endif

#if FW_VERSION != 100
void func_00005A40(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00005B74((s32) arg0);
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00005A60);

INCLUDE_ASM("nonmatchings/dialogmain", func_00005AD8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B94);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00005B74);

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005B94);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00005C48);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007A6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005130);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005D80);
#endif

#if FW_VERSION != 100
s32 func_00005EA0(void) {
    return D_0000A35C != 0;
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00005EB0);

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
            scePaf_C9831AFF("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
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

#if FW_VERSION != 100
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
            scePaf_C9831AFF("sceNetAdhocctlTerm() failed. ret = %d\n", temp_v0);
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
#endif

#if FW_VERSION != 100
s32 func_00006164(void) {
    return D_0000A360 != 0;
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00006174);

INCLUDE_ASM("nonmatchings/dialogmain", func_000062D8);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005838);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005874);
#endif

#if FW_VERSION != 100
s32 func_00006430(void) {
    return D_0000A364 != 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006440);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000065A4);
#endif

#if FW_VERSION != 100
s32 func_000066FC(void) {
    return D_0000A368 != 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_0000670C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006744);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000069E0);

#if FW_VERSION == 100
void func_00005B4C(s32 arg0) {
    func_00005874(arg0, 0x200, 0x110, 0x04000000);
}
#endif

#if FW_VERSION != 100
void func_00006A44(s32 arg0) {
    func_00006744(arg0, 0x200, 0x1E0, 0x110, 0x04000000);
}
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_00006A6C);

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_00007D28);
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_000095A0);

INCLUDE_ASM("nonmatchings/dialogmain", func_00006BC4);

#if FW_VERSION == 100
s32 func_00005DD8(void) {
    return D_00008A04;
}
#endif

#if FW_VERSION == 100
s32 func_00005DE4(void) {
    return D_00008A00;
}
#endif

#if FW_VERSION == 100
s32 func_00005DF0(void) {
    return D_00008A08;
}
#endif

#if FW_VERSION == 100
s32 func_00005DFC(void) {
    return D_00008A0C;
}
#endif

#if FW_VERSION == 100
s32 func_00005E08(s32 arg0) {
    if (arg0 != D_00008A00) {
        scePaf_C9831AFF("ms status changed - %d\n", arg0);
        scePaf_A69BABE3(0x401, arg0, D_00008A00);
        D_00008A00 = arg0;
        D_00008A08 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION == 100
s32 func_00005E78(s32 arg0) {
    if (arg0 != D_00008A04) {
        scePaf_C9831AFF("umd status changed - %d\n", arg0);
        scePaf_A69BABE3(0x400, arg0, D_00008A04);
        D_00008A04 = arg0;
        D_00008A0C += 1;
    }
    return 0;
}
#endif

#if FW_VERSION != 100
s32 func_00006CCC(void) {
    return D_0000A3D0;
}
#endif

#if FW_VERSION != 100
s32 func_00006CD8(void) {
    return D_0000A3CC;
}
#endif

#if FW_VERSION != 100
s32 func_00006CE4(void) {
    return D_0000A3D4;
}
#endif

#if FW_VERSION != 100
s32 func_00006CF0(void) {
    return D_0000A3D8;
}
#endif

#if FW_VERSION != 100
s32 func_00006CFC(s32 arg0) {
    if (arg0 != D_0000A3CC) {
        scePaf_A69BABE3(0x401, arg0, D_0000A3CC);
        D_0000A3CC = arg0;
        D_0000A3D4 += 1;
    }
    return 0;
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006D5C);
#endif

#if FW_VERSION != 100
s32 func_00006DF0(void) {
    return 0;
}
#endif

#if FW_VERSION == 100
void func_00006DF8(void) {
    func_00005E78(1);
    sceUmdActivate(1, &D_00007D28);
}
#else
INCLUDE_ASM("nonmatchings/dialogmain", func_00006DF8);
#endif

#if FW_VERSION == 100
void func_00005F14(void) {
    func_00005E78(0);
    sceUmdDeactivate(2, &D_00007D28);
}
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005F40);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005F74);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00005FF8);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000060FC);
#endif

#if FW_VERSION == 100
void func_000062E4(void) {
    sceVshCommonUtil_EDED68FB();
}
#endif

#if FW_VERSION != 100
s32 func_00006E30(void) {
    return 0;
}
#endif

#if FW_VERSION != 100
void func_00006E38(void) {
    func_00006D5C(0);
}
#endif

#if FW_VERSION != 100
void func_00006E54(void) {
    func_000070F8();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006E70);
#endif

#if FW_VERSION != 100
void func_00006EE4(void) {
    func_000070F8();
}
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006F00);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006F4C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006FF8);
#endif

#if FW_VERSION != 100
void func_000070DC(s32 arg0) {
    sceIoClose(arg0);
}
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000095E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000070F8);
#endif

#if FW_VERSION != 100
void func_00007468(void) {
    sceVshCommonUtil_EDED68FB();
}
#endif

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009674);

INCLUDE_RODATA("nonmatchings/dialogmain", D_00009690);

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00006300);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000096B0);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_000096E8);
#endif

#if FW_VERSION != 100
INCLUDE_RODATA("nonmatchings/dialogmain", D_0000970C);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00007484);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_000076E8);
#endif

#if FW_VERSION != 100
INCLUDE_ASM("nonmatchings/dialogmain", func_00007798);
#endif

INCLUDE_ASM("nonmatchings/dialogmain", func_000078E8);
