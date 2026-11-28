/* crtbegin (gcc 3.3 crtstuff.c); its statics live in the asm data segment, and
   the functions are global because the .init/.fini asm calls them */
#include "common.h"
#include "rinit_decls.h"

extern void __deregister_frame_info(const void *begin) __attribute__((weak));
extern void __register_frame_info(const void *begin, void *object) __attribute__((weak));

void __do_global_dtors_aux(void) {
    func_ptr f;

    if (D_0000F570) {
        return;
    }
    while ((f = *D_0000C164)) {
        D_0000C164++;
        f();
    }
    if (__deregister_frame_info) {
        __deregister_frame_info(D_0000B29C);
    }
    D_0000F570 = 1;
}

void frame_dummy(void) {
    if (__register_frame_info) {
        __register_frame_info(D_0000B29C, D_0000F574);
    }
    if (D_0000B298[0]) {
        if (_Jv_RegisterClasses) {
            _Jv_RegisterClasses(D_0000B298);
        }
    }
}
