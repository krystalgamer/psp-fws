/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -frename-registers -mext */
/* cflags: -O2 -frename-registers */
#include "common.h"
#include "pspnet_inet_decls.h"

INCLUDE_ASM("nonmatchings/pspnet_inet_tcp_output", tcp_output);

#if FW_VERSION < 282
void tcp_setpersist(struct tcpcb *tp) {
    s32 t = ((tp->t_srtt >> 2) + tp->t_rttvar) >> (1 + 2);
    s32 nticks;

    if (t < tp->t_rttmin) {
        t = tp->t_rttmin;
    }
    nticks = t * tcp_backoff[tp->t_rxtshift];
    if (nticks < TCPTV_PERSMIN) {
        nticks = TCPTV_PERSMIN;
    } else if (nticks > TCPTV_PERSMAX) {
        nticks = TCPTV_PERSMAX;
    }
    tp->t_timer[TCPT_PERSIST] = pfslowtimo_now + nticks;
    if (tp->t_rxtshift < TCP_MAXRXTSHIFT) {
        tp->t_rxtshift++;
    }
}
#endif
