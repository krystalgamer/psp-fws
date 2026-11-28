/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers */
#include "common.h"
#include "libhttp_decls.h"

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp_strtol", func_0000C114);

INCLUDE_ASM("nonmatchings/libhttp_strtol", func_0000C2F0);
#endif

#if FW_VERSION < 201
void func_00015A10(s32 arg0) {
    func_0000C114(arg0, 0, 0xA);
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp_strtol", __udivdi3);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp_strtol", __umoddi3);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/libhttp_strtol", D_000179D0);
#endif
