/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00205FA0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00205FA0_0;

s32 func_001BE4C0(s32);
s32 func_0012C650(unk_func_00205FA0_0 *, unk_func_00205FA0_0 *, s32);
s32 func_001B0C10(s32);
s32 func_001B0BE0(s32);
s32 func_001B0BC0(s32);
s32 func_001B0BA0(s32);

s32 func_00205FA0(s32 arg0, unk_func_00205FA0_0 *arg1, s32 arg2, unk_func_00205FA0_0 *arg3) {
    unk_func_00205FA0_0 sp80;
    s32 it;
    s32 cur;
    s32 n;
    s32 t2;
    s32 b;
    s32 a;
    s32 t1;

    a = func_001BE4C0(arg0);
    if (a == 0) {
        return 0;
    }
    b = func_001BE4C0(arg2);
    if (b == 0) {
        return 0;
    }
    sp80.unk_00 = arg3->unk_00 - arg1->unk_00;
    sp80.unk_04 = arg3->unk_04 - arg1->unk_04;
    sp80.unk_08 = arg3->unk_08 - arg1->unk_08;
    if (func_0012C650(arg1, &sp80, a)) {
        return 1;
    }
    if (a != b) {
        if (func_0012C650(arg1, &sp80, b)) {
            return 1;
        }
    }
    n = func_001B0C10(a);
    t1 = it = func_001B0BE0(a);
    while (n > 0) {
        cur = func_001B0BC0(it);
        if (cur != b) {
            if (func_0012C650(arg1, &sp80, cur)) {
                return 1;
            }
        }
        n--;
        t2 = it = func_001B0BA0(it);
        (void)t2;
    }
    return 0;
}
