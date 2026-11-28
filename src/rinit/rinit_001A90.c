/* newlib-1.12.0 libc/string/strrchr.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"

char *
strrchr(const char *s, int i)
{
  const char *last = NULL;

  if (i)
    {
      while (s=strchr(s, i))
	{
	  last = s;
	  s++;
	}
    }
  else
    {
      last = strchr(s, i);
    }
		  
  return (char *) last;
}
