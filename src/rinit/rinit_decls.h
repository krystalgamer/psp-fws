#ifndef RINIT_DECLS_H
#define RINIT_DECLS_H

#include "common.h"
#include "m2c_macros.h"

struct Unk_func_00001AF8_1 {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct Unk_func_00007470_0 {
    u8 pad0[0x4C];
    s32 unk4C;
};

struct Unk_func_00007470_1 {
    void * unk0;
    s32 unk4;
};

struct Unk_func_00007804_temp_v0 {
    u8 pad0[0x10];
    s32 unk10;
    s32 unk14;
};

struct Unk_func_000088F0_0 {
    u8 pad0[0xC];
    u16 unkC;
    s16 unkE;
    u8 pad10[0x40];
    s32 unk50;
};

struct Unk_func_00008958_0 {
    u8 pad0[0xC];
    u16 unkC;
    s16 unkE;
};

struct Unk_func_00008A4C_0 {
    u8 pad0[0xE];
    s16 unkE;
};

struct __tm {
    int __tm_sec;
    int __tm_min;
    int __tm_hour;
    int __tm_mday;
    int __tm_mon;
    int __tm_year;
    int __tm_wday;
    int __tm_yday;
    int __tm_isdst;
};

typedef void (*func_ptr)(void);

typedef unsigned int size_t;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef unsigned int wint_t;
typedef long _off_t;
typedef int _ssize_t;
typedef long _fpos_t;
typedef int _flock_t;
typedef unsigned long __ULong;
typedef __builtin_va_list va_list;

struct _on_exit_args {
    void *_fnargs[32];
    __ULong _fntypes;
};
struct _atexit {
    struct _atexit *_next;
    int _ind;
    void (*_fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

typedef struct {
    int __count;
    union {
        wint_t __wch;
        unsigned char __wchb[4];
    } __value;
} _mbstate_t;

struct __sbuf {
    unsigned char *_base;
    int _size;
};
struct _reent;
/* newlib 1.12 stdio stream (0x5C) */
struct __sFILE {
    unsigned char *_p;          /* 0x00 */
    int _r;                     /* 0x04 */
    int _w;                     /* 0x08 */
    short _flags;               /* 0x0C */
    short _file;                /* 0x0E */
    struct __sbuf _bf;          /* 0x10 */
    int _lbfsize;               /* 0x18 */
    void *_cookie;              /* 0x1C */
    int (*_read)(void *_cookie, char *_buf, int _n);
    int (*_write)(void *_cookie, const char *_buf, int _n);
    _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
    int (*_close)(void *_cookie); /* 0x2C */
    struct __sbuf _ub;          /* 0x30 */
    unsigned char *_up;         /* 0x38 */
    int _ur;                    /* 0x3C */
    unsigned char _ubuf[3];     /* 0x40 */
    unsigned char _nbuf[1];     /* 0x43 */
    struct __sbuf _lb;          /* 0x44 */
    int _blksize;               /* 0x4C */
    int _offset;                /* 0x50 */
    struct _reent *_data;       /* 0x54 */
    _flock_t _lock;             /* 0x58 */
};
typedef struct __sFILE __FILE;
typedef struct __sFILE FILE;
typedef char chk___sFILE[(sizeof(struct __sFILE) == 0x5C) ? 1 : -1];
struct _glue {
    struct _glue *_next;
    int _niobs;
    __FILE *_iobs;
};

struct _rand48 {
    unsigned short _seed[3];
    unsigned short _mult[3];
    unsigned short _add;
};
struct _Bigint {
    struct _Bigint *_next;
    int _k, _maxwds, _sign, _wds;
    __ULong _x[1];
};
/* newlib 1.12 reentrancy structure */
struct _reent {
    int _errno;                         /* 0x00 */
    __FILE *_stdin, *_stdout, *_stderr; /* 0x04 */
    int _inc;                           /* 0x10 */
    char _emergency[25];                /* 0x14 */
    int _current_category;              /* 0x30 */
    const char *_current_locale;        /* 0x34 */
    int __sdidinit;                     /* 0x38 */
    void (*__cleanup)(struct _reent *); /* 0x3C */
    struct _Bigint *_result;            /* 0x40 */
    int _result_k;                      /* 0x44 */
    struct _Bigint *_p5s;               /* 0x48 */
    struct _Bigint **_freelist;         /* 0x4C */
    int _cvtlen;                        /* 0x50 */
    char *_cvtbuf;                      /* 0x54 */
    union {
        struct {
            unsigned int _unused_rand;
            char *_strtok_last;
            char _asctime_buf[26];
            struct __tm _localtime_buf;
            int _gamma_signgam;
            __extension__ unsigned long long _rand_next;
            struct _rand48 _r48;
            _mbstate_t _mblen_state;
            _mbstate_t _mbtowc_state;
            _mbstate_t _wctomb_state;
            char _l64a_buf[8];
            char _signal_buf[24];
            int _getdate_err;
            _mbstate_t _mbrlen_state;
            _mbstate_t _mbrtowc_state;
            _mbstate_t _mbsrtowcs_state;
            _mbstate_t _wcrtomb_state;
            _mbstate_t _wcsrtombs_state;
        } _reent;
        struct {
            unsigned char *_nextf[30];
            unsigned int _nmalloc[30];
        } _unused;
    } _new;
    struct _atexit *_atexit;
    struct _atexit _atexit0;
    void (**(_sig_func))(int);
    struct _glue __sglue;
    __FILE __sf[3];
};

extern func_ptr D_0000B28C[];
extern M2C_UNK D_0000BEBC;
extern s32 D_0000F138;
extern s32 D_0000F598;
extern s32 D_0000F5E0;
extern s32 D_0000F5E4;
extern s32 D_0000F5E8;
extern M2C_UNK fflush;

s32 _Balloc(s32, s32);
void _Bfree(struct Unk_func_00007470_0 *arg0, struct Unk_func_00007470_1 *arg1);
void __malloc_lock(void);
void __malloc_unlock(void);
void __sclose(struct Unk_func_00008A4C_0 *arg0);
s32 __sfvwrite(s32, s32);
s32 __sprint(s32 arg0, struct Unk_func_00001AF8_1 *arg1);
s32 __sread(struct Unk_func_000088F0_0 *arg0, s32 arg1, s32 arg2);
void __swrite(struct Unk_func_00008958_0 *arg0, s32 arg1, s32 arg2);
void _cleanup(void);
void _cleanup_r(s32 arg0);
s32 _close(s32 arg0);
s32 _close_r(s32, s32);
s32 _fstat(s32, s32);
s32 _fstat_r(s32 *arg0, s32 arg1, s32 arg2);
s32 _fwalk(s32, s32);
s32 _hi0bits(s32 arg0);
void _i2b(s32 arg0, s32 arg1);
M2C_UNK *_localeconv_r(void);
s32 _lseek_r(s32, s32, s32, s32);
s32 _read(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 _read_r(s32, s32, s32, s32);
s32 _sbrk(s32);
s32 _sbrk_r(s32 *arg0, s32 arg1);
s32 _setlocale_r(s32, s32, s32);
s32 _write(s32 arg0, M2C_UNK arg1, M2C_UNK arg2);
s32 _write_r(s32, s32, s32, s32);
void func_00001288(void);
s32 func_000015AC(void);
void func_000015B4(void);
s32 func_000016B4(void);
s32 func_000016BC(void);
void func_000016C4(void);
void func_000016E0(void);
void func_000016FC(void);
s32 isatty(void);
void *memchr(const void *src_void, int c, size_t length);
void *memcpy(void *dst0, const void *src0, size_t len0);
void *memmove(void *dst_void, const void *src_void, size_t length);
void *memset(void *m, int c, size_t n);
s32 sceIoClose(s32);
M2C_UNK sceIoOpen();
s32 sceIoRead(s32, M2C_UNK, M2C_UNK);
s32 sceIoWrite(s32, M2C_UNK, M2C_UNK);
void sceKernelCpuResumeIntr(s32);
s32 sceKernelCpuSuspendIntr(void);
M2C_UNK sceKernelFreePartitionMemory(s32);
M2C_UNK sceKernelLibcClock();
M2C_UNK sceKernelLibcGettimeofday();
M2C_UNK sceKernelLibcTime();
s32 sceKernelStderr();
s32 sceKernelStdin();
s32 sceKernelStdout();
void setlocale(s32 arg0, s32 arg1);
char *strchr(const char *s1, int i);
int strcmp(const char *s1, const char *s2);
char *strcpy(char *dst0, const char *src0);
size_t strlen(const char *str);
char *strncpy(char *dst0, const char *src0, size_t count);
char *strrchr(const char *s, int i);

#endif
