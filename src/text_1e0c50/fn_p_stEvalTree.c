/* profile: o0 */
#include "common.h"

extern s32 *(*D_00333FB0[])(s32, u8 *, s32 *);

s32 *fn_p_stEvalTree(s32 arg0, u8 *arg1, s32 *arg2) {
    return D_00333FB0[arg1[7]](arg0, arg1, arg2);
}
