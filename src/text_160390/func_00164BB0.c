#include "common.h"

extern f32 D_0035F44C;

void func_00164BB0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 < 0) {
        var_a0 = 0;
    } else if (var_a0 >= 0x64) {
        var_a0 = 0x64;
    }
    D_0035F44C = (f32) var_a0 / 100.0f;
}
