/* profile: o0 */
#include "common.h"

typedef struct unk_func_00244D60_0 {
    s32 unk_00;
    u8 pad_04[0xC];
} unk_func_00244D60_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_00244D60_0 *);
extern f32 D_003601C8;
extern s32 D_003601CC;

s32 func_00244D60(s32 arg0, s32 arg1) {
    unk_func_00244D60_0 sp10;

    arg1 = fn_p_stEvalTree(arg0, arg1, &sp10);
    D_003601CC = sp10.unk_00;
    if (D_003601CC < 0) {
        D_003601CC = 0;
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, &sp10);
    D_003601C8 = *(f32 *)&sp10.unk_00;
    return arg1;
}
