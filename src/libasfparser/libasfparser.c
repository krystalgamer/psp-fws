/* cflags: -O2 -frename-registers */
#include "common.h"
#include "libasfparser_decls.h"

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_91B11F3A);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_6B3AE857);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_C6D98C54);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_685E0DA7);

s32 func_00000214(s32 arg0, s32 arg1, void **arg2) {
    s32 var_v1;
    void *temp_v0;

    *arg2 = NULL;
    var_v1 = 0x86400001;
    if (arg0 != 0) {
        var_v1 = 0x86400402;
        if ((u32) (arg1 - 1) < 0x7FU) {
            temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x3014);
            var_v1 = 0x86400403;
            *arg2 = temp_v0;
            if (temp_v0 != NULL) {
                var_v1 = ((M2C_FIELD(temp_v0, s32 *, 8) ^ 3) == 0) ? 0 : 0x86400401;
            }
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000270);

s32 sceAsfParser_B9E4BD9E(void) {
    return 0;
}

s32 sceAsfParser_8B08301F(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_95AD7B34);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_2CB147F7);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_41322F4A);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_24DB62B1);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_320202AB);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_6DA63281);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", sceAsfParser_3CAAC462);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000058C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000698);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000006D8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000708);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000730);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000780);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000007E8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000080C);

void func_0000083C(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32), 8)(temp_a1, temp_a1);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000860);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000008F4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000980);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000A64);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000ACC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000DF4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000E5C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00000F0C);

s32 func_00000FB8(void *arg0) {
    s32 temp_v0;
    s32 var_a3;
    u32 temp_t0;
    u32 temp_t1;
    u32 var_a2;

    var_a3 = 0;
    var_a2 = M2C_FIELD(arg0, u32 *, 0x20);
    temp_t0 = M2C_FIELD(arg0, u32 *, 8);
    if (var_a2 < temp_t0) {
        temp_v0 = func_000016F4((s32) arg0, temp_t0 - var_a2);
        var_a2 = M2C_FIELD(arg0, u32 *, 0x20);
        var_a3 = temp_v0;
    }
    temp_t1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), u32 *, 0x40);
    if (var_a2 < temp_t1) {
        var_a3 = func_000016F4((s32) arg0, temp_t1 - var_a2);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001030);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000113C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000011C8);

void func_00001288(s32 arg0, s32 arg1) {
    if (func_00001868(arg0) != 0) {
        func_00001300(arg0, arg1);
    } else {
        func_000012DC(arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000012DC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001300);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000013C0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001578);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000015C0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001658);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000168C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000016C0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000016F4);

s32 func_00001728(void *arg0) {
    return (u32) (M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, s32 *, 0xC)) >= (u32) M2C_FIELD(arg0, u32 *, 8);
}

s32 func_00001744(void *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x20) >= (u32) M2C_FIELD(arg0, u32 *, 0x28);
}

s32 func_00001758(void *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 0x20) >= (u32) M2C_FIELD(arg0, u32 *, 0x24);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000176C);

s32 func_0000178C(void *arg0) {
    s32 var_v0;

    if (M2C_FIELD(arg0, u8 *, 1) & 1) {
        var_v0 = func_00001744(arg0);
    } else {
        var_v0 = func_00001728(arg0);
    }
    return var_v0 == 0;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000017CC);

s32 func_00001810(u8 *arg0, s32 arg1) {
    return arg1 == *arg0;
}

s32 func_00001820(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 2) & 0x80;
}

s32 func_0000182C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 2) & 0x60;
}

s32 func_00001838(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 2) & 0xF;
}

s32 func_00001844(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, u8 *, 3), 5, 2);
}

s32 func_00001850(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, u8 *, 3), 1, 2);
}

s32 func_0000185C(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, u8 *, 3), 3, 2);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001868);

s32 func_00001874(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, u8 *, 4), 4, 2);
}

s32 func_00001880(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, u8 *, 4), 2, 2);
}

s32 func_0000188C(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 4) & 3;
}

s32 func_00001898(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x17) & 0x3F;
}

u32 func_000018A4(void *arg0) {
    return (u8) M2C_FIELD(arg0, u8 *, 0x17) >> 6;
}

void func_000018B0(s32 arg0, s32 arg1) {
    func_000016F4(arg0, arg1);
}

s32 func_000018CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000018D4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001934);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001A3C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001BFC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001CAC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001D7C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001E24);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001E50);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001E78);

s32 func_00001E98(s32 arg0) {
    return arg0 & 0x7F;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001EA0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001F18);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00001FD0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002088);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000020E8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002224);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002274);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000022D4);

void func_00002334(s32 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000233C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002368);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000239C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002464);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000024C4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000260C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002664);

void func_000026F0(s32 arg0) {
    func_0000271C(arg0);
    func_000027C0(arg0);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000271C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000027C0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000282C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002858);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002884);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000028A8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000028F0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002978);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000029BC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002B58);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002CD0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002E28);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00002F84);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000030D0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000314C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000321C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003300);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000034E0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000035C4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000036AC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003700);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003788);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000037A4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003894);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003994);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000039E8);

s32 func_00003B44(s32 arg0, s32 *arg1) {
    s32 var_a2;
    void *temp_v0;

    temp_v0 = (*arg1 * 4) + arg0 + 0x300C;
    var_a2 = 0;
    if (M2C_FIELD(temp_v0, s32 **, 8) == NULL) {
        M2C_FIELD(temp_v0, s32 **, 8) = arg1;
    } else {
        var_a2 = 0x86400174;
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003B78);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003C64);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003CCC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003D30);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003DB4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00003E70);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000040D8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000042A4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000043A8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004438);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000044E4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004568);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004700);

void func_0000478C(void *arg0, s32 arg1) {
    func_000047C0(arg0);
    M2C_FIELD(arg0, s32 *, 0x2CC) = arg1;
}

void func_000047C0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000047C8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004880);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000048A4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000048C4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000048D4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000048E0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000497C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000049DC);

void func_00004A0C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0xA) = 9;
    M2C_FIELD(arg0, s32 *, 0x288) = 0;
    func_00004AB8((s32) arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004A34);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004AB8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004B10);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00006FC8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00006FD8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00006FE8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00006FF8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007048);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007058);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007068);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007078);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007088);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007098);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000070A8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000070B8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000070C8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000070D8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000070E8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000070F8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007108);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007118);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007128);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007138);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007148);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007158);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007168);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007178);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007188);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007198);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000071A8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000071B8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000071C8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000071D8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000071E8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000071F8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007208);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007218);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007228);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007238);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007248);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007258);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007268);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007278);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000073C8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000073E0);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000074A0);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000074A4);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000074AC);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000074E0);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000075E0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004B34);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00004DDC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000053EC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005564);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000056AC);

s32 func_000056E8(u32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 >= 2U) {
        do {
            var_v1 += 1;
        } while ((u32) (arg0 >> var_v1) >= 2U);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005710);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000057AC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005818);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000059FC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005AB0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005B1C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005BC8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005D08);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005E08);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00005FF0);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_0000766C);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000060DC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006128);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006130);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000061BC);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000062C8);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006474);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006560);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006638);

void func_0000664C(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v1 != 0) {
        M2C_FIELD(arg0, s16 *, 0x2A8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x2AC) = 1;
    if (temp_v1 != 0) {
        M2C_FIELD(arg0, u16 *, 0x2AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x2AA) - 1);
    }
}

u32 func_00006678(void *arg0) {
    u32 temp_a0;
    u32 var_v0;

    temp_a0 = M2C_FIELD(arg0, u32 *, 0x10);
    var_v0 = 0x86401012;
    if (temp_a0 != 0) {
        var_v0 = (u32) (M2C_FIELD(arg0, s32 *, 0x28) * 0x3E8) / temp_a0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000066B4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000066CC);

void func_000066EC(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a3;
    u32 temp_v0;

    temp_a3 = M2C_FIELD(arg0, s32 *, 4);
    temp_v0 = M2C_FIELD(arg0, u32 *, 0);
    temp_a0 = temp_a3 & 7;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = temp_a0;
    if (temp_v0 >= (u32) (arg2 + temp_a3)) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (arg2 + temp_a0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((temp_v0 - temp_a3) + temp_a0);
}

void func_0000672C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0);
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_0000673C);

s32 func_00006760(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8) - (M2C_FIELD(arg0, s32 *, 4) & 7);
}

u32 func_00006774(void *arg0) {
    return (u32) M2C_FIELD(arg0, u32 *, 8) >> 3;
}

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006780);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000067B0);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000067F4);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_00006828);

INCLUDE_ASM("tmp/asm/282/libasfparser/nonmatchings/libasfparser", func_000068C0);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000076BC);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000076D8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007A4C);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00007C8C);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_000084A4);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_00008C5C);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_0000A14C);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_0000B1B8);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_0000BC98);

INCLUDE_RODATA("tmp/asm/282/libasfparser/nonmatchings/libasfparser", D_0000C620);
