/* compiler[282,300,301,302,303,310,311,330,340,350,351,352]: 1.9.2 */
/* cflags[282,300,301,302,303,310,311,330,340,350,351,352]: -O2 -mext */
/* cflags[152]: -O2 -frename-registers */
/* cflags[151]: -O2 -frename-registers */
/* cflags[150]: -O2 -frename-registers */
/* cflags[100,102,103]: -O2 -frename-registers -fno-thread-jumps */
#include "common.h"
#include "libhttp_decls.h"

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);
#endif

#if FW_VERSION >= 350
INCLUDE_RODATA("nonmatchings/libhttp", D_00017A10);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A14);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A24);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A38);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A48);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A5C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A6C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A7C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A90);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017A9C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AB0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AC8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AE0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017AF4);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B04);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B14);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B2C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017B34);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E4C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E54);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E5C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E78);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E88);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017E8C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EA4);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EA8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EE0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017EF0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F30);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F38);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F44);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017F54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00016EB0);

INCLUDE_RODATA("nonmatchings/libhttp", D_00016EB8);
#endif

#if FW_VERSION < 150
s32 sceHttpEnd(void) {
    s32 var_a0;

    var_a0 = 0x80431001;
    if (D_0000DCCC.inited == 1) {
        func_00009A38();
        func_000042D4();
        if (D_0000DCCC.vpl != 0) {
            sceKernelDeleteVpl(D_0000DCCC.vpl);
            D_0000DCCC.vpl = 0;
        }
        D_0000DCCC.inited = 0;
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017310);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017318);
#endif

#if FW_VERSION >= 150
INCLUDE_ASM("nonmatchings/libhttp", func_00000000);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpIsRequestInCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequestInCacheFirstMode);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateTemplate);
#endif

#if FW_VERSION < 150
int sceHttpDeleteTemplate(int tmpl_id) {
    SceHttpTmpl *tmpl;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = 0x80431100;
        if (tmpl_id != 0) {
            intr = sceKernelSuspendDispatchThread();
            ret = GetHttpTmpl(tmpl_id, &tmpl);
            if (tmpl == NULL) {
                ret = 0x80431100;
            } else if (tmpl->reference_counter != 1) {
                tmpl->reference_counter--;
                ret = 0x80431067;
            } else {
                if (tmpl->pre != NULL) {
                    tmpl->pre->next = tmpl->next;
                }
                if (tmpl->next != NULL) {
                    tmpl->next->pre = tmpl->pre;
                }
            }
            sceKernelResumeDispatchThread(intr);
            if (ret >= 0) {
                func_00005798(tmpl);
                _sceHttpFreeInternal(tmpl);
            }
        }
    }
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteTemplate);
#endif

#if FW_VERSION < 150
int sceHttpCreateConnection(int template_id, const unsigned char *server_name, unsigned char *scheme, unsigned short port, int keepalive) {
    int ret = 0x80431001;
    unsigned char *name;
    SceSize len;

    if (D_0000DCCC.inited == 1) {
        ret = 0x804311FE;
        if (server_name != NULL) {
            len = func_0000BE38((const char *)server_name) + 1;
            ret = 0x80431022;
            name = _sceHttpMallocInternal(len);
            if (name == NULL) {
                goto fail;
            }
            func_0000BB98(name, (u8 *)server_name, len);
            ret = CreateConnection(template_id, name, scheme, NULL, NULL, port, keepalive, 0, NULL);
            if (ret < 0) {
                goto fail;
            }
        }
    }
    return ret;

fail:
    if (name != NULL) {
        _sceHttpFreeInternal(name);
    }
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnection);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);

int GetProxyInfoFromSystem(SceHttpTmpl *tmpl) {
    union SceNetApctlInfo info;
    int ret;

    ret = sceNetApctlGetInfo(13, &info);
    if (ret < 0) {
        goto end;
    }
    if (info.http_proxy_flag != 1) {
        tmpl->proxy_status = 0;
        goto end;
    }
    tmpl->proxy_status = info.http_proxy_flag;
    ret = sceNetApctlGetInfo(15, &info);
    if (ret < 0) {
        goto end;
    }
    tmpl->proxy_port = info.http_proxy_port;
    ret = sceNetApctlGetInfo(14, &info);
    if (ret < 0) {
        goto end;
    }
    if (tmpl->proxy_host != NULL) {
        if (func_0000BC98(tmpl->proxy_host, info.http_proxy_server) == 0) {
            goto end;
        }
        _sceHttpFreeInternal(tmpl->proxy_host);
    }
    tmpl->proxy_host = _sceHttpMallocInternal(func_0000BE38(info.http_proxy_server) + 1);
    if (tmpl->proxy_host == NULL) {
        ret = 0x80431022;
        goto end;
    }
    func_0000C0DC(tmpl->proxy_host, info.http_proxy_server);
end:
    return ret;
}

INCLUDE_ASM("nonmatchings/libhttp", CreateConnection);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnectionWithURL);
#endif

#if FW_VERSION < 150
int sceHttpDeleteConnection(int connection_id) {
    SceHttpConn *con;
    SceHttpConn *p;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = 0x80431100;
        if (connection_id != 0x1000000) {
            intr = sceKernelSuspendDispatchThread();
            ret = GetHttpConnection(connection_id, &con);
            if (con != NULL) {
                p = con;
                if (p->reference_counter != 1) {
                    con->reference_counter--;
                    ret = 0x80431067;
                } else {
                    if (con->pre != NULL) {
                        con->pre->next = con->next;
                    }
                    if (con->next != NULL) {
                        con->next->pre = con->pre;
                    }
                }
            } else {
                ret = 0x80431100;
            }
            sceKernelResumeDispatchThread(intr);
            if (ret >= 0) {
                p = con;
                while (p != NULL) {
                    con = p;
                    if (con->hostname != NULL) {
                        _sceHttpFreeInternal(con->hostname);
                        con->hostname = NULL;
                    }
                    func_00005798(&con->tmpl);
                    func_00006380(con);
                    _sceHttpFreeInternal(con->recv_buf);
                    p = con->redirect_list;
                    _sceHttpFreeInternal(con);
                }
            }
        }
    }
    return ret;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteConnection);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequestWithURL);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteRequest);
#endif

#if FW_VERSION < 150
int sceHttpSetResolveTimeOut(int id, unsigned int usec) {
    SceHttpTmpl *tmpl = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = GetHttpTmpl(id, &tmpl);
        if (ret >= 0) {
            tmpl->resolver_timeo = usec;
            tmpl->reference_counter--;
        }
    }
    return ret;
}

int sceHttpSetConnectTimeOut(int id, unsigned int usec) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->connect_timeo = usec;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.connect_timeo = usec;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpSetSendTimeOut(int id, unsigned int usec) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->send_timeo = usec;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.send_timeo = usec;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpSetRecvTimeOut(int id, unsigned int usec) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->receive_timeo = usec;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.receive_timeo = usec;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpEnableKeepAlive(int id) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->keep_alive = 1;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.keep_alive = 1;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpDisableKeepAlive(int id) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->keep_alive = 0;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.keep_alive = 0;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpEnableCookie(int id) {
    SceHttpTmpl *tmpl;
    SceHttpConn *con;
    SceHttpReq *req;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                ret = GetHttpTmpl(id, &tmpl);
                if (tmpl != NULL) {
                    tmpl->cookie = 1;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                ret = GetHttpConnection(id, &con);
                if (con != NULL) {
                    con->tmpl.cookie = 1;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req != NULL) {
                    req->tmpl.cookie = 1;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}

int sceHttpDisableCookie(int id) {
    SceHttpTmpl *tmpl;
    SceHttpConn *con;
    SceHttpReq *req;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                ret = GetHttpTmpl(id, &tmpl);
                if (tmpl != NULL) {
                    tmpl->cookie = 0;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                ret = GetHttpConnection(id, &con);
                if (con != NULL) {
                    con->tmpl.cookie = 0;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req != NULL) {
                    req->tmpl.cookie = 0;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}

int sceHttpEnableAuth(int id) {
    SceHttpTmpl *tmpl;
    SceHttpConn *con;
    SceHttpReq *req;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                ret = GetHttpTmpl(id, &tmpl);
                if (tmpl != NULL) {
                    tmpl->auth = 1;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                ret = GetHttpConnection(id, &con);
                if (con != NULL) {
                    con->tmpl.auth = 1;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req != NULL) {
                    req->tmpl.auth = 1;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}

int sceHttpDisableAuth(int id) {
    SceHttpTmpl *tmpl;
    SceHttpConn *con;
    SceHttpReq *req;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                ret = GetHttpTmpl(id, &tmpl);
                if (tmpl != NULL) {
                    tmpl->auth = 0;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                ret = GetHttpConnection(id, &con);
                if (con != NULL) {
                    con->tmpl.auth = 0;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req != NULL) {
                    req->tmpl.auth = 0;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}

int sceHttpEnableRedirect(int id) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->redirect = 1;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.redirect = 1;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpDisableRedirect(int id) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            if (ret == 0) {
                ret = GetHttpTmpl(id, &tmpl);
                if (ret >= 0) {
                    tmpl->redirect = 0;
                    tmpl->reference_counter--;
                }
            } else if (ret == 0x1000000) {
                ret = GetHttpConnection(id, &con);
                if (ret >= 0) {
                    con->tmpl.redirect = 0;
                    con->reference_counter--;
                }
            } else {
                ret = 0x80431100;
            }
        }
    }
    return ret;
}

int sceHttpEndCache(void) {
    SceHttpCacheEntry *p;
    SceHttpCacheEntry *next;
    int ret = 0;

    if (D_0000DCCC.cache_inited != 1) {
        ret = 0x80431001;
    } else {
        p = D_0000DCCC.cache_list;
        while (p != NULL) {
            next = p->next;
            func_00003830(p);
            _sceHttpFreeInternal(p);
            p = next;
        }
        D_0000DCCC.cache_inited = 0;
        D_0000DCCC.cache_list = NULL;
        D_0000DCCC.cache_size = 0;
        D_0000DCCC.cache_used = 0;
    }
    return ret;
}

int sceHttpEnableCache(int id) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    SceHttpReq *req;
    int ret;
    int intr;

    if (D_0000DCCC.inited != 1 || D_0000DCCC.cache_inited != 1) {
        ret = 0x80431001;
    } else {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                ret = GetHttpTmpl(id, &tmpl);
                if (tmpl != NULL) {
                    tmpl->cache = 1;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                ret = GetHttpConnection(id, &con);
                if (con != NULL) {
                    con->tmpl.cache = 1;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req != NULL) {
                    req->tmpl.cache = 1;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}

int sceHttpDisableCache(int id) {
    SceHttpTmpl *tmpl = NULL;
    SceHttpConn *con = NULL;
    SceHttpReq *req;
    int ret;
    int intr;

    if (D_0000DCCC.inited != 1 || D_0000DCCC.cache_inited != 1) {
        ret = 0x80431001;
    } else {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                ret = GetHttpTmpl(id, &tmpl);
                if (tmpl != NULL) {
                    tmpl->cache = 0;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                ret = GetHttpConnection(id, &con);
                if (con != NULL) {
                    con->tmpl.cache = 0;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req != NULL) {
                    req->tmpl.cache = 0;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAbortRequest);
#endif

#if FW_VERSION == 100
int sceHttpGetContentLength(int request_id, SceULong64 *content_length) {
    SceHttpReq *req;
    int ret;

    if (D_0000DCCC.inited != 1) {
        ret = 0x80431001;
    } else {
        ret = GetHttpReq(request_id, &req);
        if (ret >= 0) {
            ret = 0x80431065;
            if (req->status != 0) {
                ret = 0x80431063;
                if (req->status != 6) {
                    ret = 0x8043106C;
                    if (req->status != 7) {
                        ret = 0x80431071;
                        if (req->has_content_length != 0) {
                            *content_length = req->content_length;
                            ret = 0;
                        }
                    }
                }
            }
        }
    }
    if (req != NULL) {
        req->reference_counter--;
    }
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);
#endif

#if FW_VERSION == 100
int sceHttpGetStatusCode(int request_id, int *status_code) {
    SceHttpReq *req;
    int ret;

    if (D_0000DCCC.inited != 1) {
        ret = 0x80431001;
    } else {
        ret = GetHttpReq(request_id, &req);
        if (ret >= 0) {
            ret = 0x80431065;
            if (req->status != 0) {
                ret = 0x80431063;
                if (req->status != 6) {
                    ret = 0x8043106C;
                    if (req->status != 7) {
                        ret = 0;
                        *status_code = req->response_code;
                    }
                }
            }
        }
    }
    if (req != NULL) {
        req->reference_counter--;
    }
    return ret;
}
#endif

#if FW_VERSION < 150
int sceHttpGetNetworkErrno(int request_id, int *err_num) {
    SceHttpReq *req = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = GetHttpReq(request_id, &req);
        if (ret >= 0) {
            ret = 0;
            *err_num = req->network_errno;
        }
    }
    if (req != NULL) {
        req->reference_counter--;
    }
    return ret;
}
#endif

#if FW_VERSION < 103
int sceHttpGetAllHeader(int request_id, SceUChar8 **header, SceUInt32 *header_size) {
    SceHttpReq *req = NULL;
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = GetHttpReq(request_id, &req);
        if (ret >= 0) {
            if (req->status == 0) {
                ret = 0x80431065;
                goto end;
            }
            if (req->status == 6) {
                ret = 0x80431063;
                goto end;
            }
            if (req->status == 7) {
                ret = 0x8043106C;
                goto end;
            }
            if (req->header_clone_buf == NULL) {
                ret = CloneHeader(req);
                if (ret < 0) {
                    goto end;
                }
            }
            *header = req->header_clone_buf;
            *header_size = req->res_header_size + 1;
        }
    }
end:
    if (req != NULL) {
        req->reference_counter--;
    }
    return ret;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpReadData);
#endif

#if FW_VERSION < 150
int sceHttpSetAuthInfoCB(int id, void *cbfunc) {
    SceHttpTmpl *tmpl;
    SceHttpConn *con;
    SceHttpReq *req;
    int ret = 0x80431001;
    int intr;

    if (D_0000DCCC.inited == 1) {
        ret = HttpWhichId(id);
        if (ret >= 0) {
            intr = sceKernelSuspendDispatchThread();
            switch (ret) {
            case 0:
                GetHttpTmpl(id, &tmpl);
                ret = 0x80431100;
                if (tmpl != NULL) {
                    tmpl->password_cb = cbfunc;
                    ret = 0;
                    tmpl->reference_counter--;
                }
                break;
            case 0x1000000:
                GetHttpConnection(id, &con);
                ret = 0x80431100;
                if (con != NULL) {
                    con->tmpl.password_cb = cbfunc;
                    ret = 0;
                    con->reference_counter--;
                }
                break;
            case 0x2000000:
                ret = GetHttpReq(id, &req);
                if (req == NULL) {
                    ret = 0x80431100;
                } else {
                    req->tmpl.password_cb = cbfunc;
                    req->reference_counter--;
                }
                break;
            default:
                ret = 0x80431100;
                break;
            }
            sceKernelResumeDispatchThread(intr);
        }
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_00000DDC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSendRequest);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateTemplate);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpCreateTemplate(void *arg0, s32 arg1, s32 arg2) {
    return func_0000A774((s32) arg0, arg1, arg2);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteTemplate);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpDeleteTemplate(s32 arg0) {
    return func_0000A9B0(arg0);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnection);
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D6F8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCloneTemplate);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A909F2AE);

INCLUDE_ASM("nonmatchings/libhttp", func_0000165C);

INCLUDE_ASM("nonmatchings/libhttp", func_000017A8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00001AB4);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_00001B70);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00001C10);

INCLUDE_ASM("nonmatchings/libhttp", func_00001FC8);
#endif

#if FW_VERSION < 150 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_000173A4);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173A8);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", func_000031D4);
#endif

#if FW_VERSION < 103
int SchemeToProtocol(const unsigned char *scheme) {
    char buf[16];
    int len;
    int i;
    int r;
    unsigned char c;
    int t;
    int ret = 0x804311FE;

    if (scheme != NULL) {
        len = func_0000BE38((const char *)scheme);
        ret = 0x80431061;
        if (len < 10) {
            for (i = 0; i < len; i++) {
                c = scheme[i];
                t = (D_0000DC35[c] << 4) & 0x20;
                t = c - t;
                buf[i] = t;
            }
            buf[i] = '\0';
            r = func_0000BC98(buf, "HTTP");
            ret = 0;
            if (r != 0) {
                ret = (func_0000BC98(buf, "HTTPS") == 0) ? 1 : 0x80431061;
            }
        }
    }
    return ret;
}
#endif

#if FW_VERSION < 150
int CloneHeader(SceHttpReq *req) {
    int ret = 0;

    req->header_clone_buf = _sceHttpMallocInternal(req->res_header_size + 1);
    if (req->header_clone_buf == NULL) {
        ret = 0x80431022;
    } else {
        func_0000BB98(req->header_clone_buf, req->res_header_buf, req->res_header_size);
        req->header_clone_buf[req->res_header_size] = '\0';
    }
    return ret;
}
#endif

#if FW_VERSION == 100
s32 func_000031DC(SceHttpReq *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;

    temp_v0 = func_0000325C(arg0);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00003614(arg0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000043A0(arg0);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000032B0(arg0);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00003668(arg0);
                }
            }
        }
    }
    return var_s0;
}

int func_0000325C(SceHttpReq *req) {
    int ret = 0;

    if (req->status == 2) {
        return 0;
    }
    if (req->response_code >= 100 && req->response_code < 103) {
        ret = RecvResponseHeader(req);
    }
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
int func_0000325C(SceHttpReq *req) {
    int ret = 0;

    if (req->status == 2) {
        return 0;
    }
    if (req->response_code >= 100 && req->response_code < 103) {
        ret = func_00004A6C(req);
    }
    return ret;
}
#endif

#if FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D730);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DFC0);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000DFC8);

INCLUDE_ASM("nonmatchings/libhttp", func_000032D4);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_000032B0);
#endif

#if FW_VERSION < 103
int func_00003614(SceHttpReq *req) {
    if (req->tmpl.cookie != 0) {
        func_000092D4(req->res_header_buf, req->res_header_size, req->connection->hostname, req->unk68);
        func_00006658(req);
    }
    return 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", func_00003614);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_00003668);

INCLUDE_ASM("nonmatchings/libhttp", func_00003830);

INCLUDE_ASM("nonmatchings/libhttp", func_000038CC);

int func_00003A24(SceHttpCacheEntry *entry) {
    int ret = 0;
    int size;

    if (entry != NULL) {
        if (entry->prev != NULL) {
            entry->prev->next = entry->next;
        }
        if (entry->next != NULL) {
            entry->next->prev = entry->prev;
        }
        size = func_00003830(entry);
        _sceHttpFreeInternal(entry);
        size += 0x40;
        D_0000DCCC.cache_used -= size;
        ret = size;
    }
    return ret;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", func_00003C2C);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/libhttp", func_00003AA8);
#endif

#if FW_VERSION < 150
void func_00003C04(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    if (arg0 != NULL) {
        temp_a0 = sceKernelSuspendDispatchThread();
        if ((M2C_FIELD(arg0, s32 *, 4) == 0) && (M2C_FIELD(arg0, s32 *, 0x2C) != 1)) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            var_s1 = 1;
        }
        sceKernelResumeDispatchThread(temp_a0);
        if (var_s1 == 1) {
            _sceHttpFreeInternal(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, void **, 0x24) = NULL;
            if (M2C_FIELD(arg0, s32 *, 0x2C) == var_s1) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
        }
    }
}

s32 func_00003C90(void *arg0) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    temp_a0 = sceKernelSuspendDispatchThread();
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
        var_s1 = -1;
    } else {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    }
    sceKernelResumeDispatchThread(temp_a0);
    return var_s1;
}

void func_00003CEC(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
    }
}

void func_00003D08(void *arg0) {
    void *temp_a1;

    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_a1, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x24) - 1);
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_00003D28);

void func_00003E34(const char *key, SceHttpMd5Entry **out) {
    char *copy;
    SceHttpMd5Entry *entry;

    copy = _sceHttpMallocInternal(func_0000BE38(key) + 1);
    if (copy == NULL) {
        return;
    }
    func_0000C0DC(copy, key);
    entry = _sceHttpMallocInternal(sizeof(SceHttpMd5Entry));
    if (entry == NULL) {
        _sceHttpFreeInternal(copy);
        return;
    }
    func_0000BBCC(entry, 0, sizeof(SceHttpMd5Entry));
    sceKernelUtilsMd5Digest((u8 *)key, func_0000BE38(key), entry->digest);
    entry->key = copy;
    *out = entry;
}

void func_00003EEC(SceHttpMd5Entry *entry) {
    SceHttpMd5Entry *prev = NULL;
    SceHttpMd5Entry *p;
    int idx;
    int intr;

    if (entry == NULL) {
        return;
    }
    idx = entry->digest[0] >> 4;
    intr = sceKernelSuspendDispatchThread();
    p = D_0000DCCC.md5_table[idx];
    while (p != NULL && func_0000BB58(p->digest, entry->digest, 16) > 0) {
        prev = p;
        p = p->next;
    }
    if (prev != NULL) {
        prev->next = entry;
        entry->next = p;
    } else {
        D_0000DCCC.md5_table[idx] = entry;
    }
    sceKernelResumeDispatchThread(intr);
}
#endif

#if FW_VERSION == 100
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D754);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D75C);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_00003FB0);

INCLUDE_ASM("nonmatchings/libhttp", func_000041A8);

void func_000042D4(void) {
    SceHttpMd5Entry *e;
    SceHttpMd5Entry *next;
    int i;

    for (i = 0; i < 16; i++) {
        e = D_0000DCCC.md5_table[i];
        while (e != NULL) {
            if (e->unk30 != NULL) {
                _sceHttpFreeInternal(e->unk30);
                e->unk30 = NULL;
            }
            if (e->value != NULL) {
                _sceHttpFreeInternal(e->value);
                e->value = NULL;
            }
            if (e->key != NULL) {
                _sceHttpFreeInternal(e->key);
                e->key = NULL;
            }
            next = e->next;
            _sceHttpFreeInternal(e);
            e = next;
        }
        D_0000DCCC.md5_table[i] = NULL;
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_000043A0);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_000048D8);
#endif

#if FW_VERSION == 103
INCLUDE_RODATA("nonmatchings/libhttp", D_0000E198);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_00004A6C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", RecvResponseHeader);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", GetHttpReq);

INCLUDE_ASM("nonmatchings/libhttp", GetHttpConnection);

INCLUDE_ASM("nonmatchings/libhttp", GetHttpTmpl);

int InsertNewHttpTmpl(SceHttpTmpl *new_template) {
    SceHttpTmpl *p = &D_0000DD2C;
    SceHttpTmpl *q;
    int ret;
    int intr;

    intr = sceKernelSuspendDispatchThread();
    while (p->next != NULL) {
        if (p->next->id != p->id + 1) {
            break;
        }
        p = p->next;
    }
    ret = 0x80431060;
    if (p->id <= 0xFFFFFF) {
        ret = p->id + 1;
        new_template->id = ret;
        new_template->next = p->next;
        new_template->pre = p;
        if (p->next != NULL) {
            p->next->pre = new_template;
        }
        p->next = new_template;
    }
    sceKernelResumeDispatchThread(intr);
    return ret;
}

int InsertNewHttpConnection(SceHttpConn *new_connection) {
    SceHttpConn *p = &D_0000DDB0;
    SceHttpConn *q;
    int ret;
    int intr;

    intr = sceKernelSuspendDispatchThread();
    while (p->next != NULL) {
        if (p->next->id != p->id + 1) {
            break;
        }
        p = p->next;
    }
    ret = 0x80431060;
    if (p->id <= 0x1FFFFFF) {
        ret = p->id + 1;
        new_connection->id = ret;
        new_connection->next = p->next;
        new_connection->pre = p;
        if (p->next != NULL) {
            p->next->pre = new_connection;
        }
        p->next = new_connection;
    }
    sceKernelResumeDispatchThread(intr);
    return ret;
}
#endif

#if FW_VERSION == 100
int InsertNewHttpReq(SceHttpReq *new_request) {
    SceHttpReq *p = &D_0000DF18;
    SceHttpReq *q;
    int ret;
    int intr;

    intr = sceKernelSuspendDispatchThread();
    while (p->next != NULL) {
        if (p->next->id != p->id + 1) {
            break;
        }
        p = p->next;
    }
    ret = 0x80431060;
    if (p->id <= 0x2FFFFFF) {
        ret = p->id + 1;
        new_request->id = ret;
        new_request->next = p->next;
        new_request->pre = p;
        if (p->next != NULL) {
            p->next->pre = new_request;
        }
        p->next = new_request;
    }
    sceKernelResumeDispatchThread(intr);
    return ret;
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
int InsertNewHttpReq(SceHttpReq *new_request) {
    SceHttpReq *p = &D_0000E7D8;
    SceHttpReq *q;
    int ret;
    int intr;

    intr = sceKernelSuspendDispatchThread();
    while (p->next != NULL) {
        if (p->next->id != p->id + 1) {
            break;
        }
        p = p->next;
    }
    ret = 0x80431060;
    if (p->id <= 0x2FFFFFF) {
        ret = p->id + 1;
        new_request->id = ret;
        new_request->next = p->next;
        new_request->pre = p;
        if (p->next != NULL) {
            p->next->pre = new_request;
        }
        p->next = new_request;
    }
    sceKernelResumeDispatchThread(intr);
    return ret;
}
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", CopyHttpTmpl);

int CopyHttpHeaderList(_SceHttpReqHeaderList **out, const _SceHttpReqHeaderList *src) {
    _SceHttpReqHeaderList *head;
    _SceHttpReqHeaderList *dst;
    unsigned char *p;
    _SceHttpReqHeaderList *n;
    int ret = 0;
    int intr;

    if (src == NULL) {
        *out = NULL;
        return 0;
    }
    head = _sceHttpMallocInternal(sizeof(_SceHttpReqHeaderList));
    if (head == NULL) {
        return 0x80431022;
    }
    head->field_name = NULL;
    head->field_value = NULL;
    head->next = NULL;
    dst = head;
    intr = sceKernelSuspendDispatchThread();
    do {
        if (src->field_name != NULL) {
            p = _sceHttpMallocInternal(func_0000BE38((const char *)src->field_name) + 1);
            dst->field_name = p;
            if (p == NULL) {
                goto nomem;
            }
            func_0000C0DC((char *)p, (const char *)src->field_name);
        }
        if (src->field_value != NULL) {
            p = _sceHttpMallocInternal(func_0000BE38((const char *)src->field_value) + 1);
            dst->field_value = p;
            if (p == NULL) {
                goto nomem;
            }
            func_0000C0DC((char *)p, (const char *)src->field_value);
        }
        if (src->next != NULL) {
            n = _sceHttpMallocInternal(sizeof(_SceHttpReqHeaderList));
            dst->next = n;
            if (n == NULL) {
                goto nomem;
            }
            n->field_name = NULL;
            n->field_value = NULL;
            n->next = NULL;
        }
        src = src->next;
        dst = dst->next;
    } while (src != NULL);
    goto end;
nomem:
    ret = 0x80431022;
end:
    sceKernelResumeDispatchThread(intr);
    if (ret < 0) {
        FreeHttpHederList(head);
    } else {
        *out = head;
        return ret;
    }
    return ret;
}

int HttpWhichId(int id) {
    int tmp;
    int ret;

    tmp = id & 0x0F000000;
    switch (tmp) {
    case 0:
        ret = 0;
        break;
    case 0x1000000:
        ret = 0x1000000;
        break;
    case 0x2000000:
        ret = 0x2000000;
        break;
    default:
        ret = 0x80431100;
        break;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/libhttp", ConnectNonblock);

int CreateHttpExtraHeader(_SceHttpReqHeaderList **out, const SceUChar8 *name, const SceUChar8 *value) {
    _SceHttpReqHeaderList *h;
    int ret = 0x804311FE;
    SceSize len;

    if (name == NULL || value == NULL) {
        goto out;
    }
    h = _sceHttpMallocInternal(sizeof(_SceHttpReqHeaderList));
    if (h == NULL) {
        ret = 0x80431022;
        goto fail;
    }
    h->field_name = NULL;
    h->field_value = NULL;
    h->next = NULL;
    len = func_0000BE38((const char *)name);
    h->field_name = _sceHttpMallocInternal(len + 1);
    if (h->field_name == NULL) {
        ret = 0x80431022;
        goto fail;
    }
    func_0000BB98(h->field_name, (u8 *)name, len);
    h->field_name[len] = '\0';
    if (value != NULL) {
        len = func_0000BE38((const char *)value);
        h->field_value = _sceHttpMallocInternal(len + 1);
        if (h->field_value == NULL) {
            ret = 0x80431022;
            goto fail;
        }
        func_0000BB98(h->field_value, (u8 *)value, len);
        h->field_value[len] = '\0';
    }
    *out = h;
    return 0;

fail:
    if (h != NULL) {
        if (h->field_name != NULL) {
            _sceHttpFreeInternal(h->field_name);
        }
        if (h->field_value != NULL) {
            _sceHttpFreeInternal(h->field_value);
        }
        _sceHttpFreeInternal(h);
    }
out:
    return ret;
}

void FreeHttpHederList(_SceHttpReqHeaderList *list) {
    _SceHttpReqHeaderList *next;

    while (list != NULL) {
        if (list->field_name != NULL) {
            _sceHttpFreeInternal(list->field_name);
        }
        if (list->field_value != NULL) {
            _sceHttpFreeInternal(list->field_value);
        }
        next = list->next;
        _sceHttpFreeInternal(list);
        list = next;
    }
}

void func_00005798(SceHttpTmpl *tmpl) {
    if (tmpl->header_list != NULL) {
        FreeHttpHederList(tmpl->header_list);
        tmpl->header_list = NULL;
    }
    if (tmpl->proxy_host != NULL) {
        _sceHttpFreeInternal(tmpl->proxy_host);
        tmpl->proxy_host = NULL;
    }
    if (tmpl->str34 != NULL) {
        _sceHttpFreeInternal(tmpl->str34);
        tmpl->str34 = NULL;
    }
    if (tmpl->str38 != NULL) {
        _sceHttpFreeInternal(tmpl->str38);
        tmpl->str38 = NULL;
    }
}

INCLUDE_ASM("nonmatchings/libhttp", BuildHttpHeader);

u32 func_00005DE0(u32 size) {
    u32 freed = 0;
    SceHttpCacheEntry *next;
    SceHttpCacheEntry *p;

    for (p = D_0000DCCC.cache_list; p != NULL && freed < size; p = next) {
        next = p->next;
        if (p->reference_counter == 0 && p->status != 1) {
            p->status = 1;
            freed += func_00003A24(p);
        }
    }
    return freed;
}

void *_sceHttpMallocInternal(SceSize size) {
    void *ptr;

    if (D_0000DCC0.malloc_func == NULL) {
        if (sceKernelTryAllocateVpl(D_0000DCCC.vpl, size, &ptr) < 0) {
            ptr = NULL;
        }
    } else {
        ptr = D_0000DCC0.malloc_func(size);
    }
    if (ptr != NULL) {
        D_0000DD28++;
    }
    return ptr;
}

void _sceHttpFreeInternal(void *ptr) {
    if (D_0000DCC0.free_func == NULL) {
        sceKernelFreeVpl(D_0000DCCC.vpl, ptr);
    } else {
        D_0000DCC0.free_func(ptr);
    }
    D_0000DD28--;
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);

SceUInt64 _HttpAtoi64(const char *str) {
    SceUInt64 ret = 0;

    if (str != NULL) {
        while (*str != '\0') {
            ret = ret * 10 + (*str - '0');
            str++;
        }
    }
    return ret;
}

void _HttpI64toa(char *str, const SceUInt64 val) {
    if (val != 0) {
        __HttpI64toa(&str, val / 10);
        *str = val % 10 + '0';
        str++;
    }
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", func_000063E0);
#endif

#if FW_VERSION == 102
INCLUDE_ASM("nonmatchings/libhttp", func_000062E8);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_000060F8);
#endif

#if FW_VERSION < 103
void func_00006380(SceHttpConn *con) {
    SceHttpReq *req;
    int intr;

    intr = sceKernelSuspendDispatchThread();
    con->status = 6;
    if (con->pipeline_counter >= 2) {
        GetHttpReq(con->pipeline_current_id, &req);
        while (req != NULL) {
            req->unk24 = 0;
            req->reference_counter--;
            req->status = 7;
            GetHttpReq(req->pipeline_next, &req);
        }
    }
    sceKernelResumeDispatchThread(intr);
    if (con->protocol == 1) {
        func_000097A4(con);
    }
    sceNetInetClose(con->sock_id);
    func_0000BBCC(con->recv_buf, 0, con->recv_buf_size);
    con->unk140 = 0;
    con->unk144 = 0;
    con->unk148 = 0;
    con->pipeline_counter = 0;
    con->status = 0;
}
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", func_00006380);
#endif

#if FW_VERSION < 150
void func_0000646C(void *arg0, void *arg1, u32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        sceNetInetSend(M2C_FIELD(arg0, s32 *, 0x24), arg1, arg2, arg3);
    } else {
        func_0000B598(arg0);
    }
}

void func_000064A8(void *arg0, void *arg1, u32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        sceNetInetRecv(M2C_FIELD(arg0, s32 *, 0x24), arg1, arg2, arg3);
    } else {
        func_0000B484((s32) arg0, (s32) arg1, (s32) arg2);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateConnectionWithURL);
#endif

#if FW_VERSION < 201
s32 sceHttpCreateConnectionWithURL(s32 arg0, void *arg1, s32 arg2) {
    return CreateConnectionWithUrl(arg0, (s32) arg1, arg2, 0, 0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteConnection);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpDeleteConnection(s32 arg0) {
    return func_0000A370(arg0);
}
#endif

#if FW_VERSION < 150
int sceHttpCreateRequest(int connection_id, int method, const unsigned char *path, SceULong64 content_length) {
    int ret = 0x80431001;

    if (D_0000DCCC.inited == 1) {
        ret = CreateRequest(connection_id, method, path, NULL, NULL, content_length, NULL, NULL, NULL);
    }
    return ret;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequest);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
int sceHttpCreateRequest(int connection_id, int method, const unsigned char *path, SceULong64 content_length) {
    return func_0000992C(connection_id, method, path, content_length);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCreateRequestWithURL);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteRequest);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpCloneTemplate);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpDeleteRequest(s32 arg0) {
    return func_00009300(arg0);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_A909F2AE);

INCLUDE_ASM("nonmatchings/libhttp", func_000015DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000017A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000172C);
#endif

#if FW_VERSION < 150
s32 sceHttpInitCache(u32 arg0) {
    s32 var_v0;

    var_v0 = 0x80431020;
    if (D_0000DCCC.cache_inited != 1) {
        D_0000DCCC.cache_inited = 1;
        D_0000DCCC.cache_size = arg0;
        var_v0 = 0;
    }
    return var_v0;
}

void *_sceHttpReallocInternal(void *ptr, SceSize size) {
    void *ret = NULL;

    if (D_0000DCC0.realloc_func != NULL) {
        ret = D_0000DCC0.realloc_func(ptr, size);
    }
    return ret;
}

void __HttpI64toa(char **pStr, const SceUInt64 val) {
    if (val != 0) {
        __HttpI64toa(pStr, val / 10);
        **pStr = val % 10 + '0';
        (*pStr)++;
    }
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_00006988);
#endif

#if FW_VERSION < 150
int func_00006658(SceHttpReq *req) {
    void *list;
    SceSize size = 0;
    char *buf;
    unsigned char *host;
    int ret;

    if (req->redirect_con == NULL) {
        host = req->connection->hostname;
    } else {
        host = req->redirect_con->hostname;
    }
    ret = func_00008FB4(&list, host);
    if (ret < 0) {
        return ret;
    }
    ret = func_0000907C(NULL, list, req->unk68, &size, 0);
    if (ret < 0) {
        return ret;
    }
    ret = 0x80431022;
    buf = _sceHttpMallocInternal(size);
    if (buf != NULL) {
        ret = func_0000907C(buf, list, req->unk68, NULL, size);
        if (ret >= 0) {
            ret = sceHttpAddExtraHeader(req->id, (const SceUChar8 *)"Cookie", (const SceUChar8 *)buf, 0);
        }
    }
    if (buf != NULL) {
        _sceHttpFreeInternal(buf);
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/libhttp", CreateRequest);

INCLUDE_ASM("nonmatchings/libhttp", CreateConnectionWithUrl);

INCLUDE_ASM("nonmatchings/libhttp", DeleteHttpHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_00006EA4);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_0000734C);

INCLUDE_ASM("nonmatchings/libhttp", func_000074C0);

INCLUDE_ASM("nonmatchings/libhttp", func_00007520);
#endif

#if FW_VERSION == 103
INCLUDE_ASM("nonmatchings/libhttp", func_0000775C);
#endif

#if FW_VERSION < 103
INCLUDE_ASM("nonmatchings/libhttp", func_00006F94);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_000073F4);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_00007B1C);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", _try_connect);
#endif

#if FW_VERSION < 150
int _try_build_header(SceUChar8 **out, SceHttpReq *request) {
    int ret = 0;
    int old;
    SceSize header_size;
    SceUChar8 *header;

    old = sceKernelSuspendDispatchThread();
    header_size = BuildHttpHeader(request, NULL, 1);
    header = _sceHttpMallocInternal(header_size);
    if (header == NULL) {
        ret = 0x80431022;
    } else {
        func_0000BBCC(header, 0, header_size);
        BuildHttpHeader(request, (char *)header, 0);
    }
    sceKernelResumeDispatchThread(old);
    if (ret < 0) {
        if (header != NULL) {
            _sceHttpFreeInternal(header);
        }
    } else {
        *out = header;
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/libhttp", _try_resolve_hostname);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000786C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00001BB4);

INCLUDE_ASM("nonmatchings/libhttp", func_00001F6C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001710C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017110);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00001AF8);

INCLUDE_ASM("nonmatchings/libhttp", func_00001E9C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00007918);

INCLUDE_ASM("nonmatchings/libhttp", func_00007C90);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_00007D88);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B0);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_000173C0);

#if FW_VERSION != 271
INCLUDE_RODATA("nonmatchings/libhttp", D_000173C8);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/libhttp", D_00017CB4);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D96C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D974);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D97C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000D988);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00016F58);
#endif

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D98C);
#endif

#if FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D994);
#endif

INCLUDE_RODATA("nonmatchings/libhttp", D_000173D0);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000020E0);

INCLUDE_ASM("nonmatchings/libhttp", func_000022B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00001FFC);

INCLUDE_ASM("nonmatchings/libhttp", func_000021CC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017004);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000026A8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000025C8);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000014BC);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/libhttp", D_0000D9A0);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00007F54);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00001AC0);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_000083B0);
#endif

#if FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000088E8);

INCLUDE_ASM("nonmatchings/libhttp", func_00008A80);
#endif

#if FW_VERSION < 150
void func_00008CB0(int val, char *out) {
    SceKernelUtilsMd5Context ctx;
    u8 digest[16];

    sceKernelUtilsMd5BlockInit(&ctx);
    sceKernelUtilsMd5BlockUpdate(&ctx, (u8 *)&val, 4);
    sceKernelUtilsMd5BlockResult(&ctx, digest);
    func_00008EBC(digest, out);
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008CB0);
#endif

#if FW_VERSION < 150
int func_00008D10(u8 *data, u32 size, char *out) {
    SceKernelUtilsMd5Context ctx;
    u8 digest[16];

    if (data == NULL || out == NULL) {
        return 0x804311FE;
    }
    sceKernelUtilsMd5BlockInit(&ctx);
    sceKernelUtilsMd5BlockUpdate(&ctx, data, size);
    sceKernelUtilsMd5BlockResult(&ctx, digest);
    func_00008EBC(digest, out);
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008D10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushAuthList);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000302C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00002F78);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00003020);

INCLUDE_ASM("nonmatchings/libhttp", func_000030DC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00003264);

INCLUDE_ASM("nonmatchings/libhttp", func_00003424);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000031B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00003378);
#endif

#if FW_VERSION >= 250 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA48);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000365C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000035B4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000037D4);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpLoadAuthList);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSaveAuthList);

INCLUDE_ASM("nonmatchings/libhttp", func_00003ECC);

INCLUDE_ASM("nonmatchings/libhttp", func_00003F08);

INCLUDE_ASM("nonmatchings/libhttp", func_00003F48);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00004034);
#endif

#if FW_VERSION < 151
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA3C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA40);
#endif

#if FW_VERSION < 250
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DA48);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000213C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000230C);
#endif

#if FW_VERSION < 201 || FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0001746C);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008DA4);
#endif

#if FW_VERSION < 201
void func_00008EBC(const u8 *digest, char *out) {
    u16 i;
    u8 c;

    for (i = 0; i < 16; i++) {
        c = digest[i] >> 4;
        if (c < 10) {
            out[i * 2] = c + '0';
        } else {
            out[i * 2] = c + 0x57;
        }
        c = digest[i] & 0xF;
        if (c < 10) {
            out[i * 2 + 1] = c + '0';
        } else {
            out[i * 2 + 1] = c + 0x57;
        }
    }
    out[32] = '\0';
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008EBC);

INCLUDE_ASM("nonmatchings/libhttp", func_00004198);

INCLUDE_ASM("nonmatchings/libhttp", func_00004280);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00002704);

INCLUDE_ASM("nonmatchings/libhttp", func_00002B38);

INCLUDE_ASM("nonmatchings/libhttp", func_00002CC8);

INCLUDE_ASM("nonmatchings/libhttp", func_00002EFC);

INCLUDE_ASM("nonmatchings/libhttp", func_00002F5C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushAuthList);

INCLUDE_ASM("nonmatchings/libhttp", func_00003088);

INCLUDE_ASM("nonmatchings/libhttp", func_0000312C);

INCLUDE_ASM("nonmatchings/libhttp", func_000031E8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00003244);

INCLUDE_ASM("nonmatchings/libhttp", func_000032EC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000339C);

INCLUDE_ASM("nonmatchings/libhttp", func_000035BC);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000032C0);

INCLUDE_ASM("nonmatchings/libhttp", func_00003480);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0001747C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000382C);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000036B8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_000038CC);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpLoadAuthList);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSaveAuthList);

INCLUDE_ASM("nonmatchings/libhttp", func_00003FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00003FE0);

INCLUDE_ASM("nonmatchings/libhttp", func_00004020);

INCLUDE_ASM("nonmatchings/libhttp", func_00004090);

INCLUDE_ASM("nonmatchings/libhttp", func_000041FC);

INCLUDE_ASM("nonmatchings/libhttp", func_00004274);

INCLUDE_ASM("nonmatchings/libhttp", func_0000435C);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSaveSystemCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpLoadSystemCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddCookie);
#endif

#if FW_VERSION < 150
void func_000050F4(void *arg0) {
    _SceHttpReqHeaderList *list = arg0;
    _SceHttpReqHeaderList *next;

    while (list != NULL) {
        if (list->field_name != NULL) {
            _sceHttpFreeInternal(list->field_name);
            list->field_name = NULL;
        }
        if (list->field_value != NULL) {
            _sceHttpFreeInternal(list->field_value);
            list->field_value = NULL;
        }
        next = list->next;
        list->next = NULL;
        _sceHttpFreeInternal(list);
        list = next;
    }
}
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", func_000050F4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000050F4(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_a0;
    void *temp_s0;
    void *var_s1;

    var_s1 = arg0;
    if (arg0 != NULL) {
        do {
            temp_v1 = M2C_FIELD(var_s1, s32 *, 0);
            if (temp_v1 != 0) {
                func_00006388(temp_v1);
                M2C_FIELD(var_s1, s32 *, 0) = 0;
            }
            temp_v1_2 = M2C_FIELD(var_s1, s32 *, 4);
            if (temp_v1_2 != 0) {
                func_00006388(temp_v1_2);
                M2C_FIELD(var_s1, s32 *, 4) = 0;
            }
            temp_s0 = M2C_FIELD(var_s1, void **, 8);
            M2C_FIELD(var_s1, void **, 8) = NULL;
            temp_a0 = var_s1;
            var_s1 = temp_s0;
            func_00006388((s32) temp_a0);
        } while (temp_s0 != NULL);
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000050CC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005208);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000051BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCookie);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000055CC);

INCLUDE_ASM("nonmatchings/libhttp", func_00005624);

INCLUDE_ASM("nonmatchings/libhttp", func_0000575C);

INCLUDE_ASM("nonmatchings/libhttp", func_00005748);

INCLUDE_ASM("nonmatchings/libhttp", func_000059F8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000558C);

INCLUDE_ASM("nonmatchings/libhttp", func_000055E4);

INCLUDE_ASM("nonmatchings/libhttp", func_00005718);

INCLUDE_ASM("nonmatchings/libhttp", func_00005748);

INCLUDE_ASM("nonmatchings/libhttp", func_000059C4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00005C50);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005CD4);

INCLUDE_ASM("nonmatchings/libhttp", func_00005F20);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005CB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00005EFC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00006228);

INCLUDE_ASM("nonmatchings/libhttp", func_00006380);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000063E0);

INCLUDE_ASM("nonmatchings/libhttp", func_000069E8);

INCLUDE_ASM("nonmatchings/libhttp", func_00006DF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000063DC);

INCLUDE_ASM("nonmatchings/libhttp", func_000069D0);

INCLUDE_ASM("nonmatchings/libhttp", func_00006DD4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007230);

INCLUDE_ASM("nonmatchings/libhttp", func_000072A0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000734C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007324);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000073D0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000074C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000074A0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000075C4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007634);

INCLUDE_ASM("nonmatchings/libhttp", func_000077C0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_00007644);
#endif

#if FW_VERSION == 250
INCLUDE_ASM("nonmatchings/libhttp", func_0000761C_v250);
#endif

#if FW_VERSION == 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000761C_v201);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000077A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000078AC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000795C);

INCLUDE_RODATA("nonmatchings/libhttp", D_000170A4);

INCLUDE_ASM("nonmatchings/libhttp", func_000079E8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007AFC);

INCLUDE_ASM("nonmatchings/libhttp", func_00007BD0);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D60);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00007AE8);

INCLUDE_ASM("nonmatchings/libhttp", func_00007BC8);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007F10);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000080A0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000878C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000080A8);

INCLUDE_ASM("nonmatchings/libhttp", func_00008790);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008FB4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000027A4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_0000907C);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000092D4);

INCLUDE_ASM("nonmatchings/libhttp", func_00009460);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00002F44);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_000097F8);
#endif

#if FW_VERSION < 201
void func_00009A38(void) {
    func_00009E68(D_0000E0A0);
    D_0000E0A0 = NULL;
}

INCLUDE_ASM("nonmatchings/libhttp", func_00009A68);
#endif

#if FW_VERSION < 150
void func_00009DA0(void *arg0) {
    void **p = arg0;

    if (p[4] != NULL) {
        _sceHttpFreeInternal(p[4]);
        p[4] = NULL;
    }
    if (p[5] != NULL) {
        _sceHttpFreeInternal(p[5]);
        p[5] = NULL;
    }
    if (p[2] != NULL) {
        _sceHttpFreeInternal(p[2]);
        p[2] = NULL;
    }
    if (p[0] != NULL) {
        _sceHttpFreeInternal(p[0]);
        p[0] = NULL;
    }
    if (p[3] != NULL) {
        _sceHttpFreeInternal(p[3]);
        p[3] = NULL;
    }
    if (p[1] != NULL) {
        _sceHttpFreeInternal(p[1]);
        p[1] = NULL;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00009DA0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_a0 != 0) {
        func_00006388(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_a0_2 != 0) {
        func_00006388(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_3 != 0) {
        func_00006388(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_a0_4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0_4 != 0) {
        func_00006388(temp_a0_4);
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    temp_a0_5 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_5 != 0) {
        func_00006388(temp_a0_5);
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_a0_6 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0_6 != 0) {
        func_00006388(temp_a0_6);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
#endif

#if FW_VERSION < 150
void func_00009E68(SceHttpsUnkGroup *g) {
    SceHttpsUnkGroup *gnext;
    SceHttpsUnkItem *item;
    SceHttpsUnkItem *next;

    while (g != NULL) {
        item = g->items;
        while (item != NULL) {
            func_00009DA0(item);
            next = item->next;
            _sceHttpFreeInternal(item);
            item = next;
        }
        _sceHttpFreeInternal(g->buf0C);
        gnext = g->next;
        _sceHttpFreeInternal(g);
        g = gnext;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00009E68(SceHttpsUnkGroup *g) {
    SceHttpsUnkGroup *gnext;
    SceHttpsUnkItem *item;
    SceHttpsUnkItem *next;

    while (g != NULL) {
        item = g->items;
        while (item != NULL) {
            func_00009DA0(item);
            next = item->next;
            func_00006388(item);
            item = next;
        }
        func_00006388(g->buf0C);
        gnext = g->next;
        func_00006388(g);
        g = gnext;
    }
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00009EE0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00003908);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_0000A094);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000A67C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00005174);

INCLUDE_ASM("nonmatchings/libhttp", func_00005264);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCookie);

INCLUDE_ASM("nonmatchings/libhttp", func_00005628);

INCLUDE_ASM("nonmatchings/libhttp", func_00005680);

INCLUDE_ASM("nonmatchings/libhttp", func_000057B8);

INCLUDE_ASM("nonmatchings/libhttp", func_000057E4);

INCLUDE_ASM("nonmatchings/libhttp", func_00005A54);

void func_00005CD0(void *arg0, void *arg1) {
    void *temp_s0;
    void *temp_s0_2;
    struct Unk_func_00005CD0_var_a0 *var_a0;
    struct Unk_func_00005CD0_var_s1 *var_s1;

    var_s1 = arg1;
    var_a0 = arg0;
    if (var_a0 != NULL) {
        do {
            temp_s0 = var_a0->unk7C;
            func_0000B2C0((s32) var_a0);
            var_a0 = temp_s0;
        } while (temp_s0 != NULL);
    }
    if (var_s1 != NULL) {
        do {
            temp_s0_2 = var_s1->unk4;
            func_000057E4(var_s1->unk0);
            func_0000B2C0((s32) var_s1);
            var_s1 = temp_s0_2;
        } while (temp_s0_2 != NULL);
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_00005D30);

INCLUDE_ASM("nonmatchings/libhttp", func_00005F7C);

INCLUDE_ASM("nonmatchings/libhttp", func_00006290);

INCLUDE_ASM("nonmatchings/libhttp", func_000063E4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000643C);

INCLUDE_ASM("nonmatchings/libhttp", func_00006A44);

INCLUDE_ASM("nonmatchings/libhttp", func_00006E54);

INCLUDE_ASM("nonmatchings/libhttp", func_000072B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00007324);

INCLUDE_ASM("nonmatchings/libhttp", func_000073A8);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libhttp", func_000075FC);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", func_00007454);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00007524);

INCLUDE_ASM("nonmatchings/libhttp", func_00007640);

INCLUDE_ASM("nonmatchings/libhttp", func_00007690);

INCLUDE_ASM("nonmatchings/libhttp", func_0000781C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000791C);

INCLUDE_ASM("nonmatchings/libhttp", func_000079CC);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017510);

INCLUDE_ASM("nonmatchings/libhttp", func_00007A58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007B58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007C2C);

INCLUDE_ASM("nonmatchings/libhttp", func_00007DBC);

INCLUDE_ASM("nonmatchings/libhttp", func_00007F64);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libhttp", func_000082B8);

INCLUDE_ASM("nonmatchings/libhttp", func_000089A0);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", func_000080FC);

INCLUDE_ASM("nonmatchings/libhttp", func_000087E8);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInit);

#if FW_VERSION < 271
INCLUDE_RODATA("nonmatchings/libhttp", D_0000DAEC);
#endif

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsInitWithPath);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsLoadDefaultCert);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000092A4);
#endif

#if FW_VERSION < 150
int sceHttpsEnd(void) {
    int i;
    int ret = 0x80431001;

    if (D_0000E0A4 == 1) {
        if (D_0000E0AC != NULL) {
            for (i = 0; i < D_0000E0A8; i++) {
                if (D_0000E0AC[i] != NULL) {
                    SSLCERT_free(D_0000E0AC[i]);
                }
            }
            _sceHttpFreeInternal(D_0000E0AC);
            D_0000E0AC = NULL;
        }
        if (D_0000E0B0 != NULL) {
            SSLCERT_free(D_0000E0B0);
            D_0000E0B0 = NULL;
        }
        if (D_0000E0B4 != NULL) {
            EVP_PKEY_free(D_0000E0B4);
            D_0000E0B4 = NULL;
        }
        D_0000E0A4 = 0;
        ret = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000909C);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOptionPrivate);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOptionPrivate);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOption);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpsEnableOption(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0 & 2;
    if (temp_a1 != 0) {
        D_0000F0F4 = 1;
    }
    if (arg0 & 1) {
        D_0000F0F0 = 1;
    }
    if (temp_a1 != 0) {
        D_0000F0F4 = 1;
    }
    if (arg0 & 4) {
        D_0000F0F8 = 1;
    }
    if (arg0 & 8) {
        D_0000F0FC = 1;
    }
    if (arg0 & 0x10) {
        D_0000F100 = 1;
    }
    if (arg0 & 0x20) {
        D_0000F104 = 1;
    }
    return 0;
}
#endif

#if FW_VERSION < 150
s32 sceHttpsEnableOption(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0 & 2;
    if (temp_a1 != 0) {
        D_0000DC24 = 1;
    }
    if (arg0 & 1) {
        D_0000DC20 = 1;
    }
    if (temp_a1 != 0) {
        D_0000DC24 = 1;
    }
    if (arg0 & 4) {
        D_0000DC28 = 1;
    }
    if (arg0 & 8) {
        D_0000DC2C = 1;
    }
    if (arg0 & 0x10) {
        D_0000DC30 = 1;
    }
    return 0;
}

s32 sceHttpsDisableOption(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0 & 2;
    if (temp_a1 != 0) {
        D_0000DC24 = 0;
    }
    if (arg0 & 1) {
        D_0000DC20 = 0;
    }
    if (temp_a1 != 0) {
        D_0000DC24 = 0;
    }
    if (arg0 & 4) {
        D_0000DC28 = 0;
    }
    if (arg0 & 8) {
        D_0000DC2C = 0;
    }
    if (arg0 & 0x10) {
        D_0000DC30 = 0;
    }
    return 0;
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOption);
#endif

#if FW_VERSION >= 102 && FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_0000B944);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00009498);

INCLUDE_ASM("nonmatchings/libhttp", func_000095D4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000928C);

INCLUDE_ASM("nonmatchings/libhttp", func_000095D0);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_00009544);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_000094F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00004C44);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00005004);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000050DC);
#endif

#if FW_VERSION == 100
INCLUDE_ASM("nonmatchings/libhttp", func_0000B2D4);
#endif

#if FW_VERSION < 150
INCLUDE_ASM("nonmatchings/libhttp", func_0000B484);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_000092E8);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000962C);

INCLUDE_ASM("nonmatchings/libhttp", func_00009700);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 350
INCLUDE_ASM("nonmatchings/libhttp", func_000097A4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_000097A4(SceHttpConn *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x48);
    if (temp_v1 != 0) {
        SSL_shutdown(temp_v1);
        SSL_clear(M2C_FIELD(arg0, s32 *, 0x48));
        SSL_set_session(M2C_FIELD(arg0, s32 *, 0x48), 0);
        SSL_set_bio(M2C_FIELD(arg0, s32 *, 0x48), 0, 0);
        SSL_free(M2C_FIELD(arg0, s32 *, 0x48));
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_v1_2 != 0) {
        SSL_CTX_free(temp_v1_2);
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    }
}
#endif

#if FW_VERSION < 150
void func_000097A4(SceHttpConn *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_v1 != 0) {
        SSL_shutdown(temp_v1);
        SSL_clear(M2C_FIELD(arg0, s32 *, 0x40));
        SSL_set_session(M2C_FIELD(arg0, s32 *, 0x40), 0);
        SSL_set_bio(M2C_FIELD(arg0, s32 *, 0x40), 0, 0);
        SSL_free(M2C_FIELD(arg0, s32 *, 0x40));
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_v1_2 != 0) {
        SSL_CTX_free(temp_v1_2);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
    }
}
#else
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetSslError);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsSetSslCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsGetCaList);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009A80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009AC0);
#endif

#if FW_VERSION < 150
s32 func_0000B598(void *arg0) {
    s32 var_v0;

    var_v0 = SSL_write(M2C_FIELD(arg0, s32 *, 0x40));
    if (var_v0 < 0) {
        var_v0 = 0x80431075;
    }
    return var_v0;
}
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B5C4);
#endif

#if FW_VERSION >= 282
s32 func_00009ADC(void) {
    return D_0001A5C4;
}

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnd);
#endif

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libhttp", sceHttpsEnableOption);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpsDisableOption);

INCLUDE_ASM("nonmatchings/libhttp", func_000097A4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009B1C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00009CA4);

#if FW_VERSION >= 350
INCLUDE_ASM("nonmatchings/libhttp", func_0000A02C);
#endif

INCLUDE_ASM("nonmatchings/libhttp", func_00009D54);

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009E18);
#endif

#if FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B93C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A260);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A43C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A480);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A4B4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AE54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00005778(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;

    temp_v0 = func_000057F8(arg0);
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00005CAC(arg0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00005EF4(arg0);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_0000584C(arg0);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00005D20(arg0);
                }
            }
        }
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_000057F8);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000ED38);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000F640);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000F648);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B3BC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B040);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B46C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000584C);

INCLUDE_ASM("nonmatchings/libhttp", func_00005CAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00005D20);

INCLUDE_ASM("nonmatchings/libhttp", func_00005EF4);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libhttp", func_00006664);

INCLUDE_ASM("nonmatchings/libhttp", func_00006734);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00006320);

INCLUDE_ASM("nonmatchings/libhttp", func_00006388);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B7D8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000649C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00006558);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00006558(void) {
    if (D_0000F1B4 != 0) {
        sceKernelDeleteVpl(D_0000F1B4);
        D_0000F1B4 = 0;
    }
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B90C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveRetry);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResHeaderMaxSize);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvBlockSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCacheContentLengthMaxSize);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpChangeHttpVersion);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCB);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRedirectCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieSendCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieRecvCallback);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000CE58);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D02C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D11C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000D040);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000761C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000D350);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DAF4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DA8C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DCBC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000DD64);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DE04);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DC4C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000DE80);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000E064);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00007C58);

INCLUDE_ASM("nonmatchings/libhttp", func_00007D38);

INCLUDE_ASM("nonmatchings/libhttp", func_00007DC4);

INCLUDE_ASM("nonmatchings/libhttp", func_00007ED0);

INCLUDE_ASM("nonmatchings/libhttp", func_00007F88);

INCLUDE_ASM("nonmatchings/libhttp", func_0000804C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000813C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008304);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000E10C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E154);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E220);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E2DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00008360(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000837C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpInit(u32 arg0) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0x80431020;
    if ((D_0000F1FC != 1) && (func_0000AF34(), func_0000A73C(), func_000098F0(), var_v1 = func_0000649C((s32) arg0), var_v0 = 0, (var_v1 >= 0))) {
        D_0000F1FC = 1;
    } else {
        var_v0 = var_v1;
    }
    return var_v0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpEnd(void) {
    s32 var_a0;

    var_a0 = 0x80431001;
    if (D_0000F1FC == 1) {
        func_00009A38();
        func_00007C58();
        func_00006558();
        D_0000F1FC = 0;
        var_a0 = 0;
    }
    return var_a0;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008510);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_00008510(void) {
    return D_0000F1FC;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", module_reboot_before);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000E37C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E504);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E758);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E8C8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E910);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000851C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000E758);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000086B4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008944);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_0000EBC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_00008AB8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00008AB8(void *arg0, void *arg1, u32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        sceNetInetRecv(M2C_FIELD(arg0, s32 *, 0x2C), arg1, arg2, arg3);
    } else {
        func_00005004((s32) arg0, (s32) arg1, (s32) arg2);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008AF4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008C5C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000EEA8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EF7C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000EDEC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008E24);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00008E84);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00008F68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_00008F68(void *arg0, void *arg1, u32 arg2, s32 arg3) {
    if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        sceNetInetSend(M2C_FIELD(arg0, s32 *, 0x2C), arg1, arg2, arg3);
    } else {
        func_000050DC((s32) arg0);
    }
}
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000EF58);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000F114);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00008FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00008FCC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000091B0);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000F2CC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009300);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009638);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000F7AC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00009700);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000F9C8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_000097C4);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000098F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000992C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000FA4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000099C8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00010024);

INCLUDE_ASM("nonmatchings/libhttp", func_000100E4);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000100A4);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000101F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_00009E08);

INCLUDE_ASM("nonmatchings/libhttp", CreateConnectionWithUrl);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A0A0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A370);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0001057C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A4C0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A584);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00010700);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A64C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A73C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_0001083C);

INCLUDE_ASM("nonmatchings/libhttp", func_0001092C);

INCLUDE_ASM("nonmatchings/libhttp", func_00010B54);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000109A8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000A774);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_00010DD0);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000A9B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000AAAC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000AAAC(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_v1 != 0) {
        func_0000C1F0(temp_v1);
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_v1_2 != 0) {
        func_00006388(temp_v1_2);
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_a1 != 0) {
        func_00006388(temp_a1);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_a2 != 0) {
        func_00006388(temp_a2);
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000AB3C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00010E90);

INCLUDE_ASM("nonmatchings/libhttp", func_00010F4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000AC04);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00010FF8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000ACC8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000AF34);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00011244);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000AF68);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_0000EDF0);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EDF4);

INCLUDE_RODATA("nonmatchings/libhttp", D_0000EE04);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B068);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000113B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011548);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00011480);

INCLUDE_ASM("nonmatchings/libhttp", func_00011618);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00011804);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000B0E8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B28C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B428);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B4AC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B560);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000118F8);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
void func_0000B560(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_v0 != 0) {
        M2C_FIELD(arg1, s32 *, 0x2C) = temp_v0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_v0_2 != 0) {
        M2C_FIELD(arg1, s32 *, 0x30) = temp_v0_2;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_0000B590);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00011A08);

INCLUDE_ASM("nonmatchings/libhttp", func_00011A54);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000B5DC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B710);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B874);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B8F8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B98C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 sceHttpInitCache(u32 arg0) {
    s32 var_a1;

    var_a1 = 0x80431020;
    if (M2C_FIELD(&D_0000F590, s32 *, 0) != 1) {
        M2C_FIELD(&D_0000F590, s32 *, 0) = 1;
        var_a1 = 0;
        M2C_FIELD(&D_0000F590, u32 *, 8) = arg0;
    }
    return var_a1;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", func_00011F88);

INCLUDE_ASM("nonmatchings/libhttp", func_00011FA4);

INCLUDE_ASM("nonmatchings/libhttp", func_00012058);

INCLUDE_ASM("nonmatchings/libhttp", func_0001210C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012228);

INCLUDE_ASM("nonmatchings/libhttp", func_0001244C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00012404);

INCLUDE_ASM("nonmatchings/libhttp", func_0001253C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000124E4);

INCLUDE_ASM("nonmatchings/libhttp", func_00012610);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00012780);

INCLUDE_ASM("nonmatchings/libhttp", func_000127FC);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000127E8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000128BC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00012974);

INCLUDE_ASM("nonmatchings/libhttp", func_00012998);

INCLUDE_ASM("nonmatchings/libhttp", func_00012B40);

INCLUDE_ASM("nonmatchings/libhttp", func_00012C04);

INCLUDE_ASM("nonmatchings/libhttp", func_00012C98);

INCLUDE_ASM("nonmatchings/libhttp", func_00012D0C);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00012CF0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00012DC0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00012E6C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012FB4);

INCLUDE_ASM("nonmatchings/libhttp", func_00013044);

INCLUDE_ASM("nonmatchings/libhttp", func_000130E4);

INCLUDE_ASM("nonmatchings/libhttp", func_000130F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA58);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000BA58(void) {
    return D_0000F590;
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000BA64);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000BA64(void) {
    return M2C_VFIELD(&D_0000F590, s32, 8);
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0001311C);

INCLUDE_ASM("nonmatchings/libhttp", func_000131D8);

INCLUDE_ASM("nonmatchings/libhttp", func_00013238);

INCLUDE_ASM("nonmatchings/libhttp", func_00013470);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 func_0000BA74(void) {
    return M2C_VFIELD(&D_0000F590, s32, 0xC);
}

void func_0000BA84(s32 arg0) {
    M2C_VFIELD(&D_0000F590, s32, 0xC) = (s32) (M2C_VFIELD(&D_0000F590, s32, 0xC) + arg0);
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000BA9C);

void func_0000BAF8(void *arg0) {
    void *temp_a1;

    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, void **, 0x28);
        M2C_FIELD(temp_a1, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x24) - 1);
    }
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkPspError);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013A74);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013AA0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013C58);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013CF8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00013D2C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013E4C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_RODATA("nonmatchings/libhttp", D_0000EE28);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BF98);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C088);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000C1F0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017250);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_00014010);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_000141FC);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_00014044);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000C26C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000C828);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017360);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017368);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017370);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017378);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017388);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017394);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000146FC);
#endif

#if FW_VERSION == 260
INCLUDE_ASM("nonmatchings/libhttp", func_000148F8);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014BE8);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 260
INCLUDE_ASM("nonmatchings/libhttp", func_000146D0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014D30);

INCLUDE_ASM("nonmatchings/libhttp", func_00014DA4);
#endif

#if FW_VERSION >= 260 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0001517C);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000C9A0);
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libhttp", func_0000D3BC);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000CCD8);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000150B0);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_00014F78);
#endif

#if FW_VERSION >= 150 && FW_VERSION < 282
void func_0000CD48(void) {
    sceKernelCpuSuspendIntr();
}

void func_0000CD64(void) {
    sceKernelCpuResumeIntr();
}

void func_0000CD80(void) {
    sceKernelUtilsMd5Digest();
}

void func_0000CD9C(void) {
    sceKernelUtilsMd5BlockInit();
}

void func_0000CDB8(void) {
    sceKernelUtilsMd5BlockUpdate();
}

void func_0000CDD4(void) {
    sceKernelUtilsMd5BlockResult();
}

void func_0000CDF0(void) {
    sceNetInetInetPton();
}

void func_0000CE0C(void) {
    sceRtcGetCurrentTick();
}

void func_0000CE28(void) {
    sceRtcTickAddSeconds();
}

void func_0000CE44(void) {
    sceRtcParseDateTime();
}

void func_0000CE60(void) {
    sceRtcFormatRFC2822();
}
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000151B0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015238);
#endif

#if FW_VERSION == 271
INCLUDE_ASM("nonmatchings/libhttp", func_000153F0);

INCLUDE_ASM("nonmatchings/libhttp", func_0001559C);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 271
INCLUDE_ASM("nonmatchings/libhttp", func_000152A0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015448);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_000155F0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015644);
#endif

#if FW_VERSION < 201
s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    return 0;
}

int func_0000BAA8(int c) {
    int t;

    c = (char)c;
    t = D_0000DC34[c + 1];
    if (t & 2) {
        c = (char)(c - 0x20);
    }
    return c;
}

int func_0000BAD4(int c) {
    int t;

    c = (char)c;
    t = D_0000DC34[c + 1];
    if (t & 1) {
        c = (char)(c + 0x20);
    }
    return c;
}

int func_0000BB00(int c) {
    return D_0000DC34[c + 1];
}
#endif

#if FW_VERSION >= 150 && FW_VERSION < 201
s32 *func_0000BB14(void) {
    return &D_0000DC35;
}
#endif

#if FW_VERSION < 150
M2C_UNK *func_0000BB14(void) {
    return &D_0000DC35;
}
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000BB20);

int func_0000BB58(const void *s1, const void *s2, int n) {
    const unsigned char *a = s1;
    const unsigned char *b = s2;

    for (; n > 0; n--) {
        if (*a != *b) {
            return (*a < *b) ? -1 : 1;
        }
        a++;
        b++;
    }
    return 0;
}

u8 *func_0000BB98(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a2;
    u8 *var_a1;
    u8 *var_v0;
    u8 *var_v1;
    u8 temp_a3;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v0 = NULL;
    if (arg0 != NULL) {
        var_v1 = arg0;
        if (var_a2 > 0) {
            do {
                temp_a3 = *var_a1;
                var_a2 -= 1;
                var_a1 += 1;
                *var_v1 = temp_a3;
                var_v1 += 1;
            } while (var_a2 > 0);
        }
        var_v0 = arg0;
    }
    return var_v0;
}

void *func_0000BBCC(void *s, int c, int n) {
    unsigned char *p;
    unsigned char ch;

    if (s != NULL) {
        ch = c;
        p = s;
        while (n > 0) {
            n--;
            *p++ = ch;
        }
    }
    return s;
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000BBF8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BC98);

INCLUDE_ASM("nonmatchings/libhttp", func_0000BD18);

char *func_0000BDF0(const char *s, int c) {
    const char *p;

    c = (char)c;
    p = s;
    if (s == NULL) {
        return NULL;
    }
    while (*p++ != '\0') {
    }
    p--;
    do {
        if (*p == c) {
            return (char *)p;
        }
    } while (s < p--);
    return NULL;
}

int func_0000BE38(const char *s) {
    int len = 0;

    if (s == NULL) {
        return 0;
    }
    while (*s++ != '\0') {
        len++;
    }
    return len;
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000BE6C);
#endif

#if FW_VERSION >= 151 && FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000D1A8);
#endif

#if FW_VERSION < 151
INCLUDE_ASM("nonmatchings/libhttp", func_0000BED4);
#endif

#if FW_VERSION < 201
INCLUDE_ASM("nonmatchings/libhttp", func_0000BF6C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000C030);

char *func_0000C0AC(const char *s, int c) {
    c = (char)c;
    if (s == NULL) {
        return NULL;
    }
    do {
        if (*s == c) {
            return (char *)s;
        }
    } while (*s++ != '\0');
    return NULL;
}
#endif

#if FW_VERSION == 152
INCLUDE_ASM("nonmatchings/libhttp", func_0000DD2C);
#endif

#if FW_VERSION < 201
char *func_0000C0DC(char *arg0, const char *arg1) {
    u8 *var_a1;
    u8 *var_a2;
    u8 *var_v0;
    u8 temp_a3;

    var_a1 = (u8 *)arg1;
    var_v0 = NULL;
    var_a2 = (u8 *)arg0;
    if (((arg0 == NULL) | (var_a1 == NULL)) == 0) {
        do {
            temp_a3 = *var_a1;
            var_a1 += 1;
            *var_a2 = temp_a3;
            var_a2 += 1;
        } while (temp_a3 != 0);
        var_v0 = (u8 *)arg0;
    }
    return (char *)var_v0;
}
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00009E74);

INCLUDE_ASM("nonmatchings/libhttp", func_0000A048);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000A248);
#endif

#if FW_VERSION >= 282
void func_0000A08C(s32 arg0) {
    if (func_0000A0C0() >= 0) {
        func_0000AA9C(arg0);
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_0000A0C0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AA9C);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017598);

INCLUDE_RODATA("nonmatchings/libhttp", D_000175A0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000AFEC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B09C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B25C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B2C0);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetMallocFunction);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B3E4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B4CC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000B50C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveRetry);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResolveTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetConnectTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetSendTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvTimeOut);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableNagle);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableNagle);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetResHeaderMaxSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRecvBlockSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCacheContentLengthMaxSize);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableKeepAlive);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCookie);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableAuth);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableProxyAuth);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableProxyAuth);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", sceHttp_D80BE761);

INCLUDE_ASM("nonmatchings/libhttp", sceHttp_C0E69162);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableRedirect);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpChangeHttpVersion);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDisableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCB);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetAuthInfoCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetRedirectCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieSendCallback);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetCookieRecvCallback);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D08C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D260);

INCLUDE_ASM("nonmatchings/libhttp", func_0000D350);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpSetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetProxy);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnableExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpAddExtraHeader);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpDeleteHeader);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DAF8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DCC0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DD64);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DE04);

INCLUDE_ASM("nonmatchings/libhttp", func_0000DE80);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E058);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E0C0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E100);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E148);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E214);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E2D0);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInit);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEnd);

s32 func_0000E568(void) {
    return D_0001AA44;
}

INCLUDE_ASM("nonmatchings/libhttp", module_reboot_before);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E5B0);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E738);

INCLUDE_ASM("nonmatchings/libhttp", func_0000E98C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EAFC);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EB44);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000F280);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000ECD0);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000EF08);

INCLUDE_ASM("nonmatchings/libhttp", func_0000EFE4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F05C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", func_0000F7C4);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000F18C);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", func_0000F81C);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_0000F824);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_0000F1C8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F404);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F53C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000F954);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FA1C);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FAD8);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FBE4);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FC20);

INCLUDE_ASM("nonmatchings/libhttp", func_0000FCBC);

INCLUDE_ASM("nonmatchings/libhttp", func_00010138);

INCLUDE_ASM("nonmatchings/libhttp", func_00010200);

INCLUDE_ASM("nonmatchings/libhttp", func_00010314);

INCLUDE_ASM("nonmatchings/libhttp", func_000106A4);

INCLUDE_ASM("nonmatchings/libhttp", func_000107EC);

INCLUDE_ASM("nonmatchings/libhttp", func_000108A8);

INCLUDE_ASM("nonmatchings/libhttp", func_00010970);

void func_00010A74(void) {
    sceNetMemset(&D_0001AE08, 0, 0x194);
    D_0001AE08 = 0x01000000;
}

INCLUDE_ASM("nonmatchings/libhttp", func_00010AAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00010B9C);

INCLUDE_ASM("nonmatchings/libhttp", func_00010DC4);

INCLUDE_ASM("nonmatchings/libhttp", func_00010EAC);

INCLUDE_ASM("nonmatchings/libhttp", func_00010FA8);

INCLUDE_ASM("nonmatchings/libhttp", func_00011038);

INCLUDE_ASM("nonmatchings/libhttp", func_00011100);

INCLUDE_ASM("nonmatchings/libhttp", func_000111BC);

void func_00011484(void) {
    sceNetMemset(&D_0001AF9C, 0, 0xB0);
    D_0001AF9C = 0;
}
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00011B9C);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_000114B8);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017628);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001762C);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001763C);

INCLUDE_ASM("nonmatchings/libhttp", func_000115B4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011628);
#endif

#if FW_VERSION >= 330
INCLUDE_ASM("nonmatchings/libhttp", func_0001227C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 330
INCLUDE_ASM("nonmatchings/libhttp", func_000117BC);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_000119A4);

INCLUDE_ASM("nonmatchings/libhttp", func_00011A84);

void func_00011B3C(struct Unk_func_00011B3C_0 *arg0, struct Unk_func_00011B3C_1 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unk28;
    if (temp_v0 != 0) {
        arg1->unk34 = temp_v0;
        arg0->unk28 = 0;
    }
    temp_v0_2 = arg0->unk2C;
    if (temp_v0_2 != 0) {
        arg1->unk38 = temp_v0_2;
        arg0->unk2C = 0;
    }
}

INCLUDE_ASM("nonmatchings/libhttp", func_00011B6C);

INCLUDE_ASM("nonmatchings/libhttp", func_00011BB8);

INCLUDE_ASM("nonmatchings/libhttp", func_00011C04);

INCLUDE_ASM("nonmatchings/libhttp", func_00011C58);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpInitExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpFlushExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpEndExternalCache);

INCLUDE_ASM("nonmatchings/libhttp", func_0001211C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012138);

INCLUDE_ASM("nonmatchings/libhttp", func_000121EC);

INCLUDE_ASM("nonmatchings/libhttp", func_000122A0);

INCLUDE_ASM("nonmatchings/libhttp", func_000123BC);

INCLUDE_ASM("nonmatchings/libhttp", func_000125E0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012678);

INCLUDE_ASM("nonmatchings/libhttp", func_000127B0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012920);

INCLUDE_ASM("nonmatchings/libhttp", func_0001299C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012A5C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012B20);

INCLUDE_ASM("nonmatchings/libhttp", func_00012B44);

INCLUDE_ASM("nonmatchings/libhttp", func_00012CEC);

INCLUDE_ASM("nonmatchings/libhttp", func_00012DB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012E3C);

INCLUDE_ASM("nonmatchings/libhttp", func_00012EB0);

INCLUDE_ASM("nonmatchings/libhttp", func_00012F64);

INCLUDE_ASM("nonmatchings/libhttp", func_0001301C);

INCLUDE_ASM("nonmatchings/libhttp", func_00013164);

INCLUDE_ASM("nonmatchings/libhttp", func_000131F4);

s32 func_00013294(void) {
    return D_0001B0CC;
}

INCLUDE_ASM("nonmatchings/libhttp", func_000132A0);

s32 func_000132B0(void) {
    return D_0001B0E0;
}

INCLUDE_ASM("nonmatchings/libhttp", func_000132BC);

INCLUDE_ASM("nonmatchings/libhttp", func_000132CC);

INCLUDE_ASM("nonmatchings/libhttp", func_00013388);

INCLUDE_ASM("nonmatchings/libhttp", func_000133E4);

INCLUDE_ASM("nonmatchings/libhttp", func_0001361C);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetContentLength);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetStatusCode);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkErrno);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetNetworkPspError);

INCLUDE_ASM("nonmatchings/libhttp", sceHttpGetAllHeader);
#endif

#if FW_VERSION >= 302
INCLUDE_ASM("nonmatchings/libhttp", func_00014444);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013CE8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_00014660);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013E98);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00013F6C);

INCLUDE_ASM("nonmatchings/libhttp", func_0001408C);

INCLUDE_ASM("nonmatchings/libhttp", func_00014208);
#endif

#if FW_VERSION >= 300
INCLUDE_RODATA("nonmatchings/libhttp", D_00017F84);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017684);

INCLUDE_ASM("nonmatchings/libhttp", func_00014284);

INCLUDE_ASM("nonmatchings/libhttp", func_000147F8);
#endif

#if FW_VERSION >= 302
INCLUDE_ASM("nonmatchings/libhttp", func_0001524C);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 302
INCLUDE_RODATA("nonmatchings/libhttp", D_00017794);

INCLUDE_RODATA("nonmatchings/libhttp", D_0001779C);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177A4);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177AC);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177BC);

INCLUDE_RODATA("nonmatchings/libhttp", D_000177C8);
#endif

#if FW_VERSION >= 300
INCLUDE_ASM("nonmatchings/libhttp", func_000151E0);
#endif

#if FW_VERSION == 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014970);
#endif

#if FW_VERSION >= 282
INCLUDE_ASM("nonmatchings/libhttp", func_00014C48);

INCLUDE_ASM("nonmatchings/libhttp", func_0001500C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015080);

INCLUDE_ASM("nonmatchings/libhttp", func_000151D4);

INCLUDE_ASM("nonmatchings/libhttp", func_000152A8);
#endif

#if FW_VERSION >= 282 && FW_VERSION < 302
INCLUDE_ASM("nonmatchings/libhttp", func_00015324);
#endif

#if FW_VERSION >= 282
void func_00015428(void) {
    sceKernelCpuSuspendIntr();
}

void func_00015444(void) {
    sceKernelCpuResumeIntr();
}

void func_00015460(void) {
    sceKernelUtilsMd5Digest();
}

void func_0001547C(void) {
    sceKernelUtilsMd5BlockInit();
}

void func_00015498(void) {
    sceKernelUtilsMd5BlockUpdate();
}

void func_000154B4(void) {
    sceKernelUtilsMd5BlockResult();
}

void func_000154D0(void) {
    sceNetInetInetPton();
}

void func_000154EC(void) {
    sceRtcGetCurrentTick();
}

void func_00015508(void) {
    sceRtcTickAddSeconds();
}

void func_00015524(void) {
    sceRtcParseDateTime();
}

void func_00015540(void) {
    sceRtcFormatRFC2822();
}

INCLUDE_ASM("nonmatchings/libhttp", func_0001555C);

INCLUDE_ASM("nonmatchings/libhttp", func_000155FC);

INCLUDE_ASM("nonmatchings/libhttp", func_00015664);

INCLUDE_ASM("nonmatchings/libhttp", func_00015810);

INCLUDE_ASM("nonmatchings/libhttp", func_000159BC);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", func_00015A10);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/libhttp", func_00015690);

INCLUDE_ASM("nonmatchings/libhttp", func_000156D0);

INCLUDE_ASM("nonmatchings/libhttp", func_00015710);

INCLUDE_ASM("nonmatchings/libhttp", func_00015730);

INCLUDE_ASM("nonmatchings/libhttp", func_000157F0);
#endif

#if FW_VERSION >= 282
void func_00015A40(void) {
    sceHttpStorageClose();
}

INCLUDE_ASM("nonmatchings/libhttp", func_00015A5C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015A9C);

INCLUDE_ASM("nonmatchings/libhttp", func_00015ADC);

INCLUDE_ASM("nonmatchings/libhttp", func_00015B00);

INCLUDE_ASM("nonmatchings/libhttp", func_00015BC0);
#endif

#if FW_VERSION >= 201
INCLUDE_ASM("nonmatchings/libhttp", __udivdi3);

INCLUDE_ASM("nonmatchings/libhttp", __umoddi3);
#endif

#if FW_VERSION >= 201 && FW_VERSION < 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017414);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017430);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017530);
#endif

#if FW_VERSION >= 282
INCLUDE_RODATA("nonmatchings/libhttp", D_00017848);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017860);

INCLUDE_RODATA("nonmatchings/libhttp", D_00017960);
#endif

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/libhttp", D_000179D0);
#endif
