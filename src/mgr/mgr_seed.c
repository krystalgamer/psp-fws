/* cflags: -Os */
#include "common.h"
#include "mgr_decls.h"

s32 sceMgrInitSeed(MgrSeed *seed) {
    u8 *leaf = (u8 *)func_000013C8();
    u32 *key = (u32 *)func_00001420();
    u64 tmp[2];
    s32 ret;

    if (leaf == NULL) {
        return 0x80501001;
    }
    func_00000DFC(seed);
    ret = sceMgrLock();
    if (ret < 0) {
        return ret;
    }
    ret = func_00000708((u32 *)(leaf + 8), 0x2300);
    if (ret < 0) {
        goto end;
    }
    ret = func_00000708((u32 *)leaf, 0x2301);
    if (ret < 0) {
        goto end;
    }
    ret = func_00000708(key, 0x1101);
    if (ret < 0) {
        goto end;
    }
    ret = func_00002934(tmp, (u64 *)seed);
    if (ret < 0) {
        goto end;
    }
    func_00000EC0(seed);
end:
    sceMgrUnLock();
    return ret;
}

#if FW_VERSION < 340
s32 sceMgrRandom(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = func_00002934(arg0, arg1);
        sceMgrUnLock();
    }
    return var_s2;
}
#else
s32 sceMgrRandom(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        var_s2 = func_00002934(arg0, arg1);
        sceMgrUnLock();
    }
    return var_s2;
}
#endif

s32 func_00002934(u64 *out, u64 *seed) {
    s32 ret;

    func_000002EC((u32 *)seed);
    ret = func_000006CC(0x1202);
    if (ret < 0) {
        return ret;
    }
    func_00000310((u32 *)out);
    if (*out != 0) {
        *seed ^= *out;
    } else {
        ((u32 *)seed)[0] = 0;
        ((u32 *)seed)[1] = 0;
        *(u8 *)seed = 0x80;
    }
    return ret;
}

#if FW_VERSION < 340
s32 sceMgrCreateKc(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            temp_v0_3 = func_000006CC(0x1210);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x1202);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000310(arg1);
                }
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}
#else
s32 sceMgrCreateKc(s32 arg0, M2C_UNK arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            temp_v0_3 = func_000006CC(0x1210);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x1202);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000310(arg1);
                }
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}
#endif

s32 sceMgrEncryptKcWithKse(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg1, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000006CC(0x2401);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_00000310(arg0);
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}

s32 sceMgrDecryptKcWithKse(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            var_s1 = func_000006CC(0x2400);
        }
        sceMgrUnLock();
    }
    return var_s1;
}

s32 sceMgrEncryptKc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg1, arg2, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000007DC(0x1460, 3);
            var_s2 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_00000310(arg0);
            }
        }
        sceMgrUnLock();
    }
    return var_s2;
}

s32 sceMgrDecryptKc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg2, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg1);
            var_s2 = func_000007DC(0x1450, 3);
        }
        sceMgrUnLock();
    }
    return var_s2;
}

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrEncryptKicv);

s32 sceMgrDecryptKicv(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg2, -1, -1);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_000004CC(arg0);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                func_000002EC(arg1);
                temp_v0_4 = func_000007DC(0x1470, 3);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_000002EC(arg1 + 8);
                    var_s1 = func_000007DC(0x1480, 3);
                }
            }
        }
        sceMgrUnLock();
    }
    return var_s1;
}

#if FW_VERSION < 340
s32 sceMgrGenerateKb(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg3, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002A4(arg1);
            func_000002EC(arg2);
            var_s2 = func_000006CC(0x1102);
        }
        sceMgrUnLock();
    }
    return var_s2;
}
#else
s32 sceMgrGenerateKb(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00000424(arg0, arg3, -1);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002A4(arg1);
            func_000002EC(arg2);
            var_s2 = func_000006CC(0x1102);
        }
        sceMgrUnLock();
    }
    return var_s2;
}
#endif

s32 sceMgrGenerateICV(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 var_s5;

    temp_v0 = sceMgrLock();
    var_s5 = temp_v0;
    if (temp_v0 >= 0) {
        var_s5 = func_00002F84(arg0, arg1, arg2, arg3, arg4);
        sceMgrUnLock();
    }
    return var_s5;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00002F84);

INCLUDE_ASM("nonmatchings/mgr_seed", func_0000310C);

s32 func_000031C8(u32 *dst, u64 *src, s32 count, u32 cmd) {
    s32 ret;

    func_000002EC((u32 *)src++);
    count--;
    func_0000027C(cmd);
    while (count != 0) {
        func_000002EC((u32 *)src++);
        ret = func_0000064C();
        count--;
        if (ret < 0) {
            return ret;
        }
        func_0000027C(cmd);
    }
    ret = func_0000064C();
    if (ret < 0) {
        return ret;
    }
    func_00000310(dst);
    return 0;
}

#if FW_VERSION < 340
s32 sceMgrDecryptWithKbCBC(s32 arg0, s32 arg1, s32 *arg2, u32 arg3, s32 arg4) {
    s32 *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 1);
        }
    } else {
        var_a7 = sceMgrDESDecryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrEncryptWithKbCBC(s32 arg0, s32 arg1, s32 *arg2, u32 arg3, s32 arg4) {
    s32 *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 0);
        }
    } else {
        var_a7 = sceMgrDESEncryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrGenerateMACWithKbCBC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 *var_a2;
    s32 var_v1;

    var_a2 = arg2;
    var_v1 = 0x80501006;
    if (arg4 >= 0) {
        if (var_a2 == NULL) {
            var_a2 = &D_0000AEE0;
        }
        var_v1 = func_0000341C(arg0, arg1, (s32) var_a2, arg3, arg4, 0, 2);
    }
    return var_v1;
}

void sceMgrDecryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 1);
}

void sceMgrEncryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 0);
}

void sceMgrGenerateMACWithKseCBC(s32 arg0, s32 arg1, s32 *arg2, s32 arg3) {
    s32 *var_a2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_0000AEE0;
    }
    func_0000341C(arg0, arg1, (s32) var_a2, arg3, -2, 0, 2);
}
#else
s32 sceMgrDecryptWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 1);
        }
    } else {
        var_a7 = sceMgrDESDecryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrEncryptWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, u32 arg3, s32 arg4) {
    M2C_UNK *var_v1;
    s32 var_a7;

    var_v1 = arg2;
    if (var_v1 == NULL) {
        var_v1 = &D_0000AEE0;
    }
    if (arg3 < 0x80U) {
        var_a7 = 0x80501006;
        if (arg4 >= 0) {
            var_a7 = func_0000341C(arg0, arg1, (s32) var_v1, (s32) arg3, arg4, 0, 0);
        }
    } else {
        var_a7 = sceMgrDESEncryptBlock(arg0, arg1, (s32) arg3, arg4, (s32) var_v1);
    }
    return var_a7;
}

s32 sceMgrGenerateMACWithKbCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3, s32 arg4) {
    M2C_UNK *var_a2;
    s32 var_v1;

    var_a2 = arg2;
    var_v1 = 0x80501006;
    if (arg4 >= 0) {
        if (var_a2 == NULL) {
            var_a2 = &D_0000AEE0;
        }
        var_v1 = func_0000341C(arg0, arg1, (s32) var_a2, arg3, arg4, 0, 2);
    }
    return var_v1;
}

void sceMgrDecryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 1);
}

void sceMgrEncryptWithKse(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0000341C(arg0, arg1, arg2, arg3, -2, 0, 0);
}

void sceMgrGenerateMACWithKseCBC(s32 arg0, s32 arg1, M2C_UNK *arg2, s32 arg3) {
    M2C_UNK *var_a2;

    var_a2 = arg2;
    if (var_a2 == NULL) {
        var_a2 = &D_0000AEE0;
    }
    func_0000341C(arg0, arg1, (s32) var_a2, arg3, -2, 0, 2);
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", func_0000341C);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrGenerateMAC1d);

s32 sceMgrStartSession(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s2;

    temp_v0 = sceMgrLock();
    var_s2 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_000038D0(arg1, arg2);
        var_s2 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            func_000002EC(arg0);
            func_0000027C(0x4010);
            temp_v0_3 = func_000001E4();
            var_s2 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                var_s2 = func_000038D0(arg4, arg3);
            }
        }
        sceMgrUnLock();
    }
    return var_s2;
}

s32 func_000038D0(u32 *arg0, u32 *arg1) {
    s32 ret = func_00000708(arg0, 0x2200);

    if (ret < 0) {
        return ret;
    }
    return func_00000840(arg1, 0x2201, 3);
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00003934);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mgr_seed", func_00003578);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_0000391C);
#endif

s32 sceMgrGenerateKse(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s3;

    temp_v0 = sceMgrLock();
    var_s3 = temp_v0;
    if (temp_v0 >= 0) {
        var_s3 = func_00002F84(0, arg0, 0, arg1, arg2);
        sceMgrUnLock();
    }
    return var_s3;
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEE0);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEF0);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEF4);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEF8);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEFC);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF00);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF04);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00003BA8);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00003B90);
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrDecryptEKB);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_B434A376);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrDecryptLocalEKB);

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00004130);

INCLUDE_ASM("nonmatchings/mgr_seed", func_000042E4);
#endif

#if FW_VERSION < 250
INCLUDE_ASM("nonmatchings/mgr_seed", func_00003BFC);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00004070);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00004224);
#endif

s32 func_0000439C(u32 *a, u32 *b) {
    s32 ret = func_00000708(a, 0x1500);

    if (ret >= 0) {
        ret = func_00000708(a + 2, 0x1501);
        if (ret >= 0) {
            ret = func_00000708(b, 0x1502);
            if (ret >= 0) {
                ret = func_00000708(b + 2, 0x1503);
            }
        }
    }
    return ret;
}

#if FW_VERSION < 340
s32 func_00003E08(u32 *key) {
    s32 ret;

    func_000002EC(key);
    ret = func_000007DC(0x1400, 3);
    if (ret >= 0) {
        func_000002EC(key + 2);
        ret = func_000007DC(0x1410, 3);
    }
    return ret;
}
#else
s32 func_00004410(u32 *key) {
    s32 ret;

    func_000002EC(key);
    ret = func_000007DC(0x1400, 3);
    if (ret >= 0) {
        func_000002EC(key + 2);
        ret = func_000007DC(0x1410, 3);
    }
    return ret;
}
#endif

#if FW_VERSION < 201
s32 func_00004460(u32 *p, s32 count) {
    s32 i;
    s32 ret;

    for (i = count - 1; i >= 0; i--) {
        ret = func_00000840(p, 0x1420, 3);
        p += 2;
        if (ret < 0) {
            return ret;
        }
        ret = func_00000840(p, 0x1430, 3);
        p += 2;
        if (ret < 0) {
            return ret;
        }
    }
    func_0000027C(0x4000);
    return 0;
}
#else
INCLUDE_ASM("nonmatchings/mgr_seed", func_00004460);
#endif

s32 func_000044DC(u32 *a0, u32 a1) {
    u32 buf[2];
    s32 ret;

    func_000002EC(a0);
    ret = func_000007DC(0x1450, 3);
    if (ret < 0) {
        return ret;
    }
    buf[0] = a1;
    func_000002EC(buf);
    func_0000026C();
    func_0000027C(0x4011);
    ret = func_00000234();
    if (ret < 0) {
        if (ret == 0x80503004) {
            return 0x80501004;
        }
    }
    return ret;
}

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00004618);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00004724);

INCLUDE_ASM("nonmatchings/mgr_seed", func_000048CC);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrCheckVCV);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_BB1E3C1A);

s32 sceMgr_driver_F98874E9(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgrLock();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004724(0, 0);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg1, arg2, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8011);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000006CC(0x9041);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_000003BC(arg0);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_4A14DD18);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_FC627EBF);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_566D33D3);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_76CD10BF);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_FCA741DE);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_F1ADC4B9);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrNetDecryptKc);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrNetGenerateICV);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00005454);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesCbcDecrypt);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesCbcEncrypt);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesEcbDecrypt);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesEcbEncrypt);
#endif

#if FW_VERSION < 340
s32 func_000057CC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220087:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 0x80504002;
    case 0x8022008B:
        return 0x80504001;
    case 0x8022008C:
        return 0x80504000;
    }
    return (err < 0) ? err : 0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00005834);

s32 func_000059BC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00004180);

s32 func_00005B88(void) {
    if (g_mgrMsCtrl.fd >= 0) {
        sceIoClose(g_mgrMsCtrl.fd);
        g_mgrMsCtrl.fd = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00004358);

s32 sceMgrMSGetMediaType(s32 arg0) {
    s32 ret = func_00006030();
    u32 st;

    if (ret < 0) {
        return ret;
    }
    ret = func_00006884(arg0, 1);
    if (ret >= 0) {
        st = D_0000B004;
        ret = (st >> 6) & 1;
        ret |= ((st >> 5) & 1) << 1;
        ret |= ((st >> 4) & 1) << 2;
        ret |= ((st >> 7) & 1) << 3;
        ret |= ((st >> 8) & 1) << 4;
    }
    func_0000608C();
    return ret;
}

s32 func_000045DC(void) {
    void *sp0;
    return sceIoDevctl(&D_0000AFA0, 0x02125802, NULL, 0U, &sp0, 4U) == 0x80020321;
}
#endif

#if FW_VERSION >= 250 && FW_VERSION < 340
INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFD0);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFF0);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000B000);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000B010);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000B020);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00004558);
#endif

#if FW_VERSION < 250 || FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEE0);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEF0);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEF4);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEF8);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AEFC);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF00);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF04);
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF10);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF30);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF40);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF50);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF60);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AF70);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00004664);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00004808);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrCheckVCV);

s32 sceMgr_driver_BB1E3C1A(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgrLock();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, 2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg2, -1, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8010);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000004CC(arg0);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_00000378(arg1);
                        var_s0 = func_000006CC(0x9060);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s0;
}

s32 sceMgr_driver_F98874E9(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s0;

    temp_v0 = sceMgrLock();
    var_s0 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, 2);
        var_s0 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg1, arg2, -1);
            var_s0 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8011);
                var_s0 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    temp_v0_5 = func_000006CC(0x9041);
                    var_s0 = temp_v0_5;
                    if (temp_v0_5 >= 0) {
                        func_000003BC(arg0);
                    }
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s0;
}

s32 func_00004CBC(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;

    temp_v0 = sceMgrLock();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00004664(0, arg3);
        var_s1 = temp_v0_2;
        if (temp_v0_2 >= 0) {
            temp_v0_3 = func_00000424(arg0, arg2, -1);
            var_s1 = temp_v0_3;
            if (temp_v0_3 >= 0) {
                temp_v0_4 = func_000006CC(0x8010);
                var_s1 = temp_v0_4;
                if (temp_v0_4 >= 0) {
                    func_00000378(arg1);
                    var_s1 = func_000006CC(0x9040);
                }
            }
        }
        func_000006CC(0x8030);
        sceMgrUnLock();
    }
    return var_s1;
}

void sceMgr_driver_4A14DD18(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 2);
}

void sceMgr_driver_DBB5C63E(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 5);
}

void sceMgrNetDecryptKc(s32 arg0, s32 arg1, s32 arg2) {
    func_00004CBC(arg0, arg1, arg2, 6);
}

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_FC627EBF);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_566D33D3);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_76CD10BF);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_FCA741DE);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_F1ADC4B9);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrNetGenerateICV);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00005328);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesCbcDecrypt);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesCbcEncrypt);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesEcbDecrypt);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrAesEcbEncrypt);

s32 func_000057CC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220087:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 0x80504002;
    case 0x8022008B:
        return 0x80504001;
    case 0x8022008C:
        return 0x80504000;
    }
    return (err < 0) ? err : 0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00005834);

s32 func_000059BC(s32 err) {
    switch (err) {
    case 0x80220086:
    case 0x80220088:
    case 0x80220089:
    case 0x8022008A:
        return 1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_000059F8);

s32 func_00005B88(void) {
    if (g_mgrMsCtrl.fd >= 0) {
        sceIoClose(g_mgrMsCtrl.fd);
        g_mgrMsCtrl.fd = -1;
    }
    return 0;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00005BC8);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSGetMediaType);

s32 func_00005E30(void) {
    void *sp0;
    return sceIoDevctl(&D_0000AFA0, 0x02125802, NULL, 0U, &sp0, 4U) == 0x80020321;
}
#endif

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFA0);

s32 sceMgrMSInit(void) {
    s32 state = sceKernelSuspendDispatchThread();
    s32 ret;

    if (g_mgrMsCtrl.initCount > 0) {
        g_mgrMsCtrl.initCount++;
        sceKernelResumeDispatchThread(state);
        return 0;
    }
    if (g_mgrMsCtrl.sema <= 0) {
        ret = sceKernelCreateSema("SceMgrMsDrv", 0x100, 1, 1, NULL);
        if (ret < 0) {
            sceKernelResumeDispatchThread(state);
            return ret;
        }
        g_mgrMsCtrl.sema = ret;
    }
    g_mgrMsCtrl.initCount = 1;
    g_mgrMsCtrl.info.status = 0;
    sceKernelResumeDispatchThread(state);
    return 0;
}

s32 sceMgrMSReset(void) {
    s32 ret = func_00006030();

    if (ret < 0) {
        return ret;
    }
    D_0000B004 = 0;
    func_00005B88();
    func_0000608C();
    return 0;
}

#if FW_VERSION < 152
void func_00005F7C(void) {
    func_00005B88();
    if (g_mgrMsCtrl.sema > 0) {
        sceKernelDeleteSema(g_mgrMsCtrl.sema);
        g_mgrMsCtrl.sema = -1;
    }
    g_mgrMsCtrl.initCount = 0;
}
#else
void func_00005F7C(void) {
    func_00007644(g_mgrMsCtrl.fd);
    func_00005B88();
    if (g_mgrMsCtrl.sema > 0) {
        sceKernelDeleteSema(g_mgrMsCtrl.sema);
        g_mgrMsCtrl.sema = -1;
    }
    g_mgrMsCtrl.initCount = 0;
}
#endif

s32 sceMgrMSEnd(void) {
    s32 ret = func_00006030();

    if (ret < 0) {
        return ret;
    }
    if (g_mgrMsCtrl.initCount >= 2) {
        g_mgrMsCtrl.initCount--;
        func_0000608C();
        return 0;
    }
    func_00005F7C();
    return 0;
}

#if FW_VERSION < 152
s32 func_00006030(void) {
    s32 ret = sceKernelWaitSema(g_mgrMsCtrl.sema, 1, NULL);

    if (ret == 0x80020199) {
        return 0x80501001;
    }
    if (ret == 0x800201B5) {
        return 0x80500002;
    }
    if (ret != 0) {
        return ret;
    }
    return 0;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 func_00006030(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = sceKernelWaitSema(D_0000955C, 1, NULL);
    var_a0 = 0x80501001;
    if (temp_v0 != 0x80020199) {
        var_a0 = ((temp_v0 ^ 0x800201B5) != 0) ? temp_v0 : 0x80500002;
    }
    return var_a0;
}
#endif

#if FW_VERSION < 340
s32 func_0000608C(void) {
    sceKernelSignalSema(D_0000955C, 1);
    return 0;
}

s32 func_000060B4(s32 fd, s32 *out) {
    s32 ret = sceIoIoctl(fd, 0x0211D817, NULL, 0, out, 4);

    if (ret < 0) {
        ret = func_00005834(ret);
        *out = 0;
    }
    return ret;
}
#endif

#if FW_VERSION < 152
s32 func_00006104(s32 fd) {
    return (-((sceMScmHCLastStatus() & 0x300) == 0) & 0x7FAFE000) - 0x7FAFE000;
}
#endif

#if FW_VERSION >= 340
s32 func_00006030(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = sceKernelWaitSema(D_0000AFFC, 1, NULL);
    var_a0 = 0x80501001;
    if (temp_v0 != 0x80020199) {
        var_a0 = ((temp_v0 ^ 0x800201B5) != 0) ? temp_v0 : 0x80500002;
    }
    return var_a0;
}

s32 func_0000608C(void) {
    sceKernelSignalSema(D_0000AFFC, 1);
    return 0;
}

s32 func_000060B4(s32 fd, s32 *out) {
    s32 ret = sceIoIoctl(fd, 0x0211D817, NULL, 0, out, 4);

    if (ret < 0) {
        ret = func_00005834(ret);
        *out = 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 152
s32 func_00006104(s32 fd) {
    return !(sceMScmHCLastStatus() & 0x300) ? 0 : 0x80502000;
}
#endif

s32 func_00006134(s32 fd, s32 tpc, u8 *buf, s32 size) {
    s32 (*xfer)(s32, u8 *, s32, s32) = sceMScmWriteDataPIO;
    u8 st;
    s32 slot;
    s32 mask;
    s32 i;
    s32 ret;

    if (!(tpc & 8)) {
        xfer = sceMScmReadDataPIO;
    }
    i = 0;
    do {
        if (sceMScmGetSlotState(fd, &slot) >= 0 && slot == 2) {
            ret = 0x80505001;
            goto end;
        }
        ret = sceMScmSendTPC(fd, tpc & 0xFF, size, -1);
        if (ret < 0) {
            goto fail;
        }
        ret = xfer(fd, buf, size, -1);
        if (ret < 0) {
            goto check;
        }
        if (size >= 0x20) {
            st = 0;
            ret = sceMScmTPCGetInt(fd, &st, 0, -1);
            if (ret >= 0) {
                goto end;
            }
check:
            i++;
            if (ret != 0x80220089) {
fail:
                ret = func_000057CC(ret);
                goto end;
            }
        } else {
            mask = 2;
            ret = sceMScmWaitHCIntr(fd, &mask, -1);
            if (ret < 0) {
                goto fail;
            }
            ret = func_00006104(fd);
            if (ret >= 0) {
                goto end;
            }
            i++;
        }
    } while (i < 8);
end:
    return ret;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006288);

s32 func_00006300(s32 arg0) {
    u8 buf[2];
    s32 ret = func_00006134(arg0, 1, buf, 2);

    if (ret < 0) {
        return ret;
    }
    return (buf[0] << 8) | buf[1];
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006340);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006408);

s32 func_000064EC(s32 arg0, s32 arg1) {
    s32 ret = sceMScmWriteMSReg(arg0, 0x11, 6, arg1, 1, -1);

    if (ret < 0) {
        ret = func_000057CC(ret);
    }
    return ret;
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006528);

s32 func_000065FC(s32 arg0, u8 *buf, s32 count) {
    s32 i;
    s32 ret;
    u8 status;

    for (i = count - 1; i >= 0; i--) {
        status = 0;
        ret = sceMScmTPCSetCmd(arg0, *buf++, &status, 10000);
        if (ret < 0) {
            return func_000057CC(ret);
        }
    }
    return 0;
}

s32 func_00006678(s32 fd, s32 *out, s32 mode, s32 lock) {
    s32 ret;
    s32 err;

    while ((ret = sceIoIoctl(fd, 0x210D016, NULL, 0, NULL, 0)) < 0) {
        if (ret != 0x800201AD) {
            err = ret;
            ret = func_00005834(ret);
            goto end;
        }
        sceKernelDelayThread(200000);
    }
    err = 0;
    if (out != NULL) {
        ret = func_000060B4(fd, out);
        if (ret < 0) {
            goto end;
        }
    }
    if (lock) {
        ret = func_00006030();
        if (ret < 0) {
            goto end;
        }
    }
    ret = func_00006884(fd, mode);
    if (ret < 0) {
        if (lock) {
            func_0000608C();
        }
    } else {
        sceKernelPowerLock(0);
    }
end:
    if (ret < 0 && err == 0) {
        sceIoIoctl(fd, 0x210D017, NULL, 0, NULL, 0);
    }
    return ret;
}

s32 func_000067CC(s32 fd, s32 unlock) {
    s32 ret;

    sceKernelPowerUnlock(0);
    if (unlock) {
        func_0000608C();
    }
    ret = sceIoIoctl(fd, 0x0210D017, NULL, 0, NULL, 0);
    if (ret < 0) {
        ret = func_00005834(ret);
    } else {
        ret = 0;
    }
    return ret;
}

s32 func_0000684C(s32 fd) {
    s32 arg = 10;

    return sceIoIoctl(fd, 0x0211D019, &arg, 4, NULL, 0);
}

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006884);

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mgr_seed", func_00005194);
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 func_00005194(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00006884(arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 >= 0) {
        var_v1 = !(D_0000B004 & 0x80) ? 0 : 0x80505008;
    }
    return var_v1;
}
#endif

#if FW_VERSION >= 340
s32 func_000069E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00006884(arg0, arg1);
    var_v1 = temp_v0;
    if (temp_v0 >= 0) {
        var_v1 = !(D_0000B004 & 0x80) ? 0 : 0x80505008;
    }
    return var_v1;
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006A20);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00006B3C);

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00005324);
#endif

#if FW_VERSION < 152
INCLUDE_ASM("nonmatchings/mgr_seed", func_000053B0);
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00006BF0);
#endif

s32 func_00006C40(s32 fd, s32 arg1, s32 arg2, s32 arg3, u8 *buf) {
    s32 args[8];
    u8 tmp[16];
    s32 i;
    s32 ret;

    if (buf == NULL) {
        buf = tmp;
    }
    i = 0;
    args[2] = 1;
    args[5] = 0x200;
    args[0] = arg1;
    args[1] = arg2;
    args[3] = arg3;
    args[6] = 4;
    args[4] = (s32)buf;
    while ((ret = sceIoIoctl(fd, 0x211D01A, args, 0x20, NULL, 0)) < 0) {
        if (i >= 8) {
            goto fail;
        }
        i++;
        if (!func_000059BC(ret)) {
fail:
            if (ret == 0x8022008C) {
                goto bad;
            }
            return func_00005834(ret);
        }
    }
    return 0;
bad:
    buf[0] &= 0x7F;
    tmp[0] = 0x7F;
    args[4] = (s32)tmp;
    args[6] = 1;
    args[1] = 0;
    sceIoIoctl(fd, 0x211D01E, args, 0x20, NULL, 0);
    return 0x80505003;
}

s32 func_00006D70(s32 fd, s32 arg1, s32 arg2, u8 *buf) {
    s32 args[8];
    u8 tmp[16];
    s32 i;
    s32 ret;

    i = 0;
    memset(args, 0, 0x20);
    args[2] = 1;
    args[0] = arg1;
    args[1] = arg2;
    args[6] = 4;
    args[4] = (s32)buf;
    while ((ret = sceIoIoctl(fd, 0x211D01C, args, 0x20, NULL, 0)) < 0) {
        if (i >= 8) {
            goto fail;
        }
        i++;
        if (!func_000059BC(ret)) {
fail:
            if (ret == 0x8022008C) {
                goto bad;
            }
            return func_00005834(ret);
        }
    }
    return 0;
bad:
    buf[0] &= 0x7F;
    tmp[0] = 0x7F;
    args[4] = (s32)tmp;
    args[6] = 1;
    args[1] = 0;
    sceIoIoctl(fd, 0x211D01E, args, 0x20, NULL, 0);
    return 0x80505003;
}

s32 func_00006EAC(s32 fd, s32 arg1, s32 arg2, s32 arg3, u8 *buf) {
    s32 args[8];
    s32 i;
    s32 ret;

    if (arg1 < 2) {
        return 0x80501000;
    }
    if (buf == NULL) {
        buf = (u8 *)&D_0000AFB8;
    }
    args[2] = 1;
    args[5] = 0x200;
    args[0] = arg1;
    args[1] = arg2;
    args[3] = arg3;
    args[4] = (s32)buf;
    args[6] = 4;
    for (i = 0; (ret = sceIoIoctl(fd, 0x211D01B, args, 0x20, NULL, 0)) < 0; i++) {
        if (i >= 8 || !func_000059BC(ret)) {
            return func_00005834(ret);
        }
    }
    return 0;
}

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_000056C4);
#endif

#if FW_VERSION < 152
s32 func_00005768(s32 fd, s32 arg1, s32 arg2, s32 arg3) {
    s32 args[8];
    u8 b;
    s32 i;
    s32 ret;

    if (arg1 < 2) {
        return 0x80501000;
    }
    b = arg3;
    args[0] = arg1;
    args[1] = arg2;
    args[2] = 1;
    args[4] = (s32)&b;
    args[6] = 1;
    for (i = 0; (ret = sceIoIoctl(fd, 0x211D01E, args, 0x20, NULL, 0)) < 0; i++) {
        if (i >= 8 || !func_000059BC(ret)) {
            return func_00005834(ret);
        }
    }
    return 0;
}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00006F90);
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSMount);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSAuth);

#if FW_VERSION < 340
s32 func_00007364(s32 arg0, u64 *id, s32 arg2) {
    s32 fd;
    u64 v8;
    u64 v10;
    u64 v18;
    u64 rnd;
    u64 v28;
    u64 v30;
    s32 ret;
    s32 mac;

    ret = func_00006678(arg0, &fd, 3, 0);
    if (ret < 0) {
        return ret;
    }
    ret = func_000077A0(fd, id, &v8);
    if (ret < 0) {
        goto fail;
    }
    ret = sceMgrGenerateMAC1d(&v10, &v18, arg2, id, &v8);
    mac = ret;
    if (ret < 0) {
        goto fail;
    }
    ret = sceMgrRandom((s32)&rnd, arg2);
    if (ret < 0) {
        goto fail;
    }
    ret = func_00007844(fd, &v18, &rnd, &v10, mac);
    if (ret < 0) {
        goto fail;
    }
    ret = func_000078F8(fd, &v28, &v30);
    if (ret < 0) {
        goto fail;
    }
    ret = func_00006100(fd);
    if (ret < 0) {
        goto fail;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 0);
    return sceMgrStartSession((s32)&v28, (s32)&v8, (s32)&v18, (s32)&v30, (s32)&rnd);
fail:
    func_0000684C(arg0);
    func_000067CC(arg0, 0);
    if (ret == 0x80504000) {
        ret = 0x80503002;
    }
    return ret;
}
#else
s32 func_00007364(s32 arg0, u64 *id, s32 arg2) {
    s32 fd;
    u64 v8;
    u64 v10;
    u64 v18;
    u64 rnd;
    u64 v28;
    u64 v30;
    s32 ret;
    s32 mac;

    ret = func_00006678(arg0, &fd, 3, 0);
    if (ret < 0) {
        return ret;
    }
    ret = func_000077A0(fd, id, &v8);
    if (ret < 0) {
        goto fail;
    }
    ret = sceMgrGenerateMAC1d(&v10, &v18, arg2, id, &v8);
    mac = ret;
    if (ret < 0) {
        goto fail;
    }
    ret = sceMgrRandom((s32)&rnd, arg2);
    if (ret < 0) {
        goto fail;
    }
    ret = func_00007844(fd, &v18, &rnd, &v10, mac);
    if (ret < 0) {
        goto fail;
    }
    ret = func_000078F8(fd, &v28, &v30);
    if (ret < 0) {
        goto fail;
    }
    ret = func_0000798C(fd);
    if (ret < 0) {
        goto fail;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 0);
    return sceMgrStartSession((s32)&v28, (s32)&v8, (s32)&v18, (s32)&v30, (s32)&rnd);
fail:
    func_0000684C(arg0);
    func_000067CC(arg0, 0);
    if (ret == 0x80504000) {
        ret = 0x80503002;
    }
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgr_driver_D3A061BE);

#if FW_VERSION >= 250 && FW_VERSION < 340
s32 sceMgrMSDeauth(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            g_mgrMsCtrl.info.status &= ~0x208;
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

#if FW_VERSION < 250
s32 sceMgrMSDeauth(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            g_mgrMsCtrl.info.status &= ~8;
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

#if FW_VERSION >= 340
s32 sceMgrMSDeauth(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00006030();
    var_s1 = temp_v0;
    if (temp_v0 >= 0) {
        var_s1 = func_00007644(arg0);
        if (var_s1 >= 0) {
            var_s1 = 0;
            g_mgrMsCtrl.info.status = (s32) (g_mgrMsCtrl.info.status & ~0x208);
        }
        func_0000608C();
    }
    return var_s1;
}
#endif

#if FW_VERSION < 152
s32 func_00007644(s32 arg0) {
    s32 fd;
    s32 val = 100000;
    s32 ret;
    s32 res;

    ret = func_00006678(arg0, &fd, 1, 0);
    if (ret < 0) {
        return ret;
    }
    ret = 0;
    res = sceIoIoctl(arg0, 0x211D018, &val, 4, NULL, 0);
    if (res < 0) {
        ret = func_000057CC(res);
    }
    func_000067CC(arg0, 0);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr_seed", func_00007644);
#endif

#if FW_VERSION < 250
s32 sceMgrMSGetMediaID(s32 arg0, u64 *id) {
    s32 ret = func_00006030();

    if (ret < 0) {
        return ret;
    }
    ret = func_00006884(arg0, 1);
    if (ret >= 0) {
        if (!(D_0000B004 & 8)) {
            ret = 0x80505005;
        } else {
            id[0] = D_000095A0;
            id[1] = D_000095A8;
        }
    }
    func_0000608C();
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSGetMediaID);
#endif

s32 func_000077A0(s32 fd, u64 *a, u64 *b) {
    u64 buf[3];
    s32 ret = func_000065FC(fd, (u8 *)D_0000AFBC, 4);

    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 3, (u8 *)buf, 0x18);
    if (ret < 0) {
        return ret;
    }
    a[0] = buf[0];
    a[1] = buf[1];
    *b = buf[2];
    return ret;
}

s32 func_00007844(s32 fd, u64 *a, u64 *b, u64 *c, s32 flag) {
    MgrMsAuthInfo info;
    s32 ret;

    func_00006288(&info, a, b, c);
    info.unk19 = flag;
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret < 0) {
        return ret;
    }
    ret = func_000065FC(fd, (u8 *)D_0000AFC0, 4);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x68);
    if (ret >= 0) {
        return ret;
    }
    if (ret != 0x80504000) {
        return ret;
    }
    ret = func_00006300(fd);
    if (ret < 0) {
        return ret;
    }
    if (ret & 2) {
        return 0x80503002;
    }
    return 0x80505003;
}

#if FW_VERSION >= 201
INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFB8);
#endif

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFBC);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFC0);

s32 func_000078F8(s32 fd, u64 *a, u64 *b) {
    u64 buf[3];
    s32 ret = func_000065FC(fd, (u8 *)"ijklm", 5);

    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 3, (u8 *)buf, 0x18);
    if (ret < 0) {
        return ret;
    }
    *b = buf[0];
    *a = buf[1];
    return ret;
}

#if FW_VERSION < 340
s32 func_00006100(s32 fd) {
    return func_000065FC(fd, (u8 *)&D_0000AFCC, 4);
}
#else
s32 func_0000798C(s32 fd) {
    return func_000065FC(fd, (u8 *)&D_0000AFCC, 4);
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", func_000079B0);

#if FW_VERSION < 152
s32 func_00007AD8(s32 fd) {
    u8 *pg = g_mgrMsCtrl.page;
    MgrMsCtrl *ms = &g_mgrMsCtrl;
    s32 ret;
    s32 ro;

    ms->info.segBlocks = 0x20;
    ms->info.unk4 = -1;
    ms->info.map.poolValid = -1;
    ms->info.map.seqBlk[0] = -1;
    ms->info.map.seqBlk[1] = -1;
    ms->info.map.poolBlk[0] = -1;
    ms->info.map.poolBlk[1] = -1;
    ro = 0;
    ret = func_000053B0(fd, pg, 0);
    if (ret < 0) {
        return ret;
    }
    ret = (pg[0x1C8] << 8) | pg[0x1C9];
    if (ret != 0x1001) {
        ret = 0x80505009;
    } else {
        if ((u32)(pg[0x1D8] - 1) < 3) {
            ro = 1;
        }
        ms->info.unk4 = ((pg[0x1A4] << 8) | pg[0x1A5]) - 1;
        ms->info.segBlocks = ((pg[0x1A2] << 8) | pg[0x1A3]) << 1;
        ret = ro ? 0x80505007 : 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 func_00007AD8(s32 fd) {
    u8 *pg = g_mgrMsCtrl.page;
    MgrMsCtrl *ms = &g_mgrMsCtrl;
    s32 ret;
    s32 ro;

    ms->info.segBlocks = 0x20;
    ms->info.unk4 = -1;
    ms->info.map.poolValid = -1;
    ms->info.map.seqBlk[0] = -1;
    ms->info.map.seqBlk[1] = -1;
    ms->info.map.poolBlk[0] = -1;
    ms->info.map.poolBlk[1] = -1;
    ro = 0;
    ret = func_00005324(fd, pg, 0);
    if (ret < 0) {
        return ret;
    }
    ret = (pg[0x1C8] << 8) | pg[0x1C9];
    if (ret != 0x1001) {
        ret = 0x80505009;
    } else {
        if ((u32)(pg[0x1D8] - 1) < 3) {
            ro = 1;
        }
        ms->info.unk4 = ((pg[0x1A4] << 8) | pg[0x1A5]) - 1;
        ms->info.segBlocks = ((pg[0x1A2] << 8) | pg[0x1A3]) << 1;
        ret = ro ? 0x80505007 : 0;
    }
    return ret;
}
#endif

#if FW_VERSION >= 340
s32 func_00007AD8(s32 fd) {
    u8 *pg = g_mgrMsCtrl.page;
    MgrMsCtrl *ms = &g_mgrMsCtrl;
    s32 ret;
    s32 ro;

    ms->info.segBlocks = 0x20;
    ms->info.unk4 = -1;
    ms->info.map.poolValid = -1;
    ms->info.map.seqBlk[0] = -1;
    ms->info.map.seqBlk[1] = -1;
    ms->info.map.poolBlk[0] = -1;
    ms->info.map.poolBlk[1] = -1;
    ro = 0;
    ret = func_00006BF0(fd, pg, 0);
    if (ret < 0) {
        return ret;
    }
    ret = (pg[0x1C8] << 8) | pg[0x1C9];
    if (ret != 0x1001) {
        ret = 0x80505009;
    } else {
        if ((u32)(pg[0x1D8] - 1) < 3) {
            ro = 1;
        }
        ms->info.unk4 = ((pg[0x1A4] << 8) | pg[0x1A5]) - 1;
        ms->info.segBlocks = ((pg[0x1A2] << 8) | pg[0x1A3]) << 1;
        ret = ro ? 0x80505007 : 0;
    }
    return ret;
}
#endif

#if FW_VERSION < 152
s32 func_00007BAC(s32 fd, s32 *blks, u8 *buf) {
    s32 max = g_mgrMsCtrl.info.unk4;
    s32 ret;
    s32 i;
    u8 *p;
    s32 *out;

    ret = func_000053B0(fd, buf, 1);
    if (ret < 0) {
        return ret;
    }
    out = blks;
    i = 0;
    p = buf;
    for (; i < 2; i++) {
        *out = (p[2] << 8) | p[3];
        if (*out < 3) {
            goto bad;
        }
        if (max < *out) {
bad:
            *out = -1;
            return 0x80505004;
        }
        p += 2;
        out++;
    }
    ret = (buf[0] << 8) | buf[1];
    if (ret < 2 || max < ret) {
        return 0x80504003;
    }
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr_seed", func_00007BAC);
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", func_00007C84);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00007F24);

INCLUDE_ASM("nonmatchings/mgr_seed", func_000080F8);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00008204);

s32 func_00008374(s32 fd, s32 blk, s32 page, s32 count) {
    u8 extra[16];
    s32 i;
    s32 ret;

    for (i = 0; i < count; i++) {
        ret = func_00006D70(fd, blk, page, extra);
        if (ret < 0) {
            return ret;
        }
        if (page == 0 && count == 1) {
            extra[0] |= 0x80;
        }
        if (((extra[0] << 24) | (extra[1] << 16) | (extra[2] << 8) | extra[3]) != 0xF8FFFFFF) {
            return 0x80504003;
        }
        page++;
    }
    return 0;
}

s32 func_00008460(s32 arg0, s32 arg1, s32 start, s32 step) {
    s32 n = D_0000B00C;
    s32 i;
    s32 ret;

    for (i = start; i < n; i += step) {
        ret = func_00008374(arg0, arg1, i, step);
        if (ret >= 0) {
            return i;
        }
        if (ret != 0x80504003) {
            return ret;
        }
    }
    return 0x80504003;
}

s32 func_00008504(s32 arg0, s32 arg1, s32 arg2, u32 *out) {
    u8 *buf = (u8 *)&D_0000B050;
    u8 *p;
    s32 ret = func_00006C40(arg0, arg1, arg2 + 7, (s32)buf, 0);

    if (ret < 0) {
        return ret;
    }
    p = buf + 0x1FC;
    *out = (buf[0x1FC] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
    return 0;
}

#if FW_VERSION < 340
s32 func_00006D2C(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_00006C40(arg0, arg1, arg2, (s32) &D_0000B050, 0);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        *arg3 = (D_0000B050.unk0 << 0x18) | (D_0000B050.unk1 << 0x10) | (D_0000B050.unk2 << 8) | D_0000B050.unk3;
        var_a2 = 0;
    }
    return var_a2;
}
#else
s32 func_00008584(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = func_00006C40(arg0, arg1, arg2, (s32) &D_0000B050, 0);
    var_a2 = temp_v0;
    if (temp_v0 >= 0) {
        *arg3 = (D_0000B050.unk0 << 0x18) | (D_0000B050.unk1 << 0x10) | (D_0000B050.unk2 << 8) | D_0000B050.unk3;
        var_a2 = 0;
    }
    return var_a2;
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", func_00008604);

INCLUDE_ASM("nonmatchings/mgr_seed", func_000086AC);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00008754);

INCLUDE_ASM("nonmatchings/mgr_seed", func_00008B04);

s32 func_00008EB0(s32 *out, s32 pos) {
    s32 n = D_0000B00C;
    s32 r;

    if (pos < 0) {
        *out = 0;
        return -1;
    }
    r = pos % (n * 2);
    *out = r / n;
    return r % n;
}

#if FW_VERSION < 340
s32 sceMgrMSReadSeqPage(s32 arg0, u8 *buf, s32 which) {
    u8 extra[16];
    s32 seg;
    s32 *blks = g_mgrMsCtrl.info.map.seqBlk;
    s32 ret;
    s32 page;
    s32 blk;
    s32 i;
    u8 *p;

    ret = func_00006030();
    if (ret < 0) {
        return ret;
    }
    ret = func_00005194(arg0, 3);
    if (ret >= 0) {
        page = func_00008EB0(&seg, which ? g_mgrMsCtrl.info.map.seqPos[1] : g_mgrMsCtrl.info.map.seqPos[0]);
        ret = 0x80504003;
        if (page >= 0) {
            blk = blks[seg];
            ret = 0x80505003;
            if (blk >= 0) {
                p = buf;
                for (i = 0; i < 8; i++) {
                    ret = func_00006C40(arg0, blk, page + i, (s32)p, extra);
                    p += 0x200;
                    if (ret < 0) {
                        if (ret == 0x80505003) {
                            blks[seg] = -1;
                        }
                        goto end;
                    }
                    ret = 0x80505003;
                    if (!(extra[0] & 0x40)) {
                        goto end;
                    }
                }
                if (blks[0] < 0 || blks[1] < 0) {
                    ret = 1;
                } else {
                    ret = 0;
                }
            }
        }
    }
end:
    if (blks[0] < 0 && blks[1] < 0) {
        ret = 0x80505004;
    }
    func_0000608C();
    return ret;
}
#else
s32 sceMgrMSReadSeqPage(s32 arg0, u8 *buf, s32 which) {
    u8 extra[16];
    s32 seg;
    s32 *blks = g_mgrMsCtrl.info.map.seqBlk;
    s32 ret;
    s32 page;
    s32 blk;
    s32 i;
    u8 *p;

    ret = func_00006030();
    if (ret < 0) {
        return ret;
    }
    ret = func_000069E0(arg0, 3);
    if (ret >= 0) {
        page = func_00008EB0(&seg, which ? g_mgrMsCtrl.info.map.seqPos[1] : g_mgrMsCtrl.info.map.seqPos[0]);
        ret = 0x80504003;
        if (page >= 0) {
            blk = blks[seg];
            ret = 0x80505003;
            if (blk >= 0) {
                p = buf;
                for (i = 0; i < 8; i++) {
                    ret = func_00006C40(arg0, blk, page + i, (s32)p, extra);
                    p += 0x200;
                    if (ret < 0) {
                        if (ret == 0x80505003) {
                            blks[seg] = -1;
                        }
                        goto end;
                    }
                    ret = 0x80505003;
                    if (!(extra[0] & 0x40)) {
                        goto end;
                    }
                }
                if (blks[0] < 0 || blks[1] < 0) {
                    ret = 1;
                } else {
                    ret = 0;
                }
            }
        }
    }
end:
    if (blks[0] < 0 && blks[1] < 0) {
        ret = 0x80505004;
    }
    func_0000608C();
    return ret;
}
#endif

#if FW_VERSION < 340
s32 sceMgrMSReadPoolPage(s32 arg0, u8 *buf, s32 pool) {
    u8 extra[16];
    s32 seg;
    MgrMsMap *map = &g_mgrMsCtrl.info.map;
    s32 *blks = map->poolBlk;
    s32 ret;
    s32 page;
    s32 blk;

    ret = func_00006030();
    if (ret < 0) {
        return ret;
    }
    ret = func_00005194(arg0, 3);
    if (ret >= 0) {
        ret = 0x80505003;
        if (map->poolValid >= 0) {
            page = func_00008EB0(&seg, pool ? g_mgrMsCtrl.info.map.poolPos[1] : g_mgrMsCtrl.info.map.poolPos[0]);
            ret = 0x80504003;
            if (page >= 0) {
                blk = blks[seg];
                ret = 0x80505003;
                if (blk >= 0) {
                    ret = func_00006C40(arg0, blk, page, (s32)buf, extra);
                    if (ret < 0) {
                        if (ret == 0x80505003) {
                            blks[seg] = -1;
                        }
                    } else if (!(extra[0] & 0x40)) {
                        ret = 0x80505003;
                    }
                }
            }
        }
    }
    func_0000608C();
    return ret;
}
#else
s32 sceMgrMSReadPoolPage(s32 arg0, u8 *buf, s32 pool) {
    u8 extra[16];
    s32 seg;
    MgrMsMap *map = &g_mgrMsCtrl.info.map;
    s32 *blks = map->poolBlk;
    s32 ret;
    s32 page;
    s32 blk;

    ret = func_00006030();
    if (ret < 0) {
        return ret;
    }
    ret = func_000069E0(arg0, 3);
    if (ret >= 0) {
        ret = 0x80505003;
        if (map->poolValid >= 0) {
            page = func_00008EB0(&seg, pool ? g_mgrMsCtrl.info.map.poolPos[1] : g_mgrMsCtrl.info.map.poolPos[0]);
            ret = 0x80504003;
            if (page >= 0) {
                blk = blks[seg];
                ret = 0x80505003;
                if (blk >= 0) {
                    ret = func_00006C40(arg0, blk, page, (s32)buf, extra);
                    if (ret < 0) {
                        if (ret == 0x80505003) {
                            blks[seg] = -1;
                        }
                    } else if (!(extra[0] & 0x40)) {
                        ret = 0x80505003;
                    }
                }
            }
        }
    }
    func_0000608C();
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSInvalidateICV);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSWriteSeqPage);

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSWritePoolPage);

#if FW_VERSION >= 152 && FW_VERSION < 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00008274);
#endif

#if FW_VERSION < 152
s32 func_00008300(s32 fd, s32 reg) {
    s32 ret = func_00006528(fd, reg);

    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x7F);
    if (ret >= 0) {
        return 0;
    }
    if (ret != 0x80504000) {
        return ret;
    }
    ret = func_00006300(fd);
    if (ret < 0) {
        return ret;
    }
    if (ret & 0x20) {
        return 0x80503003;
    }
    return 0x80504000;
}
#endif

#if FW_VERSION >= 340
INCLUDE_ASM("nonmatchings/mgr_seed", func_00009B34);

void func_00009BAC(s32 arg0) {
    func_000065FC(arg0, (s32) &D_0000AFD0, 2);
}
#endif

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFCC);

#if FW_VERSION < 340
void func_00008388(s32 arg0) {
    func_000065FC(arg0, (s32) "x~", 2);
}
#endif

#if FW_VERSION >= 102 && FW_VERSION < 151
s32 sceMgrMSCheckICV(s32 arg0, u64 *icv) {
    MgrMsAuthInfo info;
    s32 handle[4];
    s32 *pfd = handle;
    s32 mode = 2;
    s32 ret;

    func_00006288(&info, icv, NULL, NULL);
    ret = func_00006678(arg0, pfd, 2, 1);
    if (ret < 0) {
        if ((u32)(ret - 0x80505006) >= 2) {
            return ret;
        }
        ret = func_00006678(arg0, pfd, 3, 1);
        mode = 3;
        if (ret < 0) {
            return ret;
        }
    }
    ret = func_00006528(*pfd, 0x78);
    if (ret >= 0) {
        ret = func_00006134(*pfd, 0xC, (u8 *)&info, 0x1A);
        if (ret >= 0) {
            ret = func_000065FC(*pfd, (u8 *)"yz", 2);
            if (ret >= 0) {
                ret = func_00008300(*pfd, 0x7C);
                if (ret >= 0) {
                    ret = func_00008300(*pfd, 0x7B);
                    if (ret < 0) {
                        if (ret == 0x80504000) {
                            ret = 0;
                        } else if (ret == 0x80503003) {
                            if (!(mode & 1)) {
                                func_00006528(*pfd, 0x7D);
                            }
                            ret = 0;
                        }
                    }
                }
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    return ret;
}
#endif

#if FW_VERSION >= 340
INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFD0);
#endif

#if FW_VERSION == 100 || FW_VERSION == 151
s32 sceMgrMSCheckICV(s32 arg0, u64 *icv) {
    MgrMsAuthInfo info;
    s32 handle[4];
    s32 *pfd = handle;
    s32 mode = 2;
    s32 ret;

    func_00006288(&info, icv, NULL, NULL);
    ret = func_00006678(arg0, pfd, 2, 1);
    if (ret < 0) {
        if ((u32)(ret - 0x80505006) >= 2) {
            return ret;
        }
        ret = func_00006678(arg0, pfd, 3, 1);
        mode = 3;
        if (ret < 0) {
            return ret;
        }
    }
    ret = func_00006528(*pfd, 0x78);
    if (ret >= 0) {
        ret = func_00006134(*pfd, 0xC, (u8 *)&info, 0x1A);
        if (ret >= 0) {
            ret = func_000065FC(*pfd, (u8 *)"yz", 2);
            if (ret >= 0) {
                ret = func_00008300(*pfd, 0x7C);
                if (ret >= 0) {
                    ret = func_00008300(*pfd, 0x7B);
                    if (ret < 0) {
                        if (ret == 0x80504000) {
                            ret = 0;
                        } else if (ret == 0x80503003) {
                            if (!(mode & 1)) {
                                func_00006528(*pfd, 0x7D);
                            }
                            ret = 0;
                        }
                    }
                }
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 sceMgrMSCheckICV(s32 arg0, u64 *icv) {
    MgrMsAuthInfo info;
    s32 handle[4];
    s32 *pfd = handle;
    s32 mode = 2;
    s32 ret;

    func_00006288(&info, icv, NULL, NULL);
    ret = func_00006678(arg0, pfd, 2, 1);
    if (ret < 0) {
        if ((u32)(ret - 0x80505006) >= 2) {
            return ret;
        }
        ret = func_00006678(arg0, pfd, 3, 1);
        mode = 3;
        if (ret < 0) {
            return ret;
        }
    }
    ret = func_00006528(*pfd, 0x78);
    if (ret >= 0) {
        ret = func_00006134(*pfd, 0xC, (u8 *)&info, 0x1A);
        if (ret >= 0) {
            ret = func_000065FC(*pfd, (u8 *)"yz", 2);
            if (ret >= 0) {
                ret = func_00008274(*pfd, 0x7C);
                if (ret >= 0) {
                    ret = func_00008274(*pfd, 0x7B);
                    if (ret < 0) {
                        if (ret == 0x80504000) {
                            ret = 0;
                        } else if (ret == 0x80503003) {
                            if (!(mode & 1)) {
                                func_00006528(*pfd, 0x7D);
                            }
                            ret = 0;
                        }
                    }
                }
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    return ret;
}
#endif

#if FW_VERSION >= 340
s32 sceMgrMSCheckICV(s32 arg0, u64 *icv) {
    MgrMsAuthInfo info;
    s32 handle[4];
    s32 *pfd = handle;
    s32 mode = 2;
    s32 ret;

    func_00006288(&info, icv, NULL, NULL);
    ret = func_00006678(arg0, pfd, 2, 1);
    if (ret < 0) {
        if ((u32)(ret - 0x80505006) >= 2) {
            return ret;
        }
        ret = func_00006678(arg0, pfd, 3, 1);
        mode = 3;
        if (ret < 0) {
            return ret;
        }
    }
    ret = func_00006528(*pfd, 0x78);
    if (ret >= 0) {
        ret = func_00006134(*pfd, 0xC, (u8 *)&info, 0x1A);
        if (ret >= 0) {
            ret = func_000065FC(*pfd, (u8 *)"yz", 2);
            if (ret >= 0) {
                ret = func_00009B34(*pfd, 0x7C);
                if (ret >= 0) {
                    ret = func_00009B34(*pfd, 0x7B);
                    if (ret < 0) {
                        if (ret == 0x80504000) {
                            ret = 0;
                        } else if (ret == 0x80503003) {
                            if (!(mode & 1)) {
                                func_00006528(*pfd, 0x7D);
                            }
                            ret = 0;
                        }
                    }
                }
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    return ret;
}
#endif

#if FW_VERSION < 152
s32 sceMgrMSCompareICV(s32 arg0) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 3, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_00008300(fd, 0x7B);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

#if FW_VERSION >= 152 && FW_VERSION < 340
s32 sceMgrMSCompareICV(s32 arg0) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 3, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_00008274(fd, 0x7B);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

#if FW_VERSION >= 340
s32 sceMgrMSCompareICV(s32 arg0) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 3, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_00009B34(fd, 0x7B);
    if (ret == 0x80504000) {
        ret = 0x80505003;
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSWriteICV);

INCLUDE_RODATA("nonmatchings/mgr_seed", D_0000AFD8);

#if FW_VERSION >= 102 && FW_VERSION < 151
s32 sceMgr_driver_016A843B(s32 arg0, u64 *out, u64 *in) {
    MgrMsAuthInfo info;
    s32 fd;
    s32 ret;

    func_00006288(&info, in, NULL, NULL);
    ret = func_00006678(arg0, &fd, 3, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret >= 0) {
        ret = func_000065FC(fd, (u8 *)"uvw", 3);
        if (ret >= 0) {
            ret = func_00006134(fd, 3, (u8 *)&info, 0x18);
            if (ret >= 0) {
                *out = info.a;
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgr_driver_3EE1140B(s32 arg0, u64 *out, u64 *in) {
    MgrMsAuthInfo info;
    s32 fd;
    s32 ret;

    func_00006288(&info, in, NULL, NULL);
    ret = func_00006678(arg0, &fd, 3, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret >= 0) {
        ret = func_000065FC(fd, (u8 *)"rst", 3);
        if (ret >= 0) {
            ret = func_00006134(fd, 3, (u8 *)&info, 0x18);
            if (ret >= 0) {
                *out = info.a;
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#else
s32 sceMgr_driver_016A843B(s32 arg0, u64 *out, u64 *in) {
    MgrMsAuthInfo info;
    s32 fd;
    s32 ret;

    func_00006288(&info, in, NULL, NULL);
    ret = func_00006678(arg0, &fd, 3, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret >= 0) {
        ret = func_000065FC(fd, (u8 *)"uvw", 3);
        if (ret >= 0) {
            ret = func_00006134(fd, 3, (u8 *)&info, 0x18);
            if (ret >= 0) {
                *out = info.a;
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgr_driver_3EE1140B(s32 arg0, u64 *out, u64 *in) {
    MgrMsAuthInfo info;
    s32 fd;
    s32 ret;

    func_00006288(&info, in, NULL, NULL);
    ret = func_00006678(arg0, &fd, 3, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006134(fd, 0xC, (u8 *)&info, 0x1A);
    if (ret >= 0) {
        ret = func_000065FC(fd, (u8 *)"rst", 3);
        if (ret >= 0) {
            ret = func_00006134(fd, 3, (u8 *)&info, 0x18);
            if (ret >= 0) {
                *out = info.a;
            }
        }
    }
    func_0000684C(arg0);
    func_000067CC(arg0, 1);
    return ret;
}
#endif

s32 func_0000A070(s32 arg0, u64 *out) {
    u64 buf[4];
    s32 fd;
    s32 ret;

    ret = func_00006678(arg0, &fd, 5, 0);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x40);
    if (ret >= 0) {
        ret = func_00006134(fd, 3, (u8 *)buf, 0x20);
        if (ret >= 0) {
            out[0] = buf[0];
            out[1] = buf[1];
        }
    }
    func_000067CC(arg0, 0);
    return ret;
}

s32 sceMgrMSSetLeafID(s32 arg0, u64 *id) {
    MgrMsRegBuf buf;
    s32 fd;
    s32 ret;

    buf.id[0] = id[0];
    buf.id[1] = id[1];
    buf.w[4] = 0;
    buf.w[5] = 0;
    buf.w[6] = 0;
    buf.w[7] = 0;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x41);
    if (ret >= 0) {
        ret = func_00006134(fd, 0xC, buf.b, 0x20);
    }
    func_000067CC(arg0, 1);
    return ret;
}

#if FW_VERSION < 152
s32 func_0000A1C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;

    var_v0 = func_00006528(arg0, 0x42);
    if (var_v0 >= 0) {
        var_v0 = func_00006340(arg0, arg1, arg2, 3, (s32) &D_0000B050);
        if (var_v0 >= 0) {
            var_v0 = 0x428;
        }
    }
    return var_v0;
}
#else
s32 func_0000A1C8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a5;

    temp_v0 = func_00006528(arg0, 0x42);
    var_a5 = temp_v0;
    if (temp_v0 >= 0) {
        temp_v0_2 = func_00006340(arg0, arg1, arg2, 3, (s32) &D_0000B050);
        var_a5 = (temp_v0_2 >= 0) ? 0x428 : temp_v0_2;
    }
    return var_a5;
}
#endif

s32 sceMgrMSGetLocalEKB(s32 arg0, s32 buf, s32 size) {
    s32 fd;
    s32 ret = func_00006678(arg0, &fd, 5, 1);

    if (ret < 0) {
        return ret;
    }
    ret = func_0000A1C8(fd, buf, size);
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgrMSSetRd(s32 arg0, u64 *rd) {
    MgrMsRegBuf buf;
    s32 fd;
    s32 ret;

    buf.id[0] = *rd;
    buf.w[2] = 0;
    buf.w[3] = 0;
    buf.w[4] = 0;
    buf.w[5] = 0;
    buf.w[6] = 0;
    buf.w[7] = 0;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x43);
    if (ret >= 0) {
        ret = func_00006134(fd, 0xC, buf.b, 0x20);
    }
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgr_driver_D1023CC2(s32 arg0, u64 *a, u64 *b) {
    u64 buf[4];
    s32 fd;
    s32 ret;

    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x44);
    if (ret >= 0) {
        ret = func_00006134(fd, 3, (u8 *)buf, 0x20);
        if (ret >= 0) {
            *a = buf[0];
            *b = buf[1];
        }
    }
    func_000067CC(arg0, 1);
    return ret;
}

#if FW_VERSION < 250
s32 sceMgrMSSetMAC2d(s32 arg0, u64 *mac) {
    MgrMsRegBuf buf;
    s32 fd;
    s32 ret;

    buf.id[0] = *mac;
    buf.w[2] = 0;
    buf.w[3] = 0;
    buf.w[4] = 0;
    buf.w[5] = 0;
    buf.w[6] = 0;
    buf.w[7] = 0;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_00006528(fd, 0x45);
    if (ret >= 0) {
        ret = func_00006134(fd, 0xC, buf.b, 0x20);
    }
    func_000067CC(arg0, 1);
    return ret;
}
#else
INCLUDE_ASM("nonmatchings/mgr_seed", sceMgrMSSetMAC2d);
#endif

s32 sceMgrMSReadIBD(s32 arg0, u8 page, s32 arg2, s32 arg3) {
    MgrMsRegParam param;
    s32 fd;
    s32 ret;

    param.unk0 = 0;
    param.unk4 = 0;
    param.unk5 = page;
    ret = func_00006678(arg0, &fd, 5, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_000064EC(fd, (s32)&param);
    if (ret >= 0) {
        ret = func_00006528(fd, 0x47);
        if (ret >= 0) {
            ret = func_00006340(fd, arg2, arg3, 2, (s32)&D_0000B050);
            if (ret >= 0) {
                ret = 0;
            }
        }
    }
    func_000067CC(arg0, 1);
    return ret;
}

s32 sceMgrMSWriteIBD(s32 arg0, u8 page, s32 arg2, s32 arg3) {
    MgrMsRegParam param;
    s32 fd;
    s32 ret;

    param.unk0 = 0;
    param.unk4 = 0;
    param.unk5 = page;
    ret = func_00006678(arg0, &fd, 4, 1);
    if (ret < 0) {
        return ret;
    }
    ret = func_000064EC(fd, (s32)&param);
    if (ret >= 0) {
        ret = func_00006528(fd, 0x46);
        if (ret >= 0) {
            ret = func_00006408(fd, arg2, arg3, 2, (s32)&D_0000B050);
            if (ret >= 0) {
                ret = 0;
            }
        }
    }
    func_000067CC(arg0, 1);
    return ret;
}

s32 module_start(void) {
    return 0;
}

s32 module_stop(void) {
    func_00005F7C();
    func_00000AC4();
    return 0;
}
