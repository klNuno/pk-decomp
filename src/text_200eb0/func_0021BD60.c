/* profile: o0 */
#include "common.h"

typedef struct unk_func_0021BD60_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_0021BD60_0;

u8 *fn_p_stEvalTree(s32, u8 *, unk_func_0021BD60_0 *);

u8 *func_0021BD60(s32 arg0, u8 *arg1, unk_func_0021BD60_0 *arg2) {
    f32 x;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    x = (arg2->unk_0C == 8) ? *(f32 *)&arg2->unk_00 : (f32)arg2->unk_00;
    *(f32 *)&arg2->unk_00 = (x > 0.0f) ? x : -x;
    arg2->unk_0C = 8;
    return arg1;
}
