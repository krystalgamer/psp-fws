/* newlib-1.12.0 libc/stdlib/mprec.h for the PSP (IEEE_8087, Pack_32) */
#ifndef RINIT_MPREC_H
#define RINIT_MPREC_H

typedef unsigned int __uint32_t;
typedef long __Long;
#define DBL_MAX_EXP 1024

#define IEEE_8087

#define Sign_Extend(a,b) /*no-op*/

/* If we are going to examine or modify specific bits in a double using
   the word0 and/or word1 macros, then we must wrap the double inside
   a union.  This is necessary to avoid undefined behavior according to
   the ANSI C spec.  */
union double_union
{
  double d;
  __uint32_t i[2];
};

#define word0(x) (x.i[1])
#define word1(x) (x.i[0])

/* The following definition of Storeinc is appropriate for MIPS processors.
 * An alternative that might be better on some machines is
 * #define Storeinc(a,b,c) (*a++ = b << 16 | c & 0xffff)
 */
#define Storeinc(a,b,c) (((unsigned short *)a)[1] = (unsigned short)b, \
((unsigned short *)a)[0] = (unsigned short)c, a++)

/* #define P DBL_MANT_DIG */
/* Ten_pmax = floor(P*log(2)/log(5)) */
/* Bletch = (highest power of 2 < DBL_MAX_10_EXP) / 16 */
/* Quick_max = floor((P-1)*log(FLT_RADIX)/log(10) - 1) */
/* Int_max = floor(P*log(FLT_RADIX)/log(10) - 1) */

#define Exp_shift  20
#define Exp_shift1 20
#define Exp_msk1    ((__uint32_t)0x100000L)
#define Exp_msk11   ((__uint32_t)0x100000L)
#define Exp_mask  ((__uint32_t)0x7ff00000L)
#define P 53
#define Bias 1023
#define IEEE_Arith
#define Emin (-1022)
#define Exp_1  ((__uint32_t)0x3ff00000L)
#define Exp_11 ((__uint32_t)0x3ff00000L)
#define Ebits 11
#define Frac_mask  ((__uint32_t)0xfffffL)
#define Frac_mask1 ((__uint32_t)0xfffffL)
#define Ten_pmax 22
#define Bletch 0x10
#define Bndry_mask  ((__uint32_t)0xfffffL)
#define Bndry_mask1 ((__uint32_t)0xfffffL)
#define LSB 1
#define Sign_bit ((__uint32_t)0x80000000L)
#define Log2P 1
#define Tiny0 0
#define Tiny1 1
#define Quick_max 14
#define Int_max 14
#define Infinite(x) (word0(x) == ((__uint32_t)0x7ff00000L)) /* sufficient test for here */

#define rounded_product(a,b) a *= b
#define rounded_quotient(a,b) a /= b

#define Big0 (Frac_mask1 | Exp_msk1*(DBL_MAX_EXP+Bias-1))
#define Big1 ((__uint32_t)0xffffffffL)

/* When Pack_32 is not defined, we store 16 bits per 32-bit long.
 * This makes some inner loops simpler and sometimes saves work
 * during multiplications, but it often seems to make things slightly
 * slower.  Hence the default is now to store 32 bits per long.
 */

#define Pack_32

typedef struct _Bigint _Bigint;

#define Balloc	_Balloc
#define Bfree	_Bfree
#define multadd _multadd
#define s2b	_s2b
#define lo0bits _lo0bits
#define hi0bits _hi0bits
#define i2b	_i2b
#define mult	_multiply
#define pow5mult	_pow5mult
#define lshift	_lshift
#define cmp	__mcmp
#define diff	__mdiff
#define ulp 	_ulp
#define b2d	_b2d
#define d2b	_d2b
#define ratio	_ratio

#define tens __mprec_tens
#define bigtens __mprec_bigtens
#define tinytens __mprec_tinytens

struct _reent ;
double 		_EXFUN(ulp,(double x));
double		_EXFUN(b2d,(_Bigint *a , int *e));
_Bigint *	_EXFUN(Balloc,(struct _reent *p, int k));
void 		_EXFUN(Bfree,(struct _reent *p, _Bigint *v));
_Bigint *	_EXFUN(multadd,(struct _reent *p, _Bigint *, int, int));
_Bigint *	_EXFUN(s2b,(struct _reent *, const char*, int, int, __ULong));
_Bigint	*	_EXFUN(i2b,(struct _reent *,int));
_Bigint *	_EXFUN(mult, (struct _reent *, _Bigint *, _Bigint *));
_Bigint *	_EXFUN(pow5mult, (struct _reent *, _Bigint *, int k));
int 		_EXFUN(hi0bits,(__ULong));
int 		_EXFUN(lo0bits,(__ULong *));
_Bigint *        _EXFUN(d2b,(struct _reent *p, double d, int *e, int *bits));
_Bigint *        _EXFUN(lshift,(struct _reent *p, _Bigint *b, int k));
_Bigint *        _EXFUN(diff,(struct _reent *p, _Bigint *a, _Bigint *b));
int             _EXFUN(cmp,(_Bigint *a, _Bigint *b));

double		_EXFUN(ratio,(_Bigint *a, _Bigint *b));
#define Bcopy(x,y) memcpy((char *)&x->_sign, (char *)&y->_sign, y->_wds*sizeof(__Long) + 2*sizeof(int))

#define n_bigtens 5

extern const double tinytens[];
extern const double bigtens[];
extern const double tens[];

double _EXFUN(_mprec_log10,(int));

#endif
