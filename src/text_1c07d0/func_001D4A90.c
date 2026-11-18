/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D4A90_1;

typedef struct {
    u8 pad_00[0x114];
    unk_func_001D4A90_1 unk_114;
    u8 pad_120;
    u8 unk_121;
} unk_func_001D4A90_0;

void func_001D4A90(unk_func_001D4A90_0 *arg0, u8 arg1, s32 arg2, unk_func_001D4A90_1 *arg3) {
    u8 mask;

    mask = (u8)(1 << (s8)arg1);
    if (arg2 != 0) {
        arg0->unk_121 |= mask;
    } else {
        arg0->unk_121 &= (u8)~(s8)mask;
    }
    if (arg3 != NULL) {
        arg0->unk_114 = *arg3;
    }
}
