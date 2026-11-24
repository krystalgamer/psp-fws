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

s32 func_0009FB0C(struct Unk_func_0009FB0C_0 *arg0, struct Unk_func_0009FB0C_1 *arg1) {
    return arg0->unk4 == arg1->unk4;
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

s32 func_000A04F4(struct Unk_func_000A04F4_0 *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 var_v1;
    struct Unk_vt_func_000A04F4_temp_v0 **temp_v0;

    var_v1 = 1;
    if (func_000A04C4() == 0) {
        temp_v0 = arg0->unk8;
        var_v1 = (*temp_v0)->unk18(temp_v0, arg1, arg2, arg3);
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

s32 func_000A0F9C(struct Unk_func_000A0F9C_0 *arg0, s32 arg1) {
    void *sp0;
    func_000A0B4C((arg0->unkC - arg1) - 1, &sp0);
    return sp0 == 0;
}

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

void func_000AB5F8(struct Unk_func_000AB5F8_0 *arg0, struct Unk_func_000AB5F8_1 *arg1) {
    void **temp_v0;

    if (arg1 != NULL) {
        temp_v0 = (arg1->unk4 * 4) + arg0->unk4C;
        arg1->unk0 = (void *) *temp_v0;
        *temp_v0 = arg1;
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB624);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB854);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AB8DC);

void func_000AB994(s32 arg0, s32 arg1) {
    struct Unk_func_000AB994_temp_v0 *temp_v0;

    temp_v0 = func_000AB540(arg0, 1);
    temp_v0->unk14 = arg1;
    temp_v0->unk10 = 1;
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

void func_000AD3EC(struct Unk_func_000AD3EC_0 *arg0) {
    func_000AD484(func_000A9898(), arg0->unkE);
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

s32 func_000AEEC0(struct Unk_func_000AEEC0_0 *arg0) {
    return arg0->unk354;
}

s32 func_000AEEC8(struct Unk_func_000AEEC8_0 *arg0) {
    return arg0->unk360;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_09F0C8", func_000AEED0);

s32 func_000AEEFC(struct Unk_func_000AEEFC_0 *arg0) {
    return arg0->unk35C;
}

s32 func_000AEF04(struct Unk_func_000AEF04_0 *arg0) {
    return arg0->unk358;
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

s32 func_000B0E3C(struct Unk_func_000B0E3C_0 *arg0) {
    return arg0->unk350;
}

void func_000B0E44(struct Unk_func_000B0E44_0 *arg0, s32 arg1) {
    arg0->unk350 = arg1;
}

void func_000B0E4C(void) {
    D_000CD324.unk0 = 4;
    D_000CD324.unk1 = 4;
    D_000CD324.unk2 = 4;
    D_000CD324.unk3 = 4;
    D_000CD324.unk4 = 4;
    D_000CD324.unk5 = 4;
    D_000CD324.unk6 = 4;
    D_000CD324.unk7 = 4;
    D_000CD324.unk8 = 4;
    D_000CD324.unk9 = 4;
    D_000CD324.unkA = 4;
    D_000CD324.unkB = 4;
    D_000CD324.unkC = 4;
    D_000CD324.unkD = 4;
    D_000CD324.unkE = 4;
    D_000CD324.unkF = 4;
    D_000CD324.unk10 = 4;
    D_000CD324.unk11 = 4;
    D_000CD324.unk12 = 4;
    D_000CD324.unk13 = 4;
    D_000CD324.unk14 = 4;
    D_000CD324.unk15 = 4;
    D_000CD324.unk16 = 4;
    D_000CD324.unk17 = 4;
    D_000CD324.unk18 = 4;
    D_000CD324.unk19 = 4;
    D_000CD324.unk1A = 4;
    D_000CD324.unk1B = 4;
    D_000CD324.unk1C = 4;
    D_000CD324.unk1D = 4;
    D_000CD324.unk1E = 4;
    D_000CD324.unk40 = 4;
    D_000CD324.unk20 = 4;
    D_000CD324.unk21 = 4;
    D_000CD324.unk22 = 4;
    D_000CD324.unk23 = 4;
    D_000CD324.unk24 = 4;
    D_000CD324.unk25 = 4;
    D_000CD324.unk26 = 4;
    D_000CD324.unk27 = 4;
    D_000CD324.unk28 = 4;
    D_000CD324.unk29 = 4;
    D_000CD324.unk2A = 4;
    D_000CD324.unk2B = 4;
    D_000CD324.unk2C = 4;
    D_000CD324.unk2D = 4;
    D_000CD324.unk2E = 4;
    D_000CD324.unk2F = 4;
    D_000CD324.unk30 = 4;
    D_000CD324.unk31 = 4;
    D_000CD324.unk32 = 4;
    D_000CD324.unk33 = 4;
    D_000CD324.unk34 = 4;
    D_000CD324.unk35 = 4;
    D_000CD324.unk36 = 4;
    D_000CD324.unk37 = 4;
    D_000CD324.unk38 = 4;
    D_000CD324.unk39 = 4;
    D_000CD324.unk3A = 4;
    D_000CD324.unk3B = 4;
    D_000CD324.unk3C = 4;
    D_000CD324.unk3D = 4;
    D_000CD324.unk3E = 4;
    D_000CD324.unk3F = 4;
    D_000CD324.unk40 = 4;
    D_000CD324.unk41 = 4;
    D_000CD324.unk42 = 4;
    D_000CD324.unk43 = 4;
    D_000CD324.unk44 = 4;
    D_000CD324.unk45 = 4;
    D_000CD324.unk46 = 4;
    D_000CD324.unk47 = 4;
    D_000CD324.unk48 = 4;
    D_000CD324.unk49 = 4;
    D_000CD324.unk4A = 4;
    D_000CD324.unk4B = 4;
    D_000CD324.unk4C = 4;
    D_000CD324.unk4D = 4;
    D_000CD324.unk4E = 4;
    D_000CD324.unk4F = 4;
    D_000CD324.unk50 = 4;
    D_000CD324.unk51 = 4;
    D_000CD324.unk52 = 4;
    D_000CD324.unk53 = 4;
    D_000CD324.unk54 = 4;
    D_000CD324.unk55 = 4;
    D_000CD324.unk56 = 4;
    D_000CD324.unk57 = 4;
    D_000CD324.unk58 = 4;
    D_000CD324.unk59 = 4;
    D_000CD324.unk5A = 4;
    D_000CD324.unk5B = 4;
    D_000CD324.unk5C = 4;
    D_000CD324.unk5D = 4;
    D_000CD324.unk5E = 4;
    D_000CD324.unk5F = 4;
    D_000CD324.unk60 = 4;
    D_000CD324.unk61 = 4;
    D_000CD324.unk62 = 4;
    D_000CD324.unk63 = 4;
    D_000CD324.unk64 = 4;
    D_000CD324.unk65 = 4;
    D_000CD324.unk66 = 4;
    D_000CD324.unk67 = 4;
    D_000CD324.unk68 = 4;
    D_000CD324.unk69 = 4;
    D_000CD324.unk6A = 4;
    D_000CD324.unk6B = 4;
    D_000CD324.unk6C = 4;
    D_000CD324.unk6D = 4;
    D_000CD324.unk6E = 4;
    D_000CD324.unk6F = 4;
    D_000CD324.unk70 = 4;
    D_000CD324.unk71 = 4;
    D_000CD324.unk72 = 4;
    D_000CD324.unk73 = 4;
    D_000CD324.unk74 = 4;
    D_000CD324.unk75 = 4;
    D_000CD324.unk76 = 4;
    D_000CD324.unk77 = 4;
    D_000CD324.unk78 = 4;
    D_000CD324.unk79 = 4;
    D_000CD324.unk7A = 4;
    D_000CD324.unk7B = 4;
    D_000CD324.unk7C = 4;
    D_000CD324.unk7D = 4;
    D_000CD324.unk7E = 4;
    D_000CD324.unk7F = 4;
    D_000CD324.unk80 = 4;
    D_000CD324.unk81 = 4;
    D_000CD324.unk82 = 4;
    D_000CD324.unk83 = 4;
    D_000CD324.unk84 = 4;
    D_000CD324.unk85 = 4;
    D_000CD324.unk86 = 4;
    D_000CD324.unk87 = 4;
    D_000CD324.unk88 = 4;
    D_000CD324.unk89 = 4;
    D_000CD324.unk8A = 4;
    D_000CD324.unk8B = 4;
    D_000CD324.unk8C = 4;
    D_000CD324.unk8D = 4;
    D_000CD324.unk8E = 4;
    D_000CD324.unk8F = 4;
    D_000CD324.unk90 = 4;
    D_000CD324.unk91 = 4;
    D_000CD324.unk92 = 4;
    D_000CD324.unk93 = 4;
    D_000CD324.unk94 = 4;
    D_000CD324.unk95 = 4;
    D_000CD324.unk96 = 4;
    D_000CD324.unk97 = 4;
    D_000CD324.unk98 = 4;
    D_000CD324.unk99 = 4;
    D_000CD324.unk9A = 4;
    D_000CD324.unk9B = 4;
    D_000CD324.unk9C = 4;
    D_000CD324.unk9D = 4;
    D_000CD324.unk9E = 4;
    D_000CD324.unk9F = 4;
    D_000CD324.unkA0 = 4;
    D_000CD324.unkA1 = 4;
    D_000CD324.unkA2 = 4;
    D_000CD324.unkA3 = 4;
    D_000CD324.unkA4 = 4;
    D_000CD324.unkA5 = 4;
    D_000CD324.unkA6 = 4;
    D_000CD324.unkA7 = 4;
    D_000CD324.unkA8 = 4;
    D_000CD324.unkA9 = 4;
    D_000CD324.unkAA = 4;
    D_000CD324.unkAB = 4;
    D_000CD324.unkAC = 4;
    D_000CD324.unkAD = 4;
    D_000CD324.unkAE = 4;
    D_000CD324.unkAF = 4;
    D_000CD324.unkB0 = 4;
    D_000CD324.unkB1 = 4;
    D_000CD324.unkB2 = 4;
    D_000CD324.unkB3 = 4;
    D_000CD324.unkB4 = 4;
    D_000CD324.unkB5 = 4;
    D_000CD324.unkB6 = 4;
    D_000CD324.unkB7 = 4;
    D_000CD324.unkB8 = 4;
    D_000CD324.unkB9 = 4;
    D_000CD324.unkBA = 4;
    D_000CD324.unkBB = 4;
    D_000CD324.unkBC = 4;
    D_000CD324.unkBD = 4;
    D_000CD324.unkBE = 4;
    D_000CD324.unkBF = 4;
    D_000CD324.unkC0 = 4;
    D_000CD324.unkC1 = 4;
    D_000CD324.unkC2 = 4;
    D_000CD324.unkC3 = 4;
    D_000CD324.unkC4 = 4;
    D_000CD324.unkC5 = 4;
    D_000CD324.unkC6 = 4;
    D_000CD324.unkC7 = 4;
    D_000CD324.unkC8 = 4;
    D_000CD324.unkC9 = 4;
    D_000CD324.unkCA = 4;
    D_000CD324.unkCB = 4;
    D_000CD324.unkD1 = 4;
    D_000CD324.unkCC = 4;
    D_000CD324.unkCD = 4;
    D_000CD324.unkCE = 4;
    D_000CD324.unkCF = 4;
    D_000CD324.unkD0 = 4;
}

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
