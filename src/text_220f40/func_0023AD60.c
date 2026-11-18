/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0023AD60_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0023AD60_0;

s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_0012D940(s32);
void func_0014F6B0(s32, unk_func_0023AD60_0 *, unk_func_0023AD60_0 *, unk_func_0023AD60_0 *);
s32 func_001979C0(s32);
void func_0019A230(s32);

s32 func_0023AD60(s32 arg0, s32 arg1) {
    s32 temp[4];
    unk_func_0023AD60_0 a;
    unk_func_0023AD60_0 b;
    unk_func_0023AD60_0 c;
    s32 obj;
    s32 handle;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    obj = temp[0];
    if (obj != 0) {
        handle = func_001979C0(obj);
        a.unk_00 = 1.0f;
        a.unk_04 = 0.0f;
        a.unk_08 = 0.0f;
        b.unk_00 = 0.0f;
        b.unk_04 = 1.0f;
        b.unk_08 = 0.0f;
        c.unk_00 = 0.0f;
        c.unk_04 = 0.0f;
        c.unk_08 = 1.0f;
        func_0014F6B0(handle, &a, &b, &c);
        func_0019A230(obj);
        func_0012D940(obj);
    }
    return arg1;
}
