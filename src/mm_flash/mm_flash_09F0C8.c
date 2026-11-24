#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F0C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F124);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F1C0);

s32 func_0009F1CC(void) {
    return M2C_FIELD(M2C_FIELD(sceHVWWW_Library_6E00402C(), void **, 0x29C), s32 *, 0x28);
}

M2C_UNK *func_0009F1F0(void) {
    return &D_000C3F08;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F1FC);

void func_0009F2C8(void) {
}

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

void func_0009F2E0(void) {
    sceHVNetfront_Module_15875ED4();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F2FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F394);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C3F08);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F4C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F58C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F67C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F720);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F7C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F848);

s32 func_0009F858(void) {
    return 1;
}

void func_0009F860(void) {
    sceIoRename();
}

s32 func_0009F87C(void) {
    return -1;
}

s32 func_0009F884(void) {
    return -1;
}

s32 func_0009F88C(void) {
    return -1;
}

s32 func_0009F894(void) {
    return -1;
}

s32 func_0009F89C(void) {
    return -1;
}

s32 func_0009F8A4(void) {
    return -1;
}

s32 func_0009F8AC(void) {
    return -1;
}

s32 func_0009F8B4(void) {
    return -1;
}

s32 func_0009F8BC(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F8C4);

void func_0009F91C(void) {
    sceKernelLibcTime();
}

void func_0009F938(void) {
    sceKernelLibcGettimeofday();
}

s32 func_0009F954(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F95C);

s32 func_0009F96C(void) {
    return -1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009F974);

void func_0009F9A4(M2C_UNK **arg0) {
    *arg0 = &D_000C4060;
}

void func_0009F9B4(M2C_UNK **arg0) {
    *arg0 = &D_000C4060;
}

void func_0009F9C4(M2C_UNK **arg0) {
    *arg0 = &D_000C4060;
    func_000A0934((s32) arg0);
}

void func_0009F9EC(M2C_UNK **arg0) {
    *arg0 = &D_000C4048;
    func_000A0954();
}

void func_0009FA14(M2C_UNK **arg0) {
    *arg0 = &D_000C4048;
    func_000A0954();
}

void func_0009FA3C(M2C_UNK **arg0) {
    *arg0 = &D_000C4048;
    func_000A0954();
    func_000A0934((s32) arg0);
}

void func_0009FA74(M2C_UNK **arg0) {
    *arg0 = &D_000C4030;
    func_000A0954();
}

void func_0009FA9C(M2C_UNK **arg0) {
    *arg0 = &D_000C4030;
    func_000A0954();
}

void func_0009FAC4(M2C_UNK **arg0) {
    *arg0 = &D_000C4030;
    func_000A0954();
    func_000A0934((s32) arg0);
}

s32 func_0009FAFC(void) {
    return 0;
}

s32 func_0009FB04(void) {
    return 0;
}

s32 func_0009FB0C(void *arg0, void *arg1) {
    return M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4);
}

s32 func_0009FB20(void) {
    return 0;
}

void func_0009FB28(s32 **arg0) {
    *arg0 = &D_000C4000;
    func_0009F9A4(arg0);
}

void func_0009FB50(s32 **arg0) {
    *arg0 = &D_000C4000;
    func_0009F9A4(arg0);
}

void func_0009FB78(s32 **arg0) {
    *arg0 = &D_000C4000;
    func_0009F9A4(arg0);
    func_000A0934((s32) arg0);
}

void func_0009FBB0(s32 **arg0) {
    *arg0 = &D_000C3FD0;
    func_0009FB28(arg0);
}

void func_0009FBD8(s32 **arg0) {
    *arg0 = &D_000C3FD0;
    func_0009FB28(arg0);
}

void func_0009FC00(s32 **arg0) {
    *arg0 = &D_000C3FD0;
    func_0009FB28(arg0);
    func_000A0934((s32) arg0);
}

void func_0009FC38(s32 **arg0) {
    *arg0 = &D_000C3FA0;
    func_0009FB28(arg0);
}

void func_0009FC60(s32 **arg0) {
    *arg0 = &D_000C3FA0;
    func_0009FB28(arg0);
}

void func_0009FC88(s32 **arg0) {
    *arg0 = &D_000C3FA0;
    func_0009FB28(arg0);
    func_000A0934((s32) arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FCC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FD18);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FD84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FD98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FDE8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FF1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FF5C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_0009FFF8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A04C4);

s32 func_000A04F4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;
    void **temp_v0;

    var_v1 = 1;
    if (func_000A04C4() == 0) {
        temp_v0 = M2C_FIELD(arg0, void ***, 8);
        var_v1 = M2C_FIELD(*temp_v0, s32 (**)(void **, M2C_UNK, M2C_UNK, M2C_UNK), 0x18)(temp_v0, arg1, arg2, arg3);
    }
    return var_v1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0574);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A07E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0934);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0954);

void func_000A0964(M2C_UNK **arg0) {
    *arg0 = &D_000C4180;
}

void func_000A0974(M2C_UNK **arg0) {
    *arg0 = &D_000C4180;
    func_000A0934((s32) arg0);
}

void func_000A099C(M2C_UNK **arg0) {
    *arg0 = &D_000C4168;
    func_000A0954();
}

void func_000A09C4(M2C_UNK **arg0) {
    *arg0 = &D_000C4168;
    func_000A0954();
}

void func_000A09EC(M2C_UNK **arg0) {
    *arg0 = &D_000C4168;
    func_000A0954();
    func_000A0934((s32) arg0);
}

s32 func_000A0A24(void **arg0) {
    return M2C_FIELD(M2C_FIELD(*arg0, void **, -4), s32 *, 4);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0A34);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0AA4);

u8 *func_000A0B4C(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = 0;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a3 |= (temp_v1 & 0x7F) << var_a2;
        var_a2 += 7;
    } while ((s8) temp_v1 < 0);
    *arg1 = var_a3;
    return var_a0;
}

u8 *func_000A0B80(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while ((s8) temp_a2 < 0);
    if (var_a3 < 0x20U) {
        if (temp_a2 & 0x40) {
            var_t0 |= -1 << var_a3;
        }
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C3FA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C3FD0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4000);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4030);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4048);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4060);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4078);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4080);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C408C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4098);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C40A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C40B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C40BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C40E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C410C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4130);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4140);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C414C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4168);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4180);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4190);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4198);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C41A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C41B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0BD8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0D1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0E1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0E74);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0F0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0F9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A0FD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A14A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A159C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A15C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A15DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A15F4);

s32 func_000A161C(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_000C55F4;
    D_000C55F4 = arg0;
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A162C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1680);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1700);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1774);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1848);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A18D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1978);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1A54);

void func_000A1A74(void) {
    D_000C55F8 = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1A80);

M2C_UNK *func_000A1AB0(void) {
    M2C_UNK *var_v0;

    var_v0 = NULL;
    if (D_000C55F8 == 0) {
        var_v0 = &D_000CD2D0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1AD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A1B30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2114);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A22FC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2408);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2414);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2610);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A26D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A27E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4200);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4220);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C42FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4300);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4304);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4308);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C430C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4310);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4314);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4318);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C431C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4320);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4324);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4328);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C432C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4338);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C433C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4348);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C434C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4358);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C435C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A286C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4368);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C436C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A29B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4378);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C437C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2B04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2C74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43B4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2E50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A2FDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43D4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A317C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C43FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4400);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A36BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A3818);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A4168);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A497C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A4D10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A5264);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A5634);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A5D68);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A6FD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A76B0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A79D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A7D38);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A8A10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A8CDC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A93C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A93D8);

s32 func_000A93FC(void) {
    return 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A9404);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A9618);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A97B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A97D8);

void func_000A97F0(void) {
    func_000A9898();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A980C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A9898);

void func_000A98C0(s32 arg0) {
    func_000A9B48(func_000A9898(), arg0);
}

void func_000A98F0(s32 arg0) {
    func_000AA984(func_000A9898(), arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A9920);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000A9B48);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA090);

void func_000AA148(void) {
    s32 temp_a0;

    temp_a0 = sceKernelCpuSuspendIntr();
    if (D_000CD314 == 0) {
        D_000CD318 = temp_a0;
    }
    D_000CD314 += 1;
}

void func_000AA184(void) {
    s32 temp_v0;

    temp_v0 = D_000CD314 - 1;
    D_000CD314 = temp_v0;
    if (temp_v0 != 0) {

    } else {
        sceKernelCpuResumeIntr(D_000CD318);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA1C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA214);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA2A8);

s32 func_000AA4CC(s32 *arg0, s32 arg1) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F58C(arg1);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA528);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA58C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA5F8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA658);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA6E0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA7A4);

void func_000AA840(s32 arg0) {
    func_000AA6E0(func_000A9898(), arg0);
}

void func_000AA870(s32 arg0, M2C_UNK arg1) {
    func_000AA658(func_000A9898(), arg0, arg1);
}

void func_000AA8B0(void) {
    func_000AA5F8(func_000A9898());
}

void func_000AA8D4(s32 arg0) {
    func_000AA7A4(func_000A9898(), arg0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA904);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA968);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AA984);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AAC00);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AAD3C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB11C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB240);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB540);

void func_000AB5F8(void *arg0, void *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (M2C_FIELD(arg1, s32 *, 4) * 4) + M2C_FIELD(arg0, s32 *, 0x4C);
        M2C_FIELD(arg1, void **, 0) = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB624);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB854);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB8DC);

void func_000AB994(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_000AB540(arg0, 1);
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB9C8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ABBE0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ABE30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AC084);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AC44C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AC9A4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACAC4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACB80);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACC7C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACCD4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACD48);

void func_000ACE2C(s32 arg0) {
    func_000ACEF4(arg0, (s32) &func_000ACB80);
}

void func_000ACE4C(void) {
    func_000ACE2C(D_000C5980);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACE70);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACEF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ACFFC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD164);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD270);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD2E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD374);

void func_000AD3EC(void *arg0) {
    func_000AD484(func_000A9898(), M2C_FIELD(arg0, s16 *, 0xE));
}

s32 func_000AD41C(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F720(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD484);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD4E0);

s32 func_000AD544(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F394(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

s32 func_000AD5AC(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    D_000CD408 = 0;
    temp_v0 = func_0009F67C(arg1, arg2, arg3);
    if (temp_v0 != -1) {

    } else if (D_000CD408 != 0) {
        *arg0 = D_000CD408;
    }
    return temp_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD614);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AD698);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ADC6C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000ADCB8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE000);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE068);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE0DC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE678);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE700);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE898);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE920);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AE9A8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEA84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEB58);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEB9C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEBD0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEC40);

u8 *func_000AECE8(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = 0;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a3 |= (temp_v1 & 0x7F) << var_a2;
        var_a2 += 7;
    } while ((s8) temp_v1 < 0);
    *arg1 = var_a3;
    return var_a0;
}

u8 *func_000AED1C(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while ((s8) temp_a2 < 0);
    if (var_a3 < 0x20U) {
        if (temp_a2 & 0x40) {
            var_t0 |= -1 << var_a3;
        }
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4410);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4414);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4488);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C448C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4490);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4494);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4498);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C449C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C44FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4578);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C457C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4580);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4584);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4588);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C458C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4590);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4594);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4598);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C459C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C45F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4628);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C462C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4630);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4634);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4638);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C463C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4640);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4644);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4648);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C464C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4650);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4654);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4658);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C465C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4660);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4664);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4668);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C466C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4670);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4674);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4680);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C46B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C46C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4700);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4704);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4708);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C470C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4710);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4714);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4718);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C471C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4720);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4724);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4728);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C472C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4730);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4734);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4738);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C473C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4740);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4744);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4748);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C474C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4750);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4754);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4758);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C475C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4760);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4764);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4768);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C476C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4770);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4774);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4780);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C47E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C47EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C47F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C47F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C47F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C47FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4800);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4804);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4808);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C480C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4810);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4814);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4818);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C481C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4820);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4824);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4828);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C482C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4830);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4834);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4838);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C483C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4840);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4844);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4848);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C484C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4850);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4854);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4858);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C485C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4860);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4870);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4880);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4968);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C496C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4970);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4974);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4978);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C497C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4980);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4984);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4988);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C498C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4990);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4994);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4998);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C499C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49A0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49A4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49A8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49AC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49B0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49B4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49B8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49BC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49C0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49C4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49F0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49F4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49F8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C49FC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4A68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4B70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C44);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C4C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C50);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C54);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C58);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C5C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C60);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C64);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C68);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C6C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C70);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C74);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4C9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CD8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4CFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4D9C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DA4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DA8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DAC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4DFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4E2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EB4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EB8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EBC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EC0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EC4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EC8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4ECC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4ED0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4ED4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4ED8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EDC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EE0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EE4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EE8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EEC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EF0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EF4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EF8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4EFC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F00);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F04);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F08);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F0C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F10);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F14);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F1C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F20);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F24);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F28);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F2C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F30);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F34);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F38);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F3C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F40);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F48);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F78);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F7C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F80);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F84);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F88);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F8C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F90);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F94);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4F98);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4FA0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C4FB0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50C8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50CC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50D0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50D4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50D8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50DC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50E0);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50E4);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50E8);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50EC);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C50F0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AED74);

s32 func_000AEEC0(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x354);
}

s32 func_000AEEC8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x360);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEED0);

s32 func_000AEEFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x35C);
}

s32 func_000AEF04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x358);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEF0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AF0B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AF58C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AFA98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AFC1C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AFD04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AFEC0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AFF0C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AFFB0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B03C4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0498);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B06D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B07F4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0980);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0B10);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0C98);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0CCC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0E14);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0E28);

s32 func_000B0E3C(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x350);
}

void func_000B0E44(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x350) = arg1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B0E4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B11A4);

u8 *func_000B1214(u8 *arg0, s32 *arg1) {
    s32 var_a2;
    s32 var_a3;
    u8 *var_a0;
    u8 temp_v1;

    var_a0 = arg0;
    var_a2 = 0;
    var_a3 = 0;
    do {
        temp_v1 = *var_a0;
        var_a0 += 1;
        var_a3 |= (temp_v1 & 0x7F) << var_a2;
        var_a2 += 7;
    } while ((s8) temp_v1 < 0);
    *arg1 = var_a3;
    return var_a0;
}

u8 *func_000B1248(u8 *arg0, s32 *arg1) {
    s32 var_t0;
    u32 var_a3;
    u8 *var_a0;
    u8 temp_a2;

    var_a0 = arg0;
    var_a3 = 0;
    var_t0 = 0;
    do {
        temp_a2 = *var_a0;
        var_a0 += 1;
        var_t0 |= (temp_a2 & 0x7F) << var_a3;
        var_a3 += 7;
    } while ((s8) temp_a2 < 0);
    if (var_a3 < 0x20U) {
        if (temp_a2 & 0x40) {
            var_t0 |= -1 << var_a3;
        }
    }
    *arg1 = var_t0;
    return var_a0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B12A0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B13E4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1454);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1474);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B14BC);

void func_000B151C(s32 arg0, s32 arg1) {
    func_000B14BC(arg0, arg1, 0, 0);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B153C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1570);

void func_000B1668(void) {
    func_000B1570();
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1684);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B16BC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1730);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1810);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1838);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B18E8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B19C0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1C30);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1D84);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B1EE4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B2068);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B2328);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B24B8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B2788);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B28D8);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B299C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B2C04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000B2D18);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", D_000C54D4);
