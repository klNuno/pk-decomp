/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x38];
    s8 unk_38;
    s8 unk_39;
    s8 unk_3A;
    u8 pad_3B;
    f32 unk_3C;
} unk_func_001BA7B0_0;

void func_001BA7B0(unk_func_001BA7B0_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 != NULL) {
        arg0->unk_38 = arg1;
        arg0->unk_39 = arg2;
        arg0->unk_3A = arg3;
        arg0->unk_3C = (u8)arg4;
    }
}
