/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x5C];
    s32 *unk_5C;
    s32 unk_60;
} unk_func_001ABCE0_0;

s32 func_001ABCE0(unk_func_001ABCE0_0 *arg0, s32 arg1) {
    s32 *p;
    s32 i;
    s32 n;

    p = arg0->unk_5C;
    n = arg0->unk_60;
    for (i = 0; p != NULL && i < n; p++, i++) {
        if (*p == arg1) {
            return 1;
        }
    }
    return 0;
}
