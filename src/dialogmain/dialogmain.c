/* cflags: -O2 */
#include "common.h"
#include "dialogmain_decls.h"

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00000024);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000000AC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000010C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000084A0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000084B8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000084CC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000084DC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000084F0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000084FC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008508);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008514);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008528);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00000134);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000001F0);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000004C8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000050C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008604);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008610);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008638);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00000694);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00000CC8);

void func_00000DC4(void) {
    func_00006BC4();
}

void func_00000DE0(void) {
    func_000001F0();
    func_0000050C();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00000E04);

void func_00000E6C(void) {
    sceVshCommonUtil_29B75E11();
    func_00000DC4();
    func_000004C8();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00000E98);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001024);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000010D4);

void func_00001104(void) {
    func_000012D0();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001120);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000011EC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000123C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000012D0);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000012FC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000150C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000015B8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001694);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000017CC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001820);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", module_start);

s32 module_stop(void) {
    func_00007940();
    sceVshCommonUtil_0713D516();
    return 0;
}

s32 module_reboot_before(void) {
    sceVshCommonUtil_3FAF35EC();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000018F0);

void func_00001950(void) {
    void **temp_v0;
    void **temp_v0_2;

    temp_v0 = scePaf_4708AED4(D_0000A284, &D_00008858);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 0x19, 3);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0, 7, 0x10);
    }
    temp_v0_2 = scePaf_4708AED4(D_0000A284, &D_00008870);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0), M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0x70)(temp_v0_2, 0x19, 9);
        M2C_FIELD(temp_v0_2, s8 *, 0x1FD) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x1FE) = 0;
        scePaf_86B41BA3(temp_v0_2);
    }
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001A08);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001A30);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008858);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008870);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008888);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000088A8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000088C4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000088D4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000088EC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000088F0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008908);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008928);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008940);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008960);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008970);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008980);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008998);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000089B4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000089D4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000089FC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008A14);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008A28);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008A40);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008A54);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008A74);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008A94);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008AB0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008AC0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008AE0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008B7C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008C18);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008C30);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008C4C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008C70);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008C8C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008CA4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008CC4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008CE0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008CFC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D20);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D3C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D60);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D6C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D78);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D84);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008D98);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DAC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DBC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DC8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DD4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DE0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DE8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008DFC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E1C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E30);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E3C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E48);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E58);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E68);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E78);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008E8C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008EA0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008EB0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008EC4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008ED8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008EE8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008EF8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F08);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F18);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F28);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F38);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F48);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F58);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F68);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F78);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F88);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008F9C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008FB0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008FE0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00008FF4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009004);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009014);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009028);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009040);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_0000904C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009060);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009070);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009080);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009090);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009098);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090A8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090B0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090B8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090C4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090CC);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090D8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090E4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000090F4);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009108);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009134);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009140);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009150);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009164);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001BF4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001D08);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001DDC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001EBC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001F68);

void func_00001FA8(void) {
    func_00001F68();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00001FC4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002258);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000230C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002334);

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

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002584);

void func_000027AC(void) {
    D_0000A290 = 0;
    func_0000230C();
    func_00002584(1);
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000027D4);

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

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000028B8);

void func_000029D4(void) {
    func_000028B8();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000029F0);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002A34);

void func_00002A98(void) {
    if (D_0000A2A0 != 0) {
        ((M2C_UNK (*)(s32)) D_0000A2A0)(D_0000A2B0);
        D_0000A2B0 = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002AD4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002E88);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00002F8C);

s32 func_0000304C(void) {
    return D_0000A290;
}

u8 func_00003058(void) {
    return D_0000A298;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003064);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000030C0);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000318C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003258);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003294);

void func_00003660(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x98) = scePaf_D7215544(D_0000A280, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0x9C) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xA0) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xA4) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xA8) = scePaf_D7215544(D_0000A280, &D_00008D84);
        M2C_FIELD(arg0, s32 *, 0xAC) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xB0) = scePaf_D7215544(D_0000A280, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xB4) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xB8) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xBC) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xC0) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xC4) = scePaf_D7215544(D_0000A280, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xC8) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xCC) = scePaf_D7215544(D_0000A280, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xD0) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xD4) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xD8) = scePaf_D7215544(D_0000A280, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xDC) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xE0) = scePaf_D7215544(D_0000A280, &D_00008D78);
        M2C_FIELD(arg0, s32 *, 0xE4) = scePaf_D7215544(D_0000A280, &D_00008D60);
        M2C_FIELD(arg0, s32 *, 0xE8) = scePaf_D7215544(D_0000A280, &D_00008D6C);
        M2C_FIELD(arg0, s32 *, 0xEC) = scePaf_D7215544(D_0000A280, &D_00008D78);
    }
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003824);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000038C4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003998);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000039D8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003A60);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003AFC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003B68);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003C30);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003D00);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003F24);

u8 func_00003FC8(void) {
    return D_0000A2C8;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00003FD4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004034);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000409C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004104);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000041C4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004250);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000042B4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000043A8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000449C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000452C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000475C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000498C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004ACC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004BFC);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004C98);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004CE4);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004E04);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004E90);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004ED4);

void func_00004F1C(void) {
    func_000028B8();
    func_00002A98();
}

void func_00004F40(void) {
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004F48);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004F70);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00004FF0);

void func_000054D8(void) {
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000054E0);

void func_000057C8(void) {
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000057D0);

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

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000059C0);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000059F0);

void func_00005A40(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
    func_00005B74((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005A60);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005AD8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005B74);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005B94);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005C48);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005D80);

s32 func_00005EA0(void) {
    return D_0000A35C != 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00005EB0);

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

s32 func_00006164(void) {
    return D_0000A360 != 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006174);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000062D8);

s32 func_00006430(void) {
    return D_0000A364 != 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006440);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000065A4);

s32 func_000066FC(void) {
    return D_0000A368 != 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_0000670C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006744);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000069E0);

void func_00006A44(s32 arg0) {
    func_00006744(arg0, 0x200, 0x1E0, 0x110, 0x04000000);
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006A6C);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000095A0);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006BC4);

s32 func_00006CCC(void) {
    return D_0000A3D0;
}

s32 func_00006CD8(void) {
    return D_0000A3CC;
}

s32 func_00006CE4(void) {
    return D_0000A3D4;
}

s32 func_00006CF0(void) {
    return D_0000A3D8;
}

s32 func_00006CFC(s32 arg0) {
    if (arg0 != D_0000A3CC) {
        scePaf_A69BABE3(0x401, arg0, D_0000A3CC);
        D_0000A3CC = arg0;
        D_0000A3D4 += 1;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006D5C);

s32 func_00006DF0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006DF8);

s32 func_00006E30(void) {
    return 0;
}

void func_00006E38(void) {
    func_00006D5C(0);
}

void func_00006E54(void) {
    func_000070F8();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006E70);

void func_00006EE4(void) {
    func_000070F8();
}

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006F00);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006F4C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00006FF8);

void func_000070DC(s32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000095E8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000070F8);

void func_00007468(void) {
    sceVshCommonUtil_EDED68FB();
}

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009674);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_00009690);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000096B0);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_000096E8);

INCLUDE_RODATA("tmp/asm/282/dialogmain/nonmatchings/dialogmain", D_0000970C);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00007484);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000076E8);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_00007798);

INCLUDE_ASM("tmp/asm/282/dialogmain/nonmatchings/dialogmain", func_000078E8);
