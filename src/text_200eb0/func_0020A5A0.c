/* profile: o0_301 */
#include "common.h"

typedef union {
    f32 unk_00;
    s32 unk_00_s;
} unk_func_0020A5A0_0;

typedef struct {
    unk_func_0020A5A0_0 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_0020A5A0_1;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_0020A5A0_2;

typedef union {
    unk_func_0020A5A0_2 unk_00;
    s32 unk_00_s[3];
} unk_func_0020A5A0_3;

extern s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0020A5A0_1 *);
extern f32 func_00151360(f32);
extern s32 func_0019D550(f32);
extern f32 func_001E60E0(f32);

s32 *func_0020A5A0(s32 arg0, s32 *arg1, unk_func_0020A5A0_1 *arg2)
{
    s32 scale;
    s32 op = arg1[-2];
    unk_func_0020A5A0_3 vec;
    f32 b;
    f32 a;
    f32 x;
    f32 z;
    f32 length;

    switch (op) {
    case 0x49:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        a = -(arg2->unk_0C == 8 ? arg2->unk_00.unk_00 : (f32)arg2->unk_00.unk_00_s);
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        b = -(arg2->unk_0C == 8 ? arg2->unk_00.unk_00 : (f32)arg2->unk_00.unk_00_s);
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        scale = arg2->unk_0C == 8 ? func_0019D550(arg2->unk_00.unk_00) : arg2->unk_00.unk_00_s;

        x = (f32)scale * (b / 100.0f);
        z = (f32)scale * (a / 100.0f);
        vec.unk_00.unk_08 = vec.unk_00.unk_04 = vec.unk_00.unk_00 = 0.0f;
        vec.unk_00.unk_00 = x;
        vec.unk_00.unk_08 = z;
        length = func_001E60E0(func_00151360(vec.unk_00.unk_08) +
                              (func_00151360(vec.unk_00.unk_00) + func_00151360(vec.unk_00.unk_04)));
        if (0.0f != length) {
            length = 1.0f / length;
            vec.unk_00.unk_00 = length * vec.unk_00.unk_00;
            vec.unk_00.unk_04 = length * vec.unk_00.unk_04;
            vec.unk_00.unk_08 = length * vec.unk_00.unk_08;
        } else {
            vec.unk_00 = vec.unk_00;
        }

        vec.unk_00.unk_00 = (f32)scale * vec.unk_00.unk_00;
        vec.unk_00.unk_04 = (f32)scale * vec.unk_00.unk_04;
        vec.unk_00.unk_08 = (f32)scale * vec.unk_00.unk_08;
        arg2->unk_00.unk_00_s = (*(s32 (*)[3])&vec)[0];
        arg2->unk_04 = (*(s32 (*)[3])&vec)[1];
        arg2->unk_08 = (*(s32 (*)[3])&vec)[2];
        arg2->unk_0C = 0x15;
        return arg1;
    default:
        return arg1;
    }
}
