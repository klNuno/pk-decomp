/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    u8 unk_10;
} unk_func_00226A30_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00226A30_1;

u8 *HIE_fn_hGetSuperObjectObject();
unk_func_00226A30_0 *fn_p_stBrainGetMind();
s32 fn_p_stEvalTree();
void func_00226760(s32, s32, u8);

s32 func_00226A30(s32 arg0, s32 arg1) {
    unk_func_00226A30_0 *mind;
    unk_func_00226A30_1 val;

    mind = fn_p_stBrainGetMind(*(s32 *)(HIE_fn_hGetSuperObjectObject(arg0) + 0xC));
    arg1 = fn_p_stEvalTree(arg0, arg1, &val);
    func_00226760(mind->unk_08, val.unk_00, mind->unk_10);
    return arg1;
}
