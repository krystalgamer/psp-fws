#include "common.h"
#include "paf_decls.h"

void func_000E9248(M2C_UNK **arg0) {
    *arg0 = &D_0019A7B8;
    scePaf_715E8DAB((s32) arg0);
    scePaf_4E67BB08(arg0);
}

void scePaf_95708BC0(struct Unk_scePaf_95708BC0_0 *arg0) {
    func_000FF94C(arg0->unk1E8);
}

void scePaf_DEF9EBE7(struct Unk_scePaf_DEF9EBE7_0 *arg0) {
    func_000FF9BC(arg0->unk1E8);
}

void scePaf_C85155C9(struct Unk_scePaf_C85155C9_0 *arg0) {
    func_000FF9E4(arg0->unk1E8);
}

void scePaf_F23F3226(struct Unk_scePaf_F23F3226_0 *arg0) {
    func_000FFA54(arg0->unk1E8);
}

void scePaf_D153385E(struct Unk_scePaf_D153385E_0 *arg0) {
    func_000FFA7C(arg0->unk1E8);
}

void scePaf_86A5AE7D(struct Unk_scePaf_86A5AE7D_0 *arg0) {
    func_000FFAA0(arg0->unk1E8);
}

void scePaf_5A8D4BDB(struct Unk_scePaf_5A8D4BDB_0 *arg0) {
    func_000FFAA8(arg0->unk1E8);
}

void scePaf_2120282A(struct Unk_scePaf_2120282A_0 *arg0) {
    func_000FFB04(arg0->unk1E8);
}

void scePaf_8159EB28(struct Unk_scePaf_8159EB28_0 *arg0) {
    func_000FFB44(arg0->unk1E8);
}

void scePaf_5CE11C03(struct Unk_scePaf_5CE11C03_0 *arg0) {
    func_000FFB80(arg0->unk1E8);
}

void scePaf_05073826(struct Unk_scePaf_05073826_0 *arg0) {
    func_000FFB88(arg0->unk1E8);
}

void scePaf_A4B48F00(struct Unk_scePaf_A4B48F00_0 *arg0) {
    func_000FFB90(arg0->unk1E8);
}

void scePaf_224C33F0(struct Unk_scePaf_224C33F0_0 *arg0) {
    func_000FFBEC(arg0->unk1E8);
}

void scePaf_3DBE861F(struct Unk_scePaf_3DBE861F_0 *arg0) {
    func_000FFBF4(arg0->unk1E8);
}

void scePaf_FA78AF39(struct Unk_scePaf_FA78AF39_0 *arg0) {
    func_000FFC50(arg0->unk1E8);
}

void scePaf_A3761F27(struct Unk_scePaf_A3761F27_0 *arg0) {
    func_000FFC58(arg0->unk1E8);
}

void scePaf_DE75C2BA(struct Unk_scePaf_DE75C2BA_0 *arg0) {
    func_000FFC8C(arg0->unk1E8);
}

void scePaf_4129A915(struct Unk_scePaf_4129A915_0 *arg0, s32 arg1, s32 arg2) {
    func_000FFCB0(arg0->unk1E8, arg1, arg2 & 0xFF);
}

void scePaf_8A51BA1E(struct Unk_scePaf_8A51BA1E_0 *arg0) {
    func_000FFCD8(arg0->unk1E8);
}

void scePaf_0FFA3ECE(struct Unk_scePaf_0FFA3ECE_0 *arg0) {
    func_000FFCE4(arg0->unk1E8);
}

void scePaf_89582FD0(struct Unk_scePaf_89582FD0_0 *arg0) {
    func_000FFD00(arg0->unk1E8);
}

void scePaf_84913A3A(struct Unk_scePaf_84913A3A_0 *arg0) {
    func_000FFD1C(arg0->unk1E8);
}

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E66C4);

INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E67E4);

INCLUDE_ASM("nonmatchings/paf_0E9248", scePaf_677F1705);

INCLUDE_ASM("nonmatchings/paf_0E9248", scePaf_7C2DB482);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/paf_0E9248", func_000E94EC);
#endif
