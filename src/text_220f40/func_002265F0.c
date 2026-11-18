/* profile: o0_301 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s32 *);
void func_0015B9F0(s32);
void func_0015BA10(s32);

s32 func_002265F0(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 type = ((s32 *)arg1)[-2];
    s32 v;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    v = temp[0];
    switch (type) {
    case 0x44:
        func_0015B9F0(v);
        break;
    case 0x45:
        func_0015BA10(v);
        break;
    }
    return arg1;
}
