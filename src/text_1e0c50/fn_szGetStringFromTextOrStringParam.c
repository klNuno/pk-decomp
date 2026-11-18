/* profile: o0 */
#include "common.h"

s32 FON_fn_szGetTextPointerForHandle(s32);

s32 fn_szGetStringFromTextOrStringParam(void *arg0) {
    s32 var_s0;
    var_s0 = 0;
    if ((*(s32 *)((u8 *)arg0 + 0xC)) == 9) {
        var_s0 = *(s32 *)((u8 *)arg0 + 0);
    } else if ((*(s32 *)((u8 *)arg0 + 0xC)) == 0x24) {
        var_s0 = FON_fn_szGetTextPointerForHandle((*(s32 *)((u8 *)arg0 + 0)));
    }
    return var_s0;
}
