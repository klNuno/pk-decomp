/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s16 *unk_0C;
    s32 *unk_10;
    u8 pad_14[0xE];
    s16 unk_22;
} unk_func_001C8720_0;

s32 func_001C8720(unk_func_001C8720_0 *arg0) {
    s16 i;

    for (i = 0; i < arg0->unk_22; i++) {
        if (arg0->unk_0C[i] == 13) {
            return arg0->unk_10[i];
        }
    }
    return 0;
}
