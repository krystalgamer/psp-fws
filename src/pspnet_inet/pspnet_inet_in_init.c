/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

void func_00012CDC(void) {
    D_0002C01C = 1;
    D_0002C020 = 1;
    in_maxmtu = 0;
    in_mk.tqh_first = NULL;
    in_mk.tqh_last = &in_mk.tqh_first;
}

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/pspnet_inet_in_init", func_00012D50);
#endif
