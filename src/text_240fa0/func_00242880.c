/* profile: o0_301 */
#include "common.h"

s32 *fn_p_stEvalTree(s32, s32 *, s32 *);
void fn_vSetUnusedTextures(s32);

s32 *func_00242880(s32 arg0, s32 *arg1) {
    s32 value[4];
    s32 type;
    s32 temp;

    type = arg1[-2];
    arg1 = fn_p_stEvalTree(arg0, arg1, value);
    switch (type) {
    case 0x310:
        temp = value[0];
        fn_vSetUnusedTextures(temp);
        break;
    }
    return arg1;
}
