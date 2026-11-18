/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00241690_0;

typedef struct {
    unk_func_00241690_0 unk_00;
    u8 pad_0C[4];
} unk_func_00241690_1;

typedef struct {
    f32 unk_00;
} unk_func_00241690_2;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00241690_1 *);

s32 *func_00241690(s32 arg0, s32 *arg1) {
    unk_func_00241690_1 res;
    unk_func_00241690_0 a;
    unk_func_00241690_0 b;
    unk_func_00241690_2 c;
    s32 id;

    id = arg1[-2];
    switch (id) {
    case 0x2B3:
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        a = res.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        b = res.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &res);
        c = *(unk_func_00241690_2 *)&res;
        return arg1;
    }
    return arg1;
}
