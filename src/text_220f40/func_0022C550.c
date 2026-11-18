/* profile: o0_301 */
#include "common.h"

typedef struct {
    union {
        s32 unk_00;
        f32 unk_00f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0022C550_0;

extern s32 *fn_p_stEvalTree(s32 arg0, s32 *arg1, unk_func_0022C550_0 *arg2);
extern void func_001AAF30(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_001AB2D0(s32, s32, f32);

s32 *func_0022C550(s32 arg0, s32 *arg1)
{
    unk_func_0022C550_0 temp;
    s32 temp0, temp1, temp2, temp3, temp4, temp5, temp6;
    f32 temp7;

    temp6 = arg1[-2];
    temp3 = 0;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    temp2 = temp.unk_00.unk_00;

    switch (temp6) {
    case 0x15D:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp0 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp1 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp4 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp5 = temp.unk_00.unk_00;
        func_001AAF30(0, temp2, 2, 0, 0, temp0, temp1, temp4, temp5, 0, 0);
        break;
    case 0x15C:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp0 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp1 = temp.unk_00.unk_00;
        if (temp0 < 0) {
            temp0 = 0;
        }
        if (temp0 > 100) {
            temp0 = 100;
        }
        if (temp1 < 0) {
            temp1 = 0;
        }
        if (temp1 > 100) {
            temp1 = 100;
        }
        func_001AAF30(0, temp2, 1, temp0, temp1, 0, 0, 0, 0, 0, 0);
        break;
    case 0x15F:
        temp3 = 1;
        /* fall through */
    case 0x15E:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp0 = temp.unk_00.unk_00;
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        temp1 = temp.unk_00.unk_00;
        func_001AAF30(0, temp2, temp3 + 3, 0, 0, 0, 0, 0, 0, temp0, temp1);
        break;
    case 0x160:
        arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
        if (temp.unk_0C == 8) {
            temp7 = temp.unk_00.unk_00f;
        } else {
            temp7 = (f32)temp.unk_00.unk_00;
        }
        func_001AB2D0(0, temp2, temp7);
        break;
    }
    return arg1;
}
