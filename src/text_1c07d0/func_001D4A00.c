/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001D4A00_1;

typedef struct {
    u8 pad_00[0x114];
    unk_func_001D4A00_1 unk_114;
    u8 pad_120[1];
    u8 unk_121;
} unk_func_001D4A00_0;

s32 func_001D4A00(unk_func_001D4A00_0 *arg0, u8 arg1, unk_func_001D4A00_1 *arg2) {
    u8 mask;

    mask = 1 << (s8)arg1;
    if (arg2 != NULL) {
        *arg2 = arg0->unk_114;
    }
    return arg0->unk_121 & mask;
}
