/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -mext */
#include "common.h"
#include "mm_flash_decls.h"

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000434F4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00043530);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004356C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000435AC);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000435EC);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000435FC);

void func_0004366C(void) {
    func_000436A4();
}

void func_00043688(void) {
    func_000436A4();
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000436A4);

void func_000437AC(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_000434F4(arg0, arg1, func_00043104(arg1 + 0xD0C));
    temp_v0 = func_00090648(*func_0009F1C0(), 0x4C, 0);
    func_00041D08(temp_v0, arg1);
    temp_v0_2 = func_00090648(*func_0009F1C0(), 0xC, 0);
    func_00041424(temp_v0_2);
    M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_2;
    func_000421D8(arg1 + 0x5C0, temp_v0);
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00043858);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004388C);

void func_000438C0(struct Unk_func_000438C0_0 *arg0, struct Unk_func_000438C0_1 *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unkD08;
    arg0->unk4 = temp_v0;
    if (temp_v0 != NULL) {
        func_000425E8(temp_v0);
    }
    arg0->unk0 = arg1;
    func_0007B03C(arg1, 0);
}

void func_00043914(struct Unk_func_00043914_0 *arg0, struct Unk_func_00043914_1 *arg1) {
    void *temp_v0;

    temp_v0 = arg1->unkD08;
    arg0->unk4 = temp_v0;
    if (temp_v0 != NULL) {
        func_000425E8(temp_v0);
    }
    arg0->unk0 = arg1;
    func_0007B03C(arg1, 0);
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00043968);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000439B0);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD7E0);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD7E8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000439F8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00043BE8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00043FE8);

void func_0004437C(struct Unk_func_0004437C_0 *arg0, s32 arg1) {
    arg0->unk8 = arg1;
    arg0->unk4 = 0;
    arg0->unk0 = 0;
}

void func_0004438C(void) {
}

void func_00044394(void) {
}

void func_0004439C(void **arg0, struct Unk_func_0004439C_1 *arg1) {
    arg1->unk6C = (void *) *arg0;
    *arg0 = arg1;
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000443AC);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000443E0);

void func_00044458(void **arg0, s32 arg1) {
    struct Unk_func_00044458_var_s0 *var_s0;

    var_s0 = *arg0;
    if (var_s0 != NULL) {
        do {
            if (var_s0->unk64 != arg1) {
                var_s0 = var_s0->unk6C;
            } else {
                func_00046250(var_s0);
                var_s0 = var_s0->unk6C;
            }
        } while (var_s0 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000444B0);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00044570);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD824);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD828);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD82C);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD830);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD838);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD840);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD848);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD850);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD858);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD860);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD868);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD874);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD87C);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD888);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD898);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8C8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00044650);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8D8);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8E0);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8E4);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8EC);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8F4);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8FC);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD908);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD910);

#if FW_VERSION == 303
INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8C8_v303);
#endif

#if FW_VERSION == 282
INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD8C8_v282);
#endif

#if FW_VERSION == 271
INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD618);
#endif

#if FW_VERSION == 340
INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD918);
#endif

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00044FF8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000451B0);

void func_000452E8(struct Unk_func_000452E8_0 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000452F8);

void func_0004535C(s32 *arg0) {
    struct Unk_func_0004535C_var_s0 *var_s0;
    void *var_s1;

    var_s0 = *arg0;
    if (var_s0 != NULL) {
        var_s1 = var_s0;
        do {
            var_s0 = var_s0->unk4;
            if (var_s1 != NULL) {
                func_00090730(*func_0009F1C0(), (s32) var_s1, 0);
            }
            var_s1 = var_s0;
        } while (var_s0 != NULL);
    }
    *arg0 = NULL;
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000453C4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045524);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045634);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000457C4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045954);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000459C0);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045AC0);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045BD4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045CF8);

s32 func_00045DBC(struct Unk_func_00045DBC_0 *arg0) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = 0;
    if (arg0->unk0 == 3) {
        temp_v1 = arg0->unk8->unk7C;
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_a1 = 1;
            break;
        case 7:
            var_a1 = 1;
            break;
        }
    }
    return var_a1;
}

void func_00045DF8(s32 arg0) {
    struct Unk_func_00045DF8_temp_v0 *temp_v0;

    temp_v0 = func_000608F4();
    if ((temp_v0 == NULL) || (func_00045BD4(arg0, temp_v0), (func_00045DBC(temp_v0) == 0))) {

    } else {
        func_00045F60(arg0, temp_v0->unk8);
    }
}

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045E5C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00045F60);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000460E8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046250);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046334);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004640C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004649C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046560);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD954);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD95C);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD978);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BD980);

#if FW_VERSION < 303
INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046628);
#else
void func_00046628(s32 arg0) {
    if (func_0008D474() == 0) {

    } else {
        func_00046560(arg0);
        func_0004640C(arg0, (s32) "Macromedia");
        func_0004640C(arg0, (s32) "Flash Player");
    }
}
#endif

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046684);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000467E4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046AB8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046BB8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046CD4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00046F04);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00047CD8);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BDA4C);

INCLUDE_RODATA("nonmatchings/mm_flash_0434F4", D_000BDA54);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00048334);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00048500);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00048634);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004877C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000487E4);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000488D0);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_000489D8);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_00048C38);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004A16C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004A4C0);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004A50C);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004A570);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004A638);

INCLUDE_ASM("nonmatchings/mm_flash_0434F4", func_0004ABD0);
