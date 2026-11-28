/* Macros of the newlib 1.12.0 headers (stdio.h, sys/reent.h, stdio/local.h,
   sys/errno.h, stdarg.h) used by the statically linked libc objects; the
   types are in rinit_decls.h. */
#ifndef RINIT_NEWLIB_H
#define RINIT_NEWLIB_H

#define _EXFUN(name, proto) name proto
#define _PARAMS(paramlist) paramlist
#define _REENT _impure_ptr
#define _GLOBAL_REENT _impure_ptr
#define _REENT_SMALL_CHECK_INIT(fp)
/* sys/reent.h (!_REENT_SMALL) */
#define _REENT_CHECK_RAND48(ptr)	/* nothing */
#define _REENT_CHECK_MP(ptr)		/* nothing */
#define _REENT_CHECK_TM(ptr)		/* nothing */
#define _REENT_CHECK_ASCTIME_BUF(ptr)	/* nothing */
#define _REENT_CHECK_EMERGENCY(ptr)	/* nothing */
#define _REENT_CHECK_MISC(ptr)	        /* nothing */
#define _REENT_CHECK_SIGNAL_BUF(ptr)	/* nothing */

#define _REENT_SIGNGAM(ptr)	((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr)	((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr)	((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr)	((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr)	((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr)	((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr)	((ptr)->_result_k)
#define _REENT_MP_P5S(ptr)	((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr)	((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr)	((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr)		(&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr)	((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr)	((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr)	((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr)((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr)((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr)((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr)((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr)((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr)((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr)((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr)    ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr)  ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))
#define _NULL 0

#define _stdin_r(x) ((x)->_stdin)
#define _stdout_r(x) ((x)->_stdout)
#define _stderr_r(x) ((x)->_stderr)

#define va_start(v, l) __builtin_stdarg_start((v), l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v, l) __builtin_va_arg(v, l)

#define INT_MAX 2147483647
#define LONG_MAX 2147483647L
#define EOF (-1)
#define BUFSIZ 1024
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

#define __SLBF 0x0001
#define __SNBF 0x0002
#define __SRD 0x0004
#define __SWR 0x0008
#define __SRW 0x0010
#define __SEOF 0x0020
#define __SERR 0x0040
#define __SMBF 0x0080
#define __SAPP 0x0100
#define __SSTR 0x0200
#define __SOPT 0x0400
#define __SNPT 0x0800
#define __SOFF 0x1000
#define __SMOD 0x2000

#define EBADF 9
#define ENOMEM 12
#define EINVAL 22
#define ESPIPE 29
#define EILSEQ 138

/* sys/lock.h: single-threaded */
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
#define __LOCK_INIT(class, lock) static int lock = 0;
#define __LOCK_INIT_RECURSIVE(class, lock) static int lock = 0;
#define __lock_init(lock) {}
#define __lock_init_recursive(lock) {}
#define __lock_close(lock) {}
#define __lock_close_recursive(lock) {}
#define __lock_acquire(lock) {}
#define __lock_acquire_recursive(lock) {}
#define __lock_release(lock) {}
#define __lock_release_recursive(lock) {}
#define _flockfile(fp)
#define _funlockfile(fp)

/* stdio/local.h */
#define CHECK_INIT(fp) \
    do { \
        if (!_REENT->__sdidinit) \
            __sinit(_REENT); \
    } while (0)
#define cantwrite(fp) \
    ((((fp)->_flags & __SWR) == 0 || (fp)->_bf._base == NULL) && __swsetup(fp))
#define HASUB(fp) ((fp)->_ub._base != NULL)
#define FREEUB(fp) { \
    if ((fp)->_ub._base != (fp)->_ubuf) \
        _free_r(_REENT, (char *)(fp)->_ub._base); \
    (fp)->_ub._base = NULL; \
}
#define NDYNAMIC 4
#define _READ_WRITE_RETURN_TYPE int
#define HASLB(fp) ((fp)->_lb._base != NULL)
#define FREELB(fp) { \
    _free_r(_REENT, (char *)(fp)->_lb._base); \
    (fp)->_lb._base = NULL; \
}

#endif
