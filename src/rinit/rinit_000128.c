/* cflags: -O2 -fno-builtin */
#include "common.h"
#include "rinit_decls.h"

#define REG_TYPE_DIR 1
#define REG_TYPE_INT 2
#define REG_TYPE_STR 3
#define REG_TYPE_BIN 4

#define SCE_ERROR_REGISTRY_INVALID 0x80108401 /* uncertain name */

int func_00000128(void) {
    struct RegParam reg;

    memset(&reg, 0, sizeof(reg));
    reg.regtype = 1;
    reg.unk2 = 1;
    reg.unk3 = 1;
    sceRegRemoveRegistry(&reg);
    return 0;
}

int module_start(SceSize args, void *argp) {
    int ret;

    printf("-------------------------------------------------------------\n");
    printf("Init System Configuration\n");
    ret = func_00000128();
    if (ret < 0) {
        printf("Error: System Configuration clear error. (code=%x)\n", ret);
        printf("abort.\n");
        return -1;
    }
    printf(".\n");
    sceIoMkdir("flash1:/registry", 0xFFF);
    printf(".\n");
    ret = func_000002F0();
    if (ret < 0) {
        printf("Error: System Configuration create error. (code=%x)\n", ret);
        printf("abort.\n");
        return -2;
    }
    printf(".\n");
    sceIoRemove("flash1:/registry/init.dat");
    printf(".\n");
    printf("done.\n");
    return 0;
}

int func_0000025C(const char *path, char *dir, char *name) {
    char buf[0x101];
    char *p;

    memset(buf, 0, sizeof(buf));
    strncpy(buf, path, sizeof(buf));
    p = strrchr(buf, '/');
    if (p == NULL) {
        return SCE_ERROR_REGISTRY_INVALID;
    }
    *p = '\0';
    strcpy(name, p + 1);
    strcpy(dir, buf);
    return 0;
}

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B40C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B418);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B420);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B430);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B440);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B450);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B464);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B47C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B498);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B4AC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B4BC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B4CC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B4E4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B504);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B50C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B518);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B52C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B548);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B564);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B580);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B59C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B5B8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B5D4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B5F0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B60C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B628);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B644);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B660);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B67C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B698);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B6B4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B6D0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B6EC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B708);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B714);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B72C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B740);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B750);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B754);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B764);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B768);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B77C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B78C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B79C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7A8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7AC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7C4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7D0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7DC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7E8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7F0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B7F8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B808);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B820);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B834);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B84C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B858);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B864);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B86C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B87C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B888);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B894);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8A0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8B4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8C4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8CC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8D4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8E0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8F0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B8FC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B904);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B90C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B91C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B92C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B940);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B948);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B954);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B95C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B968);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B978);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B984);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B994);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B9A0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B9B4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B9C0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B9CC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B9D8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000B9E8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA00);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA0C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA24);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA30);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA3C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA48);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA54);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA60);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA6C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA78);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA84);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA90);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BA9C);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BAA8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BAB4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BAC0);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BACC);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BAD8);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BAE4);

INCLUDE_RODATA("nonmatchings/rinit_000128", D_0000BAF0);

INCLUDE_ASM("nonmatchings/rinit_000128", func_000002F0);

int func_00000574(struct RegParam *reg, u32 *h) {
    int ret;

    memset(reg, 0, sizeof(*reg));
    reg->regtype = 1;
    strcpy(reg->name, D_0000BAF0);
    reg->namelen = strlen(D_0000BAF0);
    reg->unk2 = 1;
    reg->unk3 = 1;
    ret = sceRegOpenRegistry(reg, 2, h);
    if (ret == 0x80082714) {
        return 0x80082714;
    }
    if (ret != 0) {
        return ret;
    }
    return 0;
}

int func_00000620(u32 h, const char *path, int type, int size, void *buf) {
    char dir[0x101];
    char name[0x101];
    u32 cat;
    u32 ktype;
    int ksize;
    int ret;

    if (path == NULL) {
        return 0;
    }
    memset(dir, 0, sizeof(dir));
    memset(name, 0, sizeof(name));
    ret = func_0000025C(path, dir, name);
    if (ret != 0) {
        return ret;
    }
    ret = sceRegOpenCategory(h, dir, 2, &cat);
    if (ret != 0) {
        return ret;
    }
    ret = sceRegGetKeyInfoByName(cat, name, &ktype, &ksize);
    if (ret != 0) {
        sceRegCloseCategory(cat);
        return ret;
    }
    if (ktype != type || size < ksize) {
        sceRegCloseCategory(cat);
        return SCE_ERROR_REGISTRY_INVALID;
    }
    ret = sceRegGetKeyValueByName(cat, name, buf, ksize);
    if (ret != 0) {
        sceRegCloseCategory(cat);
        return ret;
    }
    sceRegCloseCategory(cat);
    return 0;
}

int func_00000750(u32 h, const char *path, SceSize size, const void *buf) {
    char dir[0x101];
    char name[0x101];
    u32 cat;
    int ret;

    if (path == NULL) {
        return 0;
    }
    memset(dir, 0, sizeof(dir));
    memset(name, 0, sizeof(name));
    ret = func_0000025C(path, dir, name);
    if (ret != 0) {
        return ret;
    }
    ret = sceRegOpenCategory(h, dir, 2, &cat);
    if (ret != 0) {
        return ret;
    }
    ret = sceRegSetKeyValue(cat, name, buf, size);
    if (ret != 0) {
        sceRegCloseCategory(cat);
        return ret;
    }
    sceRegFlushCategory(cat);
    sceRegCloseCategory(cat);
    sceRegFlushRegistry(h);
    return 0;
}

int func_00000848(u32 h, int flush) {
    if (flush == 0) {
        sceRegCloseRegistry(h);
    } else if (flush == 1) {
        sceRegFlushRegistry(h);
        sceRegCloseRegistry(h);
    }
    return 0;
}

int func_00000898(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/SYSTEM/LOCK/password", REG_TYPE_BIN, 4, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_0000091C(const void *buf) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, "/CONFIG/SYSTEM/LOCK/password", 4, buf);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_0000099C(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/SYSTEM/LOCK/parental_level", REG_TYPE_INT, 4, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_00000A20(const void *buf) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, "/CONFIG/SYSTEM/LOCK/parental_level", 4, buf);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_00000AA0(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/SYSTEM/owner_name", REG_TYPE_STR, 0x80, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_00000B24(const char *str, int len) {
    const char *path = "/CONFIG/SYSTEM/owner_name";
    struct RegParam reg;
    u32 h;
    int ret;

    if (len >= 0x80) {
        return SCE_ERROR_REGISTRY_INVALID;
    }
    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, path, len + 1, str);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_00000BCC(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/SYSTEM/XMB/language", REG_TYPE_INT, 4, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_00000C50(const void *buf) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, "/CONFIG/SYSTEM/XMB/language", 4, buf);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_00000CD0(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/DATE/time_zone_area", REG_TYPE_STR, 0x30, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_00000D54(const char *str, int len) {
    const char *path = "/CONFIG/DATE/time_zone_area";
    struct RegParam reg;
    u32 h;
    int ret;

    if (len >= 0x30) {
        return SCE_ERROR_REGISTRY_INVALID;
    }
    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, path, len + 1, str);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_00000DFC(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/DATE/time_zone_offset", REG_TYPE_INT, 4, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_00000E80(const void *buf) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, "/CONFIG/DATE/time_zone_offset", 4, buf);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_00000F00(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/DATE/summer_time", REG_TYPE_INT, 4, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_00000F84(const void *buf) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000750(h, "/CONFIG/DATE/summer_time", 4, buf);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 1);
    return 0;
}

int func_00001004(void *dateFormat, void *timeFormat) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/DATE/date_format", REG_TYPE_INT, 4, dateFormat);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/DATE/time_format", REG_TYPE_INT, 4, timeFormat);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}

int func_000010BC(void *out) {
    struct RegParam reg;
    u32 h;
    int ret;

    ret = func_00000574(&reg, &h);
    if (ret != 0) {
        return ret;
    }
    ret = func_00000620(h, "/CONFIG/SYSTEM/XMB/theme_type", REG_TYPE_INT, 4, out);
    if (ret != 0) {
        func_00000848(h, 0);
        return ret;
    }
    func_00000848(h, 0);
    return 0;
}
