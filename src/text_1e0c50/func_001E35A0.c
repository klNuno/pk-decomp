#include "common.h"

s32 func_001E35A0(void *arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s32 var_v0;

    temp_f1 = *(f32 *)((u8 *)arg0 + 0);
    if (temp_f1 < (*(f32 *)((u8 *)arg1 + 0))) {
        return 0;
    }
    if (!(temp_f1 <= (*(f32 *)((u8 *)arg2 + 0)))) {
        return 0;
    }
    temp_f1_2 = *(f32 *)((u8 *)arg0 + 4);
    if (temp_f1_2 < (*(f32 *)((u8 *)arg1 + 4))) {
        return 0;
    }
    if (!(temp_f1_2 <= (*(f32 *)((u8 *)arg2 + 4)))) {
        return 0;
    }
    temp_f1_3 = *(f32 *)((u8 *)arg0 + 8);
    if (temp_f1_3 < (*(f32 *)((u8 *)arg1 + 8))) {
        return 0;
    }
    var_v0 = 1;
    if (temp_f1_3 <= (*(f32 *)((u8 *)arg2 + 8))) {
        var_v0 = 0;
    }
    return var_v0 ^ 1;
}
