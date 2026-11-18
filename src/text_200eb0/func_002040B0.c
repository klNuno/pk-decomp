/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[0x2];
} unk_func_002040B0_0;

unk_func_002040B0_0 *fn_p_stEvalTree(s32, unk_func_002040B0_0 *, s32 *);
unk_func_002040B0_0 *func_001EB720(unk_func_002040B0_0 *);

unk_func_002040B0_0 *func_002040B0(s32 arg0, unk_func_002040B0_0 *arg1, s32 *arg2) {
    unk_func_002040B0_0 *node0;
    unk_func_002040B0_0 *node1;
    s32 op;
    s32 prev;
    s32 param[4];

    op = arg1[-1].unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    *arg2 = param[0];
    switch (op) {
    case 0:
        if (*arg2 == 0) {
            if (arg1->unk_04) {
                arg1 += arg1->unk_04;
            } else {
                node0 = arg1;
                arg1 = func_001EB720(arg1);
                node0->unk_04 = arg1 - node0;
            }
        } else {
            arg1 = fn_p_stEvalTree(arg0, arg1, param);
            *arg2 = param[0];
        }
        return arg1;
    case 1:
        if (*arg2 != 0) {
            if (arg1->unk_04) {
                arg1 += arg1->unk_04;
            } else {
                node1 = arg1;
                arg1 = func_001EB720(arg1);
                node1->unk_04 = arg1 - node1;
            }
        } else {
            arg1 = fn_p_stEvalTree(arg0, arg1, param);
            *arg2 = param[0];
        }
        return arg1;
    case 2:
        *arg2 = (*arg2 == 0) ? 1 : 0;
        return arg1;
    case 3:
        prev = *arg2;
        arg1 = fn_p_stEvalTree(arg0, arg1, param);
        *arg2 = (prev ^ *arg2) ? 1 : 0;
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
