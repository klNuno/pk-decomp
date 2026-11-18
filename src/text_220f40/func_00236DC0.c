/* profile: o0_301 */
#include "common.h"

typedef union unk_func_00236DC0_0 {
    s32 unk_00;
    f32 f;
    u8 b;
    u8 pad_00[0x10];
} unk_func_00236DC0_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00236DC0_0 *);
void func_00165700(s32, f32, f32);
void func_00165780(s32, f32 *);
void func_001657C0();

s32 *func_00236DC0(s32 arg0, s32 *arg1) {
    s32 obj;
    s32 id;
    u8 b;
    unk_func_00236DC0_0 temp;
    f32 v[4];
    f32 x;
    f32 y;

    id = arg1[-2];
    obj = 0;
    if (id != 0x1B5 && id != 0x1B6) {
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        obj = temp.unk_00;
    }
    switch (id) {
    case 0x1B2:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        b = temp.b;
        func_001657C0(obj, b);
        return arg1;
    case 0x1B3:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        x = temp.f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        y = temp.f;
        func_00165700(obj, x, y);
        return arg1;
    case 0x1B4:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        v[0] = temp.f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        v[1] = temp.f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        v[2] = temp.f;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        v[3] = temp.f;
        func_00165780(obj, v);
        return arg1;
    case 0x1B5:
        return arg1;
    case 0x1B6:
        return arg1;
    default:
        return arg1;
    }
}
