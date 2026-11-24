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

void func_0000E9D4(M2C_UNK **arg0) {
    *arg0 = &D_0016EE68;
}

void func_0000E9E4(M2C_UNK **arg0) {
    *arg0 = &D_0016EE68;
    scePaf_4E67BB08(arg0);
}

void func_0000EA0C(M2C_UNK **arg0) {
    *arg0 = &D_0016EE58;
}

void func_0000EA1C(M2C_UNK **arg0) {
    *arg0 = &D_0016EE58;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0000EA6C);

void func_0000EA94(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0x14) > 0) {
        do {
            scePaf_66907719();
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
            M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        } while (temp_v0 > 0);
    }
}

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

void func_0000EBA4(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        M2C_FIELD(arg0, s32 *, 0x18) = temp_v1;
        if (temp_v1 > 0) {
            do {
                scePaf_66907719();
                temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) - 1;
                M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
            } while (temp_v0 > 0);
        }
    }
}

void func_0000EBF8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_FIELD(arg0, u8 *, 0x1C) != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x14) = temp_v0;
        if (temp_v0 > 0) {
            do {
                scePaf_6B1E90C7();
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18) - 1;
                M2C_FIELD(arg0, s32 *, 0x18) = temp_v0_2;
            } while (temp_v0_2 > 0);
        }
    }
}

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

s32 func_00011D34(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016EFE0) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00011D68(void) {
    return &D_0016EFE0;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011D74);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011E00);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011E60);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011F34);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00011FA8);

s32 func_00011FBC(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016EFF4) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00011FF0(void) {
    return &D_0016EFF4;
}

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

s32 func_00012234(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F010) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00012268(void) {
    return &D_0016F010;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012274);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000122E8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001235C);

s32 func_00012370(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F020) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000123A4(void) {
    return &D_0016F020;
}

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

s32 func_00012688(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F034) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000126BC(void) {
    return &D_0016F034;
}

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

s32 func_00012BF0(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F090) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00012C24(void) {
    return &D_0016F090;
}

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

s32 func_00012E58(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F0A4) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00012E8C(void) {
    return &D_0016F0A4;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00012E98);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00013018);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_0001308C);

s32 func_000130A0(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F0BC) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_000130D4(void) {
    return &D_0016F0BC;
}

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

s32 func_00013308(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F0D4) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0001333C(void) {
    return &D_0016F0D4;
}

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

s32 func_00013DDC(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F2F0) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00013E10(void) {
    return &D_0016F2F0;
}

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

s32 func_00014A38(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F328) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00014A6C(void) {
    return &D_0016F328;
}

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

s32 func_00014F04(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F3E8) {
        var_a2 = scePaf_F2E5FDEB(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00014F38(void) {
    return &D_0016F3E8;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00014F44);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000153A8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015538);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015614);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015644);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000157C8);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015854);

s32 func_00015868(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F3F8) {
        var_a2 = func_00014F04(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_0001589C(void) {
    return &D_0016F3F8;
}

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

s32 func_00015ED4(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F404) {
        var_a2 = func_00014F04(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00015F08(void) {
    return &D_0016F404;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015F14);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015F64);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00015FB4);

s32 func_00015FC8(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F410) {
        var_a2 = func_00014F04(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00015FFC(void) {
    return &D_0016F410;
}

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016008);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000161B0);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_00016360);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000165A4);

INCLUDE_ASM("tmp/asm/282/paf/nonmatchings/paf", func_000166F0);

s32 func_00016704(s32 arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 1;
    if (arg1 != &D_0016F41C) {
        var_a2 = func_00014F04(arg0, arg1);
    }
    return var_a2;
}

M2C_UNK *func_00016738(void) {
    return &D_0016F41C;
}

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

