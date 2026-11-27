#include "common.h"
#include "paf_decls.h"

INCLUDE_ASM("nonmatchings/paf_02DD14", _ZNK10PSJSObject11ToPrimitiveE15ToPrimitiveHint);

INCLUDE_ASM("nonmatchings/paf_02DD14", _ZNK10PSJSObject7GetAttrERK8psjsnameP9PSJSValue);

INCLUDE_ASM("nonmatchings/paf_02DD14", _ZN10PSJSObject7SetAttrERK8psjsnameRK9PSJSValue);

#if FW_VERSION >= 200 && FW_VERSION < 282
INCLUDE_ASM("nonmatchings/paf_02DD14", _ZN10PSJSObject7DelAttrERK8psjsname);
#endif

#if FW_VERSION < 200
s32 _ZN10PSJSObject7DelAttrERK8psjsname(s32 arg0) {
    return func_0002EAC8(arg0 + 8);
}
#endif

#if FW_VERSION == 282
s32 _ZN10PSJSObject7DelAttrERK8psjsname(s32 arg0) {
    func_0002EAC8(arg0 + 8);
    return 1;
}
#endif

INCLUDE_ASM("nonmatchings/paf_02DD14", _ZNK10PSJSObject7GetAttrEiP9PSJSValue);

INCLUDE_ASM("nonmatchings/paf_02DD14", _ZN10PSJSObject7SetAttrEiRK9PSJSValue);

INCLUDE_ASM("nonmatchings/paf_02DD14", _ZN10PSJSObject7DelAttrEi);
