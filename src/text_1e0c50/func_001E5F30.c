#include "common.h"

typedef struct unk_func_001E5F30_0 {
    u8 pad_00[0xC];
    u8 unk_0C[0xC];
    struct unk_func_001E5F30_0 **unk_18;
    s32 unk_1C;
} unk_func_001E5F30_0;

s32 func_001E3870(s32, s32, unk_func_001E5F30_0 *, u8 *);
extern s16 D_00360110;
extern s16 D_00360114;

void func_001E5F30(unk_func_001E5F30_0 *arg0, s32 arg1, s32 arg2, unk_func_001E5F30_0 **arg3, s16 *arg4) {
    D_00360114++;
    if (func_001E3870(arg1, arg2, arg0, arg0->unk_0C) != 0) {
        if (arg0->unk_18 != NULL) {
            func_001E5F30(arg0->unk_18[0], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[1], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[2], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[3], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[4], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[5], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[6], arg1, arg2, arg3, arg4);
            func_001E5F30(arg0->unk_18[7], arg1, arg2, arg3, arg4);
        } else if (arg0->unk_1C != 0 && *arg4 < 100) {
            arg3[*arg4] = arg0;
            (*arg4)++;
            D_00360110 = D_00360114;
        }
    }
    D_00360114--;
}
