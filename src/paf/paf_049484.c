/* cflags: -O1 */
#include "common.h"
#include "paf_decls.h"

#if FW_VERSION >= 282
void func_00049484(struct Unk_func_00049484_0 *arg0) {
    arg0->unk11 = 1;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}
#endif

#if FW_VERSION != 270
void func_000494A4(struct Unk_func_000494A4_0 *arg0) {
    arg0->unk11 = 1;
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}

void func_000494C4(struct Unk_func_000494C4_0 *arg0, s32 arg1) {
    arg0->unk11 = 1;
    arg0->unk4 = arg1;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}

void func_000494E4(struct Unk_func_000494E4_0 *arg0, s32 arg1) {
    arg0->unk11 = 1;
    arg0->unk4 = arg1;
    arg0->unk0 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
}

void func_00049504(void) {
    func_00049D58();
}

void func_00049520(void) {
    func_00049D58();
}
#endif
