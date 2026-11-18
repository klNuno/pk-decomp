#include "common.h"

typedef struct unk_func_001E5CA0_0 {
    u8 pad_00[0xC];
    u8 unk_0C[0xC];
    struct unk_func_001E5CA0_0 **unk_18;
    s32 unk_1C;
} unk_func_001E5CA0_0;

s32 func_001E2850(s32, s32, unk_func_001E5CA0_0 *, u8 *, f32 *);
extern s16 D_00360110;
extern s16 D_00360114;

void func_001E5CA0(unk_func_001E5CA0_0 *arg0, s32 arg1, s32 arg2, unk_func_001E5CA0_0 **arg3, f32 *arg4, s16 *arg5) {
    f32 sp7C;
    s16 i;
    f32 d;

    D_00360114++;
    if (func_001E2850(arg1, arg2, arg0, arg0->unk_0C, &sp7C) != 0) {
        if (arg0->unk_18 != NULL) {
            func_001E5CA0(arg0->unk_18[0], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[1], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[2], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[3], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[4], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[5], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[6], arg1, arg2, arg3, arg4, arg5);
            func_001E5CA0(arg0->unk_18[7], arg1, arg2, arg3, arg4, arg5);
        } else if (arg0->unk_1C != 0) {
            d = sp7C;
            for (i = *arg5; i > 0 && d < arg4[i - 1]; i--) {
                if (i < 100) {
                    arg3[i] = arg3[i - 1];
                    arg4[i] = arg4[i - 1];
                }
            }
            if (i < 100) {
                arg3[i] = arg0;
                arg4[i] = d;
                if (*arg5 < 100) {
                    (*arg5)++;
                }
            }
            D_00360110 = D_00360114;
        }
    }
    D_00360114--;
}
