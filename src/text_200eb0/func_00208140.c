/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_00208140_0;

typedef struct {
    unk_func_00208140_0 *unk_00;
    u8 pad_04[0xC];
} unk_func_00208140_1;

s32 fn_h_StandardGameGetSuperObject(s32);
s32 fn_p_stEvalTree(s32, s32, unk_func_00208140_1 *);
u8 func_001A2FF0(s32);

s32 func_00208140(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_00208140_1 temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, &temp);
    if (temp.unk_00->unk_04 != 0) {
        arg0 = fn_h_StandardGameGetSuperObject(temp.unk_00->unk_04);
        *arg2 = func_001A2FF0(arg0);
    } else {
        *arg2 = 0;
    }
    return arg1;
}
