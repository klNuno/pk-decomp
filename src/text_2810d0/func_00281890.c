/* profile: o0_p */
#include "common.h"

void func_00280350(s32, f32);
s32 func_00281990();
s32 func_0027E960();
extern s32 D_007B00A4[];

s32 func_00281890(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s64 arg6) {
    s32 i;

    if (arg6 == 0) {
        for (i = 0; i < 50; i++) {
            func_00280350(D_007B00A4[0], 400.0f);
            if (func_00281990() == 0) {
                return 0;
            }
        }
    }
    if (func_00281990() != 0) {
        if (func_0027E960(arg0, arg1, arg2, arg3, arg4, arg5) == 1) {
            return 1;
        }
        return 0;
    }
    return 0;
}
