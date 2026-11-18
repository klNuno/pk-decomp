/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00210270_0;

s32 *fn_p_stEvalTree();
void func_001EDBB0();
s32 func_001EF1F0();

s32 *func_00210270(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 temp;
    unk_func_00210270_0 sp30;
    s32 temp2;

    temp = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    sp30 = *(unk_func_00210270_0 *)arg2;
    switch (temp) {
    case 0x9A:
        temp2 = func_001EF1F0(&sp30);
        arg2[0] = temp2;
        arg2[3] = 0x2D;
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
