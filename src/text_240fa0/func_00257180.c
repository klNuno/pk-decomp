/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00257180_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00257180_0;

s32 *fn_p_stEvalTree();
s32 func_002CF830(s32, s32, s32);
extern s32 D_0035F538;
extern s32 D_0035F53C;
extern s32 D_0035F540;
extern s32 D_0035F544;
extern s32 D_0035F548;

s32 *func_00257180(s32 arg0, s32 *arg1, unk_func_00257180_0 *arg2) {
    s32 sp50[4];
    s32 temp;
    s32 a;
    s32 b;
    s32 c;

    temp = arg1[-2];
    a = arg0;
    switch (temp) {
    case 0x193:
        b = D_0035F538;
        break;
    case 0x194:
        b = D_0035F53C;
        break;
    case 0x195:
        b = D_0035F544;
        break;
    case 0x196:
        b = D_0035F548;
        break;
    case 0x197:
        b = D_0035F540;
        break;
    default:
        b = -1;
        break;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, sp50);
    c = sp50[0];
    arg2->unk_00 = func_002CF830(a, b, c);
    arg2->unk_0C = 6;
    return arg1;
}
