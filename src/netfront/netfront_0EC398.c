/* cflags: -Os */
#include "common.h"
#include "netfront_decls.h"

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC3DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC478);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC4C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC694);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC724);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC794);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EC93C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ECA60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ECCD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ECE4C);

void func_000ECEE4(s32 arg0) {
    sceHVNetfront_Module_457A4136(arg0 + 0x8C, 0xC);
}

void func_000ECF04(s32 arg0) {
    sceHVNetfront_Module_C04FADD9(arg0 + 0x8C);
}

void func_000ECF20(void *arg0) {
    func_000EBACC();
    if (func_000EC2A0(arg0) == 0) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x100);
        return;
    }
    func_000EE45C(arg0, 0, 0);
    func_000EE55C(arg0);
}

s32 func_000ECF7C(void **arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_000EBB5C();
    temp_s0 = arg1 + temp_v0;
    var_v1 = 0;
    if (temp_v0 > 0) {
        func_000EE45C(arg0, arg1, temp_v0);
        M2C_FIELD(*arg0, M2C_UNK (**)(void **, s32), 0x38)(arg0, temp_s0);
        func_000EC040(arg0, temp_s0, 0, 1);
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ECFFC);

void func_000ED07C(s32 arg0, s32 arg1, s32 arg2) {
    func_000EBED0(arg0);
    func_000EE45C((void *) arg0, arg1, -arg2);
}

void func_000ED0CC(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x3C);
    func_000EBEEC();
    if (arg1 != temp_s1) {
        if (func_000EC2A0(arg0) == 0) {
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) | 0x100);
            return;
        }
        temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x30)(arg0);
        func_000EE45C(arg0, 0, 0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x38)(arg0, temp_s0);
        func_000EE55C(arg0);
        func_000EC478(arg0);
    }
}

void func_000ED178(void *arg0) {
    s32 temp_s0;
    s32 temp_s2;

    if (func_000EC2A0(arg0) == 0) {
        temp_s2 = M2C_FIELD(arg0, s32 *, 8) & 0x100;
        if (temp_s2 != 0) {
            temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *), 0x30)(arg0);
            func_000EE45C(arg0, 0, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x38)(arg0, temp_s0);
        }
        func_000EC478(arg0);
        func_000EC280(arg0);
        if (temp_s2 != 0) {
            func_000EE55C(arg0);
        }
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED21C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED278);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED3F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DB08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED4F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED71C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000ED97C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EDA0C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EDA40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EDD24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE0E0);

s32 func_000EE138(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xAC);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE174);

s32 func_000EE1FC(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    s32 var_v1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x7C);
    if ((arg1 != M2C_FIELD(arg0, s32 *, 0x70)) || (var_v1 = 0, (arg2 != M2C_FIELD(arg0, s32 *, 0x80)))) {
        M2C_FIELD(arg0, s32 *, 0x80) = arg2;
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
        func_000EE174();
        func_000EE60C(arg0);
        func_000EC478(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x7C) != temp_s1) {
            func_000EE55C(arg0);
        }
        var_v1 = 1;
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE274);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE45C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE55C);

s32 func_000EE5C0(void *arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0x8C;
    return M2C_FIELD((sceHVNetfront_Module_234F9191(temp_s0, sceHVNetfront_Module_1461AF80(temp_s0)) + M2C_FIELD(arg0, s16 *, 0x98)), s32 *, 8);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE60C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE668);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE774);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE8E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EE9DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEAA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEB60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEC38);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EED20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEE70);

void func_000EEF40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = arg1;
}

void func_000EEF48(void **arg0, s32 arg1) {
    M2C_FIELD(*arg0, s32 *, 0xB0) = arg1;
}

s32 func_000EEF54(void **arg0) {
    return M2C_FIELD(*arg0, s32 *, 0xB0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEF60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEF78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EEFC4);

s32 func_000EF068(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_E459881C(M2C_FIELD(arg0, s32 *, 0xC));
    temp_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, s32, s32, M2C_UNK), 0x54)(arg0, temp_v0, sceHVNetfront_Module_15875ED4(temp_v0), 0);
    sceHVNetfront_Module_08549708(M2C_FIELD(arg0, s32 *, 0xC));
    temp_v0_2 = func_000EBCD4((s32) arg0, arg1, arg2, temp_s0);
    var_v1 = 0;
    if (temp_v0_2 > 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, s32), 0x38)(arg0, arg1 + temp_v0_2);
        var_v1 = 1;
    }
    return var_v1;
}

void func_000EF124(s32 arg0) {
    func_000EBED0(arg0);
}

void func_000EF140(void) {
    func_000EBEEC();
}

void func_000EF15C(void *arg0) {
    func_000EC280(arg0);
}

s32 func_000EF178(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x74);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EF180);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EF2A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EF4A4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EF678);

s32 func_000EF7A4(void) {
    return 1;
}

s32 func_000EF7AC(void) {
    return 1;
}

s32 func_000EF7B4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EF7BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EF938);

s32 func_000EFA90(void *arg0, s32 arg1) {
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;

    temp_s3 = sceHVNetfront_Module_E459881C(M2C_FIELD(arg0, s32 *, 0xC));
    temp_s1 = sceHVNetfront_Module_3EDA77E7(M2C_FIELD(arg0, s32 *, 0xC));
    if (arg1 == -1) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x78) - M2C_FIELD(arg0, s32 *, 0x70);
        M2C_FIELD(arg0, s32 *, 0x78) = temp_v0;
        if (temp_v0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x78) = 0;
        }
        if (func_000EC4C4(arg0, temp_s3, temp_s1, M2C_FIELD(arg0, s32 *, 0x78)) == 0) {
            M2C_FIELD(arg0, s32 *, 0x78) = func_000EC3DC(arg0, temp_s3, temp_s1, M2C_FIELD(arg0, s32 *, 0x78));
        }
        if (M2C_FIELD(arg0, s32 *, 0x78) < 0) {
            M2C_FIELD(arg0, s32 *, 0x78) = 0;
        }
    } else if (arg1 == 1) {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x78) + M2C_FIELD(arg0, s32 *, 0x70);
        M2C_FIELD(arg0, s32 *, 0x78) = temp_a3;
        if (func_000EC4C4(arg0, temp_s3, temp_s1, temp_a3) == 0) {
            M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 (**)(void *, s32, s32, s32), 0x50)(arg0, temp_s3, temp_s1, M2C_FIELD(arg0, s32 *, 0x78));
        }
        if (temp_s1 < M2C_FIELD(arg0, s32 *, 0x78)) {
            M2C_FIELD(arg0, s32 *, 0x78) = temp_s1;
        }
    }
    sceHVNetfront_Module_08549708(M2C_FIELD(arg0, s32 *, 0xC));
    return 1;
}

void func_000EFBB8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
}

void func_000EFBC0(s32 *arg0) {
    func_000EFC60(arg0, (s32) &D_0012DC2C, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EFBE8);

s32 func_000EFC60(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_D9FE99F5(arg1, arg2);
    *arg0 = temp_v0;
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_000EFBE8(arg0, arg2, arg3);
    }
    return var_v1;
}

void func_000EFCCC(s32 *arg0, s32 arg1, s32 arg2) {
    func_000EFC60(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), arg2);
}

s32 func_000EFD20(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = sceHVNetfront_Module_8C9ECF26(arg1);
    *arg0 = temp_v0;
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = func_000EFBE8(arg0, sceHVNetfront_Module_3EDA77E7(arg1), arg2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EFD90);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EFDCC);

void func_000EFE44(s32 *arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    sceHVNetfront_Module_AE926D7C(*arg0, arg1, arg2);
    func_000EFDCC(arg0, arg2, arg3);
}

void func_000EFE94(s32 *arg0, s32 arg1, s32 arg2) {
    func_000EFE44(arg0, arg1, sceHVNetfront_Module_15875ED4(arg1), arg2);
}

void func_000EFEE8(s32 *arg0, s32 arg1, s32 arg2) {
    func_0009F738(*arg0);
    func_000EFDCC(arg0, sceHVNetfront_Module_3EDA77E7(arg1), arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000EFF40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0080);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F025C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F04F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F05C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0710);

void func_000F07F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_000F0710(arg0, arg1, arg2, sceHVNetfront_Module_15875ED4(arg2), arg3);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0854);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0944);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0C2C);

void func_000F0D28(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    func_000F0C2C(arg0, arg1, arg2, sceHVNetfront_Module_3EDA77E7(*arg2));
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0D7C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0F48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F0FD4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F118C);

void func_000F1234(void *arg0) {
    s32 *temp_s3;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v0;

    temp_s1 = arg0 + 0x38;
    temp_s0 = arg0 + 0x14;
    temp_v0 = sceHVNetfront_Module_83191313(temp_s0, temp_s1);
    temp_s3 = temp_v0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 **, 0x44) = temp_v0;
    if (temp_v0 == NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0, s32 *, 4);
        temp_v0_2 = sceHVNetfront_Module_12E3C14E(temp_s0, temp_s1);
        M2C_FIELD(arg0, s32 **, 0x44) = temp_v0_2;
        if (temp_v0_2 == NULL) {
            var_v0 = M2C_FIELD(arg0, s32 *, 4);
        } else {
            var_v0 = M2C_FIELD(temp_s3, s32 *, 0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F12C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1348);

void func_000F1420(s32 *arg0, s32 arg1) {
    sceHVNetfront_Module_08549708(*arg0);
    sceHVNetfront_Module_703D7675(arg1 + 0x14, arg1 + 0x38);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1458);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F151C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DBCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DC9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DCF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DD10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DD2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DD48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DD64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DD80);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1544);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1594);

s32 func_000F1624(s32 arg0, s32 arg1) {
    return func_000F1594(arg0, 0, arg1) == 0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DDC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1648);

void func_000F16C8(void) {
    func_000F3018();
}

void func_000F16E4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C4) = crc32(0, 0, 0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1718);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F17C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1824);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1848);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1898);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1900);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1D94);

s32 func_000F1DEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x414);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1DF4);

M2C_UNK *func_000F1E00(void) {
    return &D_0012DEDC;
}

M2C_UNK *func_000F1E0C(void) {
    return &D_0012DEDC;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DEDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1E18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1E24);

void func_000F1EAC(s32 arg0) {
    inflateReset(arg0 + 0x428);
}

s32 func_000F1EC8(void) {
    return 0x27DE;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1ED0);

s32 func_000F1EEC(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1EF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1F44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F1FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F20C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2100);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2138);

void func_000F2148(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2150);

s32 func_000F2160(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x408);
}

s32 func_000F2168(s32 arg0, void *arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 8) & arg2;
    }
    return var_v0;
}

s32 func_000F218C(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xC);
    }
    return var_v0;
}

s32 func_000F21AC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 0xD4);
    }
    return var_v0;
}

s32 func_000F21CC(s32 arg0, s32 *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = *arg1;
    }
    return var_v0;
}

s32 func_000F21EC(s32 arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, s32 *, 4);
    }
    return var_v0;
}

u8 func_000F220C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x18);
    }
    return var_v0;
}

u8 func_000F222C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x19);
    }
    return var_v0;
}

u8 func_000F224C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1B);
    }
    return var_v0;
}

u8 func_000F226C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1C);
    }
    return var_v0;
}

u8 func_000F228C(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1A);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F22AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F22F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F233C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F238C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2428);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2470);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F24B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F24FC);

u8 func_000F2540(s32 arg0, void *arg1) {
    u8 var_v0;

    var_v0 = 0;
    if ((arg0 != 0) & (arg1 != NULL)) {
        var_v0 = M2C_FIELD(arg1, u8 *, 0x1D);
    }
    return var_v0;
}

s32 func_000F2560(s32 arg0, s32 arg1) {
    return !((arg0 != 0) & (arg1 != 0)) ? 0 : (arg1 + 0x20);
}

s32 func_000F2578(s32 arg0, void *arg1, void **arg2) {
    s32 var_a0;

    if (((arg0 != 0) & (arg1 != NULL)) && (var_a0 = 0x20, ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 5) & 1 & (arg2 != NULL)) != 0))) {
        *arg2 = arg1 + 0x52;
    } else {
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F25BC);

s32 func_000F2674(s32 arg0, void *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg_sp0, s32 *arg_sp4) {
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 4)) {
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(arg1, s32 *, 0xDC);
        }
        if (arg3 != NULL) {
            *arg3 = M2C_FIELD(arg1, s32 *, 0xE0);
        }
        if (arg4 != NULL) {
            *arg4 = M2C_FIELD(arg1, s32 *, 0xE4);
        }
        if (arg5 != NULL) {
            *arg5 = M2C_FIELD(arg1, s32 *, 0xE8);
        }
        if (arg6 != NULL) {
            *arg6 = M2C_FIELD(arg1, s32 *, 0xEC);
        }
        if (arg7 != NULL) {
            *arg7 = M2C_FIELD(arg1, s32 *, 0xF0);
        }
        if (arg_sp0 != NULL) {
            *arg_sp0 = M2C_FIELD(arg1, s32 *, 0xF4);
        }
        if (arg_sp4 != NULL) {
            *arg_sp4 = M2C_FIELD(arg1, s32 *, 0xF8);
        }
        return 4;
    }
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F272C);

s32 func_000F276C(s32 arg0, void *arg1, s32 *arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 1)) {
        var_v1 = 1;
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(arg1, s32 *, 0xD8);
        } else {
            var_v1 = 0;
        }
    }
    return var_v1;
}

s32 func_000F27B0(s32 arg0, void *arg1, s32 *arg2) {
    s32 var_a0;

    if (((arg0 != 0) & (arg1 != NULL)) && (var_a0 = 0x800, ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 0xB) & 1 & (arg2 != NULL)) != 0))) {
        *arg2 = (s32) M2C_FIELD(arg1, u8 *, 0x2C);
    } else {
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F27F4);

s32 func_000F2860(s32 arg0, void *arg1, s32 *arg2) {
    if (((arg0 != 0) & (arg1 != NULL)) && (arg2 != NULL)) {
        *arg2 = M2C_FIELD(arg1, s32 *, 0xCC);
    }
    return M2C_FIELD(arg1, s32 *, 0xD0);
}

s32 func_000F288C(s32 arg0, void *arg1, s32 *arg2) {
    s32 var_a0;

    if (((arg0 != 0) & (arg1 != NULL)) && (var_a0 = 0x40, ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 6) & 1 & (arg2 != NULL)) != 0))) {
        *arg2 = M2C_FIELD(arg1, s32 *, 0x74);
    } else {
        var_a0 = 0;
    }
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012DF18);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F28D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2A78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2ADC);

s32 png_get_pHYs(s32 arg0, void *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x80)) {
        if (arg2 != NULL) {
            var_v1 = 0x80;
            *arg2 = M2C_FIELD(arg1, s32 *, 0x68);
        }
        if (arg3 != NULL) {
            var_v1 |= 0x80;
            *arg3 = M2C_FIELD(arg1, s32 *, 0x6C);
        }
        if (arg4 != NULL) {
            var_v1 |= 0x80;
            *arg4 = (s32) M2C_FIELD(arg1, u8 *, 0x70);
        }
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_get_PLTE);

s32 func_000F2C38(s32 arg0, void *arg1, void **arg2) {
    s32 var_a0;

    if (((arg0 != 0) & (arg1 != NULL)) && (var_a0 = 2, ((((u32) M2C_FIELD(arg1, u32 *, 8) >> 1) & 1 & (arg2 != NULL)) != 0))) {
        *arg2 = arg1 + 0x3C;
    } else {
        var_a0 = 0;
    }
    return var_a0;
}

s32 func_000F2C7C(s32 arg0, void *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_v1;

    if ((arg0 != 0) & (arg1 != NULL)) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 0x30);
        if (temp_v1 > 0) {
            if (arg2 != NULL) {
                *arg2 = M2C_FIELD(arg1, s32 *, 0x38);
            }
            if (arg3 != NULL) {
                *arg3 = temp_v1;
            }
            return M2C_FIELD(arg1, s32 *, 0x30);
        }
    }
    if (arg3 != NULL) {
        *arg3 = 0;
    }
    return 0;
}

s32 func_000F2CCC(s32 arg0, void *arg1, s32 *arg2, s32 *arg3, void **arg4) {
    s32 var_a5;

    var_a5 = 0;
    if (((arg0 != 0) & (arg1 != NULL)) && (M2C_FIELD(arg1, s32 *, 8) & 0x10)) {
        if (M2C_FIELD(arg1, u8 *, 0x19) == 3) {
            if (arg2 != NULL) {
                var_a5 = 0x10;
                *arg2 = M2C_FIELD(arg1, s32 *, 0x44);
            }
            if (arg4 != NULL) {
                *arg4 = arg1 + 0x48;
            }
        } else {
            if (arg4 != NULL) {
                *arg4 = arg1 + 0x48;
                var_a5 = 0x10;
            }
            if (arg2 != NULL) {
                *arg2 = 0;
            }
        }
        if (arg3 != NULL) {
            var_a5 |= 0x10;
            *arg3 = (s32) M2C_FIELD(arg1, u16 *, 0x16);
        }
    }
    return var_a5;
}

s32 func_000F2D58(s32 arg0, void *arg1, s32 *arg2) {
    if (((arg0 != 0) & (arg1 != NULL)) && (arg2 != NULL)) {
        *arg2 = M2C_FIELD(arg1, s32 *, 0xB4);
    }
    return M2C_FIELD(arg1, s32 *, 0xB8);
}

u8 func_000F2D84(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5B4);
    }
    return var_v0;
}

s32 func_000F2D98(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5A4);
    }
    return var_v0;
}

s32 func_000F2DAC(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5CC);
    }
    return var_v0;
}

s32 func_000F2DC0(s32 arg0) {
    return !(arg0 & 1) ? 0 : 0xFC;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_get_mmx_flagmask);

u8 png_get_mmx_bitdepth_threshold(void *arg0) {
    u8 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, u8 *, 0x5C5);
    }
    return var_v0;
}

s32 png_get_mmx_rowbytes_threshold(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5C8);
    }
    return var_v0;
}

s32 png_get_user_width_max(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F0);
    }
    return var_v0;
}

s32 png_get_user_height_max(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x5F4);
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2E40);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2E60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2EE8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2F08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F2F48);

s32 func_000F2FDC(s32 arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        var_v1 = func_0010BB8C(arg1);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3018);

void func_000F3060(s32 arg0, s32 arg1) {
    if (((arg0 == 0) | (arg1 == 0)) == 0) {
        func_0010BBBC(arg1);
    }
}

void func_000F3090(void *arg0) {
    s32 temp_s1;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x420);
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) (temp_s1 | 0x100000);
    func_000F2F48();
    M2C_FIELD(arg0, s32 *, 0x420) = temp_s1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F30D0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3104);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3128);

s32 func_000F3138(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5D0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3140);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F31A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3240);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3324);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3A44);

void func_000F3A54(void *arg0) {
    u32 temp_a0;
    u32 temp_a2;
    u32 temp_s0;
    u32 temp_s0_2;
    u32 temp_v1;
    u32 temp_v1_2;

    temp_a2 = M2C_FIELD(arg0, u32 *, 0x568);
    if (temp_a2 != 0) {
        temp_v1 = M2C_FIELD(arg0, u32 *, 0x56C);
        if (temp_v1 != 0) {
            temp_s0 = (temp_a2 >= temp_v1) ? temp_v1 : temp_a2;
            func_000F1718((s32) arg0, M2C_FIELD(arg0, s32 *, 0x554), (s32) temp_s0);
            M2C_FIELD(arg0, u32 *, 0x568) = (u32) (M2C_FIELD(arg0, u32 *, 0x568) - temp_s0);
            M2C_FIELD(arg0, u32 *, 0x574) = (u32) (M2C_FIELD(arg0, u32 *, 0x574) - temp_s0);
            M2C_FIELD(arg0, u32 *, 0x56C) = (u32) (M2C_FIELD(arg0, u32 *, 0x56C) - temp_s0);
            M2C_FIELD(arg0, s32 *, 0x554) = (s32) (M2C_FIELD(arg0, s32 *, 0x554) + temp_s0);
        }
    }
    temp_a0 = M2C_FIELD(arg0, u32 *, 0x568);
    if (temp_a0 != 0) {
        temp_v1_2 = M2C_FIELD(arg0, u32 *, 0x578);
        if (temp_v1_2 != 0) {
            temp_s0_2 = (temp_a0 >= temp_v1_2) ? temp_v1_2 : temp_a0;
            func_000F1718((s32) arg0, M2C_FIELD(arg0, s32 *, 0x55C), (s32) temp_s0_2);
            M2C_FIELD(arg0, u32 *, 0x568) = (u32) (M2C_FIELD(arg0, u32 *, 0x568) - temp_s0_2);
            M2C_FIELD(arg0, u32 *, 0x574) = (u32) (M2C_FIELD(arg0, u32 *, 0x574) - temp_s0_2);
            M2C_FIELD(arg0, u32 *, 0x578) = (u32) (M2C_FIELD(arg0, u32 *, 0x578) - temp_s0_2);
            M2C_FIELD(arg0, s32 *, 0x55C) = (s32) (M2C_FIELD(arg0, s32 *, 0x55C) + temp_s0_2);
        }
    }
    if (M2C_FIELD(arg0, u32 *, 0x568) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x574) < 4U) {
            func_000F3C54((s32) arg0);
            return;
        }
        func_000FD770((s32) arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x57C) = 1;
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3B78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3C54);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3D88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3DA4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F3FC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F412C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4664);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F483C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F48CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E134);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4A24);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4AB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4DFC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4F60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4F88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4FB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F4FDC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5010);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F503C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5044);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5068);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E1C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E1CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E1E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E1F4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F538C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F53B4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5438);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5634);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5BD0);

void func_000F5C34(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x420) & 0x40)) {
        func_00100C48((s32) arg0);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5C60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F5DE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E3C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_row);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_rows);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_image);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_end);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_destroy_read_struct);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_destroy);

void png_set_read_status_fn(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x540) = arg1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_png);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F70A0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F70D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F712C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F7224);

void func_000F72F0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x400);
}

void func_000F7300(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x40000);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F7314);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E5B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E5E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E628);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E638);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E660);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012E684);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F7C34);

void func_000F7C94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CA4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CB4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CC4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x1000);
}

void func_000F7CD4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x4000);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000F7CE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_rgb_to_gray_fixed);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_read_user_transform_fn);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_init_read_transformations);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_read_transform_info);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_read_transformations);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_unpack);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_unshift);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_chop);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_read_swap_alpha);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_read_invert_alpha);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_read_filler);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_gray_to_rgb);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_rgb_to_gray);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_build_grayscale_palette);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_background);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_gamma);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_expand_palette);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_expand);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_dither);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_build_gamma_table);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_read_intrapixel);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FD664);

s32 func_000FD6B4(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000FD6E0(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 0) << 0x18) + (M2C_FIELD(arg0, u8 *, 1) << 0x10) + (M2C_FIELD(arg0, u8 *, 2) << 8) + M2C_FIELD(arg0, u8 *, 3);
}

s32 func_000FD70C(void *arg0) {
    return (M2C_FIELD(arg0, u8 *, 1) + (M2C_FIELD(arg0, u8 *, 0) << 8)) & 0xFFFF;
}

void func_000FD724(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_000F70A0();
    func_000F1718(arg0, arg1, arg2);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FD770);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FD84C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FD8D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FDC2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FDDAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FDFAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FE028);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012EA1C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FE1B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FE324);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012EBC0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FE75C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FE98C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FEBD8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FEE98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FF094);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FF26C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FF3CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FF4D4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FF5DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FF904);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FFA88);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FFC78);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FFE20);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_000FFED4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00100248);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001006CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010090C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00100C48);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00100F64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F428);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F42C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F430);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F464);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F4A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F4C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F4D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F4F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F51C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F548);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F570);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F598);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F5B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F5E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F600);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F61C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F650);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F674);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F698);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F6CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F6EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F70C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F734);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F758);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F7A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F7D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F804);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F844);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F864);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F894);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00100FB4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001011BC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010136C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010142C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001014C4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001015B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010195C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00101990);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_pHYs);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_PLTE);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_sBIT);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_sRGB);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00101CD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00101DB8);

void func_00101F08(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_00101F44(arg0, arg1, arg2, arg3) != 0) {
        func_000F1EF4(arg0, (s32) &D_0012F804);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00101F44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010219C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00102288);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001023EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010256C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001025B0);

s32 func_001025D0(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 var_v0;

    temp_a1 = arg1 & 5;
    var_v0 = 0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x5BC) = temp_a1;
        var_v0 = temp_a1;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001025EC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00102740);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010274C);

void func_001027B8(s32 arg0, void *arg1, M2C_UNK arg2) {
    if ((arg0 != 0) & (arg1 != NULL)) {
        M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg1, s32 *, 8) & ~arg2);
    }
}

void func_001027E0(void) {
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001027E8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001027F4);

void png_set_bgr(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 1);
}

void png_set_swap(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4DB) == 0x10) {
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x10);
    }
}

void png_set_packing(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4DB) < 8U) {
        M2C_FIELD(arg0, s8 *, 0x4DC) = 8;
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 4);
    }
}

void png_set_packswap(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x4DB) < 8U) {
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x10000);
    }
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_shift);

s32 png_set_interlace_handling(void *arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (M2C_FIELD(arg0, u8 *, 0x4D7) != 0) {
        var_v1 = 7;
        M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 2);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_set_filler);

void png_set_swap_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x20000);
}

void png_set_invert_alpha(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x80000);
}

void png_set_invert_mono(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x424) = (s32) (M2C_FIELD(arg0, s32 *, 0x424) | 0x20);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_invert);

void png_do_swap(void *arg0, void *arg1) {
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

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_packswap);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_strip_filler);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", png_do_bgr);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00102F68);

s32 func_00102FA4(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00102FAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103590);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103778);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103884);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103890);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103A8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103B98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F940);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F960);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F9E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F9EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F9F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F9F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F9F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012F9FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA8C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103C24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FA9C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103D70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00103EBC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010402C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FADC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAE4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00104208);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FAF4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00104394);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00104534);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB34);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00104A74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB44);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00104BD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010517C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00105ACC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001062E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00106674);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00106BC8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00106F98);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001076CC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00108938);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00109014);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FB74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FBE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FBEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FBF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FBF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FBF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FBFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FC5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FCFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD1C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD24);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD28);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD2C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD3C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD40);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD44);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FD9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FDE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE20);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FE9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEC4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FECC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FED0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FED4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FEE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF48);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF4C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF50);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF54);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF58);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF5C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF60);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF64);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF68);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF6C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF70);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF74);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF78);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF7C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF80);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF84);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF88);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF8C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF90);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF94);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF98);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FF9C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFA0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFA4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFA8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFAC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFB0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFB4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFB8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFBC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFC0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0012FFE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001300FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130100);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130104);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130108);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013010C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130110);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130114);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130118);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013011C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130120);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130124);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130128);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013012C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130130);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130134);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130138);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013013C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130140);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130144);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130148);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013014C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130150);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130154);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130158);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013015C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130160);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130164);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130168);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013016C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130170);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130174);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130178);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013017C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130180);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130184);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130188);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013018C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130190);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130194);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130198);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013019C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001301C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001302D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001303FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130400);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130408);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130410);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00109334);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00109AA0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00109BC4);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00109F2C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010AC04);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010AED0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B5B8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B5CC);

s32 func_0010B5F0(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B5F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B80C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B9AC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B9C0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B9DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130488);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013048C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130490);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130494);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130498);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013049C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304B4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304BC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304C0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304C4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304C8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304CC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304D0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304D4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304D8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304DC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304E0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304E4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001304FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130508);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130548);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013054C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130550);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130554);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130558);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013055C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130560);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130564);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130568);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013056C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130570);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130574);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130578);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013057C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130580);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130584);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130588);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013058C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130590);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001305A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130600);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130604);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130608);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013060C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130610);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130614);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130618);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013061C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130620);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130624);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130628);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013062C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130668);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013066C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130670);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130674);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130678);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013067C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130680);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130684);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130688);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013068C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130690);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130694);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130698);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013069C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130720);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130724);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130728);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013072C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130730);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130734);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130738);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013073C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130740);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130744);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130748);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013074C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130750);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130754);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130758);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013075C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130760);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130764);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130768);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013076C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130770);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130774);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130778);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013077C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130780);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130784);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130788);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013078C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130790);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130794);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130798);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013079C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307A0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307A4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307A8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307AC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307B0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307B8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307E8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307EC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307F4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307F8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_001307FC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130800);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130804);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010B9F0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010BB08);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010BB28);

void func_0010BB48(void) {
    func_0010BB64();
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010BB64);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010BB8C);

void func_0010BBBC(s32 arg0) {
    func_00110AF8(func_0010BB64(), arg0);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010BBEC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010BE14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C35C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C3E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C4EC);

void func_0010C5A4(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_00134458 == 0) {
        D_0013445C = temp_a0;
    }
    D_00134458 += 1;
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C5E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C61C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C678);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C6DC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C748);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C7B0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C830);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C8C8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C8E0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010C930);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010CAB8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010CB14);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010CB60);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010CC08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130828);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013082C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_0013083C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010CC84);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010E69C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010E864);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010E93C);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010E9F8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010EBB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010EFD0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010F0F0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130AAC);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0010F338);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00110784);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00110880);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001108D8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_0011094C);

void func_00110A30(s32 arg0) {
    func_00111290(arg0, (s32) &func_00110784);
}

void func_00110A50(void) {
    func_00110A30(D_00131678);
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00110A74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00110AF8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00110D74);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00110EB0);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00111290);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BC8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BCC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BD0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BD4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BD8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BDC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BE0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BE4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BE8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BEC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BF0);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BF4);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BF8);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130BFC);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C00);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C04);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C08);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C0C);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C10);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C14);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C18);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C30);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C34);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C38);

INCLUDE_RODATA("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", D_00130C68);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00111398);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00111438);

void func_00111444(s32 arg0, M2C_UNK arg1) {
    func_00111398(func_0010BB64(), arg0, arg1);
}

void func_00111484(void) {
    func_00111438(func_0010BB64());
}

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_001114A8);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00111610);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00111700);

INCLUDE_ASM("tmp/asm/303/netfront/nonmatchings/netfront_0EC398", func_00111A00);

