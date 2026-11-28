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

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};

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
typedef unsigned long clock_t;
typedef long time_t;
struct timeval;
struct timezone;

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

struct __siov {
    const void *iov_base;
    size_t iov_len;
};
struct __suio {
    struct __siov *uio_iov;
    int uio_iovcnt;
    int uio_resid;
};
typedef short dev_t;
typedef unsigned short ino_t;
typedef int mode_t;
typedef unsigned short nlink_t;
typedef unsigned short uid_t;
typedef unsigned short gid_t;
typedef long off_t;
typedef _mbstate_t mbstate_t;
struct stat {
    dev_t st_dev;
    ino_t st_ino;
    mode_t st_mode;     /* 0x04 */
    nlink_t st_nlink;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    off_t st_size;
    time_t st_atime;
    long st_spare1;
    time_t st_mtime;
    long st_spare2;
    time_t st_ctime;
    long st_spare3;
    long st_blksize;
    long st_blocks;
    long st_spare4[2];
};

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
extern struct lconv D_0000BEBC;
extern s32 D_0000F598;
extern s32 D_0000F5E0;
extern s32 D_0000F5E4;
extern char __lc_ctype[12];
extern struct _reent *_impure_ptr;
extern int errno;

void __malloc_lock(struct _reent *ptr);
void __malloc_unlock(struct _reent *ptr);
int __sclose(void *cookie);
struct _glue *__sfmoreglue(struct _reent *d, int n);
FILE *__sfp(struct _reent *d);
int __sfvwrite(FILE *fp, struct __suio *uio);
void __sinit(struct _reent *s);
void __smakebuf(FILE *fp);
int __sread(void *cookie, char *buf, int n);
_fpos_t __sseek(void *cookie, _fpos_t offset, int whence);
int __swrite(void *cookie, const char *buf, int n);
int __swsetup(FILE *fp);
void *_calloc_r(struct _reent *reent_ptr, size_t n, size_t elem_size);
void _cleanup(void);
void _cleanup_r(struct _reent *ptr);
int _close(int fd);
int _close_r(struct _reent *ptr, int fd);
char *_dtoa_r(struct _reent *ptr, double d, int mode, int ndigits, int *decpt, int *sign, char **rve);
void _free_r(struct _reent *reent_ptr, void *mem);
int _fstat(int fd, struct stat *st);
int _fstat_r(struct _reent *ptr, int fd, struct stat *pstat);
int _fwalk(struct _reent *ptr, int (*function)(FILE *));
int _gettimeofday(struct timeval *tp, struct timezone *tzp);
struct lconv *_localeconv_r(struct _reent *data);
_off_t _lseek(int fd, _off_t offset, int whence);
_off_t _lseek_r(struct _reent *ptr, int fd, _off_t pos, int whence);
void *_malloc_r(struct _reent *reent_ptr, size_t bytes);
int _malloc_trim_r(struct _reent *reent_ptr, size_t pad);
int _printf_r(struct _reent *ptr, const char *fmt, ...);
int _read(int fd, void *buf, size_t n);
_ssize_t _read_r(struct _reent *ptr, int fd, void *buf, size_t cnt);
void *_realloc_r(struct _reent *reent_ptr, void *oldmem, size_t bytes);
void *_sbrk(ptrdiff_t incr);
void *_sbrk_r(struct _reent *ptr, ptrdiff_t incr);
char *_setlocale_r(struct _reent *data, int category, const char *locale);
int _vfprintf_r(struct _reent *data, FILE *fp, const char *fmt0, va_list ap);
int _wctomb_r(struct _reent *r, char *s, wchar_t wchar, _mbstate_t *state);
int _write(int fd, const void *buf, size_t n);
_ssize_t _write_r(struct _reent *ptr, int fd, const void *buf, size_t cnt);
clock_t clock(void);
int fflush(FILE *fp);
void free(void *ptr);
SceUID func_00001288(const char *file, int flags, int mode);
int func_000015AC(void);
void func_000015B4(void);
int func_000016B4(void);
int func_000016BC(void);
int isatty(int fd);
int isinf(double x);
int isnan(double x);
struct lconv *localeconv(void);
void *memchr(const void *src_void, int c, size_t length);
void *memcpy(void *dst0, const void *src0, size_t len0);
void *memmove(void *dst_void, const void *src_void, size_t length);
void *memset(void *m, int c, size_t n);
int printf(const char *fmt, ...);
int sceIoClose(SceUID fd);
SceUID sceIoOpen(const char *file, int flags, int mode);
int sceIoRead(SceUID fd, void *data, SceSize size);
int sceIoWrite(SceUID fd, const void *data, SceSize size);
void sceKernelCpuResumeIntr(int intr);
int sceKernelCpuSuspendIntr(void);
int sceKernelFreePartitionMemory(SceUID blockid);
clock_t sceKernelLibcClock(void);
int sceKernelLibcGettimeofday(struct timeval *tp, struct timezone *tzp);
time_t sceKernelLibcTime(time_t *t);
SceUID sceKernelStderr(void);
SceUID sceKernelStdin(void);
SceUID sceKernelStdout(void);
char *setlocale(int category, const char *locale);
char *strchr(const char *s1, int i);
int strcmp(const char *s1, const char *s2);
char *strcpy(char *dst0, const char *src0);
size_t strlen(const char *str);
char *strncpy(char *dst0, const char *src0, size_t count);
char *strrchr(const char *s, int i);
time_t time(time_t *t);
int vfprintf(FILE *fp, const char *fmt0, va_list ap);

#endif
