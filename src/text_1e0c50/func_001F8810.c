/* profile: o0 */
#include "common.h"

typedef struct unk_func_001F8810_0 {
    u8 pad_00[0x74];
    u8 unk_74;
    u8 unk_75;
} unk_func_001F8810_0;

f32 func_001F8810(unk_func_001F8810_0 *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, s32 arg5) {
    f32 r = 0.0f;

    if (arg5 == 1) {
        if (arg0->unk_74 & 1) {
            r = *arg3;
        } else {
            r = *arg2;
        }
    } else if (arg5 == -1) {
        r = *arg1;
    } else if (arg0->unk_75 & 2) {
        r = *arg4;
    } else {
        r = *arg2;
    }
    return r;
}
