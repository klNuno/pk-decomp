/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00200F10_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00200F10_0;

f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_00200970(s32, unk_func_00200F10_0 *, unk_func_00200F10_0 *, s32, f32, f32, s32);
extern s16 D_005AD8E0[];
extern f32 D_005AD8A0[];
extern f32 D_005AD8A4[];

void func_00200F10(s32 arg0, unk_func_00200F10_0 *arg1, unk_func_00200F10_0 *arg2) {
    unk_func_00200F10_0 v;
    f32 len;
    f32 n;

    v.unk_00 = arg2->unk_00 - arg1->unk_00;
    v.unk_04 = arg2->unk_04 - arg1->unk_04;
    v.unk_08 = arg2->unk_08 - arg1->unk_08;
    len = func_001E60E0(func_00151360(v.unk_00) + func_00151360(v.unk_04) + func_00151360(v.unk_08));
    len = 0.35f + len;
    n = func_001E60E0(func_00151360(v.unk_00) + func_00151360(v.unk_04) + func_00151360(v.unk_08));
    if (n != 0.0f) {
        n = 1.0f / n;
        v.unk_00 = n * v.unk_00;
        v.unk_04 = n * v.unk_04;
        v.unk_08 = n * v.unk_08;
    } else {
        v = v;
    }
    v.unk_00 = len * v.unk_00;
    v.unk_04 = len * v.unk_04;
    v.unk_08 = len * v.unk_08;
    v.unk_00 = v.unk_00 + arg1->unk_00;
    v.unk_04 += arg1->unk_04;
    v.unk_08 += arg1->unk_08;
    func_00200970(arg0, arg1, &v, (s16)D_005AD8E0[0], D_005AD8A0[0], D_005AD8A4[0], 0);
}
