/* compiler[271]: 1.9.2 */
/* cflags[271]: -O2 -frename-registers -fno-strict-aliasing -mext */
/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -fno-strict-aliasing -mext */
/* cflags: -O2 -frename-registers -fno-strict-aliasing */
#include "common.h"
#include "pspnet_inet_decls.h"

#if FW_VERSION < 201
#define ADDCARRY(x)  (x > 65535 ? x -= 65535 : x)
#define REDUCE {l_util.l = sum; sum = l_util.s[0] + l_util.s[1]; ADDCARRY(sum);}
s32 in4_cksum(struct mbuf *m, u8 nxt, s32 off, s32 len)
{
	u16 *w;
	int sum = 0;
	int mlen = 0;
	int byte_swapped = 0;

	union {
		u8  c[2];
		u16 s;
	} s_util;
	union {
		u16 s[2];
		u32 l;
	} l_util;
	struct ipovly ipov;

	if (nxt != 0) {
		__builtin_memset(&ipov, 0, sizeof(ipov));
		ipov.ih_len = htons(len);
		ipov.ih_pr = nxt;
		ipov.ih_src = mtod(m, struct ip *)->ip_src;
		ipov.ih_dst = mtod(m, struct ip *)->ip_dst;
		w = (u16 *)&ipov;
		sum += w[0]; sum += w[1]; sum += w[2]; sum += w[3]; sum += w[4];
		sum += w[5]; sum += w[6]; sum += w[7]; sum += w[8]; sum += w[9];
	}

	while (m && off > 0) {
		if (m->m_len > off)
			break;
		off -= m->m_len;
		m = m->m_next;
	}

	for (;m && len; m = m->m_next) {
		if (m->m_len == 0)
			continue;
		w = (u16 *)(mtod(m, char *) + off);
		if (mlen == -1) {
			/*
			 * The first byte of this mbuf is the continuation
			 * of a word spanning between this mbuf and the
			 * last mbuf.
			 *
			 * s_util.c[0] is already saved when scanning previous 
			 * mbuf.
			 */
			s_util.c[1] = *(u8 *)w;
			sum += s_util.s;
			w = (u16 *)((u8 *)w + 1);
			mlen = m->m_len - off - 1;
			len--;
		} else
			mlen = m->m_len - off;
		off = 0;
		if (len < mlen)
			mlen = len;
		len -= mlen;
		/*
		 * Force to even boundary.
		 */
		if ((1 & (s32)w) && (mlen > 0)) {
			REDUCE;
			sum <<= 8;
			s_util.c[0] = *(u8 *)w;
			w = (u16 *)((s8 *)w + 1);
			mlen--;
			byte_swapped = 1;
		}
		/*
		 * Unroll the loop to make overhead from
		 * branches &c small.
		 */
		while ((mlen -= 32) >= 0) {
			sum += w[0]; sum += w[1]; sum += w[2]; sum += w[3];
			sum += w[4]; sum += w[5]; sum += w[6]; sum += w[7];
			sum += w[8]; sum += w[9]; sum += w[10]; sum += w[11];
			sum += w[12]; sum += w[13]; sum += w[14]; sum += w[15];
			w += 16;
		}
		mlen += 32;
		while ((mlen -= 8) >= 0) {
			sum += w[0]; sum += w[1]; sum += w[2]; sum += w[3];
			w += 4;
		}
		mlen += 8;
		if (mlen == 0 && byte_swapped == 0)
			continue;
		REDUCE;
		while ((mlen -= 2) >= 0) {
			sum += *w++;
		}
		if (byte_swapped) {
			REDUCE;
			sum <<= 8;
			byte_swapped = 0;
			if (mlen == -1) {
				s_util.c[1] = *(u8 *)w;
				sum += s_util.s;
				mlen = 0;
			} else
				mlen = -1;
		} else if (mlen == -1)
			s_util.c[0] = *(u8 *)w;
	}

	if (mlen == -1) {
		/* The last mbuf has odd # of bytes. Follow the
		   standard (the odd byte may be shifted left by 8 bits
		   or not as determined by endian-ness of the machine) */
		s_util.c[1] = 0;
		sum += s_util.s;
	}
	REDUCE;
	return (~sum & 0xffff);
}
#endif
