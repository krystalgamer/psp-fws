#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000030);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000000B8);

s32 module_start(void) {
    func_00000000();
    func_00000180(0, 0);
    return 0;
}

s32 module_stop(void) {
    func_0016BE0C();
    return 0;
}

void scePaf_FB3DB2FF(void) {
    func_0016BE0C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000180);

void sinf(void) {
    scePaf_296897BC();
}

void cosf(void) {
    scePaf_DEDF238F();
}

void sqrtf(void) {
    scePaf_7BED034E();
}

void malloc(void) {
    scePaf_5FAC9869();
}

void free(void) {
    scePaf_545FE2DA();
}

void memcpy(void) {
    scePaf_F95EA3F1();
}

void memset(void) {
    scePaf_6829D7AF();
}

void memcmp(void) {
    scePaf_3FBD9639();
}

void floorf(void) {
    scePaf_B3D58D25();
}

void acosf(void) {
    scePaf_44AAF96C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", printf);

void fwrite(void) {
    scePaf_F1552447();
}

void strlen(void) {
    scePaf_CA79D58B();
}

void strcpy(void) {
    scePaf_980228BA();
}

void strncpy(void) {
    scePaf_FF2F98C6();
}

void rand(void) {
    scePaf_4370175A();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_98E1BC87);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000004A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_84240C1D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5D786CDD);

s32 func_00000CE0(void *arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_B7E6052B(0x1D4);
    func_00003724(temp_v0, M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000D28);

s32 func_00000DF4(void *arg0) {
    func_00001288(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00000E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F4AB3180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EA026663);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D7C2E0AD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000010AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001434);

void scePaf_6C6979F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x98) = arg1;
    scePaf_462E5873(arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000014F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000184C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E500);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E50C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E59C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000018E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E5F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E60C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001CF0);

s32 scePaf_5DFB5858(void) {
    return D_001A4E1C;
}

void func_00001DB4(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != &D_001ABCF0) {
        scePaf_7EC15225(temp_v1, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00001F70);

void func_00001FE4(void) {
    func_00002000();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00002000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000202C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000207C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000021F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000228C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000024B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000025C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00002680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000275C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00002808);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000028E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000029E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00002AE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00002B78);

s32 func_00002C90(void) {
    *func_0003F340() = 0;
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D3D12890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9D1633BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8860B0FD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6E95EFAA);

void scePaf_88D73AED(s32 arg0, s32 arg1) {
    func_000010AC(D_001A4E1C, arg0, arg1);
}

void scePaf_1A45C860(s32 arg0, s32 arg1) {
    func_00001174(D_001A4E1C, arg0, 0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6844744A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D4FAE7D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00002FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00003724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00004798);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000050B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000515C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000518C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_458A9C95);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00005290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000052E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000531C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00005360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7F7791A1);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E660);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E664);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E66C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E69C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E6C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E6F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1811AD32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F609FA81);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E768);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E770);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E77C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016E78C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D05C226F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3481F595);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_27F64616);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5EBC648F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CAF05F1D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7E8C08D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5470B915);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00005AF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00005B88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_63B24F4D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6F33D1DF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F28A9DB3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DAB59652);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D5372E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2AA842B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00005E1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EA0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EA14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EA1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EA24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EA4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EAB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EAB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EABC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EAC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EAD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EAE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EB9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EBB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EBC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EBE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EBF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC60);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EC80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ECA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ECC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ECCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ECE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ED0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ED2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ED50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ED74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016ED98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EDB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EDD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EDF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EE14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EE3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EE40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EE44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00008A5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00008C68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00008D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00008E00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00008E6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00009070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000090A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8117E6C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BBDE1C17);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000094E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00009528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000095AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000097F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000999C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00009A88);

s32 func_0000A6DC(void *arg0) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = scePaf_752F182C(arg0 + 0xF0);
    if (M2C_FIELD(arg0, s32 *, 0xF8) == 0) {
        temp_v0 = scePaf_B7E6052B(0x40);
        func_00010B58(temp_v0, 0x44, 0xC800);
        M2C_FIELD(arg0, s32 *, 0xF8) = temp_v0;
    }
    return temp_s2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000A74C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000A8E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000A950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000A9FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000AAB8);

void func_0000ACA8(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 < 0) {
        var_a1 = M2C_FIELD(D_001A4E1C, s32 *, 0x98);
    }
    scePaf_E3020CA3(M2C_FIELD(arg0, s32 *, 0x58), var_a1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D42404D1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4842A808);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000AD5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000ADB8);

void func_0000ADD8(void) {
    scePaf_545FE2DA();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4847A314);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DC2CA0F7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000B5AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_32A70C80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D7215544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000B914);

void scePaf_49CE42F7(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0x1C0) == 0) {

    } else {
        temp_v0 = scePaf_D7215544();
        if (temp_v0 != 0) {
            func_0000B914(arg0, temp_v0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000BAC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000BAEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FC6B7234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B09203B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4708AED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_940D9797);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CE21D21F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6CE39EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3067FC77);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000BDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_986FEBD1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_338C3774);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_72129CFB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C004);

void func_0000C0A0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) == 0) {
        func_00042208(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C0D8);

void func_0000C174(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) == 0) {
        func_00042208(M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C1AC);

void func_0000C248(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1D0) == 0) {
        func_00042208(M2C_FIELD(arg0, s32 *, 0x64));
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
}

void func_0000C280(void) {
    func_0000CA7C();
}

void func_0000C29C(void) {
    func_0000CAD4();
}

void func_0000C2B8(void) {
    func_0000CB2C();
}

void func_0000C2D4(void) {
    func_0000CB58();
}

void func_0000C2F0(void) {
    func_0000CBB0();
}

void func_0000C30C(void) {
    func_0000CBDC();
}

void func_0000C328(void) {
    func_0000CC34();
}

void func_0000C344(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000CC60();
}

void func_0000C364(void) {
    func_0000CC80();
}

s32 *func_0000C380(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000CCAC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C3B8);

s32 *func_0000C3E8(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000CEF4(arg1, arg2);
    return arg0;
}

void func_0000C420(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 == 0) {

    } else {
        func_0000CF4C(arg0, temp_v0 + 0xC);
    }
}

void func_0000C450(void **arg0, void *arg1) {
    void *temp_v1;

    temp_v1 = *arg0;
    if (temp_v1 != &D_001ABCF4) {
        scePaf_7EC15225(temp_v1, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C4D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C4F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C6E8);

s32 *func_0000C768(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000CF90(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C7A0);

void func_0000C818(void) {
    func_0000D168();
}

void func_0000C834(s32 arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg1;
    if (temp_v0 == 0) {

    } else {
        func_0000D1C0(arg0, temp_v0 + 0xC);
    }
}

s32 *func_0000C864(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000D204(arg1, arg2);
    return arg0;
}

void func_0000C89C(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0000D2DC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C8BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C934);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000C9AC);

s32 *func_0000CA14(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000D4EC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CA4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CA7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CAD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CB2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CB58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CBB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CBDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CC80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CCAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CD84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CEF4);

void func_0000CF4C(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0000CEF4(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_0000DB08(arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CF90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000CFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D168);

void func_0000D1C0(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0000CF90(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_0000DE6C(arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D204);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D2DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D2FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D4EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D6B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D77C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D838);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D8F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000D9D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000DB08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000DD34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000DE6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E0B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E1EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E3CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E5E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E63C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E6BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E884);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E8D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E92C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E9D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000E9E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EAD4);

void func_0000EB14(void *arg0) {
    scePaf_FE4D4112(M2C_FIELD(arg0, s32 *, 8), arg0 + 0xC);
    func_0000ED28(arg0);
}

void func_0000EB48(void *arg0) {
    scePaf_EAA5AFF6(M2C_FIELD(arg0, s32 *, 4), 0x3039);
    if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
        M2C_FIELD(arg0, s8 *, 0x10) = 1;
    } else if (arg0 != NULL) {
        func_0000EAD4(arg0);
        scePaf_4E67BB08(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EBA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EBF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EE58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EE68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EC48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000ECBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000ED28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000F23C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000F258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000F3A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000F5B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000F670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_72A0044D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4612DB4B);

s32 scePaf_78219D10(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A2DD8;
    D_001A2DD8 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_97FDA760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EF1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EF34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EF4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_298246CD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000FBD4);

void func_0000FC80(void) {
    func_0000FBD4(1, 0xFFFF);
}

void func_0000FCA0(void) {
    func_0000FBD4(0, 0xFFFF);
}

s32 *func_0000FCC0(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0000FDDC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000FCF8);

void func_0000FD60(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0000FDDC(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x1D) != 0) {

    } else {
        func_000100A4(arg0, temp_v0);
    }
}

s32 *func_0000FDA4(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = func_0000D4EC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000FDDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000FEB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000100A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000102D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000106AC);

void func_00010700(void) {
    func_0001071C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001071C);

void func_00010774(void) {
    func_00010790();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000107BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C01BF169);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_910BCFE1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D188831A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AD1721B8);

s32 scePaf_849ED670(s32 *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        var_v1 = func_000112F0(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_75DBA857);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010B58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010C04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010D5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00010EB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011014);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000112F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000113EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000114CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001162C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000116CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011744);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011784);

void func_000117C0(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_997D2809(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_997D2809(var_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011818);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000118A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000119CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011BA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011D34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011E00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011FA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011FBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011FFC);

s32 func_00012138(void) {
    return 1;
}

s32 func_00012140(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012148);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000121B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012274);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000122E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001235C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000123A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000123B0);

s32 func_000124EC(void) {
    return 1;
}

s32 func_000124F4(void) {
    return 1;
}

void scePaf_7DDE0658(s32 arg0) {
    scePaf_910BCFE1(arg0 + 0xF8, (s32) &func_00012530, arg0, 0, 0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012688);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000126BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000126C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000127C0);

s32 scePaf_1A468B86(void *arg0) {
    return *func_0003F340(M2C_FIELD(arg0, s32 *, 0x24)) != 0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EF98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EFA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EFB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EFD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EFE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016EFF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F010);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F034);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012A08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012A94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012BF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012C24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012C30);

s32 func_00012D54(void) {
    return 1;
}

s32 func_00012D5C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012E58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012E8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012E98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013018);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001308C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000130A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000130D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000130E0);

s32 func_00013204(void) {
    return 1;
}

s32 func_0001320C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013214);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000132F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001333C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000133D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013460);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000135F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013640);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000137C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000138B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013960);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000139B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013A08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013B58);

void func_00013BB0(void) {
    func_00013BCC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013BCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013BF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013D5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013DC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013DDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013F60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014048);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F064);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F070);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F07C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F090);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F0A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F0B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F0BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F0D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F0E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F0EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F138);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F170);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F1A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F1E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F250);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F288);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F2C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014624);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001486C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014A78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014AD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014B70);

void ***func_00014C08(void ***arg0, void *arg1, void **arg2) {
    s32 temp_v1;
    void **temp_s1;
    void *temp_s0;

    temp_s0 = *arg2;
    temp_s1 = M2C_FIELD(temp_s0, void ***, 4);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 8);
    *temp_s1 = M2C_FIELD(temp_s0, void **, 0);
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void ***, 4) = temp_s1;
    if (temp_v1 != 0) {
        scePaf_48B5C1C0(temp_v1);
    }
    scePaf_997D2809(temp_s0);
    *arg0 = temp_s1;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014C94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014CF8);

void func_00014D64(void **arg0) {
    s32 temp_v0;
    void *temp_s1;
    void *var_a0;
    void *var_s0;

    var_a0 = *arg0;
    var_s0 = M2C_FIELD(var_a0, void **, 4);
    if (var_s0 != var_a0) {
        do {
            temp_v0 = M2C_FIELD(var_s0, s32 *, 8);
            temp_s1 = M2C_FIELD(var_s0, void **, 4);
            if (temp_v0 != 0) {
                scePaf_48B5C1C0(temp_v0);
            }
            scePaf_997D2809(var_s0);
            var_a0 = *arg0;
            var_s0 = temp_s1;
        } while (temp_s1 != var_a0);
    }
    scePaf_997D2809(var_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014DE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014E68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014F44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000153A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015538);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000157C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001589C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000158A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001590C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015AAC);

void func_00015B98(void *arg0, void *arg1, s32 arg2) {
    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        scePaf_C01BF169(arg2 + 0xF8, (s32) &func_00015C30, arg2, M2C_FIELD(arg0, s32 *, 0x1C), 0, 0);
    }
}

void func_00015BE4(void *arg0, void *arg1, s32 arg2) {
    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        scePaf_C01BF169(arg2 + 0xF8, (s32) &func_00015D28, arg2, M2C_FIELD(arg0, s32 *, 0x1C), 0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015C30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015E70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015EC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015ED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015F08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015F14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015F64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015FB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000161B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000165A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000166F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016744);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001697C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016F5C);

void func_00017270(void *arg0, void *arg1, s32 arg2) {
    if (((u32) M2C_FIELD(arg1, u32 *, 8) >> 8) & 0x80) {

    } else {
        scePaf_C01BF169(arg2 + 0xF8, (s32) &func_000173DC, arg2, M2C_FIELD(arg0, s32 *, 0x1C), 0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000172BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000172EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001731C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001734C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001737C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000173AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000173DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000174D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000175CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000176C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000177BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000178B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000179AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F328);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F340);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F358);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F3E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F3F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F404);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F410);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F41C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F42C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F43C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F44C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F45C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F4A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F4BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F4CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F4DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F4EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F500);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F538);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00017AA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00017BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00017D14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00017E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00017F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000180C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000181F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000183FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000186B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000189AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018E88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00018FDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000192A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000193F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000195DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001965C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000197DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000198D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019A1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00019B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001A3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001B198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001B83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001B870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001BACC);

void scePaf_52CF8D80(s32 *arg0) {
    *arg0 = 0;
}

void func_0001BB84(s32 **arg0, s32 **arg1) {
    s32 *temp_a1;

    temp_a1 = *arg1;
    *arg0 = temp_a1;
    if (temp_a1 != NULL) {
        *temp_a1 += 1;
    }
}

void scePaf_0880B827(s32 **arg0, s32 **arg1) {
    s32 *temp_a1;

    temp_a1 = *arg1;
    *arg0 = temp_a1;
    if (temp_a1 != NULL) {
        *temp_a1 += 1;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F3397557);

void scePaf_DF58706C(s32 **arg0) {
    s32 *temp_s0;
    s32 temp_v0;

    temp_s0 = *arg0;
    if (temp_s0 != NULL) {
        temp_v0 = *temp_s0 - 1;
        *temp_s0 = temp_v0;
        if (temp_v0 > 0) {

        } else {
            func_0001B198(temp_s0);
            scePaf_4E67BB08(temp_s0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C07624F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_296ED0EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C904DA17);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2AFA99B1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_66E3AAA9);

s32 scePaf_D8739C4C(void **arg0) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(temp_a0, s32 *, 0x13C);
    }
    return var_v0;
}

s32 scePaf_D7E925A1(void **arg0, s32 arg1) {
    s32 var_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if (temp_a0 != NULL) {
        var_v0 = M2C_FIELD(temp_a0, s32 *, 0x13C);
        M2C_FIELD(temp_a0, s32 *, 0x13C) = arg1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_21A0C6E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C1579C1D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ED2DF238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EB5BDCE1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D9D3EEBA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_81FD71A9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_17308FC9);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F5D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F648);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F6B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F6E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F6FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F70C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F71C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F734);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F744);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F750);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F764);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C3F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F3967AF5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E6134C53);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BBBF145C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B52E43FB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C91C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C934);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_39B36025);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_34C973B6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4C8C2E25);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001C97C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F7AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001CA78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F890);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F8A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016F9E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00024B9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00024E24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00024E74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_752F182C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_81817B66);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_10C1DB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_01C2FC36);

void func_000254C0(void) {
    sceKernelWaitSema(*D_001A4E30, 1, NULL);
}

void func_000254EC(void) {
    sceKernelSignalSema((s32) *D_001A4E30, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00025514);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000255E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000256E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000257A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00025874);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00025B20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FAC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FAE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FAF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FB04);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FB1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FB3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FB54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AAE8A6B6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CEFBDE33);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002722C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000272A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000272B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000273A8);

void func_000273B8(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    void *var_a1;

    var_a1 = M2C_FIELD(arg0, void **, 0);
    if (var_a1 != NULL) {
        var_s0 = M2C_FIELD(arg0, s32 *, 4) - 1;
        var_v0 = var_s0 * 8;
        if (var_s0 >= 0) {
            do {
                temp_v1 = M2C_FIELD((var_a1 + var_v0), s32 *, 4);
                var_s0 -= 1;
                if (temp_v1 != 0) {
                    scePaf_48B5C1C0(temp_v1);
                    var_a1 = M2C_FIELD(arg0, void **, 0);
                }
                var_v0 = var_s0 * 8;
            } while (var_s0 >= 0);
        }
        scePaf_997D2809(var_a1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002742C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002743C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002744C);

void func_0002748C(void) {
    func_00027AE4();
}

void func_000274A8(void) {
    func_00027AF4();
}

void func_000274C4(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027B10((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000274F8);

void func_00027584(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027C28((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000275B8);

void func_00027644(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027D40((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027678);

void func_0002770C(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_00027E50((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027740);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000277C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000278D0);

void func_00027A24(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_00027F68((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027AE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027AF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027B10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027C28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027D40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027E50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00027F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002802C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000280C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_836A675D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028160);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F0885EDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000281D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000281E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028538);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000285D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002870C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000287A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000288E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002897C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000289CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028A90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028C24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028C6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028C78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00028EC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FCC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FD08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FD14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FD28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FD3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FD44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FD68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000291A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000292A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002939C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000293EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000294A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000294FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000295A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000295B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000295EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000295F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00029864);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FDC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FDD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FDF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FE08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FE50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FE80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FE88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FE9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FEB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FEB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FEDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00029B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00029CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00029DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00029E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DD79627E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7BBD70F0);

void scePaf_DFFE9ED6(void) {
    s32 temp_v0;

    temp_v0 = D_001A4E34 - 1;
    D_001A4E34 = temp_v0;
    if (temp_v0 == 0) {
        if (D_001A4E48 == 0) {
            scePaf_9948CDB3(D_001A4E44, 0, D_001A4E4C);
        }
        scePaf_8A861692(D_001A4E44);
        D_001A4E44 = 0;
        if (D_001A4E40 != 0) {
            scePaf_545FE2DA(D_001A4E3C);
            D_001A4E40 = 0;
        }
        D_001A4E3C = 0;
        D_001A4E38 = 0;
    }
}

u8 func_0002A23C(void) {
    return D_001A4E48;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002A248);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9DED6118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_997D2809);

void func_0002A318(s32 arg0, s32 arg1) {
    func_0014BB0C(D_001A4E44, arg0, arg1);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FF34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FF48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FF68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FF78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002A344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002A7BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0016FFF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170000);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170008);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170024);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017002C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017003C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170048);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017005C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170068);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170074);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170080);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017008C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170094);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017009C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001700F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170234);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170238);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017023C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170240);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170244);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170248);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017024C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002A90C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002AA74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002ABD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002AD28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002B238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002B3C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002B504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002B664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002B7EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002B968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002BB10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002BCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C304);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C63C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C8C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002C93C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CA24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BE5B0791);

void func_0002CB34(s32 arg0, s32 *arg1, M2C_UNK arg2) {
    s32 temp_s0;

    temp_s0 = *arg1;
    func_0002CD9C(arg0, temp_s0 + 0x6C, arg2, func_00031DB0(arg2));
}

void func_0002CB8C(s32 arg0, s32 arg1, s32 arg2) {
    func_0002CD9C(arg0, arg1, arg2, func_00031DB0(arg2));
}

void func_0002CBE0(s32 arg0, s32 arg1, s32 arg2) {
    func_0002CD9C(arg0, arg1, arg2, func_00031DB0(arg2));
}

void func_0002CC34(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, *arg1 + 0x6C, arg2, arg3);
}

void scePaf_2D08CA09(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, *arg1 + 0x6C, arg2, arg3);
}

void func_0002CC74(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, arg1, arg2, arg3);
}

void func_0002CC90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0002CD9C(arg0, arg1, arg2, arg3);
}

void func_0002CCAC(void) {
    scePaf_E1242646();
}

void func_0002CCC8(void) {
    scePaf_0F3527DD();
}

void func_0002CCE4(void) {
    scePaf_E1242646();
}

void func_0002CD00(void) {
    scePaf_0F3527DD();
}

void func_0002CD1C(void) {
    scePaf_E1242646();
}

void func_0002CD38(void) {
    scePaf_0F3527DD();
}

void func_0002CD54(void) {
    scePaf_E1242646();
}

void func_0002CD70(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CD8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CD94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CD9C);

s32 *func_0002CE98(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002CF30(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CED0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CF00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CF30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002CFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D02C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D1D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D40C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001702B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001702B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D538);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D56C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D5E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D620);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D660);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002D810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002DB58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002DBA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_56F4D69F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002DC70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002DCE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F2E5FDEB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002DD08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017032C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170338);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170344);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001703B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001703C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6E3E2085);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6676FAA6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AD7A45F9);

s32 scePaf_95C97571(s32 arg0) {
    func_0002EAC8(arg0 + 8);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7D9A4824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_67C7567E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F273FE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002E200);

void func_0002E248(s32 arg0) {
    func_00013BF8(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002E264);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002E344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002E3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002E484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002E884);

void scePaf_79E57CAF(void) {
    scePaf_E1242646();
}

void scePaf_548AA4E7(void) {
    scePaf_0F3527DD();
}

void func_0002E988(void) {
    scePaf_E1242646();
}

void func_0002E9A4(void) {
    scePaf_0F3527DD();
}

void func_0002E9C0(void) {
    func_0002EB0C();
}

s32 *func_0002E9DC(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002EB64(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002EA14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002EAC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002EB0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002EB64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002EBC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002ED58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002EFBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F0F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F598);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F5CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F5D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F640);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001703D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001703EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017040C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017041C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017043C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001704B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001704C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001704F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002F7FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FAB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FB08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FBD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FC40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FC54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FC88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FC94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FCE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FD58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FD98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FDD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170520);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017052C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170538);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001705A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0002FF30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003002C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00030128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000302DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003045C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00030648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00030890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00030B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00030C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00030EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000310F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000314BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003170C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031878);

void func_0003191C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        scePaf_0F3527DD(temp_v0);
    }
}

void scePaf_FCD816FA(s32 *arg0) {
    s32 temp_v0;

    temp_v0 = *arg0 - 1;
    *arg0 = temp_v0;
    if (temp_v0 > 0) {

    } else {
        func_0003191C(arg0);
        func_00031CDC(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4D5E7984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9B8CBC5F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031C1C);

void func_00031CC0(void) {
    scePaf_E1242646();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031CDC);

void func_00031CF8(void) {
    scePaf_E1242646();
}

void func_00031D14(void) {
    scePaf_0F3527DD();
}

void func_00031D30(void) {
    scePaf_E1242646();
}

void func_00031D4C(void) {
    scePaf_0F3527DD();
}

void func_00031D68(void) {
    scePaf_E1242646();
}

void func_00031D84(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031DA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031DA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031EA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001705E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001705FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017060C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017061C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017066C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170688);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170694);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001706A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001706C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001706E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001706FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170720);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170818);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170848);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031F0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00031FA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170850);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170854);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170858);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017085C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003200C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00032048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E1242646);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0F3527DD);

void func_00032A0C(void) {
    func_000331AC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CC3CFABF);

s32 scePaf_05026B26(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_79293604);

s32 scePaf_3342C5F5(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_v1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            M2C_FIELD(var_v1, s32 *, 4) = 3;
            M2C_FIELD(var_v1, s32 *, 8) = arg1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AECF91A9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EF346632);

s32 scePaf_D6E69FCB(s32 *arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;

    var_s1 = 0;
    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_000331AC(temp_v0 + 0x10);
        var_s1 = temp_v0_2;
        if (temp_v0_2 != 0) {
            temp_v0_3 = func_0003AEB0(*arg0 + 8, arg1);
            M2C_FIELD(var_s1, s32 *, 8) = temp_v0_3;
            if (temp_v0_3 != 0) {
                M2C_FIELD(var_s1, s32 *, 4) = 9;
            }
        }
    }
    return var_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D2C94856);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00032D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00032ECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_48B5C1C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000330B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000331AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00033230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00033348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D6F088EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A9CE8FBB);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170890);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001708BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001708E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170914);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170940);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170944);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170B44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170B58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170B64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170B74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170B8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170BA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170BB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170BC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170BD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170BE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170C10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170C1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170C28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170C54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170C80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170CAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170CD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00033468);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00033A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00033CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6BAC756B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3A844B7B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00034170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2AA80564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00034394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00034410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003444C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_39565433);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000346B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8E757709);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_34C7D69A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00034960);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9BADB81F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00034D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00034EC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1475F1EB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DFD3E855);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DFB24D02);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CDB85442);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_55C7628A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000351A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000352C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00035904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00035AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5148EFE2);

void func_00035FFC(void) {
    scePaf_E1242646();
}

void func_00036018(void) {
    scePaf_0F3527DD();
}

void func_00036034(void) {
    scePaf_E1242646();
}

void func_00036050(void) {
    scePaf_0F3527DD();
}

void scePaf_7D83FB20(void) {
    scePaf_E1242646();
}

void scePaf_D36F3AAA(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DC7F84BA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000360AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000360B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000360C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000360FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00036108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00036174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000361B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000361F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003629C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170D48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000366C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000367BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000368B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00036908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000369A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_14BEF129);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00036B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8424D860);

void func_00036F48(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_v0 == 0) {

    } else {
        func_0003AF68(temp_v0, arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00036F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00036FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000370E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000373D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000374B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000377A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037884);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00037F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038098);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038428);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000384C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000385A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003872C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170D90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170DA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170DC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170DD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000387D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00038EC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039014);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000392E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003951C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000398E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039B84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039C78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00039F90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A090);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A400);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003A810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003AB98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003ADE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003AE48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003AEB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003AF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003AF78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003AFCC);

void func_0003B020(void) {
    scePaf_E1242646();
}

void func_0003B03C(void) {
    scePaf_0F3527DD();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B23C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B27C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B30C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B3A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B414);

s32 func_0003B488(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x20;
    if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {

        } else {
            scePaf_5148EFE2(M2C_FIELD(arg0, s32 *, 0x20) + (arg1 * 4), M2C_FIELD(arg0, s32 *, 0x18), *arg2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B6E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B8A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B8B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B8E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B8F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B95C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003B9D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003BA10);

s32 func_0003BA60(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x1C;
    if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {
        func_000278D0(temp_s1, arg1 + 1);
    }
    if (arg1 >= 0) {
        if (arg1 >= M2C_FIELD(temp_s1, s32 *, 4)) {

        } else {
            scePaf_5148EFE2(M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 * 4), M2C_FIELD(arg0, s32 *, 0x18), *arg2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003BB00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003BB5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003BDD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170ECC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170EDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170EEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170EFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170F48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003BE4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003BF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003C070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003C16C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003C424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003C914);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003CB54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003CDF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003D0E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003D430);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003D7B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003DEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003E62C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003E958);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003E9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EB9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EBB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EBE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EBF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170FD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00170FE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171004);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171028);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171034);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017105C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171068);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001711A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001711AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003ED98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003EEE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D3F5956D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FE4D4112);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F0BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_69CA1A2D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BEF9FF15);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_86237EB3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F2EC);

s32 scePaf_D6CD39AF(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) << 8) | M2C_FIELD(arg0, u8 *, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DAA609BB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E32B3558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F340);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_14FF46A6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E3020CA3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1FD7E9D5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_77277BAB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F55C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6A14BB04);

void func_0003F7CC(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x400, arg2, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F7F0);

void func_0003F8BC(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x500, arg2, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003F8E0);

void func_0003FA44(s32 arg0, s32 arg1, s32 arg2) {
    func_0004051C(arg0, arg1, 0x600, arg2, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003FA68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003FB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003FBFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003FC88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003FD14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_602EB0CE);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001711F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171208);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3763DC72);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0003FF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_95960A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_58C69BDA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004032C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000403C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040488);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004051C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000408BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040B2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040B9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040CB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00040EB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E12B5BFD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BD46719F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5F434810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7C1B7904);

s32 func_00041424(void *arg0) {
    s32 temp_v0;
    s32 var_a0;

    var_a0 = -0x78;
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_v0 != -1) {
            sceIoClose(temp_v0);
        }
        M2C_FIELD(arg0, s32 *, 4) = -1;
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001712D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00041484);

s32 func_00041960(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00041968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00041A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00041C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00041EC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042078);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004222C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000422EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000423DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042458);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_21A183A7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8FE88010);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_94136997);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1BD0E905);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_50B0C0A1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F247A0BD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3D451DE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ABEBF18D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042C04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042C70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_537D04C6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_910A6B7B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00042F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_12C50A9D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1F43B8A2);

s32 func_0004303C(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00042F74(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s16 *, 0x74) = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00043080(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (func_00042F74(arg0, arg1) != 0) {
        M2C_FIELD(arg0, s16 *, 0x76) = (s16) arg1;
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7E304DCF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_14D80C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9F60CB01);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_91E82C1B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A25BDAA2);

s32 func_00043458(s32 arg0) {
    D_001A34E4 = arg0;
    return 1;
}

s32 scePaf_D3AB4076(void) {
    return D_001A34E4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_87E5F9C7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D726DDD3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8A8FE0A1);

s32 func_0004352C(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((M2C_FIELD(arg0, u8 *, 0x15) != 0) && (M2C_FIELD(arg0, u8 *, 0x29) != 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0) != 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000435C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000436F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000437E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_891B7F7F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000439FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043A54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043A7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043C30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043CD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043E58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00043FDC);

s32 func_0004414C(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044168);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004417C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000441A4);

s32 func_000441D0(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v1;

    var_v1 = 0;
    if (func_0004352C(arg1) != 0) {
        M2C_FIELD(arg0, void **, 4) = arg1;
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, void *, void *, void *, s32, s32, s32), 0x18)(arg0, arg1 + 0x2C, arg1 + 4, arg1 + 0x18, arg4, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004426C);

void func_00044394(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 == 0) {

    } else {
        func_00042E48(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000443C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044470);

void func_00044678(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044690);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000446B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044798);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000447C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000447F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171338);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017135C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044BFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044C74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044DB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00044EE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00045234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00045480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000454F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000456AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00045CEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171440);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017144C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00045DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00045ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046418);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000466F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046798);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001714B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000467D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000469A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046A58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00046FF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000472DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00047334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004738C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000473E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00047448);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000474AC);

s32 func_00047518(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CB9C((s32) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0x20) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004756C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000476A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00047B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00047ED0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048080);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000480DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048138);

s32 func_0004819C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000481F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048420);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004847C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000484D8);

s32 func_0004853C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;

    temp_v0 = func_0004CCB0(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
    return temp_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000486AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000486FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004874C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000488C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048EE8);

s32 func_00048F04(void) {
    return 0;
}

void func_00048F0C(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_v1, s32 *, 0x18) = (s32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 0x14), s32 *, 4) - M2C_FIELD(temp_v1, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00048F28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6DFFCAAE);

s32 scePaf_7796B70B(void **arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, s32 *, 0x174) = arg1;
    func_00084A70(temp_a0, temp_a0 + 0x174, 1);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4EC4EEC6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049138);

void func_00049170(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049180);

void func_000491C8(void) {
}

void func_000491D0(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000491D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004929C);

void scePaf_02A6AA18(void) {
    func_0004929C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000494A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000494C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000494E4);

void func_00049504(void) {
    func_00049D58();
}

void func_00049520(void) {
    func_00049D58();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004953C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000496E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004987C);

s32 func_000498D8(void *arg0, s32 arg1) {
    s32 var_a3;

    var_a3 = 0;
    if ((arg1 >= 0) && (arg1 < (M2C_FIELD(arg0, s32 *, 8) * M2C_FIELD(arg0, s32 *, 0xC)))) {
        var_a3 = M2C_FIELD(arg0, s32 *, 0) + (arg1 * 8);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004990C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049AA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049B9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049D58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049E00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171564);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017158C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001715A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001715C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001715E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00049F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A1F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A2A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A2E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A460);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A700);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004A88C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AA1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AB6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AD68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AF2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AF54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004AF8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171640);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B090);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B2A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B550);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B5B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B5D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004B864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004BAE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004BC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004BE58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C020);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C1B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C3F8);

void func_0004C57C(void *arg0, s32 arg1) {
    void *temp_v1;

    M2C_FIELD(arg0, s8 *, 0) = 1;
    temp_v1 = arg0 + 4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_001ABCF0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    func_00002AE4((s32) temp_v1, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_0004C5C4(void *arg0, s32 arg1) {
    void *temp_v1;

    M2C_FIELD(arg0, s8 *, 0) = 1;
    temp_v1 = arg0 + 4;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_001ABCF0;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    func_00002AE4((s32) temp_v1, arg1);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C60C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C76C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C8CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004C9A4);

void func_0004CA7C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0) != 0) {
        scePaf_ABBBB335(M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_0014E6A0(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001716C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004CAB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004CB9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004CCB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004CD7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D040);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D0A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D1FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D368);

s32 func_0004D6CC(void) {
    return 0;
}

s32 func_0004D6D4(void) {
    return 0;
}

s32 func_0004D6DC(void) {
    return 0;
}

s32 func_0004D6E4(void) {
    return 0;
}

s32 func_0004D6EC(void) {
    return 0;
}

s32 func_0004D6F4(void) {
    return 0;
}

s32 func_0004D6FC(void) {
    return 0;
}

s32 func_0004D704(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D70C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D71C);

s32 func_0004D744(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D74C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D764);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D77C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D78C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D79C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D7C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D86C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004D9BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004DAF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004DC40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004DE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E04C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E1DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E2D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E5CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E678);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E6C4);

void func_0004E750(void) {
    func_0004E6C4(1, 0xFFFF);
}

void func_0004E770(void) {
    func_0004E6C4(0, 0xFFFF);
}

s32 func_0004E790(void *arg0, u32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((arg1 >= 0x10U) && (M2C_FIELD(arg0, s32 *, 0) == 0x2E47494D)) {
        if (M2C_FIELD(arg0, s32 *, 4) == 0x312E3030) {
            var_a2 = M2C_FIELD(arg0, s32 *, 8) == 0x505350;
        }
    }
    return var_a2;
}

s32 func_0004E7DC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E7E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E920);

s32 func_0004E948(s32 arg0) {
    return (arg0 & 0xFFFF) == 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E958);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001717B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E97C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004E9EC);

s32 func_0004EB38(void) {
    return 0;
}

s32 func_0004EB40(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EB48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004ECF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004ED04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004ED2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004ED78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EDC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EDE4);

void func_0004EE0C(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    scePaf_9F10613F(temp_a0 + 0x84, M2C_FIELD(temp_a0, s32 *, 0x14));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EE70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004EFA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004F0F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004F234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004F270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004F4A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004F708);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017181C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017185C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0004FA94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050264);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000503EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000506EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005073C);

void func_000507E8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000507F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050898);

void func_0005091C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000509F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050B30);

s32 func_00050C38(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050C40);

void func_00050DD4(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, void *, void *, s32, s32, s32), 0x67C)(arg1, arg2, arg0 + 8, arg0 + 0x1D4, M2C_FIELD(arg0, s32 *, 0x66C), M2C_FIELD(arg0, s32 *, 0x674), M2C_FIELD(arg0, s32 *, 0x678));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00050FD0);

s32 func_00051108(void *arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_8F12B63A(arg0 + 0x258);
    if (temp_v0 != 0) {
        func_000506EC(temp_v0);
        var_v0 = 0;
    } else {
        func_0008A928(arg0 + 8, M2C_FIELD(arg0, s32 *, 0x66C), 1);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_00051160(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = scePaf_8F12B63A(arg0 + 0x258);
    if (temp_v0 != 0) {
        func_000506EC(temp_v0);
        var_v0 = 0;
    } else {
        func_00086C38(arg0 + 8);
        var_v0 = 1;
    }
    return var_v0;
}

s32 func_000511B0(void *arg0) {
    s32 temp_v0;

    func_0008A09C(arg0 + 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x65C);
    if (temp_v0 != 0) {
        scePaf_83944053(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x66C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x66C) = 0;
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051204);

void func_00051290(void) {
    func_00051204(1, 0xFFFF);
}

void func_000512B0(void) {
    func_00051204(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000512D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000512F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051338);

s32 func_00051360(s32 arg0, u32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 8U) {
        var_v1 = func_0009CE3C(arg0, 0, (s32) arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000513A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000514C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000515D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000518A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000519AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00051F40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052014);

s32 func_000520E8(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000520F0);

void func_00052230(void *arg0) {
    func_000533A8(M2C_FIELD(arg0, s32 *, 0x10));
}

void func_0005224C(void *arg0) {
    func_000534B4(M2C_FIELD(arg0, s32 *, 0x10));
}

void func_00052268(void *arg0) {
    func_00053500(M2C_FIELD(arg0, s32 *, 0x10));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000522D4);

void func_00052360(void) {
    func_000522D4(1, 0xFFFF);
}

void func_00052380(void) {
    func_000522D4(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001718F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000523A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000524AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000524D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052628);

void func_000527D4(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_v0 == 0) {

        } else {
            scePaf_83944053(temp_v0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x40));
            M2C_FIELD(arg0, s32 *, 0x40) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        scePaf_211A764A(arg0 + 4, arg0 + 8, arg0 + 0xC);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000528DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052930);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052AF0);

void func_00052B98(void *arg0) {
    func_000A0B78(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052BB4(void *arg0) {
    scePaf_7333E75A(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052BD0(void *arg0) {
    func_000AC6C0(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052BEC(void *arg0) {
    func_000A0B68(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052C08(void *arg0) {
    func_000A15F8(M2C_FIELD(arg0, s32 *, 4));
}

void func_00052C24(void *arg0) {
    func_000A15C8(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052CB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00052ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000530E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00053280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000533A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000534B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00053500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000535C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00053628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00053690);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000536A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000536B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000536D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171938);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005376C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000537E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005385C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000539B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00053B7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00053E40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00054084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005431C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000544C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00054520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00054654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00054730);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00054D78);

void func_00055250(s32 *arg0, s32 arg1, s32 arg2) {
    scePaf_503BA324(arg1, 1, arg2, *arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055274);

s32 func_000552E0(void) {
    return 0;
}

s32 func_000552E8(s32 *arg0) {
    s32 temp_s1;

    scePaf_2FA84441(*arg0, 0, 2);
    temp_s1 = scePaf_84BD418F(*arg0);
    scePaf_2FA84441(*arg0, 0, 0);
    return temp_s1;
}

void func_00055340(void) {
    func_000553A0();
}

s32 func_0005535C(void) {
    return 0;
}

void func_00055364(void) {
    func_0005544C();
}

s32 func_00055380(void) {
    return 0;
}

s32 func_00055388(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_00055390(void) {
    return 0;
}

void func_00055398(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000553A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005544C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055518);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171954);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171958);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005567C);

s32 func_00055770(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055A60);

s32 func_00055B1C(void) {
    return 1;
}

s32 func_00055B24(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0 != 0) {
        scePaf_83944053(temp_v0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    func_00058D4C(M2C_FIELD(arg0, s32 *, 0x14));
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055B88);

void func_00055C14(void) {
    func_00055B88(1, 0xFFFF);
}

void func_00055C34(void) {
    func_00055B88(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055CA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055CEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055D0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055D34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055EAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00055FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000561E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000563FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000565E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00056708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000567D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00056908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00056B7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00056D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00056E58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000575B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005765C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057818);

s32 func_00057908(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057D38);

s32 func_00057E84(void *arg0) {
    return func_00058A64(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x1C)) != 0;
}

s32 func_00057EB0(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00057F24);

void func_00057FB0(void) {
    func_00057F24(1, 0xFFFF);
}

void func_00057FD0(void) {
    func_00057F24(0, 0xFFFF);
}

s32 func_00057FF0(s32 arg0, u32 arg1, s32 arg2, u32 arg3) {
    s32 var_a2;
    u32 temp_a0;
    u32 var_a3;

    var_a3 = arg3;
    temp_a0 = arg0 & arg2;
    var_a2 = 0;
    if (arg1 < var_a3) {
        do {
            var_a3 -= arg1;
            var_a2 |= temp_a0 << var_a3;
        } while (arg1 < var_a3);
    }
    if (var_a3 != 0) {
        var_a2 |= temp_a0 >> (arg1 - var_a3);
    }
    return var_a2;
}

void func_00058030(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK (**)(s32, s32, s32, s32, s32, s32, s32, s32), 0x2C)(arg1, arg2, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058090);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000580B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000580D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000581E0);

void func_00058420(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_v0 == 0) {

    } else {
        scePaf_545FE2DA(temp_v0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {

    } else {
        scePaf_83944053(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

void func_00058478(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_503BA324(arg1, 1, arg2, arg0);
}

void func_0005849C(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_2FA84441(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000584B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000584E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000585F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000586C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000588B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058998);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000589D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058A64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058AC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058B08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058B90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171A5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171A9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058BB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058D84);

void func_00058E50(s32 arg0, s32 arg1, s32 arg2) {
    func_00058D84(arg0, arg1, arg2, 1);
}

void func_00058E6C(s32 arg0, M2C_UNK arg1) {
    func_00058D84(arg0, arg1, scePaf_CA79D58B(arg1) + 1, 1);
}

void func_00058EB8(s32 arg0, s32 arg1, s32 arg2) {
    func_00058D84(arg0, arg1, arg2, 1);
}

void func_00058ED4(s32 arg0, s32 arg1, s32 arg2) {
    func_00058D84(arg0, arg1, arg2, 2);
}

void func_00058EF0(s32 arg0, s32 arg1, s32 arg2) {
    func_00058D84(arg0, arg1, arg2, 4);
}

void func_00058F0C(s32 arg0, s32 arg1, s32 arg2) {
    func_00058D84(arg0, arg1, arg2, 4);
}

void func_00058F28(s32 arg0, s32 arg1, s32 arg2) {
    func_00058D84(arg0, arg1, arg2, 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00058F44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171AA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00059054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000590E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B04);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171B74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171BAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171BC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171BE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171C08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171C28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005A680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005A750);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005A7C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005A844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005B91C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005B994);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005BA44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005BC44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005BC84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005BD98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C010);

void func_0005C0BC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    func_0005CB58();
}

s32 func_0005C0E0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

s32 func_0005C0E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C0F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C3B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C3C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E60);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171E98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171EA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171EB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171EBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171ECC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171EE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171EF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171F94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171FA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171FAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171FB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171FC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171FDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00171FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172000);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017200C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172034);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172040);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017204C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172054);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172064);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172070);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172094);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001720F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172104);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172110);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172120);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172130);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172140);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172150);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017216C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017217C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017218C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001721A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001721B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001721C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001721DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001721E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001721F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172200);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017220C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172228);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172238);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172248);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017225C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172274);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172288);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017229C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001722F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172314);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172320);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172334);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172348);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172370);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017237C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172390);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001723A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001723B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001723C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001723D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001723E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001723F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172408);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017241C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017242C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017243C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017244C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172460);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017249C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001724AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001724BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001724CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001724E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001724F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172504);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017253C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017255C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017257C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017258C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017259C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001725B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001725CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001725DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001725F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172604);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017261C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172648);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017265C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00172674);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017336C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017337C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173384);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173394);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001733A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001733B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001733D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001733E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001733F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017340C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173424);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017343C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173450);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173460);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001734FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173508);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017351C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173530);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173540);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173550);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173560);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017359C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001735B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001735CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001735E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001735F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017363C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017364C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017365C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017366C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173698);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001736AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001736B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001736C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001736D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001736DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001736F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173710);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173720);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C3D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C4CC);

void func_0005C508(void **arg0, void **arg1) {
    scePaf_66FE90D7(M2C_FIELD(*arg0, s32 *, 0x10), M2C_FIELD(*arg1, s32 *, 0x10));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C5EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C638);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C66C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C67C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C72C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005C940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005CA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005CB58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173C94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173CBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173CD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173CE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173D00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173D24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173D48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173D70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173D78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173DB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173DF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173E90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173EB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173F18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173F5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173F7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173FA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00173FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005DCFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E248);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E4B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E764);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E7E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001741DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174234);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174260);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174294);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001742A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001742DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174310);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017434C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174368);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174378);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017438C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001743AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001743D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E8D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005E9CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005EACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005EB5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005EC6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005ECAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005EDA8);

s32 func_0005EDE8(void) {
    return func_0005E578() != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005EE08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005F0F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005F618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005F768);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005F8B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005FA14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005FBE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005FD28);

s32 func_0005FEFC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A5068;
    D_001A5068 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005FF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0005FFE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000600C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060130);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001743F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174460);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001744D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001744E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174524);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174554);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174594);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001745C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001745D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001745F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060194);

void func_000604B8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a0 != 0) {
        func_0006A618(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_a0_2 != 0) {
        func_0006A618(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_a0_3 != 0) {
        func_0006A618(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_a0_4 != 0) {
        func_0006A618(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_a0_5 != 0) {
        func_0006A618(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_a0_6 == 0) {

    } else {
        func_0006A618(temp_a0_6);
        func_0006A618(M2C_FIELD(arg0, s32 *, 0x28));
        func_0006A618(M2C_FIELD(arg0, s32 *, 0x2C));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000605C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060BFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060C88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001747A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00060F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00061298);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00174BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006174C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00061A28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00061EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00061F28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00061FD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000620F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006228C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000622FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006237C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000626E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062A18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062ABC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062E50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062F20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00062FB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00063054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006313C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00063C84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00063DEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000641A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00064248);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006469C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006479C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00064838);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000648EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000649F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00064B18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000656CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00065CE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00065FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066514);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000665FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006672C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066834);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066B6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066CB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00066D90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067550);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067620);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006779C);

s32 func_00067A5C(void) {
    return 0;
}

void func_00067A64(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067A6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017507C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175080);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175084);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001750B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001750EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067AAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00067B38);

s32 func_000680B4(s32 *arg0) {
    return *arg0;
}

s32 func_000680BC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = arg1;
    return temp_v0;
}

s32 func_000680C8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 func_000680D0(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    return temp_v0;
}

s32 func_000680DC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x188);
}

s32 func_000680E4(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x188);
    M2C_FIELD(arg0, s32 *, 0x188) = arg1;
    return temp_v0;
}

s32 func_000680F0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 8);
}

s32 func_000680F8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    return temp_v0;
}

s32 func_00068104(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC), 0xA, 1);
}

s32 func_00068110(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xEC);
}

u16 func_00068118(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0xF0);
}

s32 func_00068120(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xF4);
}

s32 func_00068128(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10C);
}

s32 func_00068130(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC), 7, 1);
}

s32 func_0006813C(void *arg0) {
    return __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 0xC), 0xE, 1);
}

s32 func_00068148(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xC) & 1;
}

s32 func_00068154(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0xDC) == 0x4D4D;
}

s32 func_00068164(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18C);
}

s32 func_0006816C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x190);
}

s32 func_00068174(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x194);
}

s32 func_0006817C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x198);
}

s32 func_00068184(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x19C);
}

s32 func_0006818C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x180);
}

s32 func_00068194(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x184);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006819C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000682D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006839C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068514);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017547C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068768);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068A3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068B54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068D9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00068F88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069068);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069134);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069244);

void func_000692C8(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000692D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000692FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000693AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175798);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001757A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000694F8);

void func_0006972C(s32 arg0) {
    u32 temp_a1;
    u32 temp_a2;
    void *temp_v0;

    temp_v0 = arg0 + 0x20;
    temp_a2 = M2C_FIELD(temp_v0, u32 *, 0x14);
    temp_a1 = M2C_FIELD(temp_v0, u32 *, 0x3C);
    func_000694F8(arg0, (s32) ((temp_a2 < temp_a1) ? temp_a2 : temp_a1));
}

void func_00069758(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x154)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000697C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069A54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069A8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069AC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069B44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069B7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069BF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069CDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017581C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017591C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069E98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00069F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A0A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A148);

void func_0006A330(void *arg0) {
    func_0006A148((s32) arg0, M2C_FIELD(arg0, s32 *, 0x40));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A34C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A36C);

void func_0006A3CC(void) {
    sceIoRead();
}

void func_0006A3E8(void) {
    sceIoWrite();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A404);

void func_0006A42C(s32 arg0) {
    sceIoClose(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A448);

s32 func_0006A4A4(void) {
    return 0;
}

void func_0006A4AC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A4B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A52C);

void func_0006A5FC(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A618);

void func_0006A634(void) {
    scePaf_8FC65EB0();
}

void func_0006A650(void) {
    scePaf_6829D7AF();
}

void func_0006A66C(void) {
    scePaf_F95EA3F1();
}

void func_0006A688(void) {
    scePaf_3FBD9639();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A6B0);

s32 func_0006A6BC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A358C;
    D_001A358C = arg0;
    return temp_v0;
}

s32 func_0006A6CC(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A506C;
    D_001A506C = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006A7B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006B064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006B3D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006B50C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006B6A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006B7CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006B904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006BB18);

void func_0006BBAC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xF8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006BBB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175E0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006BC54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006BE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006C8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006C954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006CAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006CD8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006CFE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D0AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D424);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175EFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175F08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00175F10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D4B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D4D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D4F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D518);

s32 func_0006D544(void) {
    return 1;
}

s32 func_0006D54C(void) {
    return 1;
}

void func_0006D554(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D55C);

s32 func_0006D618(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_s2;

    temp_s2 = func_0006D680(arg1 & 0xFFFF);
    func_0006D55C(arg0);
    var_v0 = 1;
    if (temp_s2 != NULL) {
        var_v0 = M2C_FIELD(temp_s2, s32 (**)(s32, s32), 8)(arg0, arg1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D6E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006D95C);

void func_0006E158(void *arg0) {
    func_0006D95C(arg0, 1);
}

s32 func_0006E174(void *arg0) {
    s32 temp_s0;

    if (M2C_FIELD(arg0, s32 *, 0xA4) != 0) {

    } else {
        func_0006B3D8();
    }
    temp_s0 = func_0006D95C(arg0, 0);
    func_0006BBAC(arg0, M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK, M2C_UNK), 0x194)(M2C_FIELD(arg0, s32 *, 0x188), 0, 2));
    return temp_s0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176098);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001760C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001760EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006E1E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006E748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006E7AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006E7F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006E8E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006E9EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EA54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EB18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EB6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EBF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EC30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EE48);

void func_0006EE88(void) {
    func_0006F340();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006EEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006F24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006F308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006F340);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176378);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001763B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006F6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017642C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176430);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176434);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176438);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017643C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176440);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176448);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017644C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176464);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017646C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176490);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017649C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001764F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006F988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006F9CC);

s32 func_0006F9EC(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    void *temp_v0;

    temp_v0 = func_0006D680(arg0 & 0xFFFF);
    var_a0 = 0;
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 8);
        if (temp_v1 != 0) {
            var_a0 = temp_v1 != (s32) &func_0006F9CC;
        }
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FA2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FB00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FB94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FBC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FBFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017655C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001767EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FD18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FD9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0006FDFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00070524);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00071554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00071884);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00071A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00071B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00071EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176CC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176DE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176EE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176EEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00176F9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00177078);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00177088);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017709C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001770AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001770C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001770D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001770F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00177100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00177134);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00072118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000721D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00072384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000726DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00072814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000728A4);

void func_00072988(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x15C);
    temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s1, s32 *, 0x34);
    if (temp_v1 == 0) {

    } else {
        func_0006A618(temp_v1);
    }
    if (M2C_FIELD(temp_s1, s32 *, 0x5C) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s1, s32 *, 0x5C));
    }
    temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x24);
    if (temp_v1_2 != 0) {
        func_0006A618(temp_v1_2);
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00072A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00072D70);

void func_0007304C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00073054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000731D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00073234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00073DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00073E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00073F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00073FC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000745B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007460C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00074668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000747B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00074910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00074970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000749B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00074A2C);

s32 func_00074AA0(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00087100(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074AE8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000872C0(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074B40(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00086F54(arg0, arg1, arg2);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074BA8(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008458C(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074C00(s32 arg0, M2C_UNK arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000849A8(arg0, arg1);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074C58(void *arg0, void *arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00084A70(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074CC0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_00084BA4(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074D28(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_000845E4(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074D70(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00084910(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00074DB8);

s32 func_00074E0C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_0008A69C(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074E54(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A928(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074EBC(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008AA20(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_00074F24(s32 arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = func_0008A588(arg0);
    }
    return var_v1;
}

s32 func_00074F6C(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00086C38(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074FB4(s32 arg0) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        func_00086CB0(arg0);
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_00074FFC(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (scePaf_8F12B63A(arg0 + 0x254) == 0) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 8)(arg0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007507C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000750E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075104);

void func_00075134(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x654) = (s32) M2C_FIELD(arg0, s32 *, 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x658) = (s32) M2C_FIELD(arg0, s32 *, 0x6D8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075148);

void func_000751DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x6D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x6D8) - M2C_FIELD(arg0, s32 *, 0x658));
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017714C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017754C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0017F54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F558);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F56C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F588);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F590);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000751F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000752A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000752B8);

void func_00075308(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x66C);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x66C) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x668) = (s32) (M2C_FIELD(arg0, s32 *, 0x668) + arg1);
        } else {
            func_000752B8((s32) arg0);
        }
    }
}

void func_00075354(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007535C);

void func_000753AC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x668) = (s32) M2C_FIELD(arg0, s32 *, 0x6D4);
    M2C_FIELD(arg0, s32 *, 0x66C) = (s32) M2C_FIELD(arg0, s32 *, 0x6D8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000753C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000753F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000754A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000759F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075C2C);

void func_00075E24(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x40);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075E40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075E68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00075F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000761EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000764F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000765D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00076828);

void func_0007694C(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C4);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x6C8);
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, s32 *, 0x1CC) == 0) {

        } else {
            func_00074FB4((s32) temp_s0);
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x6D4) != 0) {
            func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x6D4));
        }
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000769D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00076D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00076E28);

void func_00077100(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007721C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018F984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077740);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007782C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077A40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077B58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00077FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078304);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078390);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FA88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FA98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FACC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FB08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FB40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FB78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FBC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FBE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FBE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FBF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FC2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FC58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FC98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FCA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FCE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007841C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000786B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000787F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000789BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078A08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078B00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00078EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079080);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000793B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079498);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007956C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000796FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079A28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079C3C);

void func_00079E14(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00079FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A1F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A37C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A508);

void func_0007A538(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x1C);
    if (temp_v1 != 0) {
        func_0006A618(temp_v1);
    }
    func_0006A618((s32) temp_s0);
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A78C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007A968);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0018FEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007AA60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007AB7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007ABAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019000C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007B070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007B4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007B524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007B5A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007B928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BA50);

void func_0007BABC(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_00083940();
    temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x64);
    if (temp_v0 != 0) {
        func_0006A618(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x15C), s32 *, 0x80);
    if (temp_v0_2 != 0) {
        func_0006A618(temp_v0_2);
    }
    func_0006A618((s32) M2C_FIELD(arg0, void **, 0x15C));
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BC14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BE6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BEEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190178);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190184);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001901A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001901C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001901D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001901F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190204);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190210);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190244);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190344);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190354);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019037C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001903B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001903F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BF20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BF60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007BF84);

void func_0007BFD4(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x654);
        if (temp_v0 >= arg1) {
            M2C_FIELD(arg0, s32 *, 0x654) = (s32) (temp_v0 - arg1);
            M2C_FIELD(arg0, s32 *, 0x650) = (s32) (M2C_FIELD(arg0, s32 *, 0x650) + arg1);
        } else {
            func_0007BF84((s32) arg0);
        }
    }
}

void func_0007C020(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C21C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C458);

s32 func_0007C5F0(void) {
    return 1;
}

s32 func_0007C5F8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C600);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C84C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019042C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007C8C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007D230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007D2D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007D388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007DE18);

void func_0007E298(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007E2A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007E30C);

void func_0007E3A8(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    if (temp_s0 != NULL) {
        if (scePaf_8F12B63A(temp_s0 + 0x250) != 0) {

        } else {
            func_00086CB0((s32) temp_s0);
        }
        if (M2C_FIELD(temp_s0, s32 *, 0x6A8) != 0) {
            func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x6A8));
            M2C_FIELD(temp_s0, s32 *, 0x6A8) = 0;
        }
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x6E0);
        if (temp_a0 != 0) {
            func_0006A618(temp_a0);
            M2C_FIELD(temp_s0, s32 *, 0x6E0) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x6E8);
        if (temp_a0_2 != 0) {
            func_0006A618(temp_a0_2);
            M2C_FIELD(temp_s0, s32 *, 0x6E8) = 0;
        }
        temp_a0_3 = M2C_FIELD(temp_s0, s32 *, 0x6F0);
        if (temp_a0_3 != 0) {
            func_0006A618(temp_a0_3);
            M2C_FIELD(temp_s0, s32 *, 0x6F0) = 0;
        }
        temp_a0_4 = M2C_FIELD(temp_s0, s32 *, 0x700);
        if (temp_a0_4 != 0) {
            func_0006A618(temp_a0_4);
            M2C_FIELD(temp_s0, s32 *, 0x700) = 0;
        }
        temp_a0_5 = M2C_FIELD(temp_s0, s32 *, 0x6F8);
        if (temp_a0_5 != 0) {
            func_0006A618(temp_a0_5);
            M2C_FIELD(temp_s0, s32 *, 0x6F8) = 0;
        }
        if (!(M2C_FIELD(arg0, s32 *, 0xC) & 0x800)) {
            temp_a0_6 = M2C_FIELD(arg0, s32 *, 0x178);
            if (temp_a0_6 != 0) {
                func_0006A618(temp_a0_6);
                M2C_FIELD(arg0, s32 *, 0x178) = 0;
                M2C_FIELD(arg0, s32 *, 0x17C) = 0;
            }
        }
        func_0006A618((s32) temp_s0);
        M2C_FIELD(arg0, void **, 0x15C) = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007E4DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007E7E8);

s32 func_0007E854(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x15C);
    if (temp_v0 == 0) {

    } else {
        func_0006A618(temp_v0);
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007E888);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007EB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007EBC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007ED68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007EDB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007EFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007F72C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007F968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007FAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007FCDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0007FEE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190800);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190804);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190808);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019080C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190810);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190814);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190818);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019081C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000803B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00080480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000804AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000805F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190898);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001908A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001908A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00080624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190980);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190994);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001909BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001909F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190A18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008098C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00080AC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00080AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008192C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00081BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00081E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082078);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082140);

void func_00082158(void *arg0) {
    s32 temp_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x15C);
    func_00083940();
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x90);
    M2C_FIELD(arg0, s32 *, 0x1B4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x7C);
    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(temp_s0, s32 *, 0x80);
    if (temp_a0 == 0) {

    } else {
        func_0006A618(temp_a0);
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x94) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x94));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x98) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x98));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x84) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x84));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x88) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x88));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x8C) == 0) {

    } else {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x8C));
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x70) & 1) {
        if (M2C_FIELD(arg0, s32 *, 8) != 1) {
            func_000B0DCC(temp_s0 + 0x30);
        } else {
            func_000B3E20(temp_s0 + 0x30);
        }
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x68) != 0) {
        func_0006A618(M2C_FIELD(temp_s0, s32 *, 0x68));
    }
    func_0006A618((s32) temp_s0);
    M2C_FIELD(arg0, void **, 0x15C) = NULL;
    func_0006D55C((s32) arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000822A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000824B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008257C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000826D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000827F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082A80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00082E74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000830D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000837F4);

void func_00083888(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083940);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190CC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190CD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083CD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083D58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190D70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190D78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083D8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190DB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190DC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00083F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084024);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000840EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084268);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190E50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190E54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084430);

void func_00084554(s32 arg0) {
    func_00086CB0(arg0);
}

void func_00084570(s32 arg0) {
    func_00086C38(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008458C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000845E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008485C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000848EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000849A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084A70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084BA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084CEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084E5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00084F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085068);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000850E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000852A8);

void func_000853DC(void) {
}

void func_000853E4(s32 arg0) {
    func_000850E0(arg0, 0xDD);
    func_00085120(arg0, 4);
    func_00085120(arg0, M2C_FIELD(arg0, s32 *, 0xC0));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008553C);

void func_00085648(s32 arg0) {
    func_000850E0(arg0, 0xE0);
    func_00085120(arg0, 0x10);
    func_00085068(arg0, 0x4AU);
    func_00085068(arg0, 0x46U);
    func_00085068(arg0, 0x49U);
    func_00085068(arg0, 0x46U);
    func_00085068(arg0, 0U);
    func_00085068(arg0, M2C_FIELD(arg0, u8 *, 0xCC));
    func_00085068(arg0, M2C_FIELD(arg0, u8 *, 0xCD));
    func_00085068(arg0, M2C_FIELD(arg0, u8 *, 0xCE));
    func_00085120(arg0, (s32) M2C_FIELD(arg0, u16 *, 0xD0));
    func_00085120(arg0, (s32) M2C_FIELD(arg0, u16 *, 0xD2));
    func_00085068(arg0, 0U);
    func_00085068(arg0, 0U);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008570C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000857D0);

void func_0008584C(void) {
    func_00085068();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000858D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085A20);

void func_00085B24(s32 arg0) {
    func_000850E0(arg0, 0xD9);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085C30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00085F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000864E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008660C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086F10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00086F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190E98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00190F98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191098);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001910AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001910B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001910CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001910D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001910EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191190);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001911A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000872C0);

s32 func_00087614(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x20) = arg5;
    return arg0 + 0x24;
}

void *func_00087638(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            M2C_FIELD(var_a0, s32 *, 4) = var_v1;
            var_v1 += 1;
            M2C_FIELD(var_a0, s32 *, 0) = 1;
            M2C_FIELD(var_a0, s32 *, 0x14) = arg2;
            M2C_FIELD(var_a0, s32 *, 0x18) = arg3;
            M2C_FIELD(var_a0, s32 *, 0x1C) = arg4;
            M2C_FIELD(var_a0, s32 *, 0x20) = arg5;
            var_a0 += 0x24;
        } while (var_v1 < arg1);
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000879A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087B8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087C04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087CA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00087E98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000880A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008881C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000889A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088A08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088BB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00088E64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000890EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008928C);

void func_000893B8(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000893C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008940C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000894DC);

void func_00089650(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    func_00095A84(arg2, 0, arg3, 0, M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, s32 *, 0x1C));
    func_000893C0(arg3, M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg1, s32 *, 0x1C) * 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000896BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00089790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008987C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00089B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00089D38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00089F74);

void func_0008A09C(s32 arg0) {
    func_00086CB0(arg0);
}

void func_0008A0B8(s32 arg0) {
    func_00086C38(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A0D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A2E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A3BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A69C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A7F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008A928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008AA20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008AB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008ABEC);

void func_0008ACDC(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x24) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008ACEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008ADB8);

void func_0008AE3C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008AE44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008AF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008B0B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008B450);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008B5F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008B740);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008B7E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008BCF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008BD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008BDA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C024);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C224);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C324);

void func_0008C380(void *arg0) {
    *M2C_FIELD(arg0, M2C_UNK ***, 0x1B0) = &func_0008C394;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C4B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C518);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008C658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008CAB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008CE6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008D224);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008D580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008D6F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008D9D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008DAF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008DCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008DFE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E0F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E28C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E3A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E66C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E8B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E8D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008E980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008EAE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001912A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001912E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008EBBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008EE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008EF3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F1E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F3D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F4D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F52C);

void func_0008F660(void *arg0) {
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x1C0);
    M2C_FIELD(temp_v1, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F7F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008F9A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008FC24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008FCF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0008FFFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000900A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00090368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00090630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009077C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00090C70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00090D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00090E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00090EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091010);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091120);

void func_00091208(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x1C0);
    M2C_FIELD(temp_a1, s32 *, 0x5C) = (s32) M2C_FIELD(arg0, s32 *, 0x134);
    M2C_FIELD(temp_a1, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091394);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009139C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000913A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000914A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000915E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000916D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009184C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091BE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091D00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091D70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00091F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000921A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000922D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009245C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000926D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000927E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00092F40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009308C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000930A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000930C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000930E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000930FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093104);

s32 func_00093130(void) {
    return 0;
}

void func_00093138(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000932B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000932E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093310);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000934FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000936C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093798);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093848);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000938EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093990);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093ADC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093C24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00093EBC);

void func_00094028(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00094030);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009405C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00094168);

void *func_000941F8(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *var_a0;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x1C);
            var_a1 -= 1;
            if ((var_a2 < temp_v1) && (M2C_FIELD(var_a0, s32 *, 0x18) > 0)) {
                var_a2 = temp_v1;
                var_a3 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a3;
}

void *func_00094238(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    void *var_a0;
    void *var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 0;
    var_a3 = NULL;
    if (var_a1 > 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x18);
            var_a1 -= 1;
            if (var_a2 < temp_v1) {
                var_a2 = temp_v1;
                var_a3 = var_a0;
            }
            var_a0 += 0x20;
        } while (var_a1 != 0);
    }
    return var_a3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009426C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009470C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000948E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00094AD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00094BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00094E08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00094F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000950C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000951F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095654);

void func_0009568C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095694);

void func_0009584C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C8), s32 *, 0x1C) = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009585C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095A44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095A64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095A84);

void func_00095AF4(s32 arg0, M2C_UNK arg1, s32 arg2) {
    scePaf_F95EA3F1(arg1, arg0, arg2 << 7);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095B3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095B8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095CA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00095F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096224);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096524);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000965D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000967B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009698C);

void func_00096A24(void) {
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191340);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001913C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001913D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191434);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019145C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191478);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001914B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001914E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191500);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191518);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191530);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191544);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191584);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001915B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001915D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001915F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019162C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191664);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019167C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019169C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001916C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191718);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191734);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019177C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001917A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001917CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001917F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191808);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191820);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191834);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191848);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191870);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191888);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019189C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001918C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001918D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191908);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191930);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191954);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191978);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001919A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001919BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001919D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191A18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191A40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191A68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191AC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191AF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191B14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191B40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191B6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191B8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191BBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191BE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191C0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191C3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191C6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191C98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191CC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191CF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191D18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191D38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191D58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191D90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191DBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191DDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191E00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191E28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191E40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191E54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191E78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191E88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191EC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191F0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191F38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191F64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191F8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191FA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191FD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00191FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192004);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019201C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019202C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192054);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019208C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001920C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001920F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019211C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192144);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192188);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001921AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001921C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001921E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192210);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192218);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192290);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001922B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001922C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001922E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192300);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192320);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019233C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192358);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019239C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001923D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192410);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192458);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192498);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001924DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192518);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019254C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001925A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001925BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001925F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192620);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019264C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192840);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192848);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192850);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192950);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019295C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096A2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192ACC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00096F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097338);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000978F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009794C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097990);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097BE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097CC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097E8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00097F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098110);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000986F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000988A4);

void func_000988F4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    func_000988A4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098914);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009897C);

s32 func_00098C90(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098C98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00098EA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000990FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099254);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099A98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099E98);

void func_00099F18(void *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_00095A84(*arg1, arg2, arg3, 0, arg4, M2C_FIELD(arg0, s32 *, 0x6C));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099F48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00099FB4);

void func_0009A120(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009A128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009A330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009A5FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009A6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009A7E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009A940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009AA5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009AB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009ABC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009AC98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009AE9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009AED4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192B90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009B038);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009B238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009B4A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009B840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009BC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009C0F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009C6F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009CB0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009CDAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C6C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192C9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192CF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D04);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D30);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D68);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192D84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192DA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1A1F232F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009CE3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192DE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009CEF4);

void func_0009CF74(void) {
    func_0009EA54();
}

void func_0009CF90(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4D0) = func_000AF050(0, 0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009CFC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7AFD6B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D0D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D0FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D1B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D6B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D6C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192EFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D6D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D6DC);

void func_0009D75C(s32 arg0) {
    func_000B22FC(arg0 + 0x434);
}

s32 func_0009D778(void) {
    return 0x27E2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D780);

s32 func_0009D798(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7894B61F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D8A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009D940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DA4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DAA8);

void func_0009DB04(void *arg0) {
    scePaf_9F10613F(arg0, 1);
}

void func_0009DB20(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DB28);

s32 func_0009DB44(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x408);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DB58);

s32 func_0009DB78(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 8) & arg2;
    }
    return var_v0;
}

s32 func_0009DB9C(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_v0;
}

s32 func_0009DBBC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xE8);
    }
    return var_v0;
}

s32 func_0009DBDC(s32 arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = *arg1;
    }
    return var_v0;
}

s32 func_0009DBFC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
    }
    return var_v0;
}

u8 func_0009DC1C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x18);
    }
    return var_v0;
}

u8 func_0009DC3C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x19);
    }
    return var_v0;
}

u8 func_0009DC5C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1B);
    }
    return var_v0;
}

u8 func_0009DC7C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1C);
    }
    return var_v0;
}

u8 func_0009DC9C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1A);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DCF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DD34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DE68);

s32 func_0009DEA4(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x100) && (M2C_FIELD(arg1, u8 *, 0x64) == 0)) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x5C);
    }
    return var_v1;
}

s32 func_0009DEDC(s32 arg0, void *arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x100) && (M2C_FIELD(arg1, u8 *, 0x64) == 0)) {
        var_v1 = M2C_FIELD(arg1, s32 *, 0x60);
    }
    return var_v1;
}

u8 func_0009DF14(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1D);
    }
    return var_v0;
}

s32 func_0009DF34(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009DF4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E044);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E0FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E13C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E254);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00192F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_38F12307);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E6432407);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_07216006);

u8 func_0009E7A8(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5E4);
    }
    return var_v0;
}

s32 func_0009E7BC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    }
    return var_v0;
}

s32 func_0009E7D0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x470);
    }
    return var_v0;
}

s32 func_0009E7E4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5FC);
    }
    return var_v0;
}

s32 func_0009E7F8(s32 arg0) {
    return !(arg0 & 1) ? 0 : 0xFC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E808);

u8 func_0009E828(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5F5);
    }
    return var_v0;
}

s32 func_0009E83C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F8);
    }
    return var_v0;
}

s32 func_0009E850(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x620);
    }
    return var_v0;
}

s32 func_0009E864(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x624);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E878);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009E980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EA18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EA54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EA9C);

void func_0009EAD4(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, s32 *, 0x42C) = (s32) (temp_s1 | 0x100000);
    func_0009E980();
    M2C_FIELD(arg0, s32 *, 0x42C) = temp_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EB5C);

s32 func_0009EB6C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x600);
}

void scePaf_6528115D(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0009EB98(arg0, arg1, arg2, arg3, 0, 0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EB98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193018);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193034);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193048);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019305C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EE5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009EEF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E327C974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D4F9270D);

void scePaf_DB1549DF(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x42C) & 0x40) {

    } else {
        func_000AA884((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0009F6F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DDD91620);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B2290D1A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_211A764A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A03A4);

void func_000A0664(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x558) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A066C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A0900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1BDFF258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A0B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A0B78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019340C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019343C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193480);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001934A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001934CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001934DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A0B8C);

void func_000A1584(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

void func_000A159C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

void func_000A15B4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02000000);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A15C8);

void func_000A15E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x02001000);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A15F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A1608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A1654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A1784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A25D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A2928);

void func_000A2DF0(void *arg0, s32 arg1) {
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_a0;
    s8 *var_a0_2;
    s8 *var_a0_3;
    u32 temp_a2;
    u32 var_a3;
    u32 var_a3_2;
    u32 var_a3_3;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 9);
    if (temp_v1 < 8U) {
        temp_a2 = M2C_FIELD(arg0, u32 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_a1 = arg1 + ((u32) (temp_a2 - 1) >> 3);
            var_a0 = (arg1 + temp_a2) - 1;
            var_v1 = ~(temp_a2 + 7) & 7;
            var_a3 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0 = ((s32) *var_a1 >> var_v1) & 1;
                    if (var_v1 != 7) {
                        var_v1 += 1;
                    } else {
                        var_v1 = 0;
                        var_a1 -= 1;
                    }
                    var_a3 += 1;
                    var_a0 -= 1;
                } while (var_a3 < temp_a2);
            }
            break;
        case 4:
            var_a1_2 = arg1 + ((u32) (temp_a2 - 1) >> 1);
            var_a0_2 = (arg1 + temp_a2) - 1;
            var_v1_2 = (~(temp_a2 + 1) & 1) * 4;
            var_a3_2 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0_2 = ((s32) *var_a1_2 >> var_v1_2) & 0xF;
                    if (var_v1_2 != 4) {
                        var_v1_2 = 4;
                    } else {
                        var_v1_2 = 0;
                        var_a1_2 -= 1;
                    }
                    var_a3_2 += 1;
                    var_a0_2 -= 1;
                } while (var_a3_2 < temp_a2);
            }
            break;
        case 2:
            var_a1_3 = arg1 + ((u32) (temp_a2 - 1) >> 2);
            var_a0_3 = (arg1 + temp_a2) - 1;
            var_v1_3 = (~(temp_a2 + 3) & 3) * 2;
            var_a3_3 = 0;
            if (temp_a2 != 0) {
                do {
                    *var_a0_3 = ((s32) *var_a1_3 >> var_v1_3) & 3;
                    if (var_v1_3 != 6) {
                        var_v1_3 += 2;
                    } else {
                        var_v1_3 = 0;
                        var_a1_3 -= 1;
                    }
                    var_a3_3 += 1;
                    var_a0_3 -= 1;
                } while (var_a3_3 < temp_a2);
            }
            break;
        }
        M2C_FIELD(arg0, u8 *, 9) = 8U;
        M2C_FIELD(arg0, s8 *, 0xB) = (s8) (M2C_FIELD(arg0, u8 *, 0xA) * 8);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_a2 * M2C_FIELD(arg0, u8 *, 0xA));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A2F90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A31F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A3278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A3470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A35B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A39C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A3C40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A44E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A579C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A5CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A6024);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A658C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A6750);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7034);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7144);

s32 func_000A719C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000A71C8(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000A71F4(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) + (M2C_FIELD(arg0, u8 *, 0) << 8)) & 0xFFFF;
}

void func_000A720C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000A0900();
    func_0009CFC4(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A73D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A776C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A78FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7B88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019385C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193894);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7D18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A7E94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193A00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00193A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A82A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A84E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A873C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A89FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A8BF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A8DDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A8F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A9040);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A9144);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A946C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A95FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A97F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A99B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A9A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000A9DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AA2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AA4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AA884);

void func_000AABD0(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x52, arg2, 0xA);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 0x20);
    }
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001942B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001942B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001942BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001942F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194330);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019434C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019435C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019437C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001943AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001943D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194400);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194428);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194444);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194474);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194490);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001944AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001944D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001944F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194528);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019459C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001945C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001945E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001946AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001946D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001946EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019470C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AAC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AAE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AAFDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB14C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB64C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB894);

void func_000AB98C(s32 arg0, void *arg1, M2C_UNK arg2) {
    if (((arg0 == 0) | (arg1 == NULL)) == 0) {
        scePaf_F95EA3F1(arg1 + 0x3C, arg2, 5);
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) | 2);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AB9E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ABA14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ABB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ABC9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ABF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ABFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC160);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC328);

s32 func_000AC348(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 & 5;
    var_v0 = 0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x5EC) = temp_a1;
        var_v0 = temp_a1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC4C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC530);

void func_000AC5C4(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC5CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC5E4);

void func_000AC5F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 1);
}

void func_000AC600(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4E7) == 0x10) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7333E75A);

void scePaf_C6624F24(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4E7) < 8U) {
        M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x10000);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC698);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC6C0);

void func_000AC75C(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20000);
}

void func_000AC770(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x80000);
}

void func_000AC784(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x430) = (s32) (M2C_FIELD(arg0, s32 *, 0x430) | 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC794);

void func_000AC850(void *arg0, void *arg1) {
    u32 temp_lo;
    u32 var_a2;
    u8 temp_v0;
    void *var_a1;

    var_a1 = arg1;
    if (M2C_FIELD(arg0, u8 *, 9) == 0x10) {
        temp_lo = M2C_FIELD(arg0, s32 *, 0) * M2C_FIELD(arg0, u8 *, 0xA);
        var_a2 = 0;
        if (temp_lo != 0) {
            do {
                temp_v0 = M2C_FIELD(var_a1, u8 *, 0);
                var_a2 += 1;
                M2C_FIELD(var_a1, u8 *, 0) = (u8) M2C_FIELD(var_a1, u8 *, 1);
                M2C_FIELD(var_a1, u8 *, 1) = temp_v0;
                var_a1 += 2;
            } while (var_a2 < temp_lo);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC8A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AC928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ACCC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ACDF4);

s32 func_000ACE04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x420);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001947AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001948AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001949AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ACE0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ACE88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ACFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AD128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AD320);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AD404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AD724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AD8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AD96C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ADA5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ADB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ADC1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ADD18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ADDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE678);

void func_000AE724(void *arg0) {
    if (arg0 != NULL) {
        scePaf_545FE2DA(M2C_FIELD(arg0, void **, 8));
        scePaf_545FE2DA(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AE758);

void func_000AEA7C(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AEA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AEB6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AEC08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AEE10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194AB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AEF00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AF050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AF07C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AF470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AF8A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AF8D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AF93C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AFA40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AFA70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000AFEE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B0000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B0034);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B0188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B01FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B022C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B02CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B0DCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B10E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B11A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B1250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B1448);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B1568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B1700);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B18C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B1D50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B22FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B236C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B23C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B24DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B2500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B252C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00194F14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00196F4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00196FCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001977CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019784C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B2688);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B3E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B3FE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B4064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B4368);

void func_000B48DC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B48E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B495C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B49C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B4AD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B4D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B4DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B50C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B51C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B573C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B57D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B5AA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B5B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B5E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B61C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B66F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B67AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6824);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197ADC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197B5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197B9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197BDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197C50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197CC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00197D28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001981A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198420);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198520);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6900);

s32 func_000B69DC(void) {
    return 0x55;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B69E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6A40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198640);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019865C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198670);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198680);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198698);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001986A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001986B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001986B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001986C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6E7C);

s32 func_000B6F50(u32 arg0) {
    return arg0 + (arg0 >> 0xC) + (arg0 >> 0xE) + 0xB;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B6F68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FD3FF4AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D6759EEF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_27760582);

s32 func_000B77C4(s32 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if ((arg0 < 0) || (arg0 >= D_001A5240)) {
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B77EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7878);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7A2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198728);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019872C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7AE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7CAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A0ED77C4);

s32 func_000B7EB0(void) {
    return D_001A5240;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B7EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_35F25BA1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_79493F8F);

s32 scePaf_75062BCF(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18) == 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B8188);

void func_000B8194(void *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_v1;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    *arg1 = *temp_v1;
    *temp_v1 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B81AC);

void func_000B81CC(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

s32 func_000B81D4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
    }
    return var_v0;
}

M2C_UNK *func_000B81E8(M2C_UNK **arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    var_a0 = *arg0;
    var_a2 = 0;
    if ((arg1 > 0) & (var_a0 != NULL)) {
        do {
            var_a0 = *var_a0;
            var_a2 += 1;
        } while ((var_a2 < arg1) & (var_a0 != NULL));
    }
    return var_a0;
}

s32 *func_000B8224(s32 **arg0, s32 arg1) {
    s32 **var_a2;
    s32 *temp_s1;

    temp_s1 = func_000B81E8(arg0, arg1);
    var_a2 = arg0;
    if (arg1 != 0) {
        var_a2 = func_000B81E8(arg0, arg1 - 1);
    }
    *var_a2 = (s32 *) *temp_s1;
    if (M2C_FIELD(arg0, s32 ***, 4) == temp_s1) {
        M2C_FIELD(arg0, s32 ***, 4) = var_a2;
    }
    return temp_s1;
}

void scePaf_C4BAD564(s32 arg0) {
    sceKernelDelayThread(arg0 * 0x3E8);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198760);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198768);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198774);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019877C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BAE16A39);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_41F702EA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D27DE19A);

void scePaf_2CFAE498(s32 arg0) {
    func_0000C480((s32) &D_001A5244, arg0);
}

void scePaf_58846DF3(s32 arg0) {
    func_0000C480((s32) &D_001A5250, arg0);
}

void scePaf_E357380E(s32 arg0) {
    func_0000C480((s32) &D_001A525C, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B86EC);

void func_000B8790(void) {
    func_000B86EC(1, 0xFFFF);
}

void func_000B87B0(void) {
    func_000B86EC(0, 0xFFFF);
}

s32 func_000B87D0(void) {
    sceCtrlReadBufferPositive(&D_001A52C4, 1);
    return M2C_FIELD(&D_001A52C4, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B8804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B882C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B8888);

s32 func_000B8C4C(void) {
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_78F94D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5822F12A);

void scePaf_FD9DE7B9(s32 arg0) {
    D_001A3CC0 = arg0 * arg0;
    scePaf_5822F12A();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E618F7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AD43F865);

s32 scePaf_EA39A7C1(void) {
    return D_001A52C0;
}

void scePaf_6B1E90C7(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_66907719(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52BC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D5F3BAB1);

void scePaf_AAD0EE78(s32 arg0) {
    D_001A5270 = arg0;
}

void scePaf_E69C3B1B(s32 arg0) {
    D_001A5274 = arg0;
}

void scePaf_17BC4F41(s32 arg0) {
    D_001A5278 = arg0;
}

void scePaf_C2911954(s32 arg0) {
    D_001A527C = arg0;
}

s32 scePaf_872F948B(void) {
    return D_001A5280;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B8EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B8F38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B8F94);

s32 func_000B9280(void) {
    return 1;
}

void scePaf_A044BFC0(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC += 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_F1CF9579(void) {
    s32 temp_a0;

    temp_a0 = sceKernelSuspendDispatchThread();
    D_001A52FC -= 1;
    sceKernelResumeDispatchThread(temp_a0);
}

void scePaf_D726F4A2(s32 arg0) {
    D_001A52D4 = arg0;
}

s32 scePaf_132148FD(void) {
    return D_001A52DC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_533F3856);

void scePaf_139D9047(s32 arg0) {
    D_001A5300 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8D3B3587);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B95A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B966C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B9748);

void func_000B97D0(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    void *temp_v1;

    var_a2 = M2C_FIELD(arg0, s32 *, 4);
    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 < (var_a2 + 1)) {
        func_000B9864((s32) arg0, temp_v0 + 0xA);
        var_a2 = M2C_FIELD(arg0, s32 *, 4);
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0) + (var_a2 * 0xC);
    if (temp_v1 != NULL) {
        M2C_FIELD(temp_v1, M2C_UNK **, 0) = &D_001ABCF0;
        M2C_FIELD(temp_v1, s32 *, 4) = 0;
        func_00002AE4((s32) temp_v1, arg1);
        var_a2 = M2C_FIELD(arg0, s32 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (var_a2 + 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B9864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontNewLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontDoneLib);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B9DEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B9E4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B9F28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198920);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019893C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198950);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198964);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198978);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019898C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001989A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001989B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001989C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001989CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001989E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001989F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A30);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A50);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A5C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198A9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198AAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198ABC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198AC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198AD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198AD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198AE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198AF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198B98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198BAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198BC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000B9F48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BA2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BA6DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontOpenUserFile);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BA850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BA8BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BA90C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BA974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontClose);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontGetFontInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontGetCharInfo);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BAF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceFontGetCharGlyphImage);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BB4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBAAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBBC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBBF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBC2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBC4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBC7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BBF44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC0D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC1E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC2C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC3E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC538);

s32 func_000BC724(void *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1, s32 *, 0), temp_v0);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    } else {
        temp_v1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x48);
        M2C_FIELD(temp_v1_2, M2C_UNK (**)(s32, s32), 0x10)(M2C_FIELD(temp_v1_2, s32 *, 0), M2C_FIELD(arg0, s32 *, 0xC));
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return 0;
}

s32 func_000BC7A0(void *arg0) {
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) > 0) {
        var_s1 = 0;
        do {
            var_s2 += 1;
            sceFontClose(M2C_FIELD(arg0, s32 *, 0x2C) + var_s1);
            var_s1 += 0x4C;
        } while (var_s2 < M2C_FIELD(arg0, s32 *, 4));
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC804);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BC8DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BCE0C);

s32 func_000BCF98(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 5);
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 7) = (u8) M2C_FIELD(arg1, u8 *, 7);
    M2C_FIELD(arg0, u16 *, 8) = (u16) M2C_FIELD(arg1, u16 *, 8);
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BCFE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BD24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BD504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BD7C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BDD08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BDD58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BDDA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BDF28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BE470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BE9A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BECDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BEF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BF170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BF33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BF3F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BF6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BF8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BF9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000BFE40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C018C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0574);

s32 func_000C07DC(void) {
    sceReg_FA8A5739();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C07FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0BB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0C48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0D80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0E70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C0F98);

s32 func_000C0FF8(u8 *arg0) {
    s32 var_a1;

    var_a1 = -3;
    if (D_001A53C0 == 0) {
        D_001A53C4 = (s32) *arg0;
        var_a1 = 0;
        D_001A53C0 = 1;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C1028);

s32 func_000C1090(void) {
    s32 var_v1;

    var_v1 = -2;
    if (D_001A53C0 != 0) {
        D_001A53C0 = 0;
        D_001A53C4 = -1;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C10BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C115C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C1208);

M2C_UNK *scePaf_962FA087(void) {
    return &D_001A53C8;
}

s32 scePaf_DF642973(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A3ED0;
    D_001A3ED0 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D24E4016);

s32 scePaf_3829AC24(void) {
    return -1;
}

s32 scePaf_1F0E9712(void) {
    return -1;
}

s32 scePaf_0CFDBE2F(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ED89C94B);

s32 scePaf_95948FB6(void) {
    return -1;
}

s32 scePaf_BA433BEF(void) {
    return -1;
}

s32 scePaf_B7865607(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7952AE83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ED83B18F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D6C1FF36);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00198C04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D6232F26);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E418D7E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2CB6FBBE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_442F1731);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_71EDAD83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C182C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0E8A3B52);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C1A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D96449B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FDB98CAC);

void func_000C1CA0(void *arg0, s32 *arg1, s32 arg2) {
    func_0000C8BC(arg0 + 0x64, *arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BA1F20EE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_20F5234E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6F74F263);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C24C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C25D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2990);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2C80);

void func_000C2CEC(void) {
    func_000C2C80(1, 0xFFFF);
}

void func_000C2D0C(void) {
    func_000C2C80(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2E0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2E78);

void func_000C2EEC(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_ED83B18F(arg0, arg1, arg2 & 0xFF);
}

void func_000C2F08(void) {
    scePaf_D6C1FF36();
}

void func_000C2F24(void) {
    scePaf_D6232F26();
}

void func_000C2F40(void) {
    scePaf_2CB6FBBE();
}

void func_000C2F5C(void) {
    scePaf_442F1731();
}

void func_000C2F78(void) {
    scePaf_71EDAD83();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C2FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C30D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3118);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001990A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001990E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001990E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C315C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C31AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C31BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C31CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C31F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3250);

void scePaf_7C2C2742(void) {
    sceGuStart(0, D_001A5420, D_001A5424);
}

void scePaf_D0AD10FF(void) {
    sceGuFinish();
    sceGuSync(0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3338);

M2C_UNK *scePaf_B0C3E598(void) {
    return &D_001A542C;
}

void scePaf_2A7CDE78(s32 arg0) {
    D_001A45D8 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C33A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C34F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_81773E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C36A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C36F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3B54);

s32 func_000C3B84(void) {
    return D_001A53E0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3C88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3CB0);

s32 func_000C3D20(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A5400;
    D_001A5400 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3D70);

s32 scePaf_2AD8DE45(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A45DC;
    D_001A45DC = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3E50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C3E80);

void func_000C4000(void) {
    func_000C3E80(1, 0xFFFF);
}

void func_000C4020(void) {
    func_000C3E80(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4040);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C43B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C44C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4588);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C45F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C466C);

s32 func_000C46A8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A45E0 != arg1) {
        var_v0 = func_000C7280(arg0, arg1);
    }
    return var_v0;
}

s32 func_000C46D4(void) {
    return D_001A45E0;
}

s32 func_000C46E0(void) {
    return D_001A45E0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C46EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C47E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2FF0A287);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199150);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199168);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FF74C932);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4AD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4C10);

s32 func_000C4E70(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1B8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4E78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4FA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C4FDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C501C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C517C);

void func_000C523C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x18) = 1;
}

s32 func_000C5248(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2313DDCA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C52B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C52E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E9BF6BEB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C53CC);

void func_000C5434(s32 arg0) {
    scePaf_3E203AEB(D_001A5B80, 0, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C545C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5484);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C54AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C54F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C55B4);

void func_000C56EC(void) {
    if (D_001A5B44 != NULL) {
        func_000C6198(*D_001A5B44);
        scePaf_545FE2DA(D_001A5B44);
        D_001A5B44 = NULL;
    }
    sceFontDoneLib(D_001A5B34);
    D_001A5B34 = 0;
    if (D_001A5B78 != 0) {
        func_00116858(D_001A5B78);
        D_001A5B78 = 0;
    }
    if (D_001A5B80 != 0) {
        scePaf_8A861692(D_001A5B80);
        D_001A5B80 = 0;
    }
    if (D_001A5B74 != NULL) {
        scePaf_545FE2DA(D_001A5B74);
        D_001A5B74 = NULL;
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F8301DBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C57FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C585C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C58AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001991D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001991E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001991F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C58FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C59A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5E5C);

void func_000C5E7C(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 8);
    func_000C62E0();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5EAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C5ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C600C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C62E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C638C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C64A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C64D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_462E5873);

s32 func_000C656C(s32 arg0) {
    return func_000C658C(arg0 & 0xFFFF) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C658C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C666C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6754);

void func_000C6800(void) {
    func_000C6754(1, 0xFFFF);
}

void func_000C6820(void) {
    func_000C6754(0, 0xFFFF);
}

s32 *func_000C6840(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_000C68EC(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6878);

void func_000C68A8(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_000C68EC(arg0, arg1);
    if (M2C_FIELD(temp_v0, s8 *, 0x15) != 0) {

    } else {
        func_000C6AB4(arg0, temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C68EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C6E98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7060);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C70B4);

void func_000C7108(void) {
    func_000C7124();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7124);

void func_000C717C(void) {
    func_000C7198();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C71C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7280);

s32 func_000C7294(void) {
    return D_001A4624;
}

s32 func_000C72A0(void) {
    return D_001A4624;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C72AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C74DC);

void func_000C754C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_65920294);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_37DDBDD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A4F53FED);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C786C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1AD33D73);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DF887DED);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_92A46B32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_905347E9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_585B93BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DC544921);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C7C50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_39C55C03);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F47CA1C2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4E60E34C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8140);

void scePaf_AAA8D3DA(s32 arg0, s32 arg1, s32 arg2) {
    scePaf_F47CA1C2(arg0, 0x100000, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C83C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C84B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DDA68BE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EAA5AFF6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3F81333A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C87BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8894);

s32 scePaf_01CF521E(void *arg0) {
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    var_a1 = 1;
    if (__builtin_allegrex_ext(temp_v0, 0x10, 1) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (temp_v0 | 0x10000);
        var_a1 = 0;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3C68DCB7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C89F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8AB8);

void func_000C8B50(void) {
    func_000C8AB8(1, 0xFFFF);
}

void func_000C8B70(void) {
    func_000C8AB8(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8C10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8C9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8EA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8F80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C8FF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C90D0);

void ***func_000C917C(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C91E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199230);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9278);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199290);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001992FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199304);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199308);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019930C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9540);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C98D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C990C);

void func_000C99E0(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x8C);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **, M2C_UNK, s32), 0x98)(temp_a0, 0x12, arg0 + 0x60);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9A10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9A34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000C9C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA1D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA50C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA53C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA670);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA850);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CA980);

void func_000CAAD4(void) {
}

void func_000CAADC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAB8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAC40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAC78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAD2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAD4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAD94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CAF88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CB0D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CB1C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CB2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CB458);

void func_000CB824(s32 arg0) {
    func_000CC8B0(arg0 + 0xAC);
    func_000C9B0C(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6741C662);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_26DF747F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CB92C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_09AC6844);

void func_000CB988(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xE4) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CB990);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CBAD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_41BCFB59);

void func_000CBC30(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xD8) = arg1;
}

void scePaf_541F36E9(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_000CBC88(arg0, arg1, arg2, 0, arg3, (s32) &D_001A4628, arg4);
}

void scePaf_86C87E62(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_000CBC88(arg0, arg1, arg2, arg3, arg4, (s32) &D_001A4628, arg5);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CBC88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6840D208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CBF80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F1546D14);

void scePaf_607713A6(s32 arg0) {
    D_001A4694 = arg0;
}

void func_000CC2B4(s32 arg0) {
    D_001A5BA0 = arg0;
}

void scePaf_5EFC5387(s32 arg0) {
    D_001A5BA4 = arg0;
}

void scePaf_DFC8650C(s32 arg0) {
    D_001A5BA8 = arg0;
}

void func_000CC2D8(void *arg0, M2C_UNK *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0xEC) = arg1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0xEC) = &D_001A4628;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5DE0445F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FE575092);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6C3BBB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC600);

void func_000CC680(void) {
    func_000CC600(1, 0xFFFF);
}

void func_000CC6A0(void) {
    func_000CC600(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC6C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC6D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC710);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC720);

void ***func_000CC760(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC7C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC8B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC94C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CC9CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCA8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCB4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCB88);

void func_000CCBE0(s32 arg0) {
    scePaf_3586BE05(0x10, arg0);
}

void func_000CCC00(void) {
    scePaf_545FE2DA();
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCC1C);

void func_000CCE8C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCEEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCF10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CCF44);

void func_000CD02C(void) {
    func_000D5CE4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD0E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A69BABE3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD1A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD1F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD248);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD2B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD3B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD42C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD528);

void func_000CD538(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 8) >= arg1) {

    } else {
        func_000CD96C((s32) arg0, arg1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD56C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD6C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD8B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CD96C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDB84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDBF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199370);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199374);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199400);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001994C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019953C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001995BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019967C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001996F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDC94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDE04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CDFD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE03C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE480);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE4E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE5EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE7E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE8C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CE9D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CEC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CECE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CED9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CEE18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CEEAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CEF14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CF368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFA94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFB7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_14CE7F6F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFC48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFCB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFD10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFD84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFDFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFE84);

void func_000CFFC0(void *arg0, s32 arg1) {
    func_000CFFE0((s32) arg0, M2C_FIELD(arg0, s32 *, 0x15C), arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000CFFE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D00DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0244);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0390);

s32 func_000D0574(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x188) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D07D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0888);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0A50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0CD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D0FC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1098);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D14B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D14EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D15A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D16A0);

void ***func_000D1798(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D196C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D19EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1AA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1AF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1B14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1C10);

void func_000D1D28(void) {
    func_000D1D44();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1DBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001997D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D1F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2030);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D21C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D273C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D28C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2968);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2C4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D2F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D30EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D32DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3388);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3B54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3CB4);

s32 func_000D3D14(void *arg0, u32 arg1, u32 arg2) {
    u32 var_v1;

    var_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    if ((var_v1 < arg2) && (arg1 < (u32) M2C_FIELD(arg0, u32 *, 0x14))) {
        func_000D49D0(arg0, 3);
        var_v1 = M2C_FIELD(arg0, u32 *, 0x10);
    }
    return var_v1 < arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3D70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3E2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D3F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D402C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4204);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4488);

void func_000D4664(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((M2C_FIELD(arg0, s32 *, 8) == 0) || (M2C_FIELD(arg0, u8 *, 0x44) == 0)) {

    } else {
        sceGuColor(arg2);
        sceGuDisable(9);
        func_000D30EC(M2C_FIELD(arg0, s32 *, 8), arg3, arg1, arg4, arg5, arg6);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D470C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D47C8);

void func_000D4884(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D48A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4924);

s32 func_000D49D0(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (arg1 < var_v1) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        var_v1 = arg1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D49F0);

void func_000D4B20(void) {
    func_000D49F0(1, 0xFFFF);
}

void func_000D4B40(void) {
    func_000D49F0(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4B60);

void func_000D4B9C(void **arg0) {
    void *temp_s0;
    void *var_a0;
    void *var_v0;

    var_a0 = *arg0;
    var_v0 = M2C_FIELD(var_a0, void **, 4);
    if (var_v0 != var_a0) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_545FE2DA(var_v0);
            var_a0 = *arg0;
            var_v0 = temp_s0;
        } while (temp_s0 != var_a0);
    }
    scePaf_545FE2DA(var_a0);
}

void func_000D4BF4(void *arg0) {
    M2C_UNK *temp_v0;
    M2C_UNK *var_v1;
    void *temp_s0;
    void *var_v0;

    var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
    var_v0 = M2C_FIELD(var_v1, void **, 4);
    if (var_v0 != var_v1) {
        do {
            temp_s0 = M2C_FIELD(var_v0, void **, 4);
            scePaf_545FE2DA(var_v0);
            var_v1 = M2C_FIELD(arg0, M2C_UNK **, 0);
            var_v0 = temp_s0;
        } while (temp_s0 != var_v1);
    }
    M2C_FIELD(var_v1, M2C_UNK **, 4) = var_v1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_v0 = M2C_FIELD(arg0, M2C_UNK **, 0);
    *temp_v0 = temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4C50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4CEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4E20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D4F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D50E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D51C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D527C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D53C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D56A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5720);

void ***func_000D57AC(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D58C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199840);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199844);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199848);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001998A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001998D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001998E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199960);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001999F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001999FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D591C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D59E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5AF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5CE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5D08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5D14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5ED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5F18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A80);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199A9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199AA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5F3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D5FD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D61B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D61E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D62D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6338);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6370);

void func_000D6398(void) {
}

s32 scePaf_5CA7F421(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B0 != arg1) {
        var_v0 = func_000C46A8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000D63CC(void) {
    return D_001A47B0;
}

s32 scePaf_BAA88CDA(void) {
    return D_001A47B0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199AF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199B08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199B14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_87516C3B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_84485F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_715E8DAB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D6C0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D35B454A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4DB0D5D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8AB03D91);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A89157EE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5045C01F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BDC894D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_72514A05);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D71B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_50FFFCD2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A88CBB4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D76C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_47E35A50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_41A7BDD2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D78D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D7964);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D587826C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_61B105C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B6841F37);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D7C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3A4934E3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0AEDCDA1);

void scePaf_58BFC2AC(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x234) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x238) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x23C) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    func_000D89B0((s32) arg0, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0C66B594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_206C1F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D8138);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9563887D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D82A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_21B885B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D8738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D89B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D8A74);

s32 scePaf_360956CC(void *arg0, void *arg1) {
    u8 temp_a2;

    func_000C7708();
    temp_a2 = M2C_FIELD(arg1, u8 *, 8);
    if ((u32) (temp_a2 - 1) >= 4U) {
        if (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) {

        } else {
            func_000D90A4(arg0, 0, temp_a2);
        }
    }
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_39F89900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1F0B8678);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5DB527D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_25391E36);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D90A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D913C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D91D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D9270);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D930C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D9368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D9404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D9498);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D94E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000D9580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_927854C5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D02C0D2E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_222526B6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_33096E46);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EF52945B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3F52824F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_672036FE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1C286704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2E6CA751);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_01A35C15);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B42D784E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_470ABD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_08A02EFF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_29DC646F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4FCA0DE9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2A6499A5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D07AF3FA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BAFF6806);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FCF42D6D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AA978F61);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E796C85B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CFF2B69C);

s32 scePaf_4EA868E6(void *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x74)(temp_v1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DB230BE1);

s32 scePaf_C2E4423A(void *arg0) {
    s32 var_v0;
    void **temp_v1;

    var_v0 = -1;
    temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
    if (temp_v1 != NULL) {
        var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x7C)(temp_v1);
    }
    return var_v0;
}

void scePaf_86B41BA3(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1D0);
    if (temp_v0 == 0) {

    } else {
        func_000EF13C(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA0BC);

s32 func_000DA1CC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x1D4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA1D4);

s32 func_000DA228(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA250);

void func_000DA284(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA28C);

void func_000DA2AC(s32 arg0) {
    scePaf_D24E4016(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA2C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA2E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA344);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA3C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA400);

void func_000DA424(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x10)();
}

void func_000DA448(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x14)();
}

void func_000DA46C(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x18)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA490);

void func_000DA4B4(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x20)();
}

void func_000DA4D8(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x24)();
}

void func_000DA4FC(void **arg0) {
    M2C_FIELD(*arg0, M2C_UNK (**)(), 0x28)();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA520);

void func_000DA53C(s32 arg0) {
    scePaf_ED89C94B(arg0 + 8);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA574);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA5D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA650);

void func_000DA690(void) {
}

s32 func_000DA698(void) {
    return -1;
}

s32 func_000DA6A0(void) {
    return -1;
}

s32 func_000DA6A8(void) {
    return -1;
}

s32 func_000DA6B0(void) {
    return -1;
}

s32 func_000DA6B8(void) {
    return 0;
}

s32 func_000DA6C0(void) {
    return 0;
}

s32 func_000DA6C8(void) {
    return 1;
}

void func_000DA6D0(void) {
}

s32 scePaf_EB553D60(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DA704(void) {
    return D_001A47B4;
}

s32 scePaf_65C19AC0(void) {
    return D_001A47B4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CDC81771);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F1649F5B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C1FAF826);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA89C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DA8C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8BA04801);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_93A60B78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AEE1CBAD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_19A779E2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DABFC);

s32 func_000DAC28(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47B8 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DAC54(void) {
    return D_001A47B8;
}

s32 func_000DAC60(void) {
    return D_001A47B8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DAC6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DAD00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DAD94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DADE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199BA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199C78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199D08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199D14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199D28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199DF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199E04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DAEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB3C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4FF65BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB45C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB708);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB7F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DB934);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBA64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBAA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBB08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBB18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBB58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBBC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBCCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBD58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBDF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBF58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DBFF0);

s32 func_000DC0B8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47BC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DC0E4(void) {
    return D_001A47BC;
}

s32 scePaf_A0A25707(void) {
    return D_001A47BC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DC0FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7B099943);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DC284);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DC32C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DC3D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199E4C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199E60);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199E70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199F40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_16033F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DCD28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DCDD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CB7CCB28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0A189A1A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DCF7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DD0D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DD220);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199F84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199F90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E5BAC873);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_38876947);

void func_000DD9C8(void *arg0) {
    void **temp_v0;

    temp_v0 = M2C_FIELD(arg0, void ***, 0x3CC);
    if (temp_v0 != NULL) {
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, M2C_UNK, M2C_UNK), 0xBC)(temp_v0, 0, 0);
    } else {
        func_000DDFC8((s32) arg0, 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDA68);

void func_000DDAF0(s32 arg0) {
    func_000DDB1C();
    scePaf_47E35A50(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDB1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDC3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDC7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDE68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDEDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DDFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE1C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE2B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE2D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE2FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE3B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE3D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE3F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE418);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE4E8);

s32 func_000DE514(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47C0 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000DE540(void) {
    return D_001A47C0;
}

s32 scePaf_CAE6374A(void) {
    return D_001A47C0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_00199FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A0C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A0CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A0D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A0D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A0E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A0E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E6C072E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE6F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE73C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE7CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE91C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DE978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DED08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DED5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DEDC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DEE1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DEE68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DEEB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DEEF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DF0E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DF2E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DF4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DF6CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DF8B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DFB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_66B35152);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D2463C79);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000DFEEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_58CAE908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9DD9CA07);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E019C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E0308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E0650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E077C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E09B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E0B68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E0D9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E0E78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E10F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1188);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E11EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E12EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1458);

void func_000E14F0(void) {
    func_000E1458(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1594);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E15D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1628);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E16BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1730);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E17F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1880);

void func_000E18EC(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000E1930((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1930);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1A18);

s32 func_000E1B08(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47C4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E1B34(void) {
    return D_001A47C4;
}

s32 scePaf_9C9B6732(void) {
    return D_001A47C4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1CF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1D8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A170);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A240);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E1E30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DF9138A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_78054045);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_95DA7A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E26B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2838);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2878);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A260);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A268);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A26C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A270);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A274);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A278);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A27C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A280);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A284);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A288);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A28C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2940);

s32 func_000E2B10(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x330) == 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2DFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2E80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2F5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2F88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E2FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E30F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3164);

s32 func_000E3190(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47C8 != arg1) {
        var_v0 = func_000EFBA8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E31BC(void) {
    return D_001A47C8;
}

s32 scePaf_ED3E4EB1(void) {
    return D_001A47C8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E31D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E320C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3244);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E326C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3294);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A2A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A2B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E32CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3704);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3794);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E38BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E39E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E3E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E40D0);

void func_000E414C(s32 arg0, s32 arg1, s32 arg2) {
    func_000F0E3C(arg0, arg1, arg2 & 0xFF);
}

s32 func_000E4168(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47CC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E4194(void) {
    return D_001A47CC;
}

s32 func_000E41A0(void) {
    return D_001A47CC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E41AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D2E0D705);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E42DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4304);

void func_000E433C(void *arg0) {
    func_000FEDBC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

s32 func_000E4358(void *arg0) {
    return M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x20), s32 *, 0x148);
}

void func_000E4368(void *arg0) {
    func_000CEE18(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void scePaf_6E1B5B50(void *arg0) {
    func_000D0648(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void func_000E43A8(void *arg0) {
    func_000D0580(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E43C8);

void scePaf_BFFAEE83(void *arg0) {
    scePaf_14CE7F6F(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9AFD4AD4);

void func_000E4408(void *arg0) {
    func_000D0E94(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20));
}

void scePaf_7116224C(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), void **, 0x20), s32 *, 0x194) = arg1;
}

void func_000E4438(void *arg0, s32 arg1, s32 arg2) {
    func_000CEEAC(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x20), arg1, arg2 & 0xFF);
}

s32 func_000E445C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D0 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E4488(void) {
    return D_001A47D0;
}

s32 func_000E4494(void) {
    return D_001A47D0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A488);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A4A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A59C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A5BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A5DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A5FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A61C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E44A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4728);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E49B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4CA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4E20);

s32 func_000E4F0C(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 1) >= 2U) || (M2C_FIELD(arg0, u8 *, 0x331) != 0)) {
        scePaf_360956CC(arg0, arg1);
    }
    M2C_FIELD(arg0, u8 *, 0x331) = 0U;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E4F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5014);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E50D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5428);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E54F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E55A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E55E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E58B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5B88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E5E5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E6130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E67A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A76B9604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5075C799);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E6D80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E6E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E700C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A72594EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7B6F0E32);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E7374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F88ABAE1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_522A877E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BEF0151C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E7C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E1C76B22);

void scePaf_44EB8C62(void *arg0) {
    s32 temp_a1;
    s32 var_s0;

    var_s0 = M2C_FIELD(arg0, s32 *, 0x348);
    if (M2C_FIELD(arg0, s32 *, 0x34C) < var_s0) {

    } else {
        do {
            temp_a1 = var_s0;
            var_s0 += 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0xD0)(arg0, temp_a1);
        } while (M2C_FIELD(arg0, s32 *, 0x34C) >= var_s0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E7ECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E807C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8348);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8C68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8C78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8E64);

void func_000E8EDC(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 8);
    temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    if (temp_v0 >= (temp_v1 - 0x14)) {

    } else {
        func_000C517C((s32) arg0, temp_v1 - 0xA);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E8F20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9010);

s32 func_000E90A0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D4 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E90CC(void) {
    return D_001A47D4;
}

s32 func_000E90D8(void) {
    return D_001A47D4;
}

void scePaf_6DD28F44(void) {
    func_000FF044();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4ADAEF94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9248);

void scePaf_95708BC0(void *arg0) {
    func_000FF94C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DEF9EBE7(void *arg0) {
    func_000FF9BC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_C85155C9(void *arg0) {
    func_000FF9E4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_F23F3226(void *arg0) {
    func_000FFA54(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_D153385E(void *arg0) {
    func_000FFA7C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_86A5AE7D(void *arg0) {
    func_000FFAA0(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_5A8D4BDB(void *arg0) {
    func_000FFAA8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_2120282A(void *arg0) {
    func_000FFB04(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_8159EB28(void *arg0) {
    func_000FFB44(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_5CE11C03(void *arg0) {
    func_000FFB80(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_05073826(void *arg0) {
    func_000FFB88(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_A4B48F00(void *arg0) {
    func_000FFB90(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_224C33F0(void *arg0) {
    func_000FFBEC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_3DBE861F(void *arg0) {
    func_000FFBF4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_FA78AF39(void *arg0) {
    func_000FFC50(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_A3761F27(void *arg0) {
    func_000FFC58(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DE75C2BA(void *arg0) {
    func_000FFC8C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_4129A915(void *arg0, s32 arg1, s32 arg2) {
    func_000FFCB0(M2C_FIELD(arg0, void **, 0x1E8), arg1, arg2 & 0xFF);
}

void scePaf_8A51BA1E(void *arg0) {
    func_000FFCD8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_0FFA3ECE(void *arg0) {
    func_000FFCE4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_89582FD0(void *arg0) {
    func_000FFD00(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_84913A3A(void *arg0) {
    func_000FFD1C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E94EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E960C);

s32 func_000E9634(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47D8 != arg1) {
        var_v0 = func_000E445C(arg0, arg1);
    }
    return var_v0;
}

s32 func_000E9660(void) {
    return D_001A47D8;
}

s32 scePaf_7C31F453(void) {
    return D_001A47D8;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A6AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A6C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A798);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A7A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A7A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A7B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A890);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A89C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019A8A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9678);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F60816FE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9A90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9AF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9CA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000E9FFC);

s32 func_000EA2D8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_v0;

    temp_a4 = arg2 & 0xFF;
    if (arg1 != 0x33) {
        var_v0 = func_000E5428(arg0, arg1, temp_a4);
    } else {
        M2C_FIELD(arg0, s8 *, 0x6C8) = (s8) temp_a4;
        func_000EB590(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA314);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA3B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA44C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA488);

void func_000EA4DC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E58B4(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x70)(temp_v0, arg2, arg3);
    }
}

void func_000EA528(s32 arg0, s32 arg1, s32 arg2) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5B88(arg0, arg1, arg2);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32), 0x74)(temp_v0, arg2);
    }
}

void func_000EA570(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void **temp_v0;

    if ((arg1 & 0xFFFF) != 8) {
        func_000E5E5C(arg0, arg1, arg2, arg3);
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 0x700);
        M2C_FIELD(*temp_v0, M2C_UNK (**)(void **, s32, s32), 0x78)(temp_v0, arg2, arg3);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA5BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA64C);

s32 scePaf_6141934B(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg1 & 0xFFFF) != 8) {
        var_v0 = func_000E6D80(arg0, arg1);
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x700);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA74C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EA800);

s32 scePaf_5A99AE67(s32 arg0) {
    s32 temp_v0;

    temp_v0 = scePaf_A72594EF();
    if (temp_v0 >= 0) {
        scePaf_EAA5AFF6(arg0, 0x0100000C);
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EAAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D5F5E68F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EAE3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EB234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EB2C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EB3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EB508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EB590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EB7D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EBA00);

void func_000EBB58(void) {
    func_000E5558();
}

s32 func_000EBB74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A47DC != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBBA0(void) {
    return D_001A47DC;
}

s32 scePaf_C6F44EF9(void) {
    return D_001A47DC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EBBB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D180ACBA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EBCE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EBD10);

void scePaf_22B0D7D8(void *arg0) {
    func_00102B50(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_FCABD0E7(void *arg0) {
    func_00102CFC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_CA8CDF32(void *arg0) {
    func_00102D38(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_EE10AEF1(void *arg0) {
    func_00102FCC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_E15A64EA(void *arg0) {
    func_00103008(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBDD4(void *arg0) {
    func_0010308C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_4C5F6657(void *arg0) {
    func_00103094(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_6A772BF7(void *arg0) {
    func_001030B0(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_8CDEDC6F(void *arg0) {
    func_00103104(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_CFAF88AB(void *arg0) {
    func_00103120(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_DFB912CB(void *arg0) {
    func_0010313C(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_D34D0B82(void *arg0) {
    func_00103158(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBE98(void *arg0) {
    func_00103174(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_BAA76FDE(void *arg0) {
    func_00103190(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBED0(void *arg0) {
    func_001031AC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_6CF44237(void *arg0) {
    func_001031C8(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBF08(void *arg0) {
    func_001031E4(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void func_000EBF24(void *arg0) {
    func_00103200(M2C_FIELD(arg0, s32 *, 0x1E8));
}

void scePaf_6B678D44(void *arg0) {
    func_00103208(M2C_FIELD(arg0, s32 *, 0x1E8));
}

s32 func_000EBF5C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4808 != arg1) {
        var_v0 = func_000EFBA8(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EBF88(void) {
    return D_001A4808;
}

s32 scePaf_9A8E343E(void) {
    return D_001A4808;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EBFA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D1159069);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EC168);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EC220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EC2D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AA10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AA20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AB08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABF4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019ABFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AC00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AC04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EC398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECA00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECAD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECB18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECC4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECC98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECD7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ECE64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED018);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AE02F241);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_95040C08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_07BA4C80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_252F37A3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED8E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED8F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED948);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000ED998);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EDA80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EDB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EDC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EDD24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EDDE4);

void func_000EDEA4(void) {
    func_000F0E94();
}

void func_000EDEC0(void) {
    func_000F0F30();
}

s32 func_000EDEDC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A480C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EDF08(void) {
    return D_001A480C;
}

s32 scePaf_CEAC29F3(void) {
    return D_001A480C;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EDF20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_275BCDC6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE0D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE100);

s32 func_000EE138(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4810 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE164(void) {
    return D_001A4810;
}

s32 scePaf_503FA456(void) {
    return D_001A4810;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AC58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AD28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AD38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AE0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AE18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE17C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE3AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE3F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B104EC1B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4E62343D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3CEDE012);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_85696453);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6E94BA7B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_18D51B42);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_03064559);

void scePaf_2A5DDF04(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x3F8) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE8DC);

s32 func_000EE950(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4814 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EE97C(void) {
    return D_001A4814;
}

s32 scePaf_256218C2(void) {
    return D_001A4814;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AE34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AE48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AF18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AF20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AF2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EE994);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C8FD64AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EED10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EED6C);

void func_000EEDD0(void **arg0) {
    sceGumMatrixMode(2);
    sceGumLoadIdentity();
    M2C_FIELD(*arg0, M2C_UNK (**)(void **), 0x60)(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EEE10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_79C3CBF7);

s32 func_000EEFFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x554);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF004);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF07C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF13C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF18C);

s32 func_000EF208(s32 arg0, M2C_UNK arg1) {
    scePaf_DC544921();
    scePaf_4E60E34C(arg0, 0x80005, arg1);
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF2A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF38C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF400);

s32 func_000EF4C0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4818 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000EF4EC(void) {
    return D_001A4818;
}

s32 scePaf_F7FB133E(void) {
    return D_001A4818;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AF48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019AF58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_57AF63CE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2D94D547);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_752AB253);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_12D445E1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EF9C0);

void scePaf_C07B7162(void *arg0) {
    func_00106250(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EFA00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EFB48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EFBA8);

s32 func_000EFBD4(void) {
    return D_001A481C;
}

s32 scePaf_5A818E41(void) {
    return D_001A481C;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B058);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B128);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B130);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B1A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B1C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B1E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B200);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EFBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000EFF0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F022C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F039C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F050C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0684);

s32 func_000F0920(void *arg0, void *arg1) {
    if (((u32) (M2C_FIELD(arg1, u8 *, 8) - 1) >= 4U) || (M2C_FIELD(arg0, u8 *, 0x331) == 0) || (M2C_FIELD(arg0, s32 *, 0x1EC) != 5)) {
        scePaf_360956CC(arg0, arg1);
    }
    M2C_FIELD(arg0, s8 *, 0x334) = 0;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0AC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0C3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0D20);

s32 func_000F0DB8(void *arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = arg1 == 5;
    scePaf_ED83B18F(arg0 + 0x370, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x430, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x4F0, 0xD, temp_s0);
    scePaf_ED83B18F(arg0 + 0x5B0, 0xD, temp_s0);
    M2C_FIELD(arg0, s32 *, 0x1EC) = arg1;
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0E3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F0F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1080);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F129C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F13B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F14FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F15A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8DB4B066);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C2C25056);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_06EA7CDE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A9970EF5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F18C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F18E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1B14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1BF4);

void func_000F1C54(void) {
    func_000F1BF4(1, 0xFFFF);
}

s32 func_000F1C74(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4820 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F1CA0(void) {
    return D_001A4820;
}

s32 scePaf_96C46364(void) {
    return D_001A4820;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1CB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2A2EB136);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F1DD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B2A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BB457D6F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0ED80B09);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_777635B9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_70BECA15);

void func_000F202C(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_3F52824F((s32) arg0, arg1, arg2 & 0xFF);
}

void func_000F2050(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_672036FE();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F209C);

void func_000F20C4(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x334) = 1;
    scePaf_DB230BE1();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D1EE972C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E732CF74);

void scePaf_FA758B05(void *arg0) {
    func_00106ABC(M2C_FIELD(arg0, s32 *, 0x1E8));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_608F02C6);

s32 scePaf_DC8B0309(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106B1C(temp_v0);
    }
    return var_v1;
}

s32 scePaf_FA87D725(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106B34(temp_v0);
    }
    return var_v1;
}

s32 scePaf_409E25A3(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106B4C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_64775957);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FC37FABD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_79F4AE65);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B6F52424);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BA6B8B02);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4D810FDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ABCBC1C5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B2ED6CAA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1232B7A3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_37DD37B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B9BE69FD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8D7FC7DB);

void scePaf_905CF2A7(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106DCC(temp_v0, arg1 & 0xFF);
    }
}

s32 scePaf_55CC4749(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106DE4(temp_v0);
    }
    return var_v1;
}

s32 scePaf_AEEF2A7C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_00106E1C(temp_v0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B711DC69);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ECE59E24);

void scePaf_A574DB92(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106ED4(temp_v0);
    }
}

void scePaf_F639E5E1(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_00106F04(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7F2442DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2828);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2978);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F29B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F29E0);

s32 func_000F2A18(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4824 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F2A44(void) {
    return D_001A4824;
}

s32 scePaf_73712598(void) {
    return D_001A4824;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B384);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B468);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B470);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2A5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2B94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2D08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F2D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D99BEC81);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_81667058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F32B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B1F587EF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F339C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8C1ED07B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4D4805AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_50F72192);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A8711520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FCDD55E3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2EABF548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_28F8DE83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_75A553A2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3EB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3F24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3F90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F3FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8B439A23);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BECD1827);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_149CDEB9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_62081F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9D496842);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2750CF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CC103AD2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_566BC690);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_68569AAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D16E5935);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_97B9C21E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_30F5E7DF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_76491EEA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7771BC86);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7435C5D5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_06BB62B7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_04EF78CD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F4404EAF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D63D4561);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4A98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4C38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4C9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4CF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4D70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4EA4);

s32 func_000F4EDC(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4828 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F4F08(void) {
    return D_001A4828;
}

s32 scePaf_3291BDDD(void) {
    return D_001A4828;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F4F20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_15EF8E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5144);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5218);

s32 func_000F52F4(void) {
    scePaf_1AD33D73();
    return 1;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B534);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_293A01D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F535C);

void func_000F53A4(void) {
}

void func_000F53AC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CFB1A402);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5D7F1F27);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_AD007AB6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_73D49419);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F54B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F55E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3987B5C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_369E597A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5838);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5868);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5898);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F58C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_695BCD34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_45386654);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5998);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F59E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5A30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CB65103E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_515EE222);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F89ECA28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4AF8E417);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_76D5A950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5E7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F5FF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F6050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F60AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F60FC);

s32 func_000F614C(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 != 0) {
        var_v1 = func_0010FAFC(temp_v0);
    }
    return var_v1;
}

s32 func_000F6184(void *arg0, s32 arg1) {
    s32 var_v0;
    void **temp_v1;

    if (arg1 > 0x01000008) {
        temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
        var_v0 = -1;
        if (temp_v1 != NULL) {
            var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x84)(temp_v1);
        }
    } else {
        var_v0 = scePaf_222526B6();
    }
    return var_v0;
}

void scePaf_F89014B3(s32 arg0, s32 arg1) {
    s32 temp_v1;

    scePaf_EAA5AFF6(arg0, 0x01000016);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v1 == 0) {

    } else {
        func_0010B438(temp_v1, arg1 & 0xFF);
    }
}

void func_000F6234(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_0010FB50(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F6264);

void func_000F62C0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v0 == 0) {

    } else {
        func_0010D4A8(temp_v0);
    }
}

s32 func_000F62F0(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A482C != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_000F631C(void) {
    return D_001A482C;
}

s32 scePaf_DAD477C1(void) {
    return D_001A482C;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B68C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B6A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B770);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B77C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B788);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B7FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B804);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B828);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F6334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F64EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F67B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F68CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F69E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F6BBC);

s32 scePaf_4FC2470C(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = -1;
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x330) = arg1;
        scePaf_DA3A6D88((s32) arg0, 0);
        var_v0 = 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F6C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CB7B666E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ADC146F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D5A254F9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A18DB948);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F7408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0FB7D433);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F554C7C7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5ACFC2EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_42F43213);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5D242D11);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8810);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8940);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8A70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8BE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F8FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_84A71447);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F93C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F95DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F976C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9B30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9C94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9E10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000F9F74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DA3A6D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9D92765E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D7074BD1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FDB39519);

void func_000FA414(s32 arg0) {
    scePaf_47E35A50(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0C6EEA21);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5458E412);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D91B2651);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1943B875);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FE84212F);

void scePaf_43374E9E(void) {
    scePaf_0C6EEA21();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FA800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_199896A3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FA970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FA9A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A02E66FA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_70B92642);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_05EEE8A6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F49F3C59);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FABDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_32B27ADD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_A7818BCE);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2D79697E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EDF1C662);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C4D819AA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FB000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_63EA1815);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_447974D1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FB22C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FB278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_11361F12);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_51FF9D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B77039E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9430557B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6797988C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_449C8821);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_470470A6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BC0E5C5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8E751FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F32223AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_98A6C193);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BD49CAEF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6C4976AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_85112756);

s32 scePaf_C933B3C5(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x35C);
    M2C_FIELD(arg0, s32 *, 0x35C) = arg1;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FB8C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EFAC3E9F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2D0E2A03);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FBB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FBBB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FBC30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FBD10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FBE1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FBF00);

void func_000FC010(void) {
}

s32 func_000FC018(void *arg0, s32 arg1) {
    s32 var_v0;
    void **temp_v1;

    if (arg1 > 0x01000008) {
        temp_v1 = M2C_FIELD(arg0, void ***, 0x1E8);
        var_v0 = -1;
        if (temp_v1 != NULL) {
            var_v0 = M2C_FIELD(*temp_v1, s32 (**)(void **), 0x84)(temp_v1);
        }
    } else {
        var_v0 = scePaf_222526B6();
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC06C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC0A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC13C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC214);

void ***func_000FC294(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

void ***func_000FC2FC(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC3E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B960);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019B970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC474);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F6F3E99E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC69C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC870);

void func_000FC918(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x30, 0x12, arg1);
    scePaf_D6232F26(arg0 + 0xF0, 0x12, arg1);
    func_000FDE34(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FC970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCA50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCAE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCB74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCBFC);

void func_000FCC8C(void *arg0) {
    void **temp_a0;

    temp_a0 = M2C_FIELD(arg0, void ***, 0x24);
    M2C_FIELD(*temp_a0, M2C_UNK (**)(void **), 0x28)(temp_a0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCCB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCCEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCDE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCEE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FCFFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD138);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD24C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BA68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD4C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD57C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD6A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD720);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD7C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FD920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDA0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDA60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDCD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDD50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDE34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FDEC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE20C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE5F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE83C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE8D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FE974);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FECAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FED10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEDBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEE04);

void func_000FEE24(void *arg0) {
    func_000CE7E4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE40(void *arg0) {
    func_000CE8C4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE5C(void *arg0) {
    func_000CE9D0(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE78(void *arg0) {
    func_000CE480(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEE94(void *arg0) {
    func_000CE4E4(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEEB0(void *arg0) {
    func_000CE548(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEECC(void *arg0) {
    func_000CE5EC(M2C_FIELD(arg0, s32 *, 0x20));
}

void func_000FEEE8(void *arg0) {
    func_000CECE4(M2C_FIELD(arg0, s32 *, 0x20));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEF30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FEF54);

void scePaf_8DEB3DB3(void *arg0) {
    sceKernelWaitSema(D_001A5C80, 1, NULL);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    sceKernelSignalSema((s32) D_001A5C80, 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BA09CF46);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF044);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BB70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BC08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BC18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF070);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF148);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF2E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF3A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF474);

s32 func_000FF900(s32 arg0, s32 *arg1) {
    func_0000C8BC(arg0 + 0x44, *arg1);
    return 0;
}

s32 func_000FF924(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x44));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF94C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF9BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FF9E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFA54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFA7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFAA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFAA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFB44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFB88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFB90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFBF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFC8C);

void func_000FFCB0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    if (arg2 & 0xFF) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C) | arg1;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C) & ~arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFCD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFD00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFD1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000FFD38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010028C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100A50);

void func_00100A88(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
            func_00101C84(M2C_FIELD(arg0, s32 *, 0xB4));
            func_00102168(M2C_FIELD(arg0, s32 *, 0xB8));
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {

        } else {
            func_00100918(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100AF4);

u8 func_00100C44(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0);
        } else if ((!(arg1 & 0xF) || (var_v1 = 1, (M2C_FIELD(arg0, s32 *, 0xC0) == 0))) && ((var_v1 = 1, ((arg1 & 0xF0) == 0)) || (M2C_FIELD(arg0, s32 *, 0xB0) != 0))) {
            var_v1 = 0;
        }
    }
    return var_v1;
}

void func_00100C90(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xF4) = arg1;
    }
}

void func_00100CA0(void *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0xB8));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100CC0);

s32 func_00100D2C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x138);
    }
    return var_v0;
}

s32 func_00100D40(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x13C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100DB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00100EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010177C);

void func_001017B4(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, u8 *, 0) != 0) {
            M2C_FIELD(arg0, u8 *, 0) = 0U;
            func_00102168(M2C_FIELD(arg0, s32 *, 0x18));
        }
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {

        } else {
            func_00101718(arg0);
            scePaf_4E67BB08(arg0);
        }
    }
}

u8 func_00101818(void *arg0, s32 arg1) {
    u8 var_v1;

    var_v1 = 0;
    if (arg0 != NULL) {
        if (arg1 == 0) {
            var_v1 = M2C_FIELD(arg0, u8 *, 0);
        } else {
            var_v1 = 1;
            if (!(arg1 & 0xF0) || (M2C_FIELD(arg0, u8 *, 0x14) == 0)) {
                var_v1 = 0;
            }
        }
    }
    return var_v1;
}

void func_00101850(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        sceAtracSetLoopNum(M2C_FIELD(arg0, s32 *, 8), (arg1 == 0) ? 0 : -1);
    }
}

void func_0010187C(void *arg0) {
    if (arg0 != NULL) {
        func_00102278(M2C_FIELD(arg0, s32 *, 0x18));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010189C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101AC0);

void func_00101B74(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0xC));
}

void func_00101BC4(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0xC));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101C14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101C84);

u8 func_00101CB8(u8 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

s32 func_00101CCC(void *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101CE8);

void func_00101D50(void *arg0) {
    if ((arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0) == 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 8), 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101D94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00101F40);

void func_00102094(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_v0 > 0) {
        sceKernelDeleteSema(temp_v0);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v0_2 > 0) {
        sceKernelDeleteSema(temp_v0_2);
    }
    scePaf_545FE2DA(M2C_FIELD(arg0, s32 *, 0x14));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001020E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102168);

u8 func_0010219C(u8 *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *arg0;
    }
    return var_v0;
}

s32 func_001021B0(void *arg0) {
    s32 var_v0;

    var_v0 = 0xFF;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x20) - M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001021CC);

void func_00102234(void *arg0) {
    if ((arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0) == 0)) {

    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
        sceKernelSignalSema(M2C_FIELD(arg0, s32 *, 0x10), 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102298);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BCDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BCEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BCFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BD0C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BD1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BD2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BD3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001023A8);

void func_00102434(void) {
    func_001023A8(1, 0xFFFF);
}

void func_00102454(void) {
    func_001023A8(0, 0xFFFF);
}

void func_00102474(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0010256C();
}

void func_00102494(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_0010259C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001024B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010256C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010259C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001026B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010279C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001028B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001029C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102AE0);

void func_00102B34(s32 arg0) {
    func_00102CFC(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102B50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102CFC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BD60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102D38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00102FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010308C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103094);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001030B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010313C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103174);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001031AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001031C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001031E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103200);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BE48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103774);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001037A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001037EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001038BC);

void func_00103960(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001039D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103A18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103A5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103AA0);

s32 func_00103AE4(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103C44);

void func_00103CE8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103D0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103D5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103DA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BEE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019BF88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00103FE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001041A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001042C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001043F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104560);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001047A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001048B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001049D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104AE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104B98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104D9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C050);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C0E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00104E84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001050C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001052FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010553C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010577C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001059C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C100);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C104);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C108);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C10C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C110);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C114);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C118);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C11C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00105A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00105B10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00105C2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00105D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00105E3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00105F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106230);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106260);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106380);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001064E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010656C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001065B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106604);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001066D0);

s32 func_00106744(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE7E4(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x10)(arg0, arg1, arg2);
    }
    return var_v1;
}

s32 func_001067B8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if ((temp_v0 == 0) || (var_v1 = 0, (func_000CE9D0(temp_v0) != 0))) {
        var_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, M2C_UNK, M2C_UNK), 0x18)(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010682C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001068D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106984);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001069B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001069EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106A54);

void func_00106A8C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFB7C(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106ABC);

void func_00106AD4(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        scePaf_14CE7F6F(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106B98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106BCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106C34);

void func_00106C68(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000CFE84(temp_v0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106C98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106CB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106D64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106DCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106E1C);

void func_00106E54(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 == 0) {

    } else {
        func_000D0C18(temp_v0);
    }
}

s32 func_00106E84(void *arg0) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_v0 != 0) {
        var_v1 = func_000C5EAC(temp_v0 + 0x40);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106EBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106ED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106F18);

void scePaf_D4C6CC7A(void *arg0) {
    M2C_FIELD(&D_001A7CC0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_001A7CC0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_001A7CC0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_001A7CC0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C1F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00106F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010770C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010832C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001087BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00108C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00108D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00108EF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00109150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00109420);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001096C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00109B80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00109DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00109E9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010A1B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010A3C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010A514);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010A95C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C53C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C540);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C544);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C548);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C54C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C550);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C554);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C558);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C55C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C560);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C564);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C568);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C56C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C570);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C574);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C578);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C57C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C580);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C584);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C588);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C58C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C590);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C594);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C598);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C59C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5A0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5A8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5AC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5B4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5C0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5C4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5D4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5D8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5DC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5E0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5E8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C5FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C600);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C604);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C60C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C610);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C61C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C620);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C624);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C628);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C62C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C630);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C634);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C638);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C63C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C640);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C644);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C648);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C64C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C650);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C654);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C658);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C65C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C660);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C664);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C690);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019C6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010B33C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010B438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010B918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010B9D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010BB2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010BD78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010BED0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010C5A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010C5F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010C750);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010C8B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010CA10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010CB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010CCBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010D4A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010D568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010E448);

void func_0010FA74(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x14F0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x14F4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x14F8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x14FC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010FA98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010FAFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010FB50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010FC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010FE94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0010FFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00110650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00110CD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00110D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00110DE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00110EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001110AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011126C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011129C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011140C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011145C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001114FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001116D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00111B94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00111BE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00111DD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00111FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011206C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011210C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001121AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011224C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001126DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00112AE8);

void func_00112B40(void) {
    func_00112AE8(1, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00112B60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001130D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001139F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CC88);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CC8C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CC90);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CC94);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CC98);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CC9C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCA0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCA4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCB0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCB8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCBC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCC4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113BC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113D00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113D7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113E28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00113F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00114008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001140B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00114158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011448C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011453C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001145E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011468C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00114738);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011519C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001155CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115B18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115BF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115DC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115E64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00115FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011610C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001161AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001162F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011643C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001164E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116678);

s32 func_001167F4(s32 arg0) {
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001167FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011689C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116960);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001169D8);

void func_00116A60(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_v0 != 0) {
            func_00116AA0((s32) arg0, temp_v0 + (arg1 * 0x34));
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116AA0);

s32 func_00116B6C(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) {
        if ((M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8))) {
            var_a2 = M2C_FIELD(arg0, s32 *, 0xC) != M2C_FIELD(arg1, s32 *, 0xC);
        }
    }
    return var_a2;
}

s32 func_00116BB8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_00116BD8(void *arg0) {
    s32 var_v1;

    var_v1 = -1;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116BF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116CE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116D44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116E14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116EE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00116FB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011717C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001171F8);

s32 func_00117274(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4930 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_001172A0(void) {
    return D_001A4930;
}

s32 func_001172AC(void) {
    return D_001A4930;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001172B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117338);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001173E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117408);

void func_00117440(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}

s32 func_0011744C(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 1;
    if (D_001A4934 != arg1) {
        var_v0 = scePaf_5CA7F421(arg0, arg1);
    }
    return var_v0;
}

s32 func_00117478(void) {
    return D_001A4934;
}

s32 func_00117484(void) {
    return D_001A4934;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117510);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001175B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001175E0);

void func_00117618(void *arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1E8), s32 *, 0x28) = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117624);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001176E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011781C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001178C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011792C);

void func_0011794C(s32 arg0) {
    scePaf_7952AE83(arg0 + 0x20);
}

void func_00117968(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117984(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_001179A0(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_001179BC(s32 arg0) {
    scePaf_E418D7E0(arg0 + 0x20);
}

void func_001179D8(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_001179F4(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117A10);

s32 func_00117A44(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}

void func_00117A6C(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117A90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117AF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117B50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117BEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117C88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117D2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117D98);

void func_00117DB8(s32 arg0) {
    func_000C2580(arg0 + 0x20);
}

void func_00117DD4(s32 arg0) {
    scePaf_D6C1FF36(arg0 + 0x20);
}

void func_00117DF0(s32 arg0) {
    scePaf_D6232F26(arg0 + 0x20);
}

void func_00117E0C(s32 arg0) {
    scePaf_2CB6FBBE(arg0 + 0x20);
}

void func_00117E28(s32 arg0) {
    func_000C25D8(arg0 + 0x20);
}

void func_00117E44(s32 arg0) {
    scePaf_442F1731(arg0 + 0x20);
}

void func_00117E60(s32 arg0) {
    scePaf_71EDAD83(arg0 + 0x20);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117E7C);

s32 func_00117EB0(void *arg0, s32 arg1) {
    func_0000C8BC(arg1, M2C_FIELD(arg0, s32 *, 0x84));
    return 0;
}

void func_00117ED8(s32 arg0, M2C_UNK arg1) {
    scePaf_D6232F26(arg0 + 0x20, 0x12, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00117EFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6147E3D5);

void func_00117F74(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

void scePaf_1B043852(void *arg0) {
    sceKernelDeleteEventFlag(M2C_FIELD(arg0, s32 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_0B0959FC);

void scePaf_CA5EF446(void *arg0) {
    sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 4), 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011802C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118050);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B884B031);

void func_001180D8(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_9399AF50(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void scePaf_C1F72218(void *arg0) {
    u32 temp_v0;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 1U, 0x20, NULL, NULL);
    temp_v0 = sceKernelGetThreadId();
    if (M2C_FIELD(arg0, u32 *, 4) != temp_v0) {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
        sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 3U, 0x20, NULL, NULL);
        M2C_FIELD(arg0, u32 *, 4) = temp_v0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
}

void scePaf_539F2583(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 1U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 8) - 1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    if (temp_v1 == 0) {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011820C);

void func_00118288(void) {
    func_0011820C(1, 0xFFFF);
}

void func_001182A8(void) {
    func_0011820C(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001182C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118308);

void func_00118348(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118364(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118380(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 1) {

    } else {
        sceKernelClearEventFlag(M2C_FIELD(arg0, u32 *, 0), -2U);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_001183EC(void *arg0) {
    s32 temp_v1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_v1 != 0) {

    } else {
        sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    }
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 2);
}

void func_00118454(u32 *arg0) {
    sceKernelWaitEventFlag(*arg0, 3U, 0x20, NULL, NULL);
    sceKernelSetEventFlag((s32) *arg0, 1);
}

void func_00118498(s32 *arg0) {
    sceKernelSetEventFlag(*arg0, 2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001184B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118500);

void func_00118548(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118564(s32 *arg0) {
    sceKernelDeleteEventFlag(*arg0);
}

void func_00118580(void *arg0) {
    if (sceKernelPollEventFlag(M2C_FIELD(arg0, s32 *, 0), 1, 0x20, 0) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 (**)(s32), 4)(M2C_FIELD(arg0, s32 *, 8));
        M2C_FIELD(arg0, s32 (**)(s32), 4) = NULL;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        sceKernelSetEventFlag(M2C_FIELD(arg0, s32 *, 0), 2);
    }
}

s32 scePaf_EB346F51(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 4U, 0x20, NULL, NULL);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 1);
    sceKernelWaitEventFlag(M2C_FIELD(arg0, u32 *, 0), 2U, 0x20, NULL, NULL);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0xC);
    sceKernelSetEventFlag((s32) M2C_FIELD(arg0, u32 *, 0), 4);
    return temp_s1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118674);

void func_001186F0(void) {
    func_00118674(1, 0xFFFF);
}

void func_00118710(void) {
    func_00118674(0, 0xFFFF);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CE48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CEE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CEF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CFCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019CFE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D0C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D160);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D1F0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D204);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_96857E81);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_E977B833);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001188A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001188C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_80E521C5);

void func_00118930(void) {
    sceKernelExitThread(0);
}

void scePaf_5775283A(void *arg0) {
    sceKernelWaitThreadEnd(M2C_FIELD(arg0, s32 *, 4), 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011896C);

s32 func_00118998(void *arg0) {
    M2C_FIELD(&D_001A7CEC, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&D_001A7CEC, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(&D_001A7CEC, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(&D_001A7CEC, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(&D_001A7CEC, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    return 0;
}

M2C_UNK *func_001189E8(void) {
    return &D_001A7CEC;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_36CB5601);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5B202AED);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118A84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_669DE9B1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_50DC7446);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BA32D6E6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118BEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118C34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118C7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EAB7BD23);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118D84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118DDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118E14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00118FD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119018);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011905C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119130);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CAF82B9B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011926C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001192E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119354);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119450);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011954C);

s32 func_00119634(s32 arg0) {
    func_00119DA4();
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011965C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011975C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011985C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001199AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001199DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119A94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119B00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119B58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119BD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119CB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119D78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119E9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00119F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A00C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A498);

M2C_UNK *func_0011A570(void) {
    return &D_001A7D10;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A57C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A5B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A79C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A840);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A8E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011A988);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AA18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AAA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011ABD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AC6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AD08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AD3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AD9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011AF8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B048);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B0F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B2A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B350);

s32 func_0011B410(s32 arg0) {
    func_0011905C();
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B4E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B8A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011B9B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BAC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BB28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BDF0);

void func_0011BE84(void) {
    func_0011BDF0(1, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BEA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BF54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011BFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C02C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C234);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C3C8);

void func_0011C40C(void *arg0) {
    s32 temp_a4;

    temp_a4 = M2C_FIELD(arg0, s32 *, 0x50);
    if ((temp_a4 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 8) < 4U)) {
        if (D_001A7D60 == 0) {
            sceGuDispBuffer((s32) M2C_FIELD(arg0, s16 *, 0x18), (s32) M2C_FIELD(arg0, s16 *, 0x1A), temp_a4 + (M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x42)) + 0xFC000000, (s32) (M2C_FIELD(arg0, s32 *, 0x3C) * 8) >> M2C_FIELD(arg0, s32 *, 0xC));
            D_001A7D60 = 1;
        }
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C594);

s32 scePaf_08DD2D50(void *arg0, s32 arg1) {
    return (s32) ((arg1 << M2C_FIELD(arg0, s32 *, 0xC)) + 7) >> 3;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C614);

void scePaf_3A69534B(void) {
    scePaf_FCB4E053();
}

void func_0011C6A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

void func_0011C6C4(s32 arg0, s32 arg1) {
    func_0011FECC((s32) &D_001A7DA8, arg0, arg1);
    D_001A7D88 = 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C6FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011C7C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_35F003C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FB3A9617);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011CCB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011CE28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011CF6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D0B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D310);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D328);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D1FC);

s16 scePaf_0598FFD6(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        return M2C_FIELD(arg0, s16 *, 0x42);
    }
    return M2C_FIELD(arg0, s16 *, 0x44);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D2A8);

s32 func_0011D398(void) {
    return 0x67;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D3A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5C4BF618);

void func_0011D4E8(s32 arg0) {
    func_0000C934(arg0 + 0x60, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011D5AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5EE76FC5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3684D457);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_846E1F0A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_21DBFF5B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011DE30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011DE74);

s32 func_0011DEA8(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (var_v0 == 0) {
        var_v0 = func_0011FF68((s32) &D_001A7DA8, 1 << M2C_FIELD(arg0, s16 *, 0x54), M2C_FIELD(arg0, s32 *, 0x38) * M2C_FIELD(arg0, s16 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x50) = var_v0;
    }
    return var_v0 != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011DF04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011DF60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011DFF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_EBDC149C);

void scePaf_FF91D139(void) {
    scePaf_FCB4E053();
}

void func_0011E2A8(void *arg0, void *arg1) {
    scePaf_7EC15225(arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E2C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4AB0D3F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E4AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9122393C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E6FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D350);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D360);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D380);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E784);

void func_0011E8A0(void) {
    func_0011E784(1, 0xFFFF);
}

void func_0011E8C0(void) {
    func_0011E784(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E8E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011E950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_93538664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011ED98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011EE50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011EEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011EF90);

void func_0011F03C(void) {
    func_0011EF90(1, 0xFFFF);
}

void func_0011F05C(void) {
    func_0011EF90(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F07C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F0FC);

void ***func_0011F188(void ***arg0, void *arg1, void **arg2) {
    void **temp_s0;
    void *temp_a1;
    void *temp_v1;

    temp_v1 = *arg2;
    temp_s0 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_v1, void **, 0);
    *temp_s0 = temp_a1;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 0), void ***, 4) = temp_s0;
    scePaf_7EC15225(temp_v1, temp_a1);
    *arg0 = temp_s0;
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) - 1);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F1F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F22C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2F3C4ED2);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F29C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F3DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F470);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F4EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F54C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_952CE8AF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F6A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011F970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011FC4C);

s32 func_0011FCF0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x38) * (3 - M2C_FIELD(arg0, s32 *, 0x1C));
}

void func_0011FD0C(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011FD14);

void func_0011FD94(void) {
    func_0011FD14(1, 0xFFFF);
}

void func_0011FDB4(void) {
    func_0011FD14(0, 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011FDD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011FE34);

void func_0011FE94(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

void func_0011FEB0(void *arg0) {
    sceKernelDeleteSema(M2C_FIELD(arg0, s32 *, 0x24));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011FECC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0011FF68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001200E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001202CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccStrlenUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccStrlenUTF8);

u32 sceCccIsValidUCS4(s32 arg0) {
    return (u32) ~arg0 >> 0x1F;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012037C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012038C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001203A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccDecodeUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccEncodeUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccDecodeUTF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00120544);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccUTF8toUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccUTF16toUTF8);

s32 func_001207C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_001A7DD8;
    D_001A7DD8 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccSetTable);

void scePaf_8D3EAEA3(s32 arg0) {
    D_001A7DDC = arg0;
}

void scePaf_C8E7B03F(s32 arg0) {
    D_001A7DE0 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D4DAB044);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_15939BB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8D736C8F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccStrlenSJIS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012091C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001209AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00120A1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccJIStoUCS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00120B44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00120C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccSJIStoUTF16);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccUTF16toSJIS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00120EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceCccDecodeSJIS);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001211B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001212D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B9383A25);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F93D4E1F);

s32 func_00121740(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012177C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001217B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001217E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121858);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012196C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001219A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001219D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121A40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121A74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121AA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121ADC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121B0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121B74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121BA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121BD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121C08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121C38);

s32 func_00121C68(void *arg0) {
    func_0012446C(M2C_FIELD(arg0, s32 *, 0x7C));
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121C88);

s32 func_00121CB0(void) {
    return 1;
}

s32 func_00121CB8(void) {
    return 0;
}

s32 func_00121CC0(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD88)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121CEC);

s32 func_00121D20(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD90)(temp_a0);
    return 0;
}

s32 func_00121D4C(void *arg0) {
    void *temp_a0;

    temp_a0 = *M2C_FIELD(arg0, void ***, 0x7C);
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xD98)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_60CBB63F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D6CDB3BB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00121E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012203C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001220F8);

s32 func_00122158(s32 arg0) {
    return (u32) ((arg0 + 0x7F) & 0xFF) < 0x6FU;
}

s32 func_00122168(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return ((u32) ((temp_a0 - 0x40) & 0xFF) < 0xBDU) & (temp_a0 != 0x7F);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122188);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D3A4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D3C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_54AB18DD);

void func_00122458(void) {
    sceCccSetTable();
}

void func_00122474(void) {
    scePaf_D4DAB044();
}

void func_00122490(s32 arg0) {
    func_0012038C(arg0);
}

void func_001224AC(s32 arg0) {
    func_001209AC(arg0 & 0xFFFF);
}

void func_001224C8(s32 arg0) {
    func_001225DC(arg0 & 0xFFFF);
}

void func_001224E4(s32 arg0) {
    func_001234E8(arg0 & 0xFFFF);
}

void func_00122500(s32 arg0) {
    func_00122D3C(arg0 & 0xFFFF);
}

void func_0012251C(s32 arg0) {
    func_00120EB0(arg0 & 0xFFFF);
}

void func_00122538(s32 arg0) {
    func_00122A2C(arg0 & 0xFFFF);
}

void func_00122554(s32 arg0) {
    func_0012398C(arg0 & 0xFFFF);
}

void func_00122570(s32 arg0) {
    func_001231C8(arg0 & 0xFFFF);
}

void func_0012258C(s32 arg0, s32 arg1) {
    D_001A7E0C = arg0;
    D_001A7E08 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001225A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001225DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001226C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012273C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001227F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001228D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122A3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122B30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122BE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122C18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122CC4);

void func_00122CEC(s32 arg0, s32 arg1) {
    D_001A7E18 = arg0;
    D_001A7E14 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122D00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122D3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122DA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122E48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00122F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012306C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012310C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001231C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001231D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123254);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001232C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001233B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123460);

void func_00123498(s32 arg0, s32 arg1) {
    D_001A7E24 = arg0;
    D_001A7E20 = arg1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001234AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001234E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012360C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012369C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001238D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012398C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012399C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123A18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123A9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123B4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123B84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123C34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123C6C);

void func_00123C90(s32 arg0, M2C_UNK arg1) {
    func_00123C6C(0xD, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123CB4);

void func_00123CC8(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123E60(0xD, arg0, arg1, arg2);
}

void func_00123CF4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123F14(0xD, arg0, arg1, arg2);
}

void func_00123D20(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_00123FF8(0xD, arg0, arg1, arg2);
}

void func_00123D4C(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_001240AC(0xD, arg0, arg1, arg2);
}

void func_00123D78(s32 arg0, s32 arg1) {
    func_00123C6C(0xE, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123D9C);

void func_00123DB0(s32 arg0, s32 arg1, s32 arg2) {
    func_00123E60(0xE, arg0, arg1, arg2);
}

void func_00123DDC(s32 arg0, s32 arg1, s32 arg2) {
    func_00123F14(0xE, arg0, arg1, arg2);
}

void func_00123E08(s32 arg0, s32 arg1, s32 arg2) {
    func_00123FF8(0xE, arg0, arg1, arg2);
}

void func_00123E34(s32 arg0, s32 arg1, s32 arg2) {
    func_001240AC(0xE, arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123F14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00123FF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001240AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124198);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124250);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001242A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001242D4);

s32 func_0012441C(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_v0 == 0) {

    } else {
        func_001245FC(temp_v0);
    }
    M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK, void *), 8)(0, arg0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012446C);

s32 func_0012448C(void **arg0) {
    void *temp_a0;

    temp_a0 = *arg0;
    M2C_FIELD(temp_a0, M2C_UNK (**)(void *), 0xF8)(temp_a0);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001244B4);

s32 func_001244E0(void) {
    return 0;
}

s32 func_001244E8(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001244F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001245FC);

s32 func_00124648(void) {
    return 0;
}

s32 func_00124650(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124658);

s32 func_001247E4(s32 arg0) {
    func_00124830(arg0 + 0x100);
    return 0;
}

s32 func_00124804(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012480C);

s32 func_00124828(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001248A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124910);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124A94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124B74);

s32 func_00124BD8(void) {
    return 0;
}

s32 func_00124BE0(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0xDBC);
    M2C_FIELD(temp_s0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0) = 0;
    M2C_FIELD(temp_s0, s16 *, 2) = 0;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    M2C_FIELD(temp_s0, s16 *, 6) = 0;
    M2C_FIELD(temp_s0, s16 *, 8) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x28) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x30) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x32) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x34) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x36) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3A) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x3E) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x40) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x42) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x1C) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0xC) = 0;
    *M2C_FIELD(temp_s0, s8 **, 0x24) = 0;
    func_0012592C((s32) temp_s0, 0x108, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    func_0012592C((s32) temp_s0, 0x1A, 0, 0, (s32) (M2C_FIELD(arg0, void **, 0xDBC) + 0x3C4));
    return 0;
}

s32 func_00124CA4(void *arg0, s16 arg1) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x111, (s32) arg1, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124CD8(void) {
    return 0;
}

s32 func_00124CE0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 7;
}

s32 func_00124D28(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x109, 0, temp_a0 + 0x3C4);
    return M2C_FIELD(M2C_FIELD(arg0, s32 *, 0xDBC), s16 *, 0x3A) != 1;
}

s32 func_00124D70(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x106, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124DA0(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x107, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124DD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00124EB8);

s32 func_00124F0C(void) {
    return 0;
}

s32 func_00124F14(void) {
    return 0;
}

s32 func_00124F1C(void) {
    return 0;
}

s32 func_00124F24(void) {
    return 0;
}

s32 func_00124F2C(void) {
    return 0;
}

s32 func_00124F34(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x100, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124F64(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x101, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124F94(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x10B, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124FC4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x10C, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00124FF4(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x104, 0, temp_a0 + 0x3C4);
    return 0;
}

s32 func_00125024(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xDBC);
    func_0012592C(temp_a0, 0x109, 0x105, 0, temp_a0 + 0x3C4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125054);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001250F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001252D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012549C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D43C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012552C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001257F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012592C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012597C);

s32 func_001259CC(s32 arg0) {
    return (M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xE0)(D_001A7EE0, arg0) == 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125A04);

s32 func_00125A9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s4;

    temp_s4 = M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xEC)(D_001A7EE0, arg0);
    M2C_FIELD(D_001A7EE0, M2C_UNK (**)(void *, s32, s32, s32, M2C_UNK), 0xE4)(D_001A7EE0, arg0, arg1, arg2, 1);
    return M2C_FIELD(D_001A7EE0, s32 (**)(void *, s32), 0xEC)(D_001A7EE0, arg0) - temp_s4;
}

s32 func_00125B30(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s2;
    s32 var_v1;

    var_s2 = 0;
    temp_v0 = sceIoOpen(arg0, 1, 0);
    if (temp_v0 >= 0) {
        var_s2 = sceIoRead(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    var_v1 = 0;
    if (var_s2 < arg2) {
        scePaf_6829D7AF(arg1, 0, arg2);
        var_v1 = -1;
    }
    return var_v1;
}

s32 func_00125BD0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    temp_v0 = sceIoOpen(arg0, 0x602, 0x180);
    var_s0 = 0;
    if (temp_v0 >= 0) {
        var_s0 = sceIoWrite(temp_v0, arg1, arg2);
        sceIoClose(temp_v0);
    }
    return (var_s0 >= arg2) ? 0 : -1;
}

s16 func_00125C48(u8 *arg0) {
    s16 var_a1;
    u8 *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    if (*var_a0 != 0) {
        do {
            var_a0 += 1;
            var_a1 += 1;
        } while (*var_a0 != 0);
    }
    return var_a1;
}

void func_00125C70(s32 arg0, s32 arg1) {
    func_00125C8C(arg0, arg1, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125C8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125CC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125D10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125D58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125D78);

void func_00125DF4(s32 arg0, M2C_UNK arg1) {
    func_00125D78(4, arg0, arg1);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125EE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00125FC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126028);

void func_00126264(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_00126028(2, (s32) arg0, (s32) arg1, arg2, arg3);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012629C);

void func_001263EC(s16 arg0, s32 arg1, s16 arg2, s32 arg3) {
    func_0012629C((s32) arg0, arg1, (s32) arg2, 0, arg3);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001264DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126530);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001266D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126944);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012698C);

s32 func_001269B8(void) {
    func_00127218();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001269D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126C1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126C5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00126CA4);

void func_001271C8(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001271D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012729C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127430);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001275D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127880);

s32 func_001278D0(void) {
    return ~func_00127880();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001278F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001279F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127AFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00127B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001286B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001288DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128A2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128BD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128CDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128D4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128DD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D4BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D4CC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D4EC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D5F4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D5F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D600);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D608);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D618);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019D658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00128F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129358);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129414);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012946C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001294C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001295FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129714);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129794);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012980C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012989C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001299B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129A24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129B3C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129EC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129F5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00129F94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A3FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A474);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A4D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A5E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A710);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A770);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A7F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012A814);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AA04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AB70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012ABCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AC68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012ACC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AD20);

s32 func_0012AD7C(void) {
    s32 temp_v0;

    temp_v0 = func_00127568((s32) &D_001E0ECC, (s32) &D_001E8ED8, M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s32 *, 0x14), (s32) (s16) (M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s16 *, 0x26) * (M2C_FIELD(M2C_FIELD(&D_001E0ECC, void **, 0x14), s16 *, 0x2C) + 1)));
    M2C_FIELD(&D_001E0ECC, s32 *, 0xCC) = temp_v0;
    return (temp_v0 != 0) ? 0 : -1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012ADE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012AFC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B24C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B4FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B5BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B618);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B684);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B73C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012B8EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012BBB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012BC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012BD08);

s32 func_0012BD78(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_0012BC60() != -1) {
        var_s0 = 0;
        func_0012B4FC(0, (s32) &D_001E504A);
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012BDBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012BE70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012BFA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C178);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C1CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C2F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C45C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C7A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012C87C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012CC84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012CE20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012CF74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012CFF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D0DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D18C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D25C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D2F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D3C4);

void func_0012D424(s32 arg0) {
    func_00125D58(arg0, 0x24);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D440);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D5DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012D93C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012DB04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012DB64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012DC34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012DD80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012DE8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012DFC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012E16C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012E36C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012E3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012E84C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012EF90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012F228);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012F398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012FC64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012FCAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012FE2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0012FFA8);

void func_0012FFFC(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 3;
    func_001300B8(0, (s32) arg0, (s32) arg1, (s32) arg2);
}

void func_00130038(s16 arg0, s16 arg1, s16 arg2) {
    D_001E4FC6 = 7;
    func_001300B8(1, (s32) arg0, (s32) arg1, (s32) arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00130074);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001300B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001302E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013047C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00130580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00130900);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00130CA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00131008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001310BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00131434);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00131668);

void func_001317F0(s32 arg0) {
    func_0013180C(arg0, 0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013180C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001318A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00131FC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013232C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001324F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001327F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013288C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132954);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132A74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132B68);

s32 func_00132C74(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;

    temp_a0 = arg0 & 0xFF;
    var_a0 = 0;
    if ((((temp_a0 == 0xA1) | (temp_a0 == 0xA4)) != 0) || (((temp_a0 == 0x2E) | (temp_a0 == 0x2C)) != 0)) {
        var_a0 = 1;
    }
    return var_a0;
}

s32 func_00132CBC(u8 *arg0, s32 arg1) {
    s32 var_a1;
    s32 var_v1;
    u8 *var_a0;
    u8 temp_v0;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (var_a1 >= 0) {
        do {
            temp_v0 = *var_a0;
            var_a1 -= 1;
            var_a0 += 1;
            var_v1 = (var_v1 + temp_v0) & 0xFF;
        } while (var_a1 >= 0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132CE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00132DF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133088);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013319C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001333D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133664);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001338A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00133DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013403C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134300);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001344DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013450C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001345FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013463C);

void func_00134730(void) {
    func_00125D58((s32) &D_001E208C, 0x14);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134794);

s32 func_001347E0(void) {
    s32 temp_v0;

    func_00134A14();
    temp_v0 = func_00134818();
    func_00134B04(temp_v0);
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134818);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134A14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134C28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134D40);

void func_00134E94(s16 arg0) {
    func_00134754();
    if (arg0 == 0) {
        func_00134ED8();
    } else {
        func_00134FFC();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134ED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00134FFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013510C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013517C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001351F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00135330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00135BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00136484);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00136564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013696C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00136CE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00136D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013711C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137190);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001372CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001373FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137578);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001375B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DAF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DAF8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DB2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DB64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DB70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DBA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DBB4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DBD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DBE4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DBEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DC00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DC10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DC1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DC24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DC44);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019DE38);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019E02C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019E328);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019E398);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019E3B8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019E414);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019EE58);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_0019F3B0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0614);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B10);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B3C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0B78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001375FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001376E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137724);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137800);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013791C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137B80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137D1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137D88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00137F9C);

void func_001380A8(void) {
    M2C_FIELD(D_001E2988, u16 *, 8) = (u16) M2C_FIELD(D_001E2988, u16 *, 4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001380BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001381A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013821C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138250);

void func_00138298(void) {
    D_001E7C64 = 0;
}

void func_001382A4(void) {
    func_0013D5FC();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001382C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001382F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138378);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013846C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001384C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138528);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138568);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001385A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138610);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001386A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138788);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001387EC);

s32 func_0013882C(void) {
    return ((D_001E50B0 ^ 2) == 0) ? 0 : -1;
}

void func_00138844(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013884C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138908);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013893C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001389BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138A8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138AE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138BD8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138C84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138D60);

void func_00138E10(void) {
    func_00138F54();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138E2C);

void func_00138EC8(void) {
    if (D_001E279A != -1) {
        if (D_001E279A != -2) {
            func_001391B8();
        } else {
            func_00138FA8();
        }
    } else {
        func_0013918C();
    }
}

void func_00138F20(void) {
    if (func_00139170() != 0) {

    } else {
        func_00138F54();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138FA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00138FCC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139170);

void func_0013918C(void) {
    func_0013934C();
    func_00139438();
    func_001393F4();
}

void func_001391B8(void) {
    func_0013934C();
    func_00138FCC();
    func_001393F4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001391E4);

void func_00139280(s16 arg0) {
    D_001E50C0 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013928C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001392D0);

void func_00139328(void) {
    func_00139A60();
    func_00139B10();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013934C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001393F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013948C);

void func_00139518(void) {
    func_00139B6C();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139534);

void func_001395D8(void) {
    func_00139534(0);
}

void func_001395F4(void) {
    func_00139534(1);
}

void func_00139610(s16 arg0) {
    func_0013B6E8(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013967C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001396B4);

void func_001396EC(void) {
    func_0013B844(0);
}

void func_00139708(void) {
    func_0013B844(1);
}

void func_00139724(void) {
    void *temp_s0;

    temp_s0 = D_001E2988;
    M2C_FIELD(temp_s0, s16 *, 0x28) = func_00139758(M2C_FIELD(temp_s0, s32 *, 0x2C), (s32) M2C_FIELD(temp_s0, s16 *, 4));
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139758);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001399A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139A60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139B10);

void func_00139B5C(s16 arg0) {
    M2C_FIELD(D_001E2988, s16 *, 0x3C) = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139B6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139D90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139DE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139E6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00139F50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A01C);

void func_0013A0E8(s16 arg0) {
    func_0013A10C(arg0);
    func_00143E94();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A10C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A208);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A368);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A430);

void func_0013A494(void) {
    if (func_0013A430((s32) M2C_FIELD(D_001E2988, s16 *, 4)) != -1) {
        func_0013EDA4();
        func_00143E94();
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A4FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A62C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A8A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013A904);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013AAB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013AAF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013AB38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013AC60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013AD74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013AF9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B448);

void func_0013B558(void) {
    func_0013B448(0);
}

void func_0013B574(void) {
    func_0013B448(1);
}

void func_0013B590(void) {
    func_0013FBEC(0);
    func_00143E94();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B5B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B6E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013B9F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BB30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BB8C);

void func_0013BBCC(void) {
    func_00139A60();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BBE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BC44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BC68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BC8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013BE14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013C000);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013C1E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013C268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013C4B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013C53C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013C768);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013CB34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013CB7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013CE14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013CF4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013CFB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013D028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013D08C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013D4F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013D5FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013D6AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013DB68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013DDEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013DE7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013DEFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013DF7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E280);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E4AC);

void func_0013E4D4(void) {
}

void func_0013E4DC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E4E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E558);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E5C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013E744);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013EDA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013F308);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013F364);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013F77C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013FA50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013FA84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013FBEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013FE9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0013FF34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140028);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014057C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001406C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140780);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001407C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001407E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014094C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140B58);

s16 func_00140B8C(s32 arg0) {
    s16 var_a0;

    var_a0 = arg0 & 0xFF;
    if ((u32) (var_a0 - 0x61) < 0x1AU) {
        var_a0 -= 0x20;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140BB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140C0C);

s32 func_00140C88(s32 arg0) {
    s32 temp_a0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v1 = 1;
    if ((u32) ((temp_a0 + 0x4A) & 0xFF) >= 0xFU) {
        var_v1 = func_00140CC8(temp_a0);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140CC8);

s32 func_00140CD8(s16 arg0) {
    s32 var_a1;

    var_a1 = 1;
    if (arg0 != 0xDE) {
        var_a1 = arg0 == 0xDF;
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140CF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140DAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140DD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00140E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014107C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141094);

void func_00141234(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014123C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001413A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141528);

void func_001415A8(s32 arg0, s16 arg1, s32 arg2) {
    func_00141454(arg0, (s32) arg1, arg2);
}

s32 func_001415C4(s32 arg0, s16 arg1, s32 arg2) {
    return func_001416CC(arg0, (s32) arg1, (s32) &D_001E7BE8, arg2) == 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001415F4);

void func_00141630(s32 arg0, s16 arg1, s32 arg2) {
    func_001415C4(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014164C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001416CC);

void func_00141D14(void) {
    func_001433F0();
}

void func_00141D30(void) {
    func_00143490();
}

void func_00141D4C(void) {
    func_001435A0();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141D68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141EF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141F58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00141F84);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00142114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001422AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001424A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001424C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00142580);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001425C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00142DC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00142F70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001430C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143140);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014321C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143268);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143370);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001433F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143490);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001435A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143808);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001438F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143E38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00143E94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014412C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001443A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014440C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00144494);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00144540);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001445D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001446A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00144778);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001447FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00144864);

void func_001448F8(s32 arg0) {
    func_00144924();
    func_00147548(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00144924);

void func_001449CC(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    func_001494FC(M2C_FIELD(temp_s0, s32 *, 0x3A74));
    M2C_FIELD(temp_s0, s32 *, 0x3A74) = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001449F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00144ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00145178);

void func_001454B4(void) {
    func_00147650();
}

void func_001454D0(s32 arg0) {
    func_00147548(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001454EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001455E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00145668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001457B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001458D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00145FAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001461FC);

void func_0014632C(s32 arg0, s32 arg1, s32 arg2) {
    func_0014634C(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014634C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001465D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001466C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00146874);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00146A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00146B40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147548);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014758C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001475DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147650);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014766C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001476F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147790);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147810);

void func_001478D0(void *arg0) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_v0 == 0) {

    } else {
        func_00148634(M2C_FIELD(arg0, s32 *, 0xC), temp_v0);
        func_0014792C((s32) arg0, 0, 0, 0, 0, 0, 0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014792C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147AC0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0DAC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0DE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0DEC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0E20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0E34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0F2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0F64);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0F78);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A0FE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A100C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1014);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1020);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A102C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00147FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001480FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014810C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148114);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014811C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001481F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148564);

s32 func_0014861C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 8) & 0xF) + M2C_FIELD(arg0, u8 *, 6) + 9;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148634);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014869C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001486CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148A0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00148C60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001491F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149350);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001494FC);

u16 func_00149554(void *arg0) {
    u16 var_a1;
    void *temp_a0;

    var_a1 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) != -1) {
        var_a1 = M2C_FIELD(arg0, u16 *, 0x1CB8);
    } else {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        if (temp_a0 != NULL) {
            var_a1 = M2C_FIELD(temp_a0, u16 *, 0xE);
        }
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149584);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149638);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149674);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001496FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014971C);

s32 func_001497DC(s32 arg0, s32 arg1) {
    return arg0 + (arg1 * 8) + 4;
}

s32 func_001497EC(s32 *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = *arg0;
    return (temp_v1 == 0) ? 0 : (temp_v1 + arg1);
}

void func_001497FC(s32 arg0, s32 arg1, s32 arg2) {
    func_00149960(arg0, arg1, 8, arg2);
}

s32 func_0014981C(void *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 (**)(s32, M2C_UNK), 0xC)(M2C_FIELD(arg0, s32 *, 0), 1);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014984C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149880);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149914);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149960);

void func_0014999C(s32 arg0, s32 arg1) {
    func_00149960(arg0, 0, 0x1C, arg1);
}

void func_001499C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00149960(arg0, arg1, 8, arg2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001499E0);

s32 func_00149A44(s32 arg0, s32 arg1, s32 arg2) {
    return func_00149880(arg0, arg1, 0x41, arg2) != 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149B14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149C0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149D24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149E38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00149F10);

void func_0014A000(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1F80) = 0;
    func_00149F10((s32) arg0, arg1, 0);
}

void func_0014A020(void *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x1F80) + 1;
    M2C_FIELD(arg0, s32 *, 0x1F80) = temp_a2;
    func_00149F10((s32) arg0, arg1, temp_a2);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A044);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A330);

s32 func_0014A38C(s8 *arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (*arg0 != 0) {
        do {
            var_a1 += 1;
        } while (*(arg0 + var_a1) != 0);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A3B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A3E8);

u8 *func_0014A45C(u8 *arg0, u8 *arg1) {
    u8 *var_a1;
    u8 *var_v1;
    u8 temp_v0;

    var_a1 = arg1;
    var_v1 = arg0;
    do {
        temp_v0 = *var_a1;
        var_a1 += 1;
        *var_v1 = temp_v0;
        var_v1 += 1;
    } while (temp_v0 != 0);
    return arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A47C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A4A4);

u32 func_0014A4E8(void *arg0) {
    u16 temp_a3;
    u16 temp_v1;
    u16 var_t0;
    u32 var_a1;
    u32 var_t1;
    void *var_a0;

    temp_a3 = M2C_FIELD(arg0, u16 *, 0x3C60);
    var_t0 = 0;
    var_a0 = arg0 + 0x3C64;
    var_t1 = 0;
    var_a1 = 0;
    if (temp_a3 != 0) {
        do {
            temp_v1 = M2C_FIELD(var_a0, u16 *, 0x82);
            var_a0 += 0x84;
            if (var_t0 < temp_v1) {
                var_t0 = temp_v1;
                var_t1 = var_a1;
            }
            var_a1 = (var_a1 + 1) & 0xFFFF;
        } while (var_a1 < temp_a3);
    }
    return var_t1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A534);

s32 func_0014A56C(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 >= 4) {
        var_v1 = func_0014A614(arg0, arg1, arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A5A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A668);

s32 func_0014A6D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_v1;

    var_v1 = 0;
    if (arg1 == arg3) {
        var_v1 = func_0014A3E8(arg0, arg2, arg1) == 0;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A70C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014A820);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014ABDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014ACD8);

void scePaf_A08B0F31(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B7E6052B);

void scePaf_F13EBB78(void) {
    scePaf_5FAC9869();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4E67BB08);

void scePaf_B3D2C3BB(void) {
    scePaf_545FE2DA();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014AE78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014AEB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_5FAC9869);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3586BE05);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8FC65EB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CE699963);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_545FE2DA);

void scePaf_26DE971C(void) {
    if (D_001ABCF8 == 0) {
        func_0014AEB0();
    }
    func_0014B9FC(D_001ABCF8);
}

s32 func_0014B198(void) {
    return D_001ABCF8;
}

void func_0014B1A4(s32 arg0, s32 arg1) {
    if (D_001ABCF8 != 0) {

    } else {
        func_0014AEB0();
    }
    func_0014BB0C(D_001ABCF8, arg0, arg1);
}

s32 scePaf_40C95283(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014B20C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014B244);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FCB4E053);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2FA0EDDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_29BAA830);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014B428);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7EC15225);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_613E9AA2);

void func_0014B538(s32 arg0, s32 arg1) {
    if (D_001ABCFC != 0) {

    } else {
        func_0014B244();
    }
    func_0014BB0C(D_001ABCFC, arg0, arg1);
}

s32 scePaf_B61E88F2(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6D491648);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8A861692);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3E203AEB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014B760);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9948CDB3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CC32A570);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014B9FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C89D5A3B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014BB0C);

s32 scePaf_F84A99C8(void) {
    sceKernelResumeDispatchThread(sceKernelSuspendDispatchThread());
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014BBD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014BC14);

void func_0014BCD8(s8 *arg0) {
    *arg0 = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014BCE0);

s32 func_0014BE68(s32 arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return D_001ABD08;
    }
    if ((D_001ABD04 == 0) || (arg0 != D_001ABD04)) {
        return -1;
    }
    temp_v1 = D_001ABD08;
    D_001ABD04 = 0;
    D_001ABD08 = temp_v1 + arg0;
    return temp_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014BEB0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014BF14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014C220);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014C6C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014C808);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014C920);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014CB80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014CDBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014CDE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014CE08);

s32 func_0014D0E0(void) {
    func_0014C808(D_001ABD00);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D104);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1354);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1454);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A14E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A15E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A16E4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1758);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A17D0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A17FC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A181C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D314);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_60DECA7E);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1D5D9A68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4B1A374C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_902515FB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D504);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D564);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FEAFC77A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D5DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_44AAF96C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D6FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D754);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9D0192FD);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014D870);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_296897BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DEDF238F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_44A0BCE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7BED034E);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1980);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_11EF5210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_302F609D);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014DD34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014DD80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_B3D58D25);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014DE90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F1B52E86);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_71B4AC50);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3FBD9639);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F95EA3F1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6BA9C299);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6829D7AF);

void scePaf_77EB25F5(s32 arg0, M2C_UNK arg1) {
    scePaf_6BA9C299(arg1, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_99A5CD38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014E290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014E2B4);

void func_0014E2FC(void *arg0, s32 arg1) {
    if (arg1 < 0x100) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_71712601);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_809A4F83);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_71460F7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_6F092DF6);

void func_0014E438(void) {
    scePaf_6829D7AF(&D_001AF50C, 0, 0x2020);
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A19D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ABBBB335);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014E6A0);

s32 scePaf_9C483594(void) {
    return 0;
}

s32 func_0014E7FC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_503BA324);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F1552447);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_83944053);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2FA84441);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_C9831AFF);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_BFE9E90B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9870A25B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014EB5C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_07A5F495);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_84BD418F);

void func_0014EC0C(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
}

s32 scePaf_680513D9(void *arg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = __builtin_allegrex_ext(M2C_FIELD(arg0, s32 *, 8), 1, 1);
    }
    return var_v1;
}

s32 scePaf_0B4C0DB6(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0) != 0) && (M2C_FIELD(arg0, s32 *, 4) >= 0)) {
        var_v1 = M2C_FIELD(arg0, s32 *, 8) & 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014EC94);

void scePaf_6C234A6A(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

void scePaf_37A98AE9(s32 arg0) {
    scePaf_FBA47E77(arg0, 0, 0xA);
}

s32 scePaf_B4E3A16C(s32 arg0) {
    return __builtin_allegrex_max(arg0, -arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_4370175A);

void scePaf_A82E3C19(s32 arg0) {
    D_001A4BF4 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014ED3C);

void scePaf_10B901E7(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((((arg0 == 0) | (arg3 == 0)) != 0) || (((arg1 == 0) | (arg2 == 0)) != 0)) {

    } else {
        func_0014ED3C(arg0, arg2, arg3, 0, arg1 - 1);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3DD2A27B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014F078);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_26168DD3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_993E9FDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_66FE90D7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_ED2B47FA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_980228BA);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014F3A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014F444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CA79D58B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_626D68A1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_F0B4CAE7);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DEB2D1C9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FF2F98C6);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_1E088F41);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_77D981F5);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014F7AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_3188E7DB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_7CD438D9);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_DC38941B);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FBA47E77);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2394D451);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014FD1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_51AAAAF4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_2FDC80B3);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FCFAA39F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_45D851D1);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0014FF8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_FD4C9F47);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00150030);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_54C0DD23);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_CB2198AB);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00150278);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_D121F409);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00150318);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001503EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001504C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_49A81B18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00150554);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_8F12B63A);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001506B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", scePaf_9F10613F);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015081C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00150844);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001508C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00150920);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1A2C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1A34);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1C18);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1C1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1C20);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1C24);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1C28);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1C4C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001512CC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151B54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151B8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151D28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151D6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151DB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151DE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151E1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151E6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151EA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1E54);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1E60);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1E70);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1E80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00151EE4);

void func_00152108(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x10) - 1, M2C_FIELD(arg0, s32 *, 0x10) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00152A7C();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015215C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001526A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152A7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152CB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152D54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152E28);

s32 func_00152E80(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x50);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152E8C);

s32 func_00152EC0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x40);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00152ED4);

s32 func_00152F40(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(M2C_FIELD(arg0, s32 *, 0x14) & 8) ? 0 : (arg0 + 0x100);
    }
    return var_v0;
}

void func_00152F64(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) ((M2C_FIELD(arg0, s32 *, 0x90) & ~arg1) | (arg1 & arg2));
    }
}

s32 func_00152F88(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x90);
    }
    return var_v0;
}

void func_00152F9C(void *arg0, s32 arg1, s32 arg2) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) ((M2C_FIELD(arg0, s32 *, 0x94) & ~arg1) | (arg1 & arg2));
    }
}

s32 func_00152FC0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x94);
    }
    return var_v0;
}

s32 func_00152FD4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(M2C_FIELD(arg0, s32 *, 0x14) & 1) ? 0 : (arg0 + 0x98);
    }
    return var_v0;
}

s32 func_00152FF8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(M2C_FIELD(arg0, s32 *, 0x14) & 2) ? 0 : (arg0 + 0xB0);
    }
    return var_v0;
}

s32 func_0015301C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(M2C_FIELD(arg0, s32 *, 0x14) & 4) ? 0 : (arg0 + 0xF0);
    }
    return var_v0;
}

s32 func_00153040(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x2C);
    }
    return var_v0;
}

s32 func_00153054(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x30);
    }
    return var_v0;
}

s32 func_00153068(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x34);
    }
    return var_v0;
}

s32 func_0015307C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    return var_v0;
}

s32 func_00153090(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001530A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001530D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153104);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153134);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153164);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015322C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001532C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015335C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001533F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015348C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1EDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1EE8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1F24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001535F8);

void func_0015383C(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00153FA4();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153890);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153B18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00153FA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154020);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015406C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001541D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015432C);

s32 func_00154584(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154598);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154718);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001549BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154AD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154D0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154D90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154E14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154F30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00154FF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001550C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155100);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155138);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001551DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015529C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001553B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001554C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001556A4);

void func_0015573C(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00155938();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

void *func_00155790(void *arg0) {
    void *var_v1;

    var_v1 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001557B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155938);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001559EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155A78);

s32 func_00155A98(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

s32 func_00155AAC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_v0;
}

s32 func_00155AC0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155AD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155B04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155BC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155C2C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155D04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155D20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155DFC);

void func_00155F34(s32 arg0) {
    D_001D7798 = arg0;
    D_001D77A0 = -1;
    D_001D779C = 0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155F54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00155FD0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00156060);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015615C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001562A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001563B8);

void func_001564A0(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_00156A00();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001564F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001566A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00156A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00156A74);

s32 func_00156A94(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_a5;

    var_a5 = 0;
    if ((arg0 != NULL) && (arg2 < M2C_FIELD(arg0, s32 *, 0x3C))) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 8);
        var_a5 = func_00157718(M2C_FIELD(((arg2 * 4) + arg0), s32 *, 0x1C), (temp_v0 != 0) ? temp_v0 : arg1, (s32) arg0, arg3);
    }
    return var_a5;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00156AE4);

s32 func_00156D54(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

s32 func_00156D68(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x3C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00156D7C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00156DA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001570C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001572EC);

void func_001573F8(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 4) - 1, M2C_FIELD(arg0, s32 *, 4) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001576E8();
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157550);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001576E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157718);

void func_001578AC(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        func_00157950();
    }
}

s32 func_001578CC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001578E0);

s32 func_0015792C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = !(M2C_FIELD(arg0, s32 *, 8) & 1) ? 0 : (arg0 + 0x2C);
    }
    return var_v0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FC8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FCC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FD0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FD4);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FD8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FDC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FE0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A1FF0);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A200C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2030);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2040);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A209C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157A38);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157B30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157C44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157D40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157DE4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00157F90);

void func_00158018(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001582AC();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015806C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158158);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001582AC);

void func_001582DC(void *arg0) {
    if (arg0 != NULL) {
        func_0015B9B0(M2C_FIELD(arg0, s32 *, 0x10));
    }
}

void func_001582FC(void *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
        func_0015BEC4(temp_s0);
        func_00159C00(func_0015ACAC(temp_s0));
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158338);

s32 func_00158358(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

void func_0015836C(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
        if (arg1 != temp_v0) {
            func_0015A5E4(temp_v0);
            M2C_FIELD(arg0, s32 *, 0x10) = func_0015A630(arg1, arg2);
        }
    }
}

s32 func_001583CC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_v0;
}

s32 func_001583E0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = func_0015B334(M2C_FIELD(arg0, s32 *, 0x10));
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158404);

void func_001584C8(void *arg0) {
    s32 temp_v0;

    if ((arg0 == NULL) || (temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1, M2C_FIELD(arg0, s32 *, 0x14) = temp_v0, (temp_v0 != 0))) {

    } else {
        func_001587E4();
        func_0015A118(arg0);
        func_00151E1C(arg0);
    }
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015851C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015862C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001587E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158A60);

s32 func_00158A80(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158A94);

s32 func_00158AAC(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x2C);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158AB8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158AC8);

void func_00158ADC(void *arg0, s32 arg1) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
        if (arg1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (temp_v0 | 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = __builtin_allegrex_ins(temp_v0, 0, 0, 1);
    }
}

s32 func_00158B08(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = (M2C_FIELD(arg0, s32 *, 0x18) ^ 1) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158B24);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158B48);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158B70);

s32 func_00158B84(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    }
    return var_v0;
}

s32 func_00158B98(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158BAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158BDC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158C0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00158F78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001591AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159390);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015941C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159454);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001594B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015952C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159590);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001595F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159658);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001596BC);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A20FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015977C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159818);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015986C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001599D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159A00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159A6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159B20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159C00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159C70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159D14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159EA8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00159F98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A0E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A118);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A150);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A1C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A1E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A210);

void func_0015A228(s32 arg0) {
    func_0015A26C(arg0, 0);
}

void func_0015A244(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 != NULL) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
    }
    func_0015A26C(arg0, var_v0);
}

void func_0015A26C(s32 arg0, M2C_UNK arg1) {
    func_0015A2D8(arg1, arg0);
}

void func_0015A290(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
    }
}

void func_0015A2A0(void **arg0) {
    void *temp_v0;
    void *var_v1;

    if (arg0 != NULL) {
        var_v1 = *arg0;
        if (var_v1 != NULL) {
            do {
                temp_v0 = M2C_FIELD(var_v1, void **, 0);
                M2C_FIELD(var_v1, s32 *, 4) = 0;
                var_v1 = temp_v0;
            } while (temp_v0 != NULL);
        }
        *arg0 = NULL;
    }
}

void func_0015A2D0(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A2D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A330);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A38C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A3D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A404);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A438);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A46C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A494);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2120);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A4BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A5E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A630);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A7B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015A8AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015AB20);

s32 func_0015AC44(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 8);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015AC58);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015ACAC);

s32 func_0015ACD0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_v0;
}

s32 func_0015ACE4(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015ACF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015AD70);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015ADE8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015AE60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015AED8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B154);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B334);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B350);

s32 func_0015B368(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x30);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B374);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B384);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B398);

s32 func_0015B3C8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = (((u32) M2C_FIELD(arg0, u32 *, 4) >> 7) ^ 1) & 1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B3E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B3F8);

void func_0015B40C(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x44) = arg1;
    }
}

s32 func_0015B41C(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x44);
    }
    return var_v0;
}

void func_0015B430(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
    }
}

s32 func_0015B440(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x48);
    }
    return var_v0;
}

void func_0015B454(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}

s32 func_0015B464(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    }
    return var_v0;
}

void func_0015B478(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    }
}

s32 func_0015B488(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B49C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B4AC);

s32 func_0015B4C0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x58);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B4D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B508);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B608);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B688);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B720);

s32 func_0015B73C(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x64);
}

void func_0015B748(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    }
}

s32 func_0015B758(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x70);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B764);

s32 func_0015B77C(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x74);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B788);

s32 func_0015B7A0(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x7C);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B7AC);

s32 func_0015B7C4(s32 arg0) {
    return (arg0 == 0) ? 0 : (arg0 + 0x84);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B7D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015B9B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015BB14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015BCC0);

s32 func_0015BEB4(void) {
    return 1;
}

void func_0015BEBC(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015BEC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015BEF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C2D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C410);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C748);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C824);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C854);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C8A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C92C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015C9A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015CA44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015CAE0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015CB78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015CC00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015CD78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015CE68);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D1E4);

void *func_0015D298(u8 *arg0, u8 *arg1) {
    *arg1 = *arg0;
    return arg0 + 1;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D2A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D2D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D428);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D668);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D88C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D924);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015D9B0);

s32 func_0015D9E8(void *arg0, s32 arg1) {
    s32 var_a2;
    void *temp_a3;
    void *var_a0;

    temp_a3 = arg0 + M2C_FIELD(arg0, s32 *, 4);
    var_a0 = arg0 + M2C_FIELD(arg0, s32 *, 8);
    var_a2 = 0;
    if ((u32) var_a0 < (u32) temp_a3) {
        do {
            if ((arg1 == 0) || (M2C_FIELD(var_a0, u16 *, 0) == arg1)) {
                var_a2 += 1;
            }
            var_a0 += M2C_FIELD(var_a0, s32 *, 4);
        } while ((u32) var_a0 < (u32) temp_a3);
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DA34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DA94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DABC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DC94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DDC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DDEC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015DE14);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2284);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2584);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A28F8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2918);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2938);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2958);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A299C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuInit);

s32 sceGuTerm(void) {
    sceKernelDeleteEventFlag(D_001D7A3C);
    return 0;
}

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A29C8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2A08);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2A1C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2A74);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2ACC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuStart);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuSetDither);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuFinish);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuFinishId);

void sceGuCallMode(s32 arg0) {
    D_001D7A64 = arg0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015E50C);

void func_0015E5D8(void) {
    sceGeContinue();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuCallList);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015E730);

s32 func_0015E7D8(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = M2C_FIELD(D_001D7A54, s32 *, 0xC) - (M2C_FIELD(D_001D7A54, s32 *, 4) - M2C_FIELD(D_001D7A54, s32 *, 0));
    }
    return M2C_FIELD(D_001D7A54, s32 *, 4);
}

void func_0015E80C(s32 arg0) {
    M2C_FIELD(D_001D7A54, s32 *, 4) = arg0;
}

s32 func_0015E81C(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_001D7A58 != 0) {

    } else {
        var_v0 = sceGeListUpdateStallAddr(D_001D7A04, M2C_FIELD(D_001D7A54, void **, 4));
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuSync);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuEnable);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDisable);

s32 func_0015EEC8(void) {
    return D_001D7A68;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015EED4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuSetMatrix);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDrawArray);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015F3E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDrawBezier);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015F644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0015F864);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDrawSprite);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuSpriteMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuCopyImage);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuClearColor);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuClearStencil);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuClearDepth);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuClear);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDrawBuffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDrawBufferList);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDepthBuffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDispBuffer);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDisplay);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuSwapBuffers);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuViewport);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDepthRange);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDepthOffset);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuOffset);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuPatchDivide);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001606C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuAmbient);

void sceGuColor(s32 arg0) {
    func_001607C4(7, arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016079C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001607C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001608A0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001608FC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuFrontFace);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuShadeModel);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuLight);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160A8C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160AB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160B28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuLightColor);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160CD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexFilter);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexFunc);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexEnvColor);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexWrap);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160E90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexMapMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexProjMapMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00160FBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexImage);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexScale);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexOffset);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuTexFlush);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016117C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuClutMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuClutLoad);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00161240);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001612B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuAlphaFunc);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDepthFunc);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDepthMask);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuPixelMask);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuScissor);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00161478);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001614B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001614E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuBlendFunc);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00161574);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001616A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuDebugPrint);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGuSetCallback);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumSetMatrixStack);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2AF0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumLoadIdentity);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00161ADC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00161F08);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumPerspective);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00162680);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00162A20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001630D0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001634C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00163CA4);

void sceGumUpdateMatrix(void) {
    func_001653F4();
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00163D18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00163D98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00163E18);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumRotateY);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumRotateZ);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumTranslate);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumScale);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016496C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00164CC0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumMatrixMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumPushMatrix);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceGumPopMatrix);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165170);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001651D0);

void sceGumDrawArray(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_001653F4();
    sceGuDrawArray(arg0, arg1, arg2, arg3, arg4);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165280);

void func_001652FC(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4) {
    func_001653F4();
    sceGuDrawBezier(arg0, arg1, arg2, arg3, arg4);
}

void func_00165368(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_001653F4();
    func_0015F644(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001653F4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001654B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165520);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWaveSetVoice);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWaveSetVolume);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165888);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001659D4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165A34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWaveGetStat);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165AD4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWavePlayEx);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWaveStop);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165DC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165E34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165E9C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165F04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165F6C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00165FBC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166058);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWaveSetLoopMode);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWavePause);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceWaveReplay);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001661D8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166210);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016624C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2B48);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2B64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166288);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016632C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166444);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016662C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166764);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166A10);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00166F80);

void sceReg_9B25EDF1(void) {
}

void sceReg_92E41280(void) {
}

void sceReg_FA8A5739(void) {
}

void sceReg_DEDA92BF(void) {
}

void sceReg_1D8A762E(void) {
}

void sceReg_0CAE832B(void) {
}

void sceReg_39461B4D(void) {
}

void sceReg_0D69BF40(void) {
}

void sceReg_57641A81(void) {
}

void sceReg_17768E14(void) {
}

void sceReg_D4475AA8(void) {
}

void sceReg_28A8E98A(void) {
}

void sceReg_2C0DB9DD(void) {
}

void sceReg_2D211135(void) {
}

void sceReg_4CA16893(void) {
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", sceReg_3615BC87);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167320);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167398);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167500);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001677C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167928);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001679DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167BB4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167C54);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167DA0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167DF8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00167EA4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001681E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016823C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168290);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001682E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001683E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001685B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168638);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001686C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168748);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2B7C);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2B84);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2BC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001687AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001687E0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016888C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001688A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168918);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016895C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001689B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001689DC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168A04);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168A28);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168A88);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168B34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168BAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168BFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168C94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168D30);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168E44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00168EC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016904C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001690BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001690E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169128);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169194);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169238);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001692F0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169408);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169518);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016962C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001696B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169734);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016975C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169784);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001697B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001697EC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016980C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016982C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169860);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169894);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001698BC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001698E4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001698F8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016990C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016991C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169950);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169970);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_001699AC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169A40);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169AAC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169B1C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169B44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169B90);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169C20);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169CFC);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169DC4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169E80);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169EC8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00169F00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A180);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A19C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A218);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A258);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A2B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A2B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A3C4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A4C0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016A9B4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016AD78);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016AE0C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B04C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B064);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B084);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B0B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B108);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B450);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B4B8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B52C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B8A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016B92C);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016BB94);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0016BCA8);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2C40);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2D00);

INCLUDE_RODATA("tmp/asm/282/paf/nonmatchings/paf", D_001A2D90);
