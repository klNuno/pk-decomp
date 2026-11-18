/* profile: o0_301 */
#include "common.h"

extern s32 D_0035F544;

s32 fn_p_stEvalTree(s32, s32, s32 *);
s32 func_002CF380(s32);
void func_001A94B0(s32, s32);
s32 func_001A94F0(s32);
void func_002CFB70(s32, s32, s32, s32, s32, s32, s32);
void func_001EDBB0(s32, s32);

s32 func_00257030(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5[1];

    temp2 = ((s32 *)arg1)[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    temp3 = temp[0];
    switch (temp2) {
    case 0x30C:
        temp4 = func_002CF380(D_0035F544);
        func_001A94B0(temp4, temp3);
        break;
    case 0x30D:
        temp5[0] = func_001A94F0(temp3);
        func_002CFB70(-3, -1, -1, D_0035F544, temp5[0], 0, 0);
        break;
    default:
        func_001EDBB0(0x28, 0);
        break;
    }
    return arg1;
}
