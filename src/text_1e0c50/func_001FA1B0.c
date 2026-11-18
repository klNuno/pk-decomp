/* profile: o0 */
#include "common.h"

typedef struct unk_func_001FA1B0_0 {
    u8 pad_00[0x74];
    u8 unk_74;
} unk_func_001FA1B0_0;

void func_001B4D70(unk_func_001FA1B0_0 *);

void func_001FA1B0(unk_func_001FA1B0_0 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, s32 arg5, s32 arg6, f32 arg7) {
    f32 v;

    v = 0.0f;
    if (arg5 == 1) {
        func_001B4D70(arg0);
        arg2 = arg4;
    }
    switch (arg6) {
    case -1:
        v = *arg1;
        break;
    case 0:
        if (arg0->unk_74 & 1) {
            v = *arg4 + arg7;
        } else {
            v = *arg2 + arg7;
        }
        break;
    case 1:
        v = arg7;
        break;
    }
    *arg2 = v;
    if (arg5 != 1) {
        *arg3 = v;
        *arg4 = v;
    }
}
