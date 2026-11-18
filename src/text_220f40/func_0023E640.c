/* profile: o0 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, s32 *);
extern u32 D_005AB7F0[];

s32 func_0023E640(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 bit;
    u32 mask;
    s32 mode;

    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    bit = temp[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, temp);
    mode = temp[0];
    if (bit >= 0 && bit < 0x20) {
        mask = 1 << bit;
        if (mode == 2) {
            mode = (D_005AB7F0[0] & mask) ? 0 : 1;
        }
        switch (mode) {
        case 0:
            D_005AB7F0[0] &= ~mask;
            break;
        case 1:
            D_005AB7F0[0] |= mask;
            break;
        }
    }
    return arg1;
}
