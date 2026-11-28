/* newlib-1.13.0 libc/stdlib/wcrtomb.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"
#include "rinit_newlib.h"

size_t
_wcrtomb_r(struct _reent *ptr, char *s, wchar_t wc, mbstate_t *ps)
{
  int retval = 0;
  char buf[10];

  if (s == NULL)
    retval = _wctomb_r (ptr, buf, L'\0', ps);
  else
    retval = _wctomb_r (ptr, s, wc, ps);

  if (retval == -1)
    {
      ps->__count = 0;
      ptr->_errno = EILSEQ;
      return (size_t)(-1);
    }
  else
    return (size_t)retval;
}

size_t
wcrtomb(char *s, wchar_t wc, mbstate_t *ps)
{
  return _wcrtomb_r (_REENT, s, wc, ps);
}
