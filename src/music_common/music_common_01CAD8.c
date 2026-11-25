/* cflags: -Os */
#include "common.h"
#include "music_common_decls.h"

#if FW_VERSION == 282
void func_0001CAD8(M2C_UNK **arg0) {
    *arg0 = &D_000202B0;
    func_0001CD88();
    *arg0 = &D_0001F8D8;
}

void music_common_41A6A685(M2C_UNK **arg0) {
    *arg0 = &D_000202B0;
    func_0001CD88();
    *arg0 = &D_0001F8D8;
}

void func_0001CB50(M2C_UNK **arg0) {
    *arg0 = &D_000202B0;
    func_0001CD88();
    *arg0 = &D_0001F8D8;
    scePaf_4E67BB08(arg0);
}

INCLUDE_ASM("nonmatchings/music_common_01CAD8", func_0001CB94);

INCLUDE_ASM("nonmatchings/music_common_01CAD8", func_0001CBD4);

void func_0001CC14(void) {
    func_0001CD88();
}
#endif
