/* cflags: -Os */
#include "common.h"
#include "music_plugin_decls.h"

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F60C(s32 arg0) {
    func_0004EF08(arg0 - 4);
}
#endif

#if FW_VERSION == 150
INCLUDE_ASM("nonmatchings/music_plugin_0004F60C", func_0004F628);
#endif

#if FW_VERSION == 100 || FW_VERSION == 152
void func_0004F628(s32 arg0) {
    func_0004EF10(arg0 - 4);
}
#endif
