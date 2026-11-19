/* profile: opt */
#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0014E780_0;

f32 func_001E60E0(f32);

void func_0014E780(s32 arg0, s32 arg1, const unk_func_0014E780_0 *arg2,
                  unk_func_0014E780_0 *arg3, unk_func_0014E780_0 *arg4, unk_func_0014E780_0 *arg5,
                  f32 arg6, f32 arg7, f32 arg8, f32 arg9) {
    bool temp = false;
    f32 temp_y0 = arg3->unk_04;
    f32 temp_x0 = arg3->unk_00;
    f32 temp_y = temp_y0 * temp_y0;
    f32 temp_x = temp_x0 * temp_x0;
    f32 temp_f0 = func_001E60E0(temp_x + temp_y + arg3->unk_08 * arg3->unk_08);
    f32 temp_f2;
    f32 temp_f3 = temp_f0;

    if (arg0 != 0 || temp_f0 <= 0.001f) {
        arg4->unk_00 = arg2->unk_00 + arg3->unk_00;
        arg4->unk_04 = arg2->unk_04 + arg3->unk_04;
        arg4->unk_08 = arg2->unk_08 + arg3->unk_08;
        ((s32 *)arg5)[0] = ((s32 *)arg3)[0];
        ((s32 *)arg5)[1] = ((s32 *)arg3)[1];
        ((s32 *)arg5)[2] = ((s32 *)arg3)[2];
        return;
    }
    if (0.0f == arg6) {
        ((s32 *)arg4)[0] = ((const s32 *)arg2)[0];
        ((s32 *)arg4)[1] = ((const s32 *)arg2)[1];
        ((s32 *)arg4)[2] = ((const s32 *)arg2)[2];
        arg3->unk_00 = 0.0f;
        arg3->unk_04 = 0.0f;
        arg3->unk_08 = 0.0f;
        return;
    }
    ((s32 *)arg5)[0] = ((s32 *)arg3)[0];
    ((s32 *)arg5)[1] = ((s32 *)arg3)[1];
    ((s32 *)arg5)[2] = ((s32 *)arg3)[2];
    if (temp_f0 > arg6) {
        temp_f3 = arg6;
        temp = true;
    }
    if (arg1 == 0) {
        temp_f2 = temp_f0;

        if (0.0f != arg8 && temp_f0 < arg6 * arg8) {
            temp_f2 /= arg8;
            if (temp_f2 > 0.001f && temp_f2 < temp_f3) {
                temp_f3 = temp_f2;
                temp = true;
            }
        }
        if (0.0f != arg7) {
            f32 temp_f1 = arg9 + arg6 / arg7;
            if (temp_f3 > temp_f1) {
                temp_f3 = temp_f1;
                temp = true;
            }
        }
    }
    if (temp) {
        f32 temp_f1 = temp_f3 / temp_f0;
        arg5->unk_00 *= temp_f1;
        arg5->unk_04 *= temp_f1;
        arg5->unk_08 *= temp_f1;
    }
    arg4->unk_00 = arg2->unk_00 + arg5->unk_00;
    arg4->unk_04 = arg2->unk_04 + arg5->unk_04;
    arg4->unk_08 = arg2->unk_08 + arg5->unk_08;
}

}
