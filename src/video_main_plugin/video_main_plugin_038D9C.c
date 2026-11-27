/* lang: c++ */
/* cflags: -O1 */
#include "common.h"
#include "video_main_plugin_decls.h"

#if FW_VERSION >= 282
s32 func_00038D9C(struct Unk_func_00038D9C_0 *arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    struct Unk_func_00038D9C_temp_v1 *temp_v1;

    temp_v1 = arg0->unk98;
    var_v0 = -1;
    if (temp_v1 != NULL) {
        temp_v1->unk1950 = arg2;
        var_v0 = 0;
        temp_v1->unk1954 = arg1;
    }
    return var_v0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00038DBC);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00038E00);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00038F70);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_000390E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039218);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039350);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039490);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_000394A4);

M2C_UNK *func_000394D8(void) {
    return &D_0005534C;
}

INCLUDE_RODATA("nonmatchings/video_main_plugin_038D9C", D_0005534C);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_000394E4);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039778);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039AD8);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039C80);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039D78);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039E68);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_00039F88);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A0A0);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A1C0);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A2E0);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A400);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A520);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A61C);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A744);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003A928);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003AA1C);

void func_0003AC54(s32 *arg0, s32 *arg1) {
    *arg0 = *arg1;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003AC60);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003ADC4);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003AEA4);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B1FC);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B328);

s32 func_0003B580(void) {
    return 0;
}

s32 func_0003B588(void) {
    return 0;
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B590);

const char *func_0003B634(void) {
    return "play";
}

void func_0003B640(struct Unk_func_0003B640_0 *arg0, struct Unk_func_0003B640_1 *arg1) {
    func_0003807C(arg1->unk28, arg0->unk8, arg0->unkC, arg0->unkD);
}

const char *func_0003B66C(void) {
    return "stop";
}

void func_0003B678(struct Unk_func_0003B678_0 *arg0, struct Unk_func_0003B678_1 *arg1) {
    func_00037FC0(arg1->unk28, arg0->unk6);
}

const char *func_0003B69C(void) {
    return "resume";
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B6A8);

const char *func_0003B6CC(void) {
    return "playStep";
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B6D8);

const char *func_0003B744(void) {
    return "changeStream";
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B750);

const char *func_0003B778(void) {
    return "changeResumeInfo";
}

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003B784);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003BBF8);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003BD58);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003BEC0);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003BFD0);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003C240);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003C770);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003CB24);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003CD34);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003CE74);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003D034);

INCLUDE_ASM("nonmatchings/video_main_plugin_038D9C", func_0003D174);
#endif

#if FW_VERSION >= 350
void func_0003D310(u32 arg0) {
    scePaf_77283661();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D310(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D32C(void* arg0) {
    scePaf_EF0B4C08();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D32C(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D348(u32 arg0) {
    scePaf_77283661();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D348(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D364(void* arg0) {
    scePaf_EF0B4C08();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D364(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D380(u32 arg0) {
    scePaf_77283661();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D380(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D39C(void* arg0) {
    scePaf_EF0B4C08();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D39C(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D3B8(u32 arg0) {
    scePaf_77283661();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D3B8(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D3D4(void* arg0) {
    scePaf_EF0B4C08();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D3D4(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D3F0(u32 arg0) {
    scePaf_77283661();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D3F0(u32 arg0) {
    _Z11PSJS_Mallocj(arg0);
}
#endif

#if FW_VERSION >= 350
void func_0003D40C(void* arg0) {
    scePaf_EF0B4C08();
}
#endif

#if FW_VERSION >= 282 && FW_VERSION < 350
void func_0003D40C(void* arg0) {
    _Z9PSJS_FreePv(arg0);
}
#endif
