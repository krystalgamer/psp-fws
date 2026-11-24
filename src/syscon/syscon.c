/* cflags: -O2 -frename-registers */
#include "common.h"
#include "syscon_decls.h"

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_0A771482);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00000350);

INCLUDE_RODATA("tmp/asm/282/syscon/nonmatchings/syscon", D_0000453C);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_0000050C);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_5B9ACC97);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_3AC3D2A4);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_1602ED0D);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_F350F666);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001444);

s32 module_start(void) {
    sceSyscon_driver_0A771482();
    return 0;
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", module_reboot_before);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_92D16FC7);

s32 sceSyscon_driver_081826B4(void) {
    sceKernelDisableSubIntr(4, 4);
    return 0;
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_56931095);

s32 sceSyscon_driver_5EE92F3C(s32 arg0) {
    M2C_VFIELD(&D_00004600, s32, 0x24) = arg0;
    return 0;
}

s32 sceSyscon_driver_5FF1D610(s32 arg0) {
    M2C_VFIELD(&D_00004600, s32, 0x134) = arg0;
    return 0;
}

s32 sceSyscon_driver_9E6E060F(s32 arg0) {
    M2C_VFIELD(&D_00004600, s32, 0x138) = arg0;
    return 0;
}

s32 sceSyscon_driver_E00BFC9E(void) {
    return M2C_VFIELD(&D_00004600, s32, 0x10C);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_C8D97773);

s32 func_000017C0(void) {
    return M2C_VFIELD(&D_00004600, s32, 0x130);
}

void sceSyscon_driver_58531E69(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xA);
}

void sceSyscon_driver_AD555CE5(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0);
}

void sceSyscon_driver_F281805D(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 1);
}

void sceSyscon_driver_A068B3D0(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 2);
}

void sceSyscon_driver_E540E532(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 3);
}

void sceSyscon_driver_BBFB70C0(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 4);
}

void sceSyscon_driver_805180D1(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 8);
}

void sceSyscon_driver_53072985(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 5);
}

void sceSyscon_driver_F9193EC3(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 9);
}

void sceSyscon_driver_04EEFD03(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xB);
}

void sceSyscon_driver_BAAECDF8(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 0xC);
}

void sceSyscon_driver_7479DB05(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 6);
}

void sceSyscon_driver_6848D817(s32 arg0, s32 arg1) {
    func_00001CA0(arg0, arg1, 7);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_0000193C);

s32 sceSyscon_driver_86D4CAD8(void) {
    return M2C_VFIELD(&D_00004600, u8, 0x48) & 0xFF;
}

s32 sceSyscon_driver_204F23FF(void) {
    return M2C_VFIELD(&D_00004600, u8, 0x4A) & 0xFF;
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_3357EE5C);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_32CFD20F);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_EC0DE439);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_EA5B9823);

s32 sceSyscon_driver_E20D08FE(void) {
    return M2C_VFIELD(&D_00004600, u8, 0x48) & 1;
}

s8 sceSyscon_driver_E0DDFE18(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x38);
}

s8 sceSyscon_driver_BDA16E46(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x39);
}

s8 sceSyscon_driver_F6BB4649(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x3A);
}

s8 sceSyscon_driver_138747DE(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x3B);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_71AE1BCE);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_7016161C);

s32 sceSyscon_driver_F9FDAFA5(void) {
    return M2C_VFIELD(&D_00004600, u8, 0x4A) & 1;
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_56A73EDD);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001AC0);

s8 sceSyscon_driver_48AB0E44(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x3C);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001AE8);

s8 sceSyscon_driver_628F2351(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x3D);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001B10);

s8 sceSyscon_driver_EC37C549(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x3E);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001B38);

s8 sceSyscon_driver_051186F3(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x3F);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001B60);

s8 sceSyscon_driver_CE76F93E(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x40);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001B88);

s8 sceSyscon_driver_8EDF1AD7(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x41);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001BB0);

s8 sceSyscon_driver_8DDA4CA6(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x42);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001BD8);

s8 sceSyscon_driver_52B74B6C(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x43);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001C00);

s8 sceSyscon_driver_1B17D3E3(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x44);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001C28);

s8 sceSyscon_driver_5F19C00F(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x45);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001C50);

s8 sceSyscon_driver_3C739F57(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x46);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001C78);

s8 sceSyscon_driver_CC04A978(void) {
    return (s8) M2C_VFIELD(&D_00004600, u8, 0x47);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001CA0);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001D14);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00001E60);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_7BCC5EAE);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_59CD0449);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_65EB6096);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_EB277C88);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_992C22C2);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_08234E6D);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_2EE82492);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_8CBC7987);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_91E183CB);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_E6B74CB9);

void sceSyscon_driver_7EC5A957(s32 arg0) {
    func_00001444(arg0, 1);
}

void sceSyscon_driver_FC32141A(s32 arg0) {
    func_00001444(arg0, 0xB);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_565EF519);

void sceSyscon_driver_F775BC34(s32 arg0) {
    func_00001444(arg0, 0xE);
}

void sceSyscon_driver_A9AEF39F(s32 arg0) {
    func_00001444(arg0, 0xF);
}

void sceSyscon_driver_25F47F96(s32 arg0) {
    func_00001444(arg0, 0x12);
}

void sceSyscon_driver_C4D66C1D(s32 arg0) {
    func_00001444(arg0, 9);
}

void sceSyscon_driver_C7634A7A(s32 arg0) {
    func_0000193C(arg0, 0x20, 6);
}

void sceSyscon_driver_7A805EE4(s32 arg0) {
    func_00001444(arg0, 0xA);
}

void sceSyscon_driver_6C911742(s32 arg0) {
    func_0000193C(arg0, 0x22, 6);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_E9FF8226);

void sceSyscon_driver_882F0AAB(s32 arg0) {
    func_00001444(arg0, 0xC);
}

void sceSyscon_driver_00E7B6C2(s32 arg0) {
    func_0000193C(arg0, 0x33, 3);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_44439604);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_C8439C57);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_BE27FE66);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_18BFBE65);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_1A08CD66);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_E5E35721);

void sceSyscon_driver_E7E87741(s32 arg0) {
    func_00001444(arg0, 0x40);
}

void sceSyscon_driver_FB148FB6(s32 arg0) {
    func_00001444(arg0, 0x41);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_01677F91);

void sceSyscon_driver_72EDA9AF(s32 arg0) {
    func_00001444(arg0, 0x43);
}

void sceSyscon_driver_C68F1573(s32 arg0, s32 arg1, s32 arg2) {
    func_0000193C(((arg2 & 0xFF) << 0x10) | ((arg1 & 0xFF) << 8) | (arg0 & 0xFF), 0x44, 4);
}

void sceSyscon_driver_09721F7F(s32 arg0) {
    func_00001444(arg0, 0x46);
}

void sceSyscon_driver_D1B501E8(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x48, 5);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_3DE38336);

s32 sceSyscon_driver_2B9E6A06(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_8A4519F5);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_99BBB24C);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_F0ED3255);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_A975F224);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_9C4266FC);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_3C6DB1C5);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_B2558E37);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_9478F399);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_05727A0B);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_7C8A5503);

void sceSyscon_driver_806D4D6C(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x4E, 5);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_D8471760);

void sceSyscon_driver_07A0C260(s32 arg0, s32 arg1) {
    func_0000193C(((arg1 & 0xFFFF) << 8) | (arg0 & 0xFF), 0x50, 5);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_3AB3AEEF);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_EAB13FBE);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_C5075828);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_6A53F3F8);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_FA4C4518);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_1165C864);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_68EF0BEF);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_36E28C5F);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_E448FD3F);

void sceSyscon_driver_70C10E61(s32 arg0) {
    func_000038C4(0x62, arg0);
}

void sceSyscon_driver_8BDEBB1E(s32 arg0) {
    func_000038C4(0x63, arg0);
}

void sceSyscon_driver_373EC933(s32 arg0) {
    func_000038C4(0x64, arg0);
}

void sceSyscon_driver_82861DE2(s32 arg0) {
    func_000038C4(0x65, arg0);
}

void sceSyscon_driver_876CA580(s32 arg0) {
    func_000038C4(0x66, arg0);
}

void sceSyscon_driver_71135D7D(s32 arg0) {
    func_000038C4(0x67, arg0);
}

void sceSyscon_driver_7CBD4522(s32 arg0) {
    func_000038C4(0x68, arg0);
}

void sceSyscon_driver_284FE366(s32 arg0) {
    func_000038C4(0x69, arg0);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_75025299);

void sceSyscon_driver_B5105D51(s32 arg0) {
    func_000038C4(0x6B, arg0);
}

void sceSyscon_driver_D5340103(s32 arg0) {
    func_000038C4(0x6C, arg0);
}

void sceSyscon_driver_B71B98A8(s32 arg0) {
    func_000038C4(0x6E, arg0);
}

void sceSyscon_driver_87671B18(s32 arg0) {
    func_000038C4(0x6F, arg0);
}

void sceSyscon_driver_75D22BF8(s32 arg0) {
    func_000038C4(0x70, arg0);
}

void sceSyscon_driver_4C539345(s32 arg0) {
    func_000038C4(0x71, arg0);
}

void sceSyscon_driver_4C0EE2FA(s32 arg0) {
    func_000038C4(0x72, arg0);
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_000038C4);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_08DA3752);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00003AB0);

s32 func_00003B1C(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((__builtin_allegrex_ext(sceSyscon_driver_E00BFC9E(), 8, 8) == 1) || (__builtin_allegrex_ext(sceSyscon_driver_E00BFC9E(), 8, 8) == 0x11)) {
        var_s0 = 1;
    }
    return var_s0;
}

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", sceSyscon_driver_34C36FF9);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00003BC4);

INCLUDE_ASM("tmp/asm/282/syscon/nonmatchings/syscon", func_00003D18);
