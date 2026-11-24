#include "common.h"
#include "mm_flash_decls.h"

void func_0005AFB8(struct Unk_func_0005AFB8_0 *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_s1;
    s32 temp_v1;
    struct Unk_func_0005AFB8_temp_a0 *temp_a0;

    temp_v1 = arg0->unk0;
    arg0->unkC = 0;
    temp_s1 = __builtin_allegrex_min(arg2, arg0->unk4 - temp_v1);
    sceHVNetfront_Module_1A02495A(arg0->unk8 + temp_v1, arg1, temp_s1, arg3);
    temp_a0 = (u8 *)arg0 + 0x10;
    arg0->unk0 = (s32) (arg0->unk0 + temp_s1);
    temp_a0->unk4 = (s32) (temp_a0->unk4 + temp_s1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005B020);

void func_0005B0A8(struct Unk_func_0005B0A8_0 *arg0, s32 arg1) {
    struct Unk_func_0005B0A8_temp_a0 *temp_a0;

    arg0->unk58C = arg1;
    if (arg0->unk2F8 != 0) {
        temp_a0 = arg0->unk2DC->unk1018;
        if (temp_a0 != NULL) {
            temp_a0->unk28 = arg1;
        }
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005B0CC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005B15C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005BA20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005BA74);

s32 func_0005BC1C(struct Unk_func_0005BC1C_0 *arg0, s32 arg1) {
    s32 var_a2;

    var_a2 = 0;
    if (arg1 >= 2) {
        if (arg0->unk0 == 0xFF) {
            var_a2 = arg0->unk1 == 0xD8;
        }
    }
    return var_a2;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005BC4C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005BD60);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005BDF4);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005C12C);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005C22C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE20C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE218);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE228);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE22C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE234);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE240);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE244);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE250);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE25C);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE264);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE278);

INCLUDE_RODATA("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", D_000BE280);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005DDEC);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005F094);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005F5EC);

s32 func_0005F7A0(struct Unk_func_0005F7A0_0 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0->unk2FC != 0) {
        var_v0 = func_0005F7D0((s32) arg0) != 0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005F7D0);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005F87C);

void func_0005F900(s32 arg0, struct Unk_func_0005F900_1 *arg1) {
    if (arg1->unk4 == 0) {
        arg1->unk4 = func_0005F938(arg0, arg1->unk0);
    }
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005F938);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005F9EC);

s32 func_0005FD8C(struct Unk_func_0005FD8C_0 *arg0, s32 *arg1, s32 *arg2) {
    s32 var_t1;

    var_t1 = 0;
    if ((arg0->unk64 == 0) && (arg0->unk2A0 != 0)) {
        var_t1 = 1;
        *arg1 = (arg0->unk2B0 - arg0->unk2AC) / 20;
        *arg2 = (arg0->unk2B8 - arg0->unk2B4) / 20;
    }
    return var_t1;
}

s32 func_0005FE00(struct Unk_func_0005FE00_0 *arg0) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = arg0->unk2DC;
    var_a1 = 0;
    if (temp_v1 != 0) {
        var_a1 = (s32) arg0 == (temp_v1 + 8);
    }
    return var_a1;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005FE20);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005FF04);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_0005FFE8);

void func_00060068(struct Unk_func_00060068_0 *arg0, s32 arg1) {
    arg0->unk10 = arg1;
    arg0->unkC = 0;
}

void func_00060074(struct Unk_func_00060074_0 *arg0, struct Unk_func_00060074_1 *arg1) {
    arg0->unkC = arg1;
    arg0->unk10 = 0;
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_00060080);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_00060264);

void func_00060348(struct Unk_func_00060348_0 *arg0) {
    if (arg0->unk10 == 0) {
        arg0->unk34 = (s32) (arg0->unk34 + 1);
    }
}

void func_00060368(struct Unk_func_00060368_0 *arg0) {
    arg0->unk38 = (s32) (arg0->unk38 + 1);
}

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_00060378);

INCLUDE_ASM("tmp/asm/340/mm_flash/nonmatchings/mm_flash_05AFB8", func_000603E8);

