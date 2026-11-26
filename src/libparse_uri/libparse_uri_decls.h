#ifndef LIBPARSE_URI_DECLS_H
#define LIBPARSE_URI_DECLS_H

#include "common.h"
#include "m2c_macros.h"

/* devkit 0.6.0 DWARF (tools/dwarf_types.py) */
struct SceUriElement;

typedef unsigned char SceUChar8;

typedef int SceBool;

typedef int SceInt32;

typedef short unsigned int SceUShort16;

typedef char SceChar8;

typedef unsigned char SceUChar;

typedef enum {
    UNKNOWN = 0,
    HTTP = 80,
    HTTPS = 443,
    FTP = 21,
    SSH = 22,
    GOPHER = 70,
    IMAP = 143,
    RTSP = 554,
} /* size 0x4 */ _DEFAULT_PORT;

typedef unsigned int SceUInt32;

struct SceUriElement {
    unsigned char *scheme;
    unsigned char *hostname;
    short unsigned int port;
    unsigned char *path;
    unsigned char *query;
    unsigned char *username;
    unsigned char *password;
    unsigned char *fragment;
    SceBool opaque;
} /* size 0x24 */;

typedef struct SceUriElement SceUriElement;

extern M2C_UNK D_00002A19;
extern M2C_UNK D_00002E11;

int _fragment_parse(const SceUChar8 *str, SceUChar8 *frag, SceSize *require, SceSize prepare, SceBool output);
int _hostname_parse(const SceUChar8 *str, SceUChar8 *pool, SceSize *require, SceSize pool_size, SceBool output);
int _is_scheme_char(const SceUChar8 in);
int _path_parse(const SceUChar8 *str, SceUChar8 *path, SceSize *require, SceSize prepare, SceBool output);
int _portnum_parse(const SceUChar8 *str, SceUShort16 *port);
int _query_parse(const SceUChar8 *str, SceUChar8 *query, SceSize *require, SceSize prepare, SceBool output);
int _scheme_parse(unsigned char *scheme, const unsigned char *uri, SceSize *require, SceSize prepare, SceBool output);
int _userinfo_parse(const SceUChar *str, SceUChar *pool, SceSize pool_size, SceSize *username_size, SceSize *password_size, SceBool output);
M2C_UNK *func_0000181C(void);
u8 *func_000018A0(u8 *arg0, u8 *arg1, s32 arg2);
M2C_UNK *func_00001B98(void);
u8 *func_00001C24(u8 *arg0, u8 *arg1, s32 arg2);
u8 *func_00001DE4(u8 *arg0, u8 *arg1);
u8 *func_000021BC(u8 *arg0, u8 *arg1);
s32 module_start(void);
s32 module_stop(void);
int sceUriEscape(unsigned char *out, SceSize *require, SceSize prepare, const unsigned char *in);
int sceUriUnescape(unsigned char *out, SceSize *require, SceSize prepare, const unsigned char *in);
int uri_decoded_len(const unsigned char *s);
int uri_encoded_lenN(const unsigned char *s, unsigned int n);

#endif
