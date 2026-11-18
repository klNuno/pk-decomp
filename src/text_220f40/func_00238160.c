/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00238160_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00238160_0;

typedef struct unk_func_00238160_1 {
    unk_func_00238160_0 unk_00;
    u8 pad_0C[4];
    s32 unk_10;
} unk_func_00238160_1;

s32 *fn_p_stEvalTree(...);
void func_00154B00(...);
void func_001559E0(...);
s32 func_001979C0(...);
void func_001F0D00(...);
s32 func_001F0D90(...);

s32 *func_00238160(s32 arg0, s32 *arg1) {
    unk_func_00238160_1 *a;
    s32 b;
    s32 c;
    unk_func_00238160_1 *sp40[4];
    unk_func_00238160_0 sp50[1];

    arg1 = fn_p_stEvalTree(arg0, arg1, sp40);
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    a = sp40[0];
    {
        unk_func_00238160_0 v = sp50[0];
        if (func_001F0D90(a)) {
            c = arg1[-2];
            switch (c) {
            case 0x1BC:
                func_001F0D00(a, &v);
                break;
            case 0x1BB:
                b = func_001979C0(a->unk_10);
                func_00154B00(b, b);
                func_001559E0(&v, b, &v);
                a->unk_00 = v;
                break;
            }
        } else {
            func_001F0D00(a, &v);
        }
    }
    return arg1;
}
