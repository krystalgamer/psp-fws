/* newlib-1.12.0 libc/stdio/printf.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

int
_printf_r (struct _reent *ptr, const char *fmt, ...)
{
  int ret;
  va_list ap;

  _REENT_SMALL_CHECK_INIT(_stdout_r (ptr));
  va_start (ap, fmt);
  ret = _vfprintf_r (ptr, _stdout_r (ptr), fmt, ap);
  va_end (ap);
  return ret;
}

int
printf (const char *fmt, ...)
{
  int ret;
  va_list ap;

  _REENT_SMALL_CHECK_INIT(_stdout_r (_REENT));
  va_start (ap, fmt);
  ret = vfprintf (_stdout_r (_REENT), fmt, ap);
  va_end (ap);
  return ret;
}
