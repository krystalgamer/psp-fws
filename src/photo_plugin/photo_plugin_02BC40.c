#include "common.h"
#include "photo_plugin_decls.h"

void func_0002BC40(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}

void func_0002BC68(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_0002BCA0(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}

void func_0002BCC8(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_0002BD00(M2C_UNK **arg0) {
    *arg0 = &D_00031678;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

void func_0002BD38(M2C_UNK **arg0) {
    *arg0 = &D_00031678;
    func_0002B53C(arg0);
}

void func_0002BD60(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
}

void func_0002BD88(M2C_UNK **arg0) {
    *arg0 = &D_000316C0;
    func_0002B53C(arg0);
    scePaf_4E67BB08((s32) arg0);
}

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", D_00031648);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", D_00031660);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", D_00031678);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", D_00031690);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", D_000316A8);

INCLUDE_RODATA("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", D_000316C0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002BDC0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002BF84);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002C288);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002C404);

void func_0002C44C(s32 arg0, M2C_UNK arg1) {
    func_0002CC08(arg1, arg0);
}

void func_0002C470(s32 arg0, s32 arg1) {
    func_0002CC08(arg1, arg0 + 0xC);
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002C498);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002C658);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002C8B4);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CA60);

u16 func_0002CA9C(void *arg0) {
    return *M2C_FIELD(arg0, u16 **, 4);
}

s32 func_0002CAA8(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 4);
}

s32 func_0002CAB4(void *arg0) {
    return *M2C_FIELD(arg0, s32 **, 4);
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CAC0);

s32 func_0002CAFC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CB04);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CB84);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CC08);

void func_0002CC40(void) {
    func_0002CE54();
}

void func_0002CC5C(void) {
    func_0002CE60();
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CC78);

void *func_0002CCEC(void **arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0;
    void *var_v0;
    void *var_v1;

    var_a0 = *arg0;
    var_v0 = NULL;
    if (var_a0 != NULL) {
        temp_v0 = M2C_FIELD(var_a0, void **, 4);
        if (temp_v0 != NULL) {
            var_v1 = temp_v0;
            do {
                temp_v0_2 = M2C_FIELD(var_v1, void **, 4);
                var_a0 = var_v1;
                var_v1 = temp_v0_2;
            } while (temp_v0_2 != NULL);
        }
        var_v0 = var_a0;
    }
    return var_v0;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CD24);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CD94);

s32 *func_0002CE1C(s32 *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    *arg0 = func_0002CEC0(arg1, arg2);
    return arg0;
}

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CE54);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CE60);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CE7C);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CEC0);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002CF10);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002D07C);

INCLUDE_ASM("tmp/asm/201/photo_plugin/nonmatchings/photo_plugin_02BC40", func_0002D1F0);
