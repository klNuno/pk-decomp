/* profile: o0 */
#include "common.h"

typedef struct unk_fn_p_fn_pGetDsgVarGetFunctionPtr_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_fn_p_fn_pGetDsgVarGetFunctionPtr_0;

extern unk_fn_p_fn_pGetDsgVarGetFunctionPtr_0 D_00336EF0[];

s32 fn_p_fn_pGetDsgVarGetFunctionPtr(s32 arg0) {
    return D_00336EF0[arg0].unk_04;
}
