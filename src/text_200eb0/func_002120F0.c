/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002120F0_0;

extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_002120F0_0 *);
extern f32 func_00151360(f32);
extern f32 func_001E60E0(f32);
extern void func_001EDBB0(s32, void *);

s32 *func_002120F0(s32 arg0, s32 *arg1, unk_func_002120F0_0 *arg2)
{
    s32 temp = arg1[-2];
    unk_func_002120F0_0 *ptr = arg2;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    switch (temp) {
    case 0xCB: {
        unk_func_002120F0_0 a;
        unk_func_002120F0_0 b;
        a = *ptr;
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        b = *arg2;
        ptr->unk_00 = a.unk_04 * b.unk_08 - a.unk_08 * b.unk_04;
        ptr->unk_04 = a.unk_08 * b.unk_00 - a.unk_00 * b.unk_08;
        ptr->unk_08 = a.unk_00 * b.unk_04 - a.unk_04 * b.unk_00;
        return arg1;
    }
    case 0xCC:
        if (!((ptr->unk_00 > 0.0f ? ptr->unk_00 : -ptr->unk_00) < 1e-9f &&
              (ptr->unk_04 > 0.0f ? ptr->unk_04 : -ptr->unk_04) < 1e-9f &&
              (ptr->unk_08 > 0.0f ? ptr->unk_08 : -ptr->unk_08) < 1e-9f)) {
            f32 scale = func_001E60E0(func_00151360(ptr->unk_08) +
                                      (func_00151360(ptr->unk_00) + func_00151360(ptr->unk_04)));
            if (0.0f != scale) {
                scale = 1.0f / scale;
                ptr->unk_00 = scale * ptr->unk_00;
                ptr->unk_04 = scale * ptr->unk_04;
                ptr->unk_08 = scale * ptr->unk_08;
            } else {
                *ptr = *ptr;
            }
        }
        return arg1;
    default:
        func_001EDBB0(0x27, (void *)0);
        return arg1;
    }
}
