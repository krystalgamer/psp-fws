/* newlib-1.12.0 libc/reent/writer.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

/* Reentrant versions of write system call. */

/* Some targets provides their own versions of this functions.  Those
   targets should define REENTRANT_SYSCALLS_PROVIDED in TARGET_CFLAGS.  */

/* We use the errno variable used by the system dependent layer.  */
#undef errno
extern int errno;

_ssize_t
_write_r(struct _reent *ptr, int fd, const void * buf, size_t cnt)
{
  _ssize_t ret;

  errno = 0;
  if ((ret = (_ssize_t)_write (fd, buf, cnt)) == -1 && errno != 0)
    ptr->_errno = errno;
  return ret;
}
