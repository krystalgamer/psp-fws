#include "common.h"
/* newlib locale/locale.c (a newer revision than 1.12.0) */
#include "rinit_decls.h"
#include "rinit_newlib.h"

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEB0);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEB4);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEB8);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEBC);

INCLUDE_RODATA("nonmatchings/rinit_0062C8", D_0000BEEC);

INCLUDE_ASM("nonmatchings/rinit_0062C8", _setlocale_r);

char *__locale_charset(void) {
    return charset;
}

struct lconv *_localeconv_r(struct _reent *data) {
    return &D_0000BEBC;
}

char *setlocale(int category, const char *locale) {
    return _setlocale_r(_REENT, category, locale);
}

struct lconv *localeconv(void) {
    return _localeconv_r(_REENT);
}
