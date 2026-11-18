/* profile: o0_301_p */
#include "common.h"

s32 func_001F09A0(s32);
void *func_001F09C0(s32, s32, s32 *);
void func_001F0DC0(void *, f32 *);
f32 func_00151360(f32);
f32 func_001E60E0(f32);

f32 func_001EF000(s32 arg0, f32 *arg1) {
    s64 n;
    void *p;
    s64 i;
    f32 v[3];
    s32 sp64;
    f32 min;
    f32 d;

    n = func_001F09A0(arg0);
    p = func_001F09C0(arg0, 0, &sp64);
    func_001F0DC0(p, v);
    v[0] = v[0] - arg1[0];
    v[1] -= arg1[1];
    v[2] -= arg1[2];
    min = func_001E60E0(func_00151360(v[0]) + func_00151360(v[1]) + func_00151360(v[2]));
    for (i = 1; i < n; i++) {
        p = func_001F09C0(arg0, i, &sp64);
        func_001F0DC0(p, v);
        v[0] = v[0] - arg1[0];
        v[1] -= arg1[1];
        v[2] -= arg1[2];
        d = func_001E60E0(func_00151360(v[0]) + func_00151360(v[1]) + func_00151360(v[2]));
        if (d < min) {
            min = d;
        }
    }
    return min;
}
