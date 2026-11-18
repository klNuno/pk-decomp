/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_fn_p_stWhileKeyWord_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_fn_p_stWhileKeyWord_1;

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stWhileKeyWord_2;

s32 fn_p_stEvalTree(s32, s32, unk_fn_p_stWhileKeyWord_0 *);
s32 func_00220C40(s32);
extern s32 D_00360188;
extern unk_fn_p_stWhileKeyWord_0 D_00605400;
extern unk_fn_p_stWhileKeyWord_1 D_00605410[];

s32 fn_p_stWhileKeyWord(s32 arg0, s32 arg1, unk_fn_p_stWhileKeyWord_2 *arg2) {
    s32 node;
    unk_fn_p_stWhileKeyWord_1 *e;
    unk_fn_p_stWhileKeyWord_0 res;

    node = arg1 - 8;
    res = D_00605400;
    e = &D_00605410[D_00360188];
    e->unk_04 = node;
    e->unk_08 = arg1;
    arg1 = fn_p_stEvalTree(arg0, arg1, &res);
    if (res.unk_00 == 0) {
        return func_00220C40(node);
    }
    e->unk_00 = arg1;
    D_00360188++;
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x14;
    return arg1;
}
