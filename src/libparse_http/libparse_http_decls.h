#ifndef LIBPARSE_HTTP_DECLS_H
#define LIBPARSE_HTTP_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */


typedef unsigned char SceUChar8;

typedef int SceInt32;

typedef unsigned char SceUChar;

typedef unsigned int SceUInt32;

extern M2C_UNK D_00000C41;
extern M2C_UNK D_00000D61;

M2C_UNK *func_0000065C(void);
M2C_UNK *func_00000704(void);
u8 *func_00000B4C(u8 *arg0, u8 *arg1);
u8 *func_00000C48(u8 *arg0, u8 *arg1);
s32 module_start(void);
s32 module_stop(void);
int sceParseHttpStatusLine(const SceUChar8 *status_line, SceSize line_len, SceInt32 *http_major_ver, SceInt32 *http_minor_ver, SceInt32 *response_code, const SceUChar8 **reason_phrase, SceSize *phrase_len);
int strncmp_uc(const char *s, const char *t, SceSize n);

#endif
