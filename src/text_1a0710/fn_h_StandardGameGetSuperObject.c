/* profile: o0 */
#include "common.h"

s32 fn_h_StandardGameGetSuperObject(void *arg0) {
    s32 var_s0;
    if (arg0 != NULL) {
        var_s0 = *(s32 *)((u8 *)arg0 + 0xC);
    } else {
        var_s0 = 0;
    }
    return var_s0;
}
