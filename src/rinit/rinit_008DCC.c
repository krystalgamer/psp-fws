/* newlib-1.12.0 libc/reent/lseekr.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

/* Reentrant versions of lseek system call. */

/* Some targets provides their own versions of this functions.  Those
   targets should define REENTRANT_SYSCALLS_PROVIDED in TARGET_CFLAGS.  */

/* We use the errno variable used by the system dependent layer.  */
#undef errno
extern int errno;

_off_t
_lseek_r(struct _reent *ptr, int fd, _off_t pos, int whence)
{
  _off_t ret;

  errno = 0;
  if ((ret = _lseek (fd, pos, whence)) == (_off_t) -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}
