/* newlib-1.12.0 libc/string/strchr.c (BSD-style licence, see the newlib COPYING.NEWLIB) */
#include "common.h"
#include "rinit_decls.h"

/* Nonzero if X is not aligned on a "long" boundary.  */
#define UNALIGNED(X) ((long)X & (sizeof (long) - 1))

/* How many bytes are loaded each iteration of the word copy loop.  */
#define LBLOCKSIZE (sizeof (long))

#define DETECTNULL(X) (((X) - 0x01010101) & ~(X) & 0x80808080)

/* DETECTCHAR returns nonzero if (long)X contains the byte used 
   to fill (long)MASK. */
#define DETECTCHAR(X,MASK) (DETECTNULL(X ^ MASK))

char *
strchr(const char *s1, int i)
{
  const unsigned char *s = (const unsigned char *)s1;
  unsigned char c = (unsigned char)i;
  unsigned long mask,j;
  unsigned long *aligned_addr;

  if (!UNALIGNED (s))
    {
      mask = 0;
      for (j = 0; j < LBLOCKSIZE; j++)
        mask = (mask << 8) | c;

      aligned_addr = (unsigned long*)s;
      while (!DETECTNULL (*aligned_addr) && !DETECTCHAR (*aligned_addr, mask))
        aligned_addr++;

      /* The block of bytes currently pointed to by aligned_addr
         contains either a null or the target char, or both.  We
         catch it using the bytewise search.  */

      s = (unsigned char*)aligned_addr;
    }

  while (*s && *s != c)
      s++;
  if (*s == c)
    return (char *)s;
  return NULL;
}
