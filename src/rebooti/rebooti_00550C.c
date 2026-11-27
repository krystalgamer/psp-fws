/* cflags[100]: -O2 -frename-registers */
#include "common.h"
#include "rebooti_decls.h"

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000550C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013628);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013634);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00005AF8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00005EE0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013864);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001386C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013878);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013884);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001388C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00005F78);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006078);

s32 func_00006114(void) {
    return 0;
}

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000138B4);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000138BC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000611C);

s32 func_000061C4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000061CC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006230);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006290);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000062D0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006324);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006460);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006968);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000069D4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006C28);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006D10);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00006E34);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000724C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001390C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013938);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000734C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00007428);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00007D00);

s32 func_00007E4C(void) {
    return 0;
}

s32 func_00007E54(void) {
    return 0;
}

void func_00007E5C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_0000CE50();
    func_00006E34(arg0, arg1, arg2, arg3);
}

s32 func_00007EB8(s32 arg0) {
    s32 temp_s0;

    func_0000CE50();
    temp_s0 = func_0000724C(arg0);
    func_0000CE50();
    return temp_s0;
}

void func_00007EF0(struct Unk_func_00007EF0_0 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000CE50();
    func_000069D4(arg0->unk10, arg1, arg2, 0);
}

s32 func_00007F40(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009284(arg0, arg1, arg2);
    func_0000CE50();
    return temp_s1;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00007F98);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00007FF0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008078);

s32 func_000080C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009630(arg0, arg1, arg2);
    func_0000CE50();
    return temp_s1;
}

s32 func_00008118(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009A08(arg0, arg1);
    func_0000CE50();
    return temp_s1;
}

s32 func_00008160(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0000CE50();
    temp_s1 = func_00009CCC(arg0, arg1);
    func_0000CE50();
    return temp_s1;
}

s32 func_000081A8(void *arg0) {
    void **temp_a2;
    void **temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_a3;

    func_0000CE50();
    temp_a0 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_a0 != NULL) {
        temp_a3 = M2C_FIELD(temp_a0, void **, 8);
        temp_a1 = M2C_FIELD(temp_a0, void **, 0);
        temp_a2 = M2C_FIELD(temp_a0, void ***, 4);
        M2C_FIELD(temp_a3, s32 *, 8) = (s32) (M2C_FIELD(temp_a3, s32 *, 8) - 1);
        if (temp_a1 != NULL) {
            M2C_FIELD(temp_a1, void ***, 4) = temp_a2;
        } else {
            D_00015478 = temp_a2;
        }
        temp_v0 = M2C_FIELD(temp_a0, void ***, 4);
        if (temp_v0 != NULL) {
            *temp_v0 = temp_a1;
        } else {
            D_00015474 = temp_a1;
        }
        M2C_FIELD(temp_a0, void **, 0) = (void *) D_0001547C;
        D_0001547C = temp_a0;
    }
    func_0000CE50(temp_a0);
    return 0;
}

void func_00008238(s32 arg0, M2C_UNK arg1) {
    func_0000CE50();
    func_00009E0C(arg0, arg1);
}

void func_00008274(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0000CE50();
    func_00009F84(arg0, arg1, arg2);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000082C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008328);

s32 func_00008368(s32 arg0, s32 arg1) {
    func_00001A54((s32) "%s: iob=%p name=%s\n", (s32) "UFatChdir", arg0, arg1);
    return 0x8001B000;
}

s32 func_000083A0(void) {
    s32 temp_s0;

    temp_s0 = func_00007428();
    func_0000CE50();
    return temp_s0;
}

s32 func_000083CC(void) {
    s32 temp_s0;

    temp_s0 = func_00007D00();
    func_0000CE50();
    return temp_s0;
}

s32 func_000083F8(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008404);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000084F8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000870C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000088A0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000089A4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008A98);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008B28);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008BE0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008C68);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00008FB0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000917C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009284);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009400);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009490);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009630);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009A08);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009CCC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009E0C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00009F84);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A0C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A6B0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A7A8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000A894);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000ABEC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000ADC8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000AE38);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000AEF0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000AF7C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B08C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B4C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B634);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000B85C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BA18);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BB44);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BD20);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000BE00);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C18C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C21C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C2C0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C3C8);

s32 func_0000C4D4(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 2) << 8) | M2C_FIELD(arg0, u8 *, 3);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C4E8);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013E68);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013E88);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C594);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C66C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C7A4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C820);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C8B0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C900);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00013F98);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000C9F8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CA8C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CADC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CBD8);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001406C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014094);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000140A4);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000140C4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CD24);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CE50);

s32 func_0000CE94(void) {
    func_0000EA00();
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CEB4);

void func_0000CEE4(void) {
    func_0000D0EC((s32) &D_0001B9B8);
}

void func_0000CF04(void) {
    func_0000E190((s32) &D_0001B9B8);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CF24);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CF74);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000CFD8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D02C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D090);

s32 func_0000D0E0(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D0EC);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014178);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000141BC);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000141C0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000141F0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001422C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_0001425C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014284);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014288);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000142A0);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000142B4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D46C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D5B4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D634);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D728);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000D97C);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014570);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014590);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000145A4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000DC64);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000DED8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E0CC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E190);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E544);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E748);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E880);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000E95C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EA00);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014874);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EBC8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EC78);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_000148FC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EDA8);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014A2C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000EF84);

void func_0000F0FC(s32 arg0) {
    s32 var_a1;
    s8 *temp_v0;

    var_a1 = 0;
    do {
        temp_v0 = arg0 + var_a1;
        var_a1 += 1;
        *temp_v0 = -1;
    } while (var_a1 < 0xC);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F120);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F23C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F324);

s32 func_0000F734(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F73C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F7E4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F890);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014C70);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F9AC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000F9E0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FA14);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FA48);

INCLUDE_RODATA("nonmatchings/rebooti_00550C", D_00014CB8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FA7C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FAB8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FAF4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FB44);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FB78);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FBAC);

s32 func_0000FBE0(void) {
    return 0x8001B000;
}

s32 func_0000FBEC(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FBF8);

s32 func_0000FC94(void) {
    return 0x8001B000;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FCA0);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FD20);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FEBC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0000FFDC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001006C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000100C4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000102AC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010488);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001056C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001064C);

s32 func_000106F0(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000106F8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010744);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010778);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000107AC);

s32 func_000107E4(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000107EC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010838);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010868);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010884);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000108B0);

void func_000108CC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000102AC(arg0, arg1, arg2, arg3, 0x31);
}

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000108E8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010AD4);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010E20);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00010F6C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00011034);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000110E8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001116C);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000112BC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00011330);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000113BC);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_000114C8);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_00011648);

INCLUDE_ASM("nonmatchings/rebooti_00550C", func_0001177C);

s32 func_0001192C(void) {
    return D_00016CF4;
}

s32 func_00011938(void) {
    return D_00016CF8;
}

s32 func_00011944(void) {
    return D_00016CFC;
}

