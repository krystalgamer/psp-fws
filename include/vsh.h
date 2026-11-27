#ifndef VSH_H
#define VSH_H
/* vsh (flash0:/vsh/module/vshmain / common_gui) classes used by VSH modules.
   Only the members a module uses; names from the mangled imports. */

#include "paf.h"

#ifdef __cplusplus

namespace vsh {

/* the option (triangle) menu: static interface */
class OptionMenu {
public:
    static void Show();
    static void Hide();
    static void Close(paf::View *view, const char *page, const char *name);
};

} // namespace vsh

#endif /* __cplusplus */

#endif
