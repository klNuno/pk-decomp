/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 unk_10;
    u8 pad_11[3];
} unk_func_001B5BD0_0;

void func_001B5BD0(u8 *arg0) {
    unk_func_001B5BD0_0 *var_s0;
    unk_func_001B5BD0_0 *temp_s1;

    var_s0 = (unk_func_001B5BD0_0 *)(arg0 + 0x180);
    temp_s1 = var_s0 + 10;
    while (var_s0 < temp_s1) {
        var_s0->unk_00 = 0;
        var_s0->unk_04 = 0;
        var_s0->unk_08 = 0.0f;
        var_s0->unk_0C = 255.0f;
        var_s0->unk_10 = 0;
        var_s0++;
    }
    *(s16 *)(arg0 + 0x248) = 0;
}
