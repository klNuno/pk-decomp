#include "common.h"

f32 func_0014BAB0(void *arg0, s32 arg1) {
    f32 var_f0;

    if (arg1 == 0) {
        return 0.0f;
    }
    var_f0 = 0.0f;
    if (((*(s32 *)((u8 *)arg0 + 0x8) & 0x80) ? 1 : 0) != 0) {
        var_f0 = *(f32 *)((u8 *)arg0 + 0x1C);
    }
    return var_f0;
}
