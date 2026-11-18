/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B6840_0 {
    u8 pad_00[0x64];
    f32 unk_64[2];
} unk_func_001B6840_0;

f32 func_001B6840(unk_func_001B6840_0 *arg0, s16 arg1) {
    s32 var_s0;
    f32 temp;

    var_s0 = 0;
    if (arg1 >= 0 && arg1 < 2) {
        var_s0 = 1;
    }
    if (var_s0) {
        temp = arg0->unk_64[arg1];
    } else {
        temp = 0.0f;
    }
    return temp;
}
