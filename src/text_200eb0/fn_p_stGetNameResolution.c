/* profile: o0 */
#include "common.h"

typedef struct unk_fn_p_stGetNameResolution_0 {
    void *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_fn_p_stGetNameResolution_0;

s32 fn_p_stEvalTree(s32, s32, unk_fn_p_stGetNameResolution_0 *);
void func_0011B418(char *);
extern char D_0034DFD0[];
extern u8 D_00605380[];

s32 fn_p_stGetNameResolution(s32 arg0, s32 arg1, unk_fn_p_stGetNameResolution_0 *arg2) {
    void *temp;

    arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
    temp = arg2->unk_00;
    func_0011B418(D_0034DFD0);
    arg2->unk_00 = D_00605380;
    arg2->unk_0C = 9;
    arg2->unk_00 = D_00605380;
    arg2->unk_0C = 9;
    return arg1;
}
