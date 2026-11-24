/* cflags: -O2 -frename-registers */
#include "common.h"
#include "np_decls.h"

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_8A1A73CC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010640);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010644);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010654);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010660);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010678);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010684);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010690);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000106A0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000106B4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000106C4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000106D8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000106E4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000106F0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010704);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001071C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010730);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010740);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010748);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000108B0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000108B8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000108BC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000108C0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001093C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010998);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001099C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000109A4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000109E0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010A08);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010A0C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010A10);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010A28);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010A2C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00000030);

void func_00000078(void) {
    if (D_00012E50 > 0) {
        sceKernelDeleteVpl((u32) D_00012E50);
        D_00012E50 = -1;
    }
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000000B4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_3C69FC6A);

void sceNp_6DED4963(void *arg0) {
    if (arg0 != NULL) {
        sceKernelFreeVpl((u32) D_00012E50, arg0);
    }
}

s32 func_000001D4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000001DC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00000398);

void func_00000420(s32 arg0, s32 arg1) {
    func_00000030(arg0, arg1);
}

void func_0000043C(void) {
    func_00000078();
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_EF97741B);

void sceNp_66E9BD6F(void) {
    if (sceKernelCheckThreadStack() >= 0xFF0) {
        if (D_000136C8 != 0) {
            func_00003484();
            func_0000AAA4();
            func_00000C10();
            func_0000043C();
            D_000136C8 = 0;
        }
    }
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_D2ED28C1);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000006E4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000073C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000008A8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_D3C4B400);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_1227E455);

s32 func_00000B9C(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s1;
    s32 var_v0;
    u8 temp_s2;

    var_v0 = 0x80550303;
    temp_s2 = arg1 & 0xFF;
    var_s1 = 0x80550303;
    if (arg0 != NULL) {
        temp_a0 = sceKernelCpuSuspendIntr();
        if (temp_s2 >= (u8) M2C_FIELD(arg0, u8 *, 8)) {
            M2C_FIELD(arg0, u8 *, 8) = temp_s2;
            var_s1 = 0;
        }
        sceKernelCpuResumeIntr(temp_a0);
        var_v0 = var_s1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00000C10);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_E011FB33);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_B2B37957);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_AB052108);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_F456C0D7);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_76D44C15);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_7A42CF3B);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_48C73F14);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001058);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001270);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001320);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000014B4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000015B0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000015EC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001828);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000018F8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000019B8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001A1C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001B74);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001C38);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001E08);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00001F68);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000208C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00002148);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00002268);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000246C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00002590);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000026B4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010ADC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010AE0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000027B4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00002DF8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00002F68);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000301C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_35FF5918);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_16B8697C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00003484);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_D369614E);

M2C_UNK *func_00003650(void) {
    return &D_000136FC;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_F2FE669B);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_C2B322B5);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_F8CD56BE);

s32 sceNp_20EC7964(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0x80550002;
    if (D_000136F8 > 0) {
        var_v0 = 0x80550501;
        if (arg0 != NULL) {
            var_v0 = 0;
            *arg0 = D_00013708;
        }
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_3E9BF819);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_4B205326);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_0A02DF46);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_F5FF2061);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_62150F5A);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_9BB18907);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00003D6C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00004130);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000041F8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00004304);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00004828);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000048D4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000049FC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00004B00);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_8BD530E1);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_CB296358);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00004FB8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00005124);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00005290);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_1A70F819);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_2016224D);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00005778);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00005850);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00005988);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00005D98);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00006030);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000063F4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000065CC);

void func_00006674(s32 arg0, s32 arg1, s32 arg2) {
    func_0000E300(arg0, arg1, arg2);
}

void func_00006690(s32 arg0, s32 arg1, void *arg2) {
    void *temp_a1;

    M2C_FIELD(arg2, s32 *, 0) = arg1;
    M2C_FIELD(arg2, s32 *, 0xC) = 0;
    sceNet_lib_57CC57DA(M2C_FIELD(arg2, void **, 4), 0, 0x130);
    temp_a1 = M2C_FIELD(arg2, void **, 4);
    M2C_FIELD(temp_a1, s32 *, 0xE0) = -1;
    M2C_FIELD(temp_a1, s32 *, 0xE4) = -1;
    M2C_FIELD(temp_a1, s32 *, 0xE8) = -1;
    func_0000EA4C(arg0, (s32) &D_00010D00, (s32) &func_000068DC, (s32) arg2);
}

s32 func_00006704(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0xC) & 0x400) ? 0 : 0x80550708;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000671C);

s32 func_00006788(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x14) & 0x20) ? 0 : 0x80550708;
}

void func_000067A0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    func_0000EA4C(arg0, (s32) &D_000115B0, (s32) &func_000070F4, (s32) arg1);
}

s32 func_000067D0(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) & 4) ? 0 : 0x80550708;
}

void func_000067E8(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    func_0000EA4C(arg0, (s32) &D_0001189C, (s32) &func_0000728C, (s32) arg1);
}

s32 func_00006818(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) & 4) ? 0 : 0x80550708;
}

void func_00006830(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    *M2C_FIELD(arg1, s32 **, 0) = 0;
    M2C_FIELD(arg1, s32 *, 0x14) = 0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 8) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    func_0000EA4C(arg0, (s32) &D_00011BA8, (s32) &func_00007448, (s32) arg1);
}

s32 func_0000687C(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 0x14) & 4) ? 0 : 0x80550708;
}

void func_00006894(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = 0;
    func_0000EA4C(arg0, (s32) &D_00011E84, (s32) &func_00007880, (s32) arg1);
}

s32 func_000068C4(void *arg0) {
    return (M2C_FIELD(arg0, s32 *, 4) & 0x40) ? 0 : 0x80550708;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000068DC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010B80);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010B90);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010C98);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010C9C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CA4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CA8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CAC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CB8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CC0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CCC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CD8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CE4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CEC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010CF8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010D00);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010FD4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010FE0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00010FF0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000112C4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000112D0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000112DC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000115B0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011884);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011890);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001189C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011B70);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011B78);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011B84);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011B90);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011B98);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011BA0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011BA8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011E7C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00011E84);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012158);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00006D6C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000070F4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000728C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00007448);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00007880);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00007B8C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00007CC4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00007D94);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00007FAC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008068);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008268);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008338);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000855C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000086E0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008878);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008998);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008A24);

s32 func_00008B74(void *arg0) {
    void *temp_s0;
    void *var_a0;

    var_a0 = arg0;
    if (var_a0 != NULL) {
        do {
            temp_s0 = M2C_FIELD(var_a0, void **, 8);
            func_0000DAE0();
            var_a0 = temp_s0;
        } while (temp_s0 != NULL);
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008BA8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008C30);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000121C8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000121DC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000121F0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012204);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012208);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008CC8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008F04);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00008FCC);

s32 func_00009090(void) {
    return D_0001396C;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_26D79F76);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_000091F4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_DAADA3CF);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_7F197DF6);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_00009A08);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_F0B6EC49);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_029A55FB);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", sceNp_7D96320D);

void func_0000AA88(void) {
    func_00008F04();
}

void func_0000AAA4(void) {
    func_00008FCC();
}

s32 sceNp_E3EA7603(s32 arg0) {
    s32 var_a1;

    var_a1 = 0x80550702;
    if (func_00009090() == 1) {
        var_a1 = func_0000DE44(arg0);
    }
    return var_a1;
}

void sceNp_3EA98556(void) {
    func_0000DF04();
}

void sceNp_A8BEBA34(s32 arg0) {
    func_0000CF68(arg0, 1);
}

void func_0000AB44(s32 arg0) {
    func_0000CF68(arg0, 2);
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000AB60);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000ACC0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012230);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012238);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001223C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012248);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001226C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012278);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000122A0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000122A8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000122C8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000122DC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000122EC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012308);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012310);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001231C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012328);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012338);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001235C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001237C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000123A0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000123C4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000123E4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012408);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012414);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012430);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001244C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012468);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012480);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001249C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000124A4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000124C4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000124E0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000126D8);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000126E0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000126E4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001270C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012714);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012720);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012724);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001273C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012740);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012748);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012754);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000ADA0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001276C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012774);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012778);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000B048);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012794);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001279C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000127A4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000127AC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000B3F4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000B634);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000B7DC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000B938);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000BDF4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000BF80);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C0F4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C210);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C35C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C478);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C7C4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C8E0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000C9FC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000CAB0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000128EC);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001290C);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_0001292C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000CBD4);

s32 func_0000CD70(void) {
    s32 var_a0;
    void *temp_s0;
    void *var_v0;

    var_a0 = 0x80550702;
    if (D_00013970 == 1) {
        var_v0 = D_000139A4;
        if (var_v0 != NULL) {
            do {
                temp_s0 = M2C_FIELD(var_v0, void **, 0x28);
                func_0000CF68(M2C_FIELD(var_v0, s32 *, 0), 1);
                var_v0 = temp_s0;
            } while (temp_s0 != NULL);
        }
        sceKernelDeleteSema(D_000139BC);
        if (D_00013978 > 0) {
            sceHttpDeleteTemplate(D_00013978);
        }
        D_00013978 = 0;
        var_a0 = 0;
        D_00013970 = 0;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000CE0C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000CF00);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000CF68);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D0E4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D1C0);

void func_0000D2A0(void *arg0) {
    s32 temp_a1;

    if (sceKernelWaitSema(D_000139BC, 1, NULL) >= 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 4) - 1;
        M2C_FIELD(arg0, s32 *, 4) = temp_a1;
        if (M2C_FIELD(arg0, s32 *, 8) == 1) {
            if (temp_a1 == 0) {
                func_0000CF00((s32) arg0);
                D_00013974 -= 1;
            }
        }
        sceKernelSignalSema(D_000139BC, 1);
    }
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D328);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012968);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012970);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012980);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D42C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D4F4);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D528);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D578);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D80C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000D8F8);

s32 func_0000DA78(void) {
    s32 var_v1;

    var_v1 = 0x80550701;
    if (D_000139C0 != 1) {
        D_000139C0 = 1;
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_0000DAA0(void) {
    s32 var_v1;

    var_v1 = 0x80550702;
    if (D_000139C0 != 0) {
        D_000139C0 = 0;
        var_v1 = 0;
    }
    return var_v1;
}

void func_0000DAC4(s32 arg0) {
    sceNp_3C69FC6A(arg0);
}

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DAE0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DAFC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DC08);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DCE8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DDA0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DE44);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000DF04);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000E0F0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000E1D4);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_000129F8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000E300);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000EA4C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000EAAC);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000EBD8);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000ED00);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000EDD0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000EFA0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000F19C);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000F210);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000F288);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000F3E0);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000F690);

INCLUDE_ASM("tmp/asm/352/np/nonmatchings/np", func_0000FC04);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012CB0);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012D38);

INCLUDE_RODATA("tmp/asm/352/np/nonmatchings/np", D_00012D4C);
