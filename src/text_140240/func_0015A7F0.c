#include "common.h"

s32 func_0015A7F0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = 1;
        if ((*(s32 *)((u8 *)arg0 + 0x18)) != 1) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
