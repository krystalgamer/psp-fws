#include "common.h"
#include "common_gui_decls.h"

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/common_gui", func_00000000);
#endif

INCLUDE_ASM("nonmatchings/common_gui", func_00000024);

INCLUDE_ASM("nonmatchings/common_gui", func_000000AC);

s32 module_start(void) {
    func_00000000();
    return 0;
}

s32 module_stop(void) {
    func_00002DB8();
    return 0;
}

#if FW_VERSION >= 350
void sceVshCommonGui_25AC25C0(void) {
    func_00002DB8();
}

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_A57C0CF1);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_F5A16B4D);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_891DD627);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_4D99D0C1);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_93F72B02);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_2EBB5C2B);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_11C48509);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_73765E63);
#else
void sceVshCommonGui_68778E5A(void) {
    func_00002DB8();
}
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_44961EFA);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_A0DE7090);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_441D55D7);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_EEB86F0E);
#endif

#if FW_VERSION >= 310 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_DE8FC339);
#endif

#if FW_VERSION < 350
INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_6C81492F);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_54BC644C);

INCLUDE_ASM("nonmatchings/common_gui", sceVshCommonGui_BAA1F762);
#endif
